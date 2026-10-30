#!/usr/bin/env python3
"""M4: round-trip selftest of the offline data1.dat pipeline.

Builds a synthetic encrypted NTY exactly the way the game does
(sigInstall semantics: record{id, sig[36], len, crc32, f30} + RC4-255
payload), then verifies that tools/m4_decrypt_data1.py recovers it:

  1. seeded random T1 permutation (stands in for table @0x14f7375)
  2. random 32-byte signature key
  3. synthetic plaintext NTY ('MM\\x00\\x2a' header + volumes)
  4. payload = prga255(ksa(T1, key), plaintext)
  5. decrypt with --key            -> must hit (crc + MM + header)
  6. decrypt with --sweep only     -> must find the embedded-record key
  7. negative control: wrong key   -> must NOT hit

Run:  python3 tools/m4_selftest.py
"""
import json
import os
import random
import struct
import subprocess
import sys
import tempfile
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import m4_decrypt_data1 as D   # noqa: E402


def build_nty(rng, n_volumes=3):
    """Synthetic plaintext NTY with the documented BE header layout."""
    body = b""
    for i in range(n_volumes):
        blob = bytes(rng.randrange(256) for _ in range(rng.randrange(64, 512)))
        blob = struct.pack(">I", len(blob)) + blob          # fake volume record
        body += blob
    data_end = 14 + len(body)
    hdr = struct.pack(">HHIH", 0x4D4D, 0x002A, data_end, n_volumes)
    hdr += struct.pack(">I", 0x12345678)                     # trailing u32
    return hdr + body


def main():
    rng = random.Random(0xC0FFEE)
    tmp = tempfile.mkdtemp(prefix="m4_selftest_")

    # 1. T1 permutation + 36-byte signature (32-byte key + 4 tail bytes)
    T1 = bytearray(range(256))
    rng.shuffle(T1)
    T1 = bytes(T1)
    sig36 = bytes(rng.randrange(256) for _ in range(36))
    key = sig36[:32]

    # 2. plaintext NTY + encrypted payload + record header
    #    (crc32 semantics: game verifies after decrypt -> crc over plaintext)
    nty = build_nty(rng)
    payload = D.rc4_255(T1, key, nty)
    rec = struct.pack("<I", 0x3ECBF1DA) + sig36 + \
        struct.pack("<II", len(payload), zlib.crc32(nty) & 0xFFFFFFFF) + \
        struct.pack("<I", 0)
    data1 = rec + payload
    assert len(data1) == 0x34 + len(payload)

    p_data1 = os.path.join(tmp, "data1.dat")
    p_t1 = os.path.join(tmp, "T1.bin")
    open(p_data1, "wb").write(data1)
    open(p_t1, "wb").write(T1)
    print(f"[*] synthetic data1.dat: {len(data1)} B  T1 permutation ok "
          f"({len(set(T1)) == 256})  key={key.hex()}")

    ok = True

    # ---- 3. decrypt with the explicit key ----
    r = subprocess.run(
        [sys.executable, os.path.join(HERE, "m4_decrypt_data1.py"),
         "--data1", p_data1, "--key", key.hex(), "--t1", p_t1,
         "--report", os.path.join(tmp, "r1.json")],
        capture_output=True, text=True)
    print(r.stdout)
    ok &= (r.returncode == 0)
    rep = json.load(open(os.path.join(tmp, "r1.json")))
    w = rep.get("winner") or {}
    ok &= w.get("mm_ok") is True and w.get("crc_match") is True
    ok &= w.get("key_hex") == key.hex()
    ok &= w.get("nty_header", {}).get("magic") == "4d4d"
    ok &= w.get("nty_header", {}).get("count") == 3
    # decrypted output must be byte-identical to the synthetic plaintext
    dec = open(os.path.splitext(p_data1)[0] + ".dec.nty", "rb").read()
    ok &= (dec == nty)
    print(f"[{'PASS' if ok else 'FAIL'}] explicit-key decrypt: "
          f"MM={w.get('nty_header', {}).get('magic')} crc={w.get('crc_match')} roundtrip={dec == nty}")

    # ---- 4. sweep mode must find the embedded-record key ----
    r2 = subprocess.run(
        [sys.executable, os.path.join(HERE, "m4_decrypt_data1.py"),
         "--data1", p_data1, "--t1", p_t1, "--sweep",
         "--report", os.path.join(tmp, "r2.json")],
        capture_output=True, text=True)
    print(r2.stdout)
    rep2 = json.load(open(os.path.join(tmp, "r2.json")))
    w2 = rep2.get("winner") or {}
    ok2 = (r2.returncode == 0 and w2.get("key_hex") == key.hex()
           and "embedded record sig" in w2.get("label", ""))
    ok &= ok2
    print(f"[{'PASS' if ok2 else 'FAIL'}] sweep mode finds embedded-record key")

    # ---- 5. negative control: wrong key must NOT produce an MM hit ----
    wrong = bytes(rng.randrange(256) for _ in range(32))
    r3 = subprocess.run(
        [sys.executable, os.path.join(HERE, "m4_decrypt_data1.py"),
         "--data1", p_data1, "--key", wrong.hex(), "--t1", p_t1],
        capture_output=True, text=True)
    ok3 = (r3.returncode == 2)
    ok &= ok3
    print(f"[{'PASS' if ok3 else 'FAIL'}] wrong-key negative control (exit {r3.returncode})")

    # ---- 6. in-process core check: prga255 period semantics ----
    S = D.ksa(T1, key)
    ks_ref = D.prga255(S, bytes(510))
    ks_a = D.prga255(S, bytes(255))
    ks_b = D.prga255(S, bytes(255))
    ok4 = ks_ref[:255] == ks_a and ks_ref[255:] == ks_b
    ok &= ok4
    print(f"[{'PASS' if ok4 else 'FAIL'}] keystream period is exactly 255")

    print("\n===== M4 SELFTEST:", "ALL PASS" if ok else "FAILURES", "=====")
    print(f"artifacts in {tmp}")
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
