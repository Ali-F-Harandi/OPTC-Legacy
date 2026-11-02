#!/usr/bin/env python3
"""OPTC — recover FULL symbol names from the 0x9e tail-shared name pool.

Each FUNC record's name_off points into a shared pool; the full string starts
at the preceding NUL boundary. Rebuild symbols with full names and dump the
ResourceController analysis.
"""
import bisect
import json
import struct

RW = "/home/z/my-project/download/re-work"
D9E = f"{RW}/m2/f3_chain/L4_m9e_image.bin"
IMG = f"{RW}/m2/9d_module/merged.bin"
SYMS = f"{RW}/m3/symbols.json"
SP, IDX_OFF, IDX_END = 0x33CCB8, 0x2C6650, 0x33CCB8

d = open(D9E, "rb").read()
img = open(IMG, "rb").read()

# --- rebuild records with full names ---
records = []
for off in range(0x88, IDX_OFF - 0x18, 4):
    name, tag = struct.unpack_from("<2I", d, off)
    val, pad, size, pad2 = struct.unpack_from("<4I", d, off + 8)
    if tag != 0x000E0012 or not (0 < name < 0x700000):
        continue
    p = SP + name
    if p >= len(d):
        continue
    # full string: scan back to previous NUL
    start = d.rfind(b"\x00", 0, p) + 1
    end = d.index(b"\x00", p)
    full = d[start:end].decode("utf-8", "replace")
    records.append({"addr": val, "size": size, "name_full": full,
                    "name_off": name, "shared": p != start})

# dedup by (addr,size) keep the one with the exact (non-shared) pointer if any
best = {}
for r in records:
    k = (r["addr"], r["size"])
    if k not in best or (not r["shared"] and best[k]["shared"]):
        best[k] = r
full_syms = sorted(best.values(), key=lambda r: r["addr"])
print(f"records: {len(records)} -> unique (addr,size): {len(full_syms)}")

addr2name = {}
for r in full_syms:
    addr2name.setdefault(r["addr"], r["name_full"])

json.dump([{k: r[k] for k in ("addr", "size", "name_full")} for r in full_syms],
          open("/home/z/my-project/work/symbols_full.json", "w"))
print("saved -> /home/z/my-project/work/symbols_full.json")

# --- typeinfo at 0x4117870 -> class name ---
ti = 0x4117870
vptr, namep = struct.unpack_from("<2Q", img, ti)
name = img[namep:img.find(b'\x00', namep)].decode('utf-8', 'replace')
print(f"\ntypeinfo @ {ti:#x}: vptr={vptr:#x} name@{namep:#x} = {name}")

# --- ResourceController vtable methods ---
print("\n=== ResourceController vtable (methods from 0x4187ae0) ===")
for off in range(0x4187ae0, 0x4187c40, 8):
    v = struct.unpack_from("<Q", img, off)[0]
    nm = addr2name.get(v, "")
    print(f"  vt+{off-0x4187ae0:#04x} {off:#x}: {v:#010x}  {nm[:95]}")
