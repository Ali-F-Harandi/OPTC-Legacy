#!/usr/bin/env python3
"""M3b: full static PLT resolution.

1) Decode every 16-byte PLT stub in the SHIPPED libgame.so (.plt region
   [0x3F0B230, 0x3FB93C0), vaddr==file offset in PT_LOAD1):
       adrp x16, page ; ldr x17, [x16,#off] ; add x16,x16,#off ; br x17
   -> stub_addr -> GOT slot.
2) Resolve GOT slot -> name:
     - 470 import slots (got_map.json, from the patch's 0x402 relocs)
     - game's own preemptible functions: 0x403 relocs fill GOT slots with
       base+addend where addend = target function -> symbols.json name
Output: /tmp/ghidra_m3b/plt.tsv  (PLT <stub> <name>)
"""
import json
import struct
import sys
from collections import Counter

sys.path.insert(0, '/home/z/my-project/download/re-work/repo-git/tools')
import stage2_crypto as sc

SO = '/home/z/my-project/download/re-work/native-libs/libgame.so'
GM = '/home/z/my-project/download/re-work/m3/got_map.json'
PATCH = '/home/z/my-project/download/re-work/m3/m9d_patch.bin'
SYMS = '/home/z/my-project/download/re-work/m3/symbols.json'
PLT_LO, PLT_HI = 0x3F0B230, 0x3FB93C0

so = open(SO, 'rb').read()
imports = {int(k): v for k, v in json.load(open(GM)).items()}

# ---- 0x403 GOT map: dst -> addend (target function vaddr) ----
pd = sc.parse_patch(open(PATCH, 'rb').read())
got403 = {}
for r in pd["reloc_a"] + pd["reloc_b"]:
    if r["type"] == 0x403:
        got403[r["dst"]] = r["val"]
print(f"0x403 slots: {len(got403)}")

# ---- symbols by address ----
syms = json.load(open(SYMS))
sym_at = {}
for s in syms:
    sym_at.setdefault(s['addr'], s['name'])

def decode_adrp(insn, pc):
    top = insn >> 24
    assert (top & 0x9F) == 0x90, hex(insn)
    rd = insn & 0x1F
    immlo = (insn >> 29) & 3
    immhi = (insn >> 5) & 0x7FFFF
    imm = (immhi << 2) | immlo
    if imm & 0x100000:
        imm -= 0x200000
    return rd, ((pc & ~0xFFF) + (imm << 12)) & 0xFFFFFFFF

def decode_ldr(insn):
    assert (insn >> 30) == 3, hex(insn)
    imm12 = (insn >> 10) & 0xFFF
    rn = (insn >> 5) & 0x1F
    rt = insn & 0x1F
    return rt, rn, imm12 * 8

plt = {}
bad = 0
for a in range(PLT_LO, PLT_HI, 16):
    w = struct.unpack_from('<4I', so, a)
    if w[0] == 0 and w[1] == 0:
        continue
    try:
        rd, page = decode_adrp(w[0], a)
        rt, rn, off = decode_ldr(w[1])
        assert rd == 16 and rn == 16 and rt == 17
        assert (w[2] >> 24) == 0x91 and (w[3] >> 16) == 0xD61F  # add / br
        plt[a] = page + off
    except Exception:
        bad += 1
print(f"stubs decoded: {len(plt)}, bad: {bad}")

# ---- name every stub ----
res = {}
kinds = Counter()
for a, g in plt.items():
    if g in imports:
        res[a] = imports[g]; kinds['import'] += 1
    elif g in got403:
        tgt = got403[g]
        nm = sym_at.get(tgt)
        if nm:
            res[a] = nm; kinds['ownfunc'] += 1
        else:
            res[a] = f"SUB_{tgt:x}"; kinds['ownfunc_nosym'] += 1
    else:
        res[a] = f"GOTUNRES_{g:x}"; kinds['unresolved'] += 1
print("name sources:", dict(kinds))

with open('/tmp/ghidra_m3b/plt.tsv', 'w') as fh:
    for a in sorted(res):
        fh.write(f"PLT\t{a:x}\t{res[a]}\n")
print(f"wrote /tmp/ghidra_m3b/plt.tsv ({len(res)})")

# ---- validate against call histogram ----
img = open('/home/z/my-project/download/re-work/m3/m9d_image.bin','rb').read()
hist = Counter()
for off in range(0x1C00000, 0x4000000, 4):
    w2 = struct.unpack_from('<I', img, off)[0]
    if (w2 >> 26) == 0x25:
        t = (off + ((w2 & 0x3FFFFFF) << 2)) & 0xFFFFFFFF
        if PLT_LO <= t < PLT_HI:
            hist[t] += 1
print("\ntop 30 called stubs:")
for t, c in hist.most_common(30):
    print(f"  {t:#x}: {c:6d}  {res.get(t, '???')[:80]}")
called_unres = sum(1 for t in hist if res.get(t, '').startswith(('GOTUNRES', '???')))
print(f"\ncalled stubs: {len(hist)}, unresolved: {called_unres}")
