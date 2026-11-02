#!/usr/bin/env python3
"""M3c-5: vtable references via GOT slots.

Code pattern (PIC, -fPIC with GOT indirection):
    adrp x8, <GOT page>
    ldr  x8, [x8, #<GOT off>]     ; GOT slot holds vtable symbol (vt+0x10)
    add  x8, x8, #0x10            ; (sometimes folded)
    str  x8, [obj]

Step 1: GOT slot for each family vtable symbol = patch reloc dst whose
        0x403 addend == vt+0x10.
Step 2: scan .text for adrp(page) + ldr(off) matching those slots.
"""
import struct
import sys
from collections import defaultdict

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc

img = open('/home/z/my-project/download/re-work/m2/9d_module/merged.bin', 'rb').read()
pd = sc.parse_patch(open('/home/z/my-project/download/re-work/m3/m9d_patch.bin', 'rb').read())
fwd = {}
for r in pd['reloc_a'] + pd['reloc_b']:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']

TARGETS = {
    0x3fe4e30: 'BQ15915BQ159ReadStream',
    0x3fe5cf0: 'BQ15927SeqnentialDecodeStream',
    0x414a600: 'NtyReader::NtyInnnerFDS',
    0x414a548: 'IO::Private::ClipStream',
    0x414b6d0: 'IO::BinaryStream',
    0x414b958: 'IO::Impl::BQFileStream_Android',
    0x414a4e8: 'Data::NtyReader',
    0x414a6a8: 'NtyObservFDS(a)',
    0x414a760: 'NtyObservFDS(b)',
    0x3fe4fa0: 'BQ15913StreamDecoder',
    0x3fe4f48: 'BQ15918StreamDecoderPlane',
    0x3fe5038: 'BQ15921AbstractStreamDecoder',
    0x3fe4fd0: 'BQ15916StreamDecoder159',
    0x3fe5070: 'BQ15916StreamDecoder144',
    0x3fe50c0: 'BQ15916StreamDecoder40SE',
    0x3fe5c08: 'BQ1597Decoder',
    0x3fe5c30: 'BQ15910Decoder159',
    0x3fe5c70: 'BQ15910Decoder144',
    0x3fe5cb0: 'BQ15910Decoder40SE',
    0x3fe5bb8: 'BQ15912DecoderPlane',
}

# step 1: GOT slots per vtable symbol (GOT holds the vtable OBJECT start;
# code adds #0x10 itself — sometimes the +0x10 is folded into the reloc)
got_slot = {}          # slot vaddr -> class label
for vt, name in TARGETS.items():
    for dst, val in fwd.items():
        if val == vt:
            got_slot[dst] = name
        elif val == vt + 0x10:
            got_slot[dst] = name + '+0x10'
print("GOT slots for family vtables:")
for s in sorted(got_slot):
    print(f"  {s:#x} -> {got_slot[s]}")

slot_by_page = defaultdict(list)
for s in got_slot:
    slot_by_page[s >> 12].append(s)   # key = page NUMBER (adrp result >> 12)

CODE_LO, CODE_HI = 0x1C00000, 0x4000000


def sext21(v):
    return v - (1 << 21) if v & (1 << 20) else v


md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def scan():
    hits = []
    code = img[CODE_LO:CODE_HI]
    n = len(code) // 4
    for i in range(n):
        w = struct.unpack_from('<I', code, i * 4)[0]
        if (w & 0x9F000000) != 0x90000000:
            continue
        pc = CODE_LO + i * 4
        immlo = (w >> 29) & 3
        immhi = (w >> 5) & 0x7FFFF
        page = ((pc >> 12) + sext21((immhi << 2) | immlo)) & 0xFFFFFFFF
        if page not in slot_by_page:
            continue
        rd = w & 0x1F
        # look ahead for: ldr xM, [xRd, #off]  (LDR immediate unsigned 64)
        for j in range(i + 1, min(i + 5, n)):
            w2 = struct.unpack_from('<I', code, j * 4)[0]
            # LDR (imm, 64-bit): 11 111 0 01 01 imm12 Rn Rt
            if (w2 & 0xFFC00000) == 0xF9400000:
                rn = (w2 >> 5) & 0x1F
                rt = w2 & 0x1F
                imm12 = ((w2 >> 10) & 0xFFF) << 3
                if rn == rd:
                    slot = (page << 12) + imm12   # page<<12 = page address
                    if slot in got_slot:
                        hits.append((pc, slot, rt))
                        break
            # stop if rd is clobbered by another adrp/add on same reg
            if ((w2 >> 5) & 0x1F) == rd and (w2 & 0x9F000000) == 0x90000000:
                break
    return hits


def ctx(site, before=8, after=30):
    a = max(CODE_LO, site - before * 4)
    b = site + after * 4
    out = []
    for ins in md.disasm(img[a:b], a):
        tag = ' <<<' if ins.address == site else ''
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{tag}")
    return '\n'.join(out)


if __name__ == '__main__':
    hits = scan()
    print(f"\ntotal GOT-load vtable refs: {len(hits)}")
    for site, slot, rt in hits:
        print(f"\n=== {got_slot[slot]}  gotslot={slot:#x}  site={site:#x} (x{rt}) ===")
        print(ctx(site))
