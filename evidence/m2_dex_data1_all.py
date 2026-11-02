#!/usr/bin/env python3
"""Scan ALL dex files in base.apk for string refs 'data1'/'data2'/'7ffe' and
report the enclosing methods (const-string users)."""
import struct
import zipfile

DEX_APK = "/home/z/my-project/download/re-work/apkm_extracted/base.apk"
z = zipfile.ZipFile(DEX_APK)
dexes = [n for n in z.namelist() if n.endswith('.dex')]
print(f"{len(dexes)} dex files")


def uleb(b, o):
    r = 0
    s = 0
    while True:
        x = b[o]
        o += 1
        r |= (x & 0x7F) << s
        if not x & 0x80:
            return r, o
        s += 7


for name in dexes:
    data = z.read(name)
    string_ids_size, string_ids_off = struct.unpack_from("<II", data, 0x38)
    type_ids_size, type_ids_off = struct.unpack_from("<II", data, 0x40)
    method_ids_size, method_ids_off = struct.unpack_from("<II", data, 0x58)
    class_defs_size, class_defs_off = struct.unpack_from("<II", data, 0x60)

    def read_str(idx):
        off = struct.unpack_from("<I", data, string_ids_off + idx * 4)[0]
        n, o = uleb(data, off)
        return data[o:o + n].decode("utf-8", "replace")

    targets = {}
    for i in range(string_ids_size):
        s = read_str(i)
        if s in ("data1", "data2", "7ffe", "data1.dat", "data2.dat", "7ffe/data1.dat"):
            targets[i] = s
    if not targets:
        continue
    print(f"\n=== {name}: targets {targets} ===")

    def type_name(idx):
        sidx = struct.unpack_from("<I", data, type_ids_off + idx * 4)[0]
        return read_str(sidx)

    def method_name(idx):
        class_idx, proto_idx, name_idx = struct.unpack_from("<III", data, method_ids_off + idx * 12)
        return f"{type_name(class_idx)}.{read_str(name_idx)}"

    # brute scan the whole dex for const-string opcodes referencing targets
    # (0x1b const-string vAA, string@BBBB ; 0x1a const-string vAA, string@BBBBBBBB)
    hits = set()
    for off in range(0, len(data) - 6):
        op = data[off]
        if op == 0x1B:  # const-string vAA, @BBBB (little-endian idx in next 2 bytes)
            idx = struct.unpack_from("<H", data, off + 2)[0]
            if idx in targets:
                hits.add((off, idx))
        elif op == 0x1A:  # const-string vAA, @BBBBBBBB
            idx = struct.unpack_from("<I", data, off + 2)[0]
            if idx in targets and idx < string_ids_size:
                hits.add((off, idx))
    print(f"  const-string sites: {len(hits)}")
    for off, idx in sorted(hits)[:12]:
        print(f"    @{off:#x}: \"{targets[idx]}\"")
