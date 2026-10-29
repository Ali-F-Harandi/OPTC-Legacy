#!/usr/bin/env python3
"""Find which Java methods reference the strings 'data1'/'data2' in a dex."""
import struct
import sys

DEX = "/home/z/my-project/download/re-work/apkm_extracted/base.apk"
ENTRY = "classes4.dex"

import zipfile
z = zipfile.ZipFile(DEX)
data = z.read(ENTRY)

# header
string_ids_size, string_ids_off = struct.unpack_from("<II", data, 0x38)
type_ids_size, type_ids_off = struct.unpack_from("<II", data, 0x40)
proto_ids_size, proto_ids_off = struct.unpack_from("<II", data, 0x48)
field_ids_size, field_ids_off = struct.unpack_from("<II", data, 0x50)
method_ids_size, method_ids_off = struct.unpack_from("<II", data, 0x58)
class_defs_size, class_defs_off = struct.unpack_from("<II", data, 0x60)

def uleb(b, o):
    r = 0; s = 0
    while True:
        x = b[o]; o += 1
        r |= (x & 0x7F) << s
        if not x & 0x80: return r, o
        s += 7

def read_str(idx):
    off = struct.unpack_from("<I", data, string_ids_off + idx * 4)[0]
    n, o = uleb(data, off)
    return data[o:o + n].decode("utf-8", "replace")

# find target string indices
targets = {}
for i in range(string_ids_size):
    s = read_str(i)
    if s in ("data1", "data2", "7ffe", "data1.dat", "7ffe/data1.dat"):
        targets[i] = s
print("target strings:", {k: v for k, v in targets.items()})

def type_name(idx):
    sidx = struct.unpack_from("<I", data, type_ids_off + idx * 4)[0]
    return read_str(sidx)

def method_name(idx):
    class_idx, proto_idx, name_idx = struct.unpack_from("<III", data, method_ids_off + idx * 12)
    return f"{type_name(class_idx)}.{read_str(name_idx)}"

# walk classes -> methods -> code, scan for const-string with target idx
results = []
for c in range(class_defs_size):
    cd = class_defs_off + c * 32
    class_idx, access, super_idx, interfaces, source_idx, anno, class_data_off, static_v = \
        struct.unpack_from("<IIIIIIII", data, cd)
    if not class_data_off:
        continue
    o = class_data_off
    static_n, o = uleb(data, o); inst_n, o = uleb(data, o)
    direct_n, o = uleb(data, o); virt_n, o = uleb(data, o)
    # skip static + instance fields
    for _ in range(static_n + inst_n):
        _, o = uleb(data, o); _, o = uleb(data, o)
    for kind, count in (("direct", direct_n), ("virtual", virt_n)):
        for _ in range(count):
            midx, o = uleb(data, o); acc, o = uleb(data, o); code_off, o = uleb(data, o)
            if not code_off:
                continue
            # code_item: regs_size, ins_size, outs_size, tries_size, dbg_off, insns_size
            tries_size, = struct.unpack_from("<H", data, code_off + 6)
            insns_size, = struct.unpack_from("<I", data, code_off + 12)
            insns = code_off + 16
            blob = data[insns:insns + insns_size * 2]
            for tidx in targets:
                idx_le = struct.pack("<H", tidx)
                p = 0
                while True:
                    p = blob.find(idx_le, p)
                    if p < 0: break
                    # const-string 21c: [0x1A][reg][idx_lo][idx_hi] — idx at even unit boundary
                    if p >= 2 and p % 2 == 0 and blob[p - 2] == 0x1A:
                        results.append((method_name(midx), targets[tidx], kind))
                    # const-string/jumbo 31c: [0x1B][reg][idx 4B]
                    if p >= 2 and p % 2 == 0 and blob[p - 2] == 0x1B:
                        results.append((method_name(midx), targets[tidx], kind))
                    p += 2

seen = set()
for m, s, k in results:
    if (m, s) not in seen:
        seen.add((m, s))
        print(f"  {m}  ({k})  uses '{s}'")
