#!/usr/bin/env python3
"""M3c-8: find all code sites that load a given GOT slot (adrp+ldr),
optionally filtering for stores into it (initializers)."""
import struct
import sys
from collections import defaultdict

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
img = open(IMG, 'rb').read()
CODE_LO, CODE_HI = 0x1C00000, 0x4000000
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def sext21(v):
    return v - (1 << 21) if v & (1 << 20) else v


def got_sites(slots):
    by_page = defaultdict(set)
    for s in slots:
        by_page[s >> 12].add(s)
    code = img[CODE_LO:CODE_HI]
    n = len(code) // 4
    hits = []
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
            if (w2 & 0xFFC00000) == 0xF9400000:
                rn = (w2 >> 5) & 0x1F
                imm12 = ((w2 >> 10) & 0xFFF) << 3
                if rn == rd:
                    slot = (page << 12) + imm12
                    if slot in by_page[page]:
                        hits.append((pc, slot, w2 & 0x1F))
                        break
            if ((w2 >> 5) & 0x1F) == rd and (w2 & 0x9F000000) == 0x90000000:
                break
    return hits


def ctx(site, before=10, after=34):
    a = max(CODE_LO, site - before * 4)
    b = site + after * 4
    out = []
    for ins in md.disasm(img[a:b], a):
        tag = ' <<<' if ins.address == site else ''
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{tag}")
    return '\n'.join(out)


if __name__ == '__main__':
    slots = [int(x, 16) for x in sys.argv[1:]]
    hits = got_sites(slots)
    print(f"sites: {len(hits)}")
    for pc, slot, rt in hits:
        print(f"\n=== slot {slot:#x} loaded at {pc:#x} (into x{rt}) ===")
        print(ctx(pc))
