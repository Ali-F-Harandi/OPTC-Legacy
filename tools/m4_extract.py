#!/usr/bin/env python3
"""M4: extract volumes from a decrypted OPTC NTY (data1.dec.nty).

Consumes the volume table produced by the existing parse harness:

  python3 tools/m3d_emu_nty_full.py --json volumes.json data1.dec.nty
  python3 tools/m4_extract.py --nty data1.dec.nty --volumes volumes.json

For each volume entry {name, offset, size, mode, flags, class-bits}:
  * writes the raw blob   -> out/<index>_<name|vol>.bin
  * flags 0xc0000000 / gzip-byte 0x40 -> also tries gzip/zlib inflate
  * class-bits bit1 (SD40SE/RC4-255) with --t1/--key -> also writes the
    RC4-255 decoded variant (sinatra stream core, M3c-verified)

A manifest.json records everything for auditing.
"""
import argparse
import gzip
import json
import os
import re
import struct
import sys
import zlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m4_decrypt_data1 import rc4_255          # noqa: E402

GZIP_FLAG = 0xC0000000
GZIP_BYTE = 0x40


def sniff(data):
    if data[:2] == b"\x1f\x8b":
        return "gzip"
    if data[:4] == b"\x89PNG":
        return "png"
    if data[:2] == b"BM":
        return "bmp"
    if data[:3] == b"CWS" or data[:3] == b"FWS":
        return "swf"
    if data[:4] == b"RIFF":
        return "riff"
    if data[:3] == b"ID3" or (len(data) > 2 and data[0] == 0xFF and (data[1] & 0xE0) == 0xE0):
        return "mp3"
    if data[:4] == b"OggS":
        return "ogg"
    try:
        if data[:2] == b"PK":
            return "zip"
    except Exception:
        pass
    return "bin"


def try_inflate(data):
    for fn in (gzip.decompress,
               lambda b: zlib.decompress(b),
               lambda b: zlib.decompress(b, -15),
               lambda b: zlib.decompress(b, 31)):
        try:
            return fn(data)
        except Exception:
            continue
    return None


def safe_name(s, fallback):
    s = re.sub(r"[^A-Za-z0-9._@-]+", "_", s or "")
    return s[:120] if s else fallback


def main():
    ap = argparse.ArgumentParser(description="OPTC M4 — NTY volume extractor")
    ap.add_argument("--nty", required=True, help="decrypted NTY (e.g. data1.dec.nty)")
    ap.add_argument("--volumes", required=True, help="volumes.json from m3d_emu_nty_full.py --json")
    ap.add_argument("--out", default="optc_volumes", help="output directory")
    ap.add_argument("--t1", default=None, help="T1 table (file or hex) for RC4-255 volumes")
    ap.add_argument("--key", default=None, help="hex key for RC4-255 volumes (the data1 signature)")
    args = ap.parse_args()

    nty = open(args.nty, "rb").read()
    tables = json.load(open(args.volumes))
    if isinstance(tables, dict):
        tables = [tables]
    os.makedirs(args.out, exist_ok=True)

    T1 = None
    key = None
    if args.t1:
        T1 = open(args.t1, "rb").read() if os.path.isfile(args.t1) else bytes.fromhex(args.t1)
    if args.key:
        key = bytes.fromhex(args.key)

    manifest = {"nty": args.nty, "size": len(nty), "volumes": []}
    n_out = 0
    for tf in tables:
        for i, v in enumerate(tf.get("volumes", [])):
            name = v.get("name") or f"vol{i:03d}"
            off, size = v.get("offset", 0), v.get("size", 0)
            flags, cbits, mode = v.get("flags", 0), v.get("class-bits", 0), v.get("mode", 0)
            row = {"index": i, "name": name, "offset": off, "size": size,
                   "flags": f"{flags:#x}", "class-bits": f"{cbits:#x}", "mode": mode,
                   "files": []}
            if off + size > len(nty):
                row["error"] = f"range {off:#x}+{size:#x} beyond NTY ({len(nty)})"
                manifest["volumes"].append(row)
                print(f"[!] {name}: {row['error']}")
                continue
            blob = nty[off:off + size]
            base = safe_name(name, f"vol{i:03d}")
            p = os.path.join(args.out, f"{i:03d}_{base}.bin")
            open(p, "wb").write(blob)
            row["files"].append({"file": os.path.basename(p), "kind": sniff(blob),
                                 "size": len(blob)})
            n_out += 1

            # gzip-wrapped volumes
            if (flags & GZIP_FLAG) or ((flags >> 24) & GZIP_BYTE):
                inf = try_inflate(blob)
                if inf is not None:
                    p2 = os.path.join(args.out, f"{i:03d}_{base}.inf")
                    open(p2, "wb").write(inf)
                    row["files"].append({"file": os.path.basename(p2), "kind": sniff(inf),
                                         "size": len(inf), "inflated": True})
                    n_out += 1

            # RC4-255 (SD40SE, class-bits bit1) volumes
            if T1 and key and (cbits & 0x2):
                dec = rc4_255(T1, key, blob)
                p3 = os.path.join(args.out, f"{i:03d}_{base}.rc4")
                open(p3, "wb").write(dec)
                row["files"].append({"file": os.path.basename(p3), "kind": sniff(dec),
                                     "size": len(dec), "rc4_255": True})
                n_out += 1

            manifest["volumes"].append(row)
            fl = " ".join(f["file"] + (f" ({f['kind']})" if f.get("kind") != "bin" else "")
                          for f in row["files"])
            print(f"[+] {i:03d} {name:48s} off={off:#08x} size={size:7d} {fl}")

    mp = os.path.join(args.out, "manifest.json")
    json.dump(manifest, open(mp, "w"), indent=1)
    print(f"\n[*] {n_out} files -> {args.out}/  (manifest: {mp})")


if __name__ == "__main__":
    main()
