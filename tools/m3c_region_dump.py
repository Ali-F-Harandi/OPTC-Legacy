#!/usr/bin/env python3
"""M3c-1c: object-by-object dump of the .data.rel.ro sinatra neighborhood.

The region around 0x3fe4e00..0x3fe5200 and 0x3fe5b00..0x3fe5d00 packs vtable
objects and typeinfo objects. Walk it 8 bytes at a time, resolving 0x403
relocs to: code (0x1C00000..0x4000000), typeinfo (has name), name string
(0x13a0000..0x1600000 window), or plain value. Print a coherent map.
"""
import struct
import sys

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc

img = open('/home/z/my-project/download/re-work/m3/m9d_image.bin', 'rb').read()
pd = sc.parse_patch(open('/home/z/my-project/download/re-work/m3/m9d_patch.bin', 'rb').read())
fwd = {}
for r in pd['reloc_a'] + pd['reloc_b']:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']

STR_LO, STR_HI = 0x13a0000, 0x1600000
CODE_LO, CODE_HI = 0x1C00000, 0x4000000


def name_at(a):
    e = img.find(b'\x00', a)
    s = img[a:e]
    return s.decode(errors='replace') if len(s) < 300 else '<long>'


def classify(a, val):
    if val == 0:
        return '0'
    if STR_LO <= val < STR_HI:
        return f'name[{val:#x}]={name_at(val)[:80]!r}'
    if CODE_LO <= val < CODE_HI:
        return f'CODE {val:#x}'
    if (val & 7) == 0 and (val + 8) in fwd:
        # points at something whose +8 has a reloc: maybe typeinfo
        nm_ptr = fwd.get(val + 8)
        if nm_ptr is not None and STR_LO <= nm_ptr < STR_HI:
            return f'TI[{val:#x}]={name_at(nm_ptr)[:60]!r}'
    return f'ptr {val:#x}'


def dump_region(lo, hi, title):
    print(f"\n########## {title} [{lo:#x},{hi:#x}) ##########")
    a = lo
    while a < hi:
        val = fwd.get(a)
        if val is None:
            raw = struct.unpack('<Q', img[a:a + 8])[0]
            if raw:
                print(f"{a:#x}: raw {raw:#x}")
            a += 8
            continue
        print(f"{a:#x}: -> {classify(a, val)}")
        a += 8


if __name__ == '__main__':
    dump_region(0x3fe4e00, 0x3fe5200, 'StreamDecoder family neighborhood')
    dump_region(0x3fe5b00, 0x3fe5d00, 'BQ1597Decoder family neighborhood')
