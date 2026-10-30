#!/usr/bin/env python3
"""M3c-4: find every code site that materializes a sinatra-family vtable
address (adrp + add pairs) — these sites are the constructors / factory
sites of the decoder objects, i.e. where the KEY argument is passed.

Scan is done on raw 4-byte words (ADRP bit pattern), then verified locally
with Capstone (add/ldr-offset forms).
"""
import struct
import sys

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
img = open(IMG, 'rb').read()
CODE_LO, CODE_HI = 0x1C00000, 0x4000000

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)

# vtable object starts (address of offset-to-top slot) for the family
TARGETS = {
    0x3fe4e30: 'BQ15915BQ159ReadStream.vt',
    0x3fe5cf0: 'BQ15927SeqnentialDecodeStream.vt',
    0x414a600: 'NtyReader::NtyInnnerFDS.vt',
    0x414a548: 'IO::Private::ClipStream.vt',
    0x414b6d0: 'IO::BinaryStream.vt',
    0x414b958: 'IO::Impl::BQFileStream_Android.vt',
    0x414a4e8: 'Data::NtyReader.vt',
    0x414a6a8: 'NtyObservFDS.vt(a)',
    0x414a760: 'NtyObservFDS.vt(b)',
    0x3fe4fa0: 'BQ15913StreamDecoder.vt',
    0x3fe4f48: 'BQ15918StreamDecoderPlane.vt',
    0x3fe5038: 'BQ15921AbstractStreamDecoder.vt',
    0x3fe4fd0: 'BQ15916StreamDecoder159.vt',
    0x3fe5070: 'BQ15916StreamDecoder144.vt',
    0x3fe50c0: 'BQ15916StreamDecoder40SE.vt',
    0x3fe5c08: 'BQ1597Decoder.vt',
    0x3fe5c30: 'BQ15910Decoder159.vt',
    0x3fe5c70: 'BQ15910Decoder144.vt',
    0x3fe5cb0: 'BQ15910Decoder40SE.vt',
    0x3fe5bb8: 'BQ15912DecoderPlane.vt',
}
# code references the vtable SYMBOL = vt+0x10 (first method slot)
TGT = {t + 0x10: n for t, n in TARGETS.items()}

pages = {}
for t in TGT:
    pages.setdefault(t >> 12, []).append(t)


def sext21(v):
    return v - (1 << 21) if v & (1 << 20) else v


def scan():
    hits = []   # (site, target)
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
        if page not in pages:
            continue
        for t in pages[page]:
            off = t & 0xFFF
            # verify: following add Rd,Rd,#off  (or ldr with the same page)
            j = i + 1
            verified = None
            while j < min(i + 6, n):
                w2 = struct.unpack_from('<I', code, j * 4)[0]
                # ADD (immediate) 64-bit: sf=1 op=0 S=0 100010 sh=0 imm12 Rn Rd
                if (w2 & 0x9F000000) == 0x91000000:
                    imm12 = (w2 >> 10) & 0xFFF
                    rn = (w2 >> 5) & 0x1F
                    rd = w2 & 0x1F
                    rd_adrp = w & 0x1F
                    if rn == rd_adrp and imm12 == off:
                        verified = ('add', rd)
                        break
                j += 1
            if verified:
                hits.append((pc, t, verified))
    return hits


def ctx(site, before=6, after=26):
    a = site - before * 4
    b = site + after * 4
    out = []
    for ins in md.disasm(img[a:b], a):
        tag = ' <<<' if ins.address == site else ''
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{tag}")
    return '\n'.join(out)


if __name__ == '__main__':
    hits = scan()
    print(f"total adrp+add vtable refs: {len(hits)}")
    for site, t, how in hits:
        print(f"\n=== {TGT[t]}  @ {site:#x}  ({how[0]} x{how[1]}) ===")
        print(ctx(site))
