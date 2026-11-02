#!/usr/bin/env python3
"""M3b RTTI explorer — find TRUE class vtables via the reloc-exact chain:

  typeinfo-name string  <--(reloc addend)--  typeinfo+8
  typeinfo object       <--(reloc addend)--  vtable+8
  vtable methods        --(reloc addends)-->  exact function addresses

This bypasses the 0x9e symbol DB entirely (its addresses don't match the
restored .text; likely a different build/layout).
"""
import re
import struct
import sys

sys.path.insert(0, '/home/z/my-project/download/re-work/repo-git/tools')
import stage2_crypto as sc

IMG = '/home/z/my-project/download/re-work/m3/m9d_image.bin'
PATCH = '/home/z/my-project/download/re-work/m3/m9d_patch.bin'

img = open(IMG, 'rb').read()
pd = sc.parse_patch(open(PATCH, 'rb').read())
relocs = pd["reloc_a"] + pd["reloc_b"]

# forward: dst -> addend ; reverse: addend -> [dsts]
fwd = {}
rev = {}
for r in relocs:
    if r["type"] == 0x403:
        fwd[r["dst"]] = r["val"]
        rev.setdefault(r["val"], []).append(r["dst"])

STR_LO, STR_HI = 0x13a0000, 0x1600000   # generous string-region window

def find_str(s):
    pat = s.encode() + b'\x00'
    out = []
    start = 0
    while True:
        i = img.find(pat, start, STR_HI)
        if i < 0 or i < STR_LO:
            if i < 0:
                break
        if i >= STR_LO:
            out.append(i)
            if len(out) >= 4:
                break
        start = i + 1 if i >= 0 else STR_HI
    return out

def vtables_for_typeinfo_name(name):
    """name str addr -> typeinfo objects -> vtables -> methods"""
    out = []
    for sa in find_str(name):
        tis = rev.get(sa, [])          # relocs whose addend = str addr -> dst = ti+8
        for ti8 in tis:
            ti = ti8 - 8
            vts = rev.get(ti, [])      # relocs whose addend = ti -> dst = vt+8
            for vt8 in vts:
                vt = vt8 - 8
                # methods: vt+0x10, vt+0x18, ... while relocs exist
                methods = []
                a = vt + 0x10
                while True:
                    t = fwd.get(a)
                    if t is None:
                        break
                    methods.append(t)
                    a += 8
                out.append((vt, methods))
    return out

if __name__ == '__main__':
    # 1) survey: what bisque Data/Decoder classes exist as typeinfo names?
    names = set()
    for m in re.finditer(rb'N10bisqueBase4Data[0-9A-Za-z_]+E\x00', img[STR_LO:STR_HI]):
        names.add((STR_LO + m.start(), m.group()[:-1].decode()))
    print(f"bisqueBase::Data typeinfo names: {len(names)}")
    pat = re.compile(r'(BisqueKey|Nty|sinatra|StreamDecoder|Decoder|Cipher|NtyReader)', re.I)
    for a, n in sorted(names):
        if pat.search(n):
            print(f"  @{a:#x} {n}")
