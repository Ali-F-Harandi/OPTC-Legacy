#!/usr/bin/env python3
"""M3c-13: find code references to specific .rodata strings (adrp+add)."""
import struct
import sys
from collections import defaultdict

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

img = open('/home/z/my-project/download/re-work/m2/9d_module/merged.bin', 'rb').read()
CODE_LO, CODE_HI = 0x1C00000, 0x4000000
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)

TARGETS = {
    0x1329f11: 'vuyWQSjlknpJF54ib36txVse',
    0x1459d58: 'QZbidYS5LulOhQfbXJPVR5FG',
    0x1377000: 'JGcu2DjohFm84viZHe1Et5Qt',
    0x139653d: 'DFGRomanYuki-W9',
}

by_page = defaultdict(list)
for t in TARGETS:
    by_page[t >> 12].append(t)


def sext21(v):
    return v - (1 << 21) if v & (1 << 20) else v


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
        if page not in by_page:
            continue
        rd = w & 0x1F
        for j in range(i + 1, min(i + 6, n)):
            w2 = struct.unpack_from('<I', code, j * 4)[0]
            # ADD imm 64: sf=1 op=0 S=0 100010 sh=0 imm12 Rn Rd
            if (w2 & 0xFFC00000) == 0x91000000:
                imm12 = (w2 >> 10) & 0xFFF
                rn = (w2 >> 5) & 0x1F
                if rn == rd:
                    t = (page << 12) + imm12
                    if t in TARGETS:
                        hits.append((pc, t))
                        break
            if ((w2 >> 5) & 0x1F) == rd and (w2 & 0x9F000000) == 0x90000000:
                break
    return hits


def ctx(site, before=12, after=30):
    a = max(CODE_LO, site - before * 4)
    b = site + after * 4
    out = []
    for ins in md.disasm(img[a:b], a):
        tag = ' <<<' if ins.address == site else ''
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{tag}")
    return '\n'.join(out)


if __name__ == '__main__':
    hits = scan()
    print(f"refs: {len(hits)}")
    for pc, t in hits:
        print(f"\n=== {TARGETS[t]!r} referenced @ {pc:#x} ===")
        print(ctx(pc))
