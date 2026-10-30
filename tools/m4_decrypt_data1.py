#!/usr/bin/env python3
"""M4: offline decryption of OPTC 16.2.1 data1.dat with a captured runtime key.

Reproduces the game's sigInstall (0x39dea94) semantics offline
(notes/m3d-cache-decoder.md section 4):

  key record = { u32 id@+0, sig[0x24]@+4, u32 payload_len@+0x28,
                 u32 crc32@+0x2c, u32 @+0x30, ENCRYPTED NTY PAYLOAD@+0x34 }
  1. key  = record.sig[0:32]            (the 36-byte signature IS the key)
  2. RC4-255 decrypt of the payload     (KSA seeded by table T1@0x14f7375,
                                         keystream period 255 — M3c-verified)
  3. crc32 verify against record.crc32
  4. the result is a plaintext NTY      ('MM\\x00\\x2a' magic)

Inputs:
  --key       32-byte key as hex (from tools/m4_frida_run.py output)
  --keydump   optc_dump/keydump.json — auto-selects the best captured key
  --t1        T1 table (256 B) as file (optc_dump/T1.bin) or hex
  --data1     the encrypted file (default: data1.dat)

The T1 table is the custom RC4 KSA seed permutation living at image offset
0x14f7375; the Frida dumper saves it as T1.bin. (It is also at merged.bin
offset 0x14f7375 in the regenerated workspace.)

Sweep mode (--sweep) additionally tries every statically-derivable key
candidate (the embedded record signature itself, head windows) against the
payload offsets {0x34, 4, 0} with the corrected 'MM' oracle — this covers
the "self-keyed record" hypothesis that the M3d matrix never tested.

After decryption, feed the output to the existing parse harness:
  python3 tools/m3d_emu_nty_full.py data1.dec.nty
"""
import argparse
import binascii
import json
import os
import struct
import sys
import zlib

REC_OFF = 0x34          # encrypted payload start inside the key record
VALID_KEYLEN = (4, 8, 16, 24, 32)


# ---------------- the sinatra RC4-255 core (M3c/M3d-verified) ----------------
def ksa(T1, key):
    """Custom-seeded KSA: S starts as the T1 permutation, not the identity."""
    S = bytearray(T1)
    j = 0
    for i in range(256):
        j = (j + S[i] + key[i % len(key)]) & 0xFF
        S[i], S[j] = S[j], S[i]
    return S


def prga255(S_pristine, data):
    """PRGA with the i==0xFF sentinel checked every iteration: the state
    reloads from the pristine S every 255 bytes (keystream period 255)."""
    out = bytearray()
    S = bytearray(S_pristine)
    i = j = 0
    for b in data:
        if i == 0xFF:
            S = bytearray(S_pristine)
            i = j = 0
        i = (i + 1) & 0xFF
        j = (j + S[i]) & 0xFF
        S[i], S[j] = S[j], S[i]
        out.append(S[(S[i] + S[j]) & 0xFF] ^ b)
    return bytes(out)


def rc4_255(T1, key, data):
    return prga255(ksa(T1, key), data)


# ---------------- record / NTY parsing ----------------
def parse_record(buf):
    """Parse the 0x34-byte key record at the head of buf (both endians)."""
    if len(buf) < REC_OFF:
        return None
    rec = {
        "id": struct.unpack_from("<I", buf, 0)[0],
        "id_be": struct.unpack_from(">I", buf, 0)[0],
        "sig36": buf[4:40],
        "key32": buf[4:36],
        "len_le": struct.unpack_from("<I", buf, 0x28)[0],
        "len_be": struct.unpack_from(">I", buf, 0x28)[0],
        "crc32_le": struct.unpack_from("<I", buf, 0x2c)[0],
        "crc32_be": struct.unpack_from(">I", buf, 0x2c)[0],
        "f30": struct.unpack_from("<I", buf, 0x30)[0],
    }
    return rec


def nty_header(pt):
    """Parse the plaintext NTY header (BE fields, M3d emulation ground truth)."""
    if len(pt) < 12:
        return None
    magic, sub = struct.unpack_from(">HH", pt, 0)
    data_end, = struct.unpack_from(">I", pt, 4)
    count, = struct.unpack_from(">H", pt, 8)
    return {"magic": f"{magic:04x}", "sub": f"{sub:04x}", "data_end": data_end, "count": count}


def oracle(pt):
    """The CORRECTED oracle (the M3c one wrongly rejected the true 'MM' magic)."""
    if len(pt) < 12:
        return False
    return pt[0:4] == b"MM\x00\x2a" and 0 < struct.unpack_from(">H", pt, 8)[0] <= 0x100


# ---------------- key sources ----------------
def keys_from_keydump(path):
    """Extract candidate keys from a m4_frida_run.py keydump.json."""
    d = json.load(open(path))
    out = []
    for ev in d.get("keys", []):
        kh = ev.get("key_hex")
        if not kh:
            continue
        try:
            kb = bytes.fromhex(kh)
        except ValueError:
            continue
        out.append({
            "key": kb,
            "source": f"keydump:{ev.get('pc')} mode={ev.get('mode')} "
                      f"keylen={ev.get('keylen')} ({ev.get('classification')})",
            "prio": 0 if "DATA1" in (ev.get("classification") or "") else 1,
        })
    for ev in d.get("sig_records", []):
        f = ev.get("fields") or {}
        kh = f.get("key32_hex")
        if kh:
            out.append({"key": bytes.fromhex(kh), "source": "keydump:sigInstall record", "prio": 0})
        rh = ev.get("record_hex")
        if rh:
            rb = bytes.fromhex(rh)
            if len(rb) >= 36:
                out.append({"key": rb[4:36], "source": "keydump:sigInstall sig[0:32]", "prio": 0})
    # dedup
    seen, uniq = set(), []
    for c in sorted(out, key=lambda c: c["prio"]):
        h = c["key"].hex()
        if h not in seen:
            seen.add(h)
            uniq.append(c)
    return uniq


def embedded_candidates(data1):
    """Statically-derivable key candidates from the file itself (untested by
    the M3d matrix): the record fields if data1.dat embeds its own record."""
    cands = []
    if len(data1) >= 0x34:
        cands.append({"key": data1[4:36], "source": "embedded record sig[0:32] (data1[4:36])", "prio": 2})
        cands.append({"key": data1[4:40], "source": "embedded sig36 as 36-byte key", "prio": 3})
    cands.append({"key": data1[0:32], "source": "head[0:32]", "prio": 3})
    cands.append({"key": data1[0:4], "source": "head id as 4-byte key", "prio": 3})
    return cands


# ---------------- main ----------------
def try_decrypt(T1, key, data1, payload_off, label):
    payload = data1[payload_off:]
    pt = rc4_255(T1, key, payload)
    ok_mm = oracle(pt)
    crc_pt = zlib.crc32(pt) & 0xFFFFFFFF
    crc_ct = zlib.crc32(payload) & 0xFFFFFFFF
    rec = parse_record(data1)
    rec_crcs = (rec["crc32_le"], rec["crc32_be"]) if rec else (None, None)
    return {
        "label": label,
        "key_hex": key.hex(),
        "payload_off": payload_off,
        "pt_len": len(pt),
        "mm_ok": ok_mm,
        "crc32_pt": f"{crc_pt:08x}",
        "crc32_ct": f"{crc_ct:08x}",
        "crc_match": bool(rec and (crc_pt in rec_crcs or crc_ct in rec_crcs)),
        "crc_match_semantics": ("plaintext" if rec and crc_pt in rec_crcs else
                                "ciphertext" if rec and crc_ct in rec_crcs else None),
        "head_hex": pt[:16].hex(),
        "pt": pt if ok_mm else None,
    }


def main():
    ap = argparse.ArgumentParser(description="OPTC M4 — offline data1.dat decryptor")
    ap.add_argument("--data1", default="data1.dat", help="encrypted NTY (default data1.dat)")
    ap.add_argument("--key", default=None, help="32-byte key as hex")
    ap.add_argument("--keydump", default=None, help="optc_dump/keydump.json from the Frida runner")
    ap.add_argument("--t1", default=None, help="T1 table: file path (T1.bin) or 512-hex-chars")
    ap.add_argument("--out", default=None, help="output plaintext NTY (default <data1>.dec.nty)")
    ap.add_argument("--payload-off", type=lambda x: int(x, 0), default=REC_OFF,
                    help="payload start offset (default 0x34)")
    ap.add_argument("--sweep", action="store_true",
                    help="also try embedded/static key candidates x offsets {0x34,4,0}")
    ap.add_argument("--report", default=None, help="write a JSON report")
    args = ap.parse_args()

    data1 = open(args.data1, "rb").read()
    print(f"[*] {args.data1}: {len(data1)} B  head={data1[:16].hex()}")

    rec = parse_record(data1)
    if rec:
        print(f"[*] head-as-record: id={rec['id']:#x} key32={rec['key32'].hex()}")
        print(f"    len le/be = {rec['len_le']} / {rec['len_be']}   "
              f"crc32 le/be = {rec['crc32_le']:#010x} / {rec['crc32_be']:#010x}")
        for name, ln in (("LE", rec["len_le"]), ("BE", rec["len_be"])):
            if ln == len(data1) - REC_OFF:
                print(f"    -> payload_len ({name}) matches file size - 0x34 exactly")
    else:
        print("[!] file shorter than a record header")

    # ---- T1 table ----
    T1 = None
    if args.t1:
        if os.path.isfile(args.t1):
            T1 = open(args.t1, "rb").read()
        else:
            T1 = bytes.fromhex(args.t1.strip())
    else:
        env_candidates = ["optc_dump/T1.bin", "T1.bin"]
        for p in env_candidates:
            if os.path.isfile(p):
                T1 = open(p, "rb").read()
                print(f"[*] using T1 from {p}")
                break
    if T1 is None or len(T1) != 256:
        sys.exit("[!] T1 table missing: pass --t1 T1.bin (dumped by m4_frida_run.py, "
                 "or merged.bin[0x14f7375:0x14f7475])")
    if len(set(T1)) != 256:
        print(f"[!] warning: T1 is not a permutation ({len(set(T1))} distinct bytes)")

    # ---- key candidates ----
    cands = []
    if args.key:
        cands.append({"key": bytes.fromhex(args.key), "source": "--key", "prio": 0})
    if args.keydump:
        cands += keys_from_keydump(args.keydump)
    if not cands and not args.sweep:
        # no explicit key: try the embedded record signature (free)
        cands += embedded_candidates(data1)
    if args.sweep:
        cands += embedded_candidates(data1)

    if not cands:
        sys.exit("[!] no key candidates (pass --key, --keydump, or --sweep)")

    seen = set()
    uniq = []
    for c in sorted(cands, key=lambda c: c["prio"]):
        if c["key"].hex() not in seen and c["key"]:
            seen.add(c["key"].hex())
            uniq.append(c)

    offsets = [args.payload_off] + ([4, 0] if args.sweep else [])
    offsets = sorted(set(o for o in offsets if 0 <= o < len(data1)))

    results, winner = [], None
    print(f"[*] {len(uniq)} key candidate(s) x {len(offsets)} offset(s): "
          f"{[hex(o) for o in offsets]}")
    for c in uniq:
        for off in offsets:
            r = try_decrypt(T1, c["key"], data1, off, c["source"])
            results.append(r)
            mark = "*** MM HIT ***" if r["mm_ok"] else ""
            print(f"    {r['label'][:58]:58s} off={off:#04x} -> "
                  f"head={r['head_hex']} {mark}")
            if r["mm_ok"] and winner is None:
                winner = r

    report = {
        "file": args.data1, "size": len(data1),
        "record": {k: (v.hex() if isinstance(v, bytes) else v) for k, v in rec.items()} if rec else None,
        "t1_sha256": __import__("hashlib").sha256(T1).hexdigest(),
        "results": [{k: v for k, v in r.items() if k != "pt"} for r in results],
    }

    if winner:
        pt = winner["pt"]
        out = args.out or (os.path.splitext(args.data1)[0] + ".dec.nty")
        open(out, "wb").write(pt)
        hdr = nty_header(pt)
        print("\n===== DECRYPTED =====")
        print(f"  key        = {winner['key_hex']}")
        print(f"  source     = {winner['label']}")
        print(f"  payload    = offset {winner['payload_off']:#x}, {winner['pt_len']} B")
        print(f"  crc32(pt)  = {winner['crc32_pt']} (record match: {winner['crc_match']}"
              f"{' via ' + winner['crc_match_semantics'] if winner.get('crc_match_semantics') else ''})")
        print(f"  NTY header = {hdr}")
        print(f"  written    = {out}")
        report["winner"] = {k: v for k, v in winner.items() if k != "pt"}
        report["winner"]["nty_header"] = hdr
        print("\nnext: python3 tools/m3d_emu_nty_full.py " + out)
    else:
        print("\n[!] no MM hit — capture the key on device with tools/m4_frida_run.py")
        report["winner"] = None

    if args.report:
        json.dump(report, open(args.report, "w"), indent=1)
        print(f"[*] report: {args.report}")
    sys.exit(0 if winner else 2)


if __name__ == "__main__":
    main()
