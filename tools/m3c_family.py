#!/usr/bin/env python3
"""M3c-1b: enumerate the FULL decoder class family via RTTI inheritance.

Itanium ABI:
  __si_class_type_info: { vptr, name*, base* }          -> base at ti+16
  __vmi_class_type_info:{ vptr, name*, flags, basecount, bases[] }

We build the whole class DAG from 0x403 relocs, then print every class that
(in directly or transitively) derives from:
  * Data::BQ15915BQ159ReadStream  (ti @0x3fe4ed0)   <- sinatraCall's family
  * Data::BQ1597Decoder           (ti @0x3fe5be0)
  * Data::NtyReader               (ti @0x414a508)
and for each, dump its vtables' slot-5 (the +0x28 virtual that sinatraCall
tail-calls) plus every method slot with relocs.
"""
import struct
import sys

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc

IMG = '/home/z/my-project/download/re-work/m3/m9d_image.bin'
PATCH = '/home/z/my-project/download/re-work/m3/m9d_patch.bin'

img = open(IMG, 'rb').read()
pd = sc.parse_patch(open(PATCH, 'rb').read())
relocs = pd['reloc_a'] + pd['reloc_b']
fwd = {}
rev = {}
for r in relocs:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']
        rev.setdefault(r['val'], []).append(r['dst'])

STR_LO, STR_HI = 0x13a0000, 0x1600000


def name_at(a):
    e = img.find(b'\x00', a)
    return img[a:e].decode(errors='replace')


# ---- collect all typeinfo objects: dst of reloc whose addend is a name str
#      and whose layout matches {x, name, base...}. We detect by: ti+8 -> name.
#      fwd[ti+8] = straddr; straddr in string window; str looks like a mangled
#      name ('N...' / 'St...' / digit-led).
tis = {}
for dst, val in fwd.items():
    if (dst & 7) == 0 and STR_LO <= val < STR_HI:
        nm = name_at(val)
        if nm.startswith('N') or nm[:1].isdigit() or nm.startswith('St') or nm[:1].isupper():
            ti = dst - 8
            if ti >= 0:
                tis[ti] = nm

print(f"typeinfo candidates: {len(tis)}")

# ---- parent edges: si_class (ti+16 -> base ti) and vmi (ti+16 -> base array)
parents = {}   # ti -> [base ti]
for ti, nm in tis.items():
    b = fwd.get(ti + 16)
    if b is not None and b in tis:
        parents.setdefault(ti, []).append(b)
    else:
        # vmi: ti+16 -> array of {baseptr, offset} pairs; basecount at ti+24
        arr = fwd.get(ti + 16)
        if arr is not None:
            cnt = struct.unpack('<I', img[ti + 24:ti + 28])[0]
            if 0 < cnt <= 8:
                for k in range(cnt):
                    bp = fwd.get(arr + 16 * k)
                    if bp in tis:
                        parents.setdefault(ti, []).append(bp)

# ---- vtables per ti: rev[ti] -> vt+8
vts_of = {}
for ti in tis:
    for d in rev.get(ti, []):
        if (d & 7) == 0:
            vts_of.setdefault(ti, []).append(d - 8)


def ancestry(ti):
    seen, stack = set(), [ti]
    while stack:
        t = stack.pop()
        for p in parents.get(t, []):
            if p not in seen:
                seen.add(p)
                stack.append(p)
    return seen


def dump_family(root_ti, root_name):
    print(f"\n{'='*72}\n=== family of {root_name} (ti {root_ti:#x}) ===")
    fam = sorted(t for t in tis if root_ti in ancestry(t))
    fam.append(root_ti)
    for ti in fam:
        nm = tis[ti]
        bases = [tis.get(b, hex(b)) for b in parents.get(ti, [])]
        print(f"\n-- {nm}")
        print(f"   ti {ti:#x}  bases: {bases}")
        for vt in sorted(vts_of.get(ti, [])):
            slots = []
            a = vt + 0x10
            while True:
                t = fwd.get(a)
                if t is None:
                    break
                slots.append(t)
                a += 8
            slot5 = slots[5] if len(slots) > 5 else None
            print(f"   vtable {vt:#x}: {len(slots)} slots; slot5(+0x28) = "
                  f"{hex(slot5) if slot5 else None}")
            for k, t in enumerate(slots[:10]):
                mark = ' <-- sinatraCall target' if k == 5 else ''
                print(f"      [{k}] +0x{k*8:02x} {t:#x}{mark}")


if __name__ == '__main__':
    dump_family(0x3fe4ed0, 'Data::BQ15915BQ159ReadStream')
    dump_family(0x3fe5be0, 'Data::BQ1597Decoder')
    dump_family(0x414a508, 'Data::NtyReader')
