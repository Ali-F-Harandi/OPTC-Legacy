#!/usr/bin/env python3
"""M3d-2: dump the APU table at 0x4203e30 (per-volume keydesc dispatch).

Reads the region from the restored merged.bin AND the shipped libgame.so,
annotates in-range code pointers with names from symbols.json + plt.tsv.
"""
import json
import struct
import sys

RW = "/home/z/my-project/download/re-work"
img = open(f"{RW}/m2/9d_module/merged.bin", "rb").read()
so = open(f"{RW}/apk/arm64_x/lib/arm64-v8a/libgame.so", "rb").read()
syms = {s["addr"]: s["name"] for s in json.load(open(f"{RW}/m3/symbols.json"))}

plt = {}
for line in open(f"{RW}/m3/plt.tsv"):
    s, k, t = line.rstrip("\n").split("\t")
    plt[int(s, 16)] = (k, t)


def name_of(a):
    if a in syms:
        return syms[a]
    if a in plt:
        k, t = plt[a]
        if k == "import":
            return f"PLT:{t}"
        if k == "game":
            return f"PLT->0x{t}"
    return None


def dump(start, n_qwords, src, label):
    print(f"===== {label} @ {start:#x} =====")
    for i in range(n_qwords):
        a = start + i * 8
        if a + 8 > len(src):
            print(f"  {a:#010x}: <EOF>")
            break
        q = struct.unpack_from("<Q", src, a)[0]
        tag = ""
        if 0x1A77380 <= q < 0x3F0B124:
            tag = name_of(q) or f"code+{q:#x}"
        elif 0x3F0B230 <= q < 0x3FB93C0:
            tag = f"plt {name_of(q) or ''}"
        elif q < 0x100:
            tag = f"int {q}"
        elif 0x1400000 <= q < 0x1500000:
            # string pool region
            s = img[q:img.find(b'\\x00', q)]
            if len(s) < 200 and all(32 <= c < 127 for c in s):
                tag = f'str "{s.decode()}"'
        print(f"  {a:#010x}: {q:#018x}  {tag}")


dump(0x4203e30, 48, img, "merged.bin (relocated)")
dump(0x4203e30, 24, so, "shipped libgame.so")
# context before/after in merged
dump(0x4203d80, 14, img, "merged.bin context before")
