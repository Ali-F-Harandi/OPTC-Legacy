#!/usr/bin/env python3
"""M3c-3: corrected RTTI DAG on patch relocs (0x9d patch = the real .rela).

Correct typeinfo parsing:
  vptr@ti+0 == 0x417aa90  -> __cxxabiv1::__class_type_info   (16 B, no base)
  vptr@ti+0 == 0x417aae0  -> __cxxabiv1::__si_class_type_info (24 B, base@ti+16)
  otherwise                -> __vmi_class_type_info (base array @ti+16, count@ti+24)
vtables: reloc dst==vt+8 with addend==ti  -> vtable object at vt.
"""
import struct
import sys
from collections import defaultdict

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc

img = open('/home/z/my-project/download/re-work/m3/m9d_image.bin', 'rb').read()
pd = sc.parse_patch(open('/home/z/my-project/download/re-work/m3/m9d_patch.bin', 'rb').read())
fwd = {}
for r in pd['reloc_a'] + pd['reloc_b']:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']

TI_CLASS, TI_SI = 0x417aa90, 0x417aae0
STR_LO, STR_HI = 0x1300000, 0x1600000


def cstr(a):
    e = img.find(b'\x00', a)
    return img[a:e].decode(errors='replace')


# ---- typeinfo objects ----
tis = {}          # ti -> name
kind = {}         # ti -> 'class'|'si'|'vmi'
for dst, val in fwd.items():
    if (dst & 7) == 0 and val == TI_SI or val == TI_CLASS:
        ti = dst
        nm_ptr = fwd.get(ti + 8)
        if nm_ptr is None or not (STR_LO <= nm_ptr < STR_HI):
            continue
        nm = cstr(nm_ptr)
        if not nm or len(nm) < 3:
            continue
        tis[ti] = nm
        kind[ti] = 'class' if val == TI_CLASS else 'si'
# vmi: any ti candidate with a name but different vptr value
for dst, val in fwd.items():
    if (dst & 7) == 0 and dst not in tis:
        ti = dst
        nm_ptr = fwd.get(ti + 8)
        if nm_ptr is None or not (STR_LO <= nm_ptr < STR_HI):
            continue
        nm = cstr(nm_ptr)
        if not nm or len(nm) < 3 or not (nm[0] == 'N' or nm[0].isdigit()):
            continue
        # vmi check: count at ti+24 small, base array at ti+16
        arr = fwd.get(ti + 16)
        if arr is None:
            continue
        raw = img[ti + 24:ti + 28]
        if len(raw) < 4:
            continue
        cnt = struct.unpack('<I', raw)[0]
        if 0 < cnt <= 8:
            tis[ti] = nm
            kind[ti] = 'vmi'

print(f"typeinfos: {len(tis)}  (si: {sum(1 for v in kind.values() if v=='si')}, "
      f"class: {sum(1 for v in kind.values() if v=='class')}, "
      f"vmi: {sum(1 for v in kind.values() if v=='vmi')})")

# ---- parent edges ----
parents = defaultdict(list)
for ti, k in kind.items():
    if k == 'si':
        b = fwd.get(ti + 16)
        if b in tis:
            parents[ti].append(b)
    elif k == 'vmi':
        cnt = struct.unpack('<I', img[ti + 24:ti + 28])[0]
        arr = fwd.get(ti + 16)
        for j in range(cnt):
            b = fwd.get(arr + 16 * j)
            if b in tis:
                parents[ti].append(b)

# ---- vtables ----
vts = defaultdict(list)
for dst, val in fwd.items():
    if (dst & 7) == 0 and val in tis and (dst - 8) not in tis and kind.get(val):
        vts[val].append(dst - 8)

children = defaultdict(list)
for ti, ps in parents.items():
    for p in ps:
        children[p].append(ti)


def tree(ti, depth=0, seen=None):
    if seen is None:
        seen = set()
    if ti in seen:
        print('  ' * depth + f"{tis[ti]} <recursion>")
        return
    seen = seen | {ti}
    vt_str = ''
    for vt in sorted(vts.get(ti, [])):
        slots = []
        a = vt + 0x10
        while a in fwd:
            slots.append(fwd[a])
            a += 8
        vt_str += f" vt@{vt:#x}[{len(slots)}]"
    print('  ' * depth + f"- {tis[ti]}  ti={ti:#x}{vt_str}")
    for c in sorted(children.get(ti, []), key=lambda t: tis[t]):
        tree(c, depth + 1, seen)


def find(name):
    return [ti for ti, nm in tis.items() if nm == name]


if __name__ == '__main__':
    for nm in ('N10bisqueBase2IO6StreamE',
               'N10bisqueBase4Data5BQ15913StreamDecoderE',
               'N10bisqueBase4Data5BQ1597DecoderE',
               'N10bisqueBase4Data9NtyReaderE'):
        for ti in find(nm):
            print(f"\n{'='*74}\n### {nm}\n")
            tree(ti)
