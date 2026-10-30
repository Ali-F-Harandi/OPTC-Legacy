#!/usr/bin/env python3
"""M3c-1: the per-block transform behind sinatraCall's vtable+0x28 indirection.

Walks (with reloc-exact data, no guessing):
  * BQ15915BQ159ReadStream vtable (note: 0x3fe4e30)  -> methods
  * BQ1597Decoder vtable (0x3fe5c08)                  -> methods
  * NtyReader vtable (0x414a4e8)                      -> methods
  * the object at sinatraCall's *this+0x28 call target
and disassembles every candidate with Capstone.

vtable convention (Itanium + this tool): vt = full vtable object start
(offset-to-top @ vt+0, typeinfo @ vt+8, methods from vt+0x10).
An in-object vptr points at vt+0x10, so `(* (vptr + K))(this,…)` calls the
method stored at vt+0x10+K.
"""
import struct
import sys

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

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

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
md.detail = False


def disas(addr, count=80, raw=None):
    """Disassemble `count` instructions at file offset == vaddr `addr`."""
    data = raw if raw is not None else img[addr:addr + count * 4 + 64]
    out = []
    for ins in md.disasm(data, addr):
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}")
        if len(out) >= count:
            break
    return '\n'.join(out)


def vtable_dump(name, vt, n=16):
    print(f"\n=== {name} vtable @ {vt:#x} ===")
    ti = fwd.get(vt + 8)
    tiname = None
    if ti is not None:
        # typeinfo+8 -> name string addr (read the pointer in the image? no:
        # typeinfo objects are in .data.rel.ro; their name ptr is a reloc too)
        tiname_addr = fwd.get(ti + 8)
        if tiname_addr:
            e = img.find(b'\x00', tiname_addr)
            tiname = img[tiname_addr:e].decode(errors='replace')
    print(f"  typeinfo @ {ti:#x}  name={tiname!r}")
    for k in range(n):
        a = vt + 0x10 + 8 * k
        t = fwd.get(a)
        if t is None:
            print(f"  +0x{k*8:03x} (vt+{0x10+k*8:#x}) : <no reloc> raw={struct.unpack('<Q', img[a:a+8])[0]:#x}")
        else:
            print(f"  +0x{k*8:03x} (vt+{0x10+k*8:#x}) : {t:#x}")
    return tiname


def method(vt, k):
    """k-th method (0-based) of vtable at vt."""
    return fwd.get(vt + 0x10 + 8 * k)


if __name__ == '__main__':
    # ---- 1) sinatraCall's own body, raw ----
    print("=== sinatraCall @ 0x1ef3ae4 (raw disassembly) ===")
    print(disas(0x1ef3ae4, 24))

    # ---- 2) the three vtables ----
    vtable_dump('Data::BQ15915BQ159ReadStream', 0x3fe4e30, 14)
    vtable_dump('Data::BQ1597Decoder', 0x3fe5c08, 14)
    vtable_dump('Data::NtyReader', 0x414a4e8, 10)

    # ---- 3) sinatraCall calls vmethod+0x28 of *its* this ----
    # BQ15915BQ159ReadStream vptr = vt+0x10 ; +0x28 => method index 5
    for label, vt in (('BQ15915BQ159ReadStream', 0x3fe4e30),
                      ('BQ1597Decoder', 0x3fe5c08)):
        m = method(vt, 5)
        print(f"\n=== {label}: vmethod+0x28 (index 5) -> {m and hex(m)} ===")
        if m:
            print(disas(m, 60))
