#!/usr/bin/env python3
"""OPTC Legacy — blob extractor.

Extracts the two encrypted payloads shipped inside the 16.2.1 bundle:

  1. The unnamed `LOUSER+0` tail section of libgame.so
     (39,927,376 bytes, entropy ~7.99 bits/byte).
  2. assets/7ffe/data1.dat from base.apk (181,700 bytes) — the
     protection payload consumed by lib__7ffe__.so.

Usage:
    python3 tools/extract_blobs.py <path-to-libgame.so> <path-to-base.apk> <out-dir>

The section geometry is parsed live from the ELF headers, not hardcoded
(see notes/engine-analysis.md §3 for the reference numbers).
"""
import json
import os
import struct
import sys
import zipfile


def parse_elf_sections(data):
    """Minimal ELF64 section header walk (no external deps)."""
    assert data[:4] == b"\x7fELF", "not an ELF"
    e_shoff, = struct.unpack_from("<Q", data, 0x28)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 0x3A)
    sections = []
    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        (sh_name, sh_type, _flags, _addr, sh_offset, sh_size) = struct.unpack_from("<IIQQQQ", data, off)
        sections.append({"index": i, "name_off": sh_name, "type": sh_type,
                         "offset": sh_offset, "size": sh_size})
    # resolve names via shstrtab
    strtab = sections[e_shstrndx]
    raw = data[strtab["offset"]: strtab["offset"] + strtab["size"]]
    for s in sections:
        end = raw.find(b"\x00", s["name_off"])
        s["name"] = raw[s["name_off"]:end].decode("latin-1")
    return sections


def main():
    if len(sys.argv) != 4:
        print(__doc__)
        sys.exit(1)
    so_path, apk_path, out_dir = sys.argv[1], sys.argv[2], sys.argv[3]
    os.makedirs(out_dir, exist_ok=True)

    # --- 1) libgame.so tail blob ---
    data = open(so_path, "rb").read()
    sections = parse_elf_sections(data)
    manifest = []
    blob = None
    for s in sections:
        if s["name"] == "" and s["type"] >= 0x60000000 and s["size"] > (1 << 20):
            blob = data[s["offset"]: s["offset"] + s["size"]]
            manifest.append({
                "section_index": s["index"], "type": hex(s["type"]),
                "file_offset": hex(s["offset"]), "size": s["size"],
                "extracted_to": "engine-tail-blob.bin",
            })
            break
    if blob:
        out = os.path.join(out_dir, "engine-tail-blob.bin")
        open(out, "wb").write(blob)
        print(f"[+] libgame.so tail blob -> {out} ({len(blob):,} bytes)")
    else:
        print("[-] no unnamed large LOUSER+ section found (already extracted?)")

    # --- 2) assets/7ffe/data1.dat ---
    z = zipfile.ZipFile(apk_path)
    if "assets/7ffe/data1.dat" in z.namelist():
        dat = z.read("assets/7ffe/data1.dat")
        out = os.path.join(out_dir, "7ffe-data1.dat")
        open(out, "wb").write(dat)
        print(f"[+] assets/7ffe/data1.dat -> {out} ({len(dat):,} bytes)")
        manifest.append({"source": "base.apk!assets/7ffe/data1.dat",
                         "size": len(dat), "extracted_to": "7ffe-data1.dat"})
    else:
        print("[-] assets/7ffe/data1.dat not present in base.apk")

    with open(os.path.join(out_dir, "blobs-manifest.json"), "w") as f:
        json.dump(manifest, f, indent=1)
    print(f"[+] manifest -> {os.path.join(out_dir, 'blobs-manifest.json')}")


if __name__ == "__main__":
    main()
