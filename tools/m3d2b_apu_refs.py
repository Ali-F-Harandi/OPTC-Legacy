#!/usr/bin/env python3
"""M3d-2b: APU table boundaries + all code references to it.

Scans for adrp(+add|ldr) sites that materialize addresses in
[lo, hi) and disassembles around them.
"""
import struct
import sys
from collections import defaultdict

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

RW = "/home/z/my-project/download/re-work"
img = open(f"{RW}/m2/9d_module/merged.bin", "rb").read()
CODE_LO, CODE_HI = 0x1C00000, 0x4000000
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
md.detail = False


def sext21(v):
    return v - (1 << 21) if v & (1 << 20) else v


def refs_to(lo, hi):
    """find adrp+add / adrp+ldr pairs producing an address in [lo, hi)"""
    code = img[CODE_LO:CODE_HI]
    n = len(code) // 4
    hits = []
    for i in range(n):
        w = struct.unpack_from("<I", code, i * 4)[0]
        if (w & 0x9F000000) != 0x90000000:
            continue
        pc = CODE_LO + i * 4
        immlo = (w >> 29) & 3
        immhi = (w >> 5) & 0x7FFFF
        page = ((pc >> 12) + sext21((immhi << 2) | immlo)) & 0xFFFFFFFF
        rd = w & 0x1F
        if not ((page << 12) <= hi and ((page + 1) << 12) > lo):
            # quick page filter (table spans pages; be generous)
            if not (lo >> 12 <= page <= hi >> 12):
                continue
        for j in range(i + 1, min(i + 8, n)):
            w2 = struct.unpack_from("<I", code, j * 4)[0]
            # ldr x?, [rd, #imm]
            if (w2 & 0xFFC00000) == 0xF9400000:
                rn = (w2 >> 5) & 0x1F
                imm12 = ((w2 >> 10) & 0xFFF) << 3
                if rn == rd:
                    a = (page << 12) + imm12
                    if lo <= a < hi:
                        hits.append((pc, a, "ldr"))
                    break
            # add x?, rd, #imm
            if (w2 & 0xFFC00000) == 0x91000000 and ((w2 >> 5) & 0x1F) == rd:
                imm12 = (w2 >> 10) & 0xFFF
                rn2 = (w2 >> 5) & 0x1F
                if rn2 == rd:
                    a = (page << 12) + imm12
                    if lo <= a < hi:
                        hits.append((pc, a, "add"))
                    break
            if ((w2 >> 5) & 0x1F) == rd and (w2 & 0x9F000000) == 0x90000000:
                break
    return hits


def disas(start, n_ins=60, mark=None):
    out = []
    for ins in md.disasm(img[start:start + n_ins * 4], start):
        tag = "  <<<" if mark and ins.address in mark else ""
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{tag}")
    return "\n".join(out)


if __name__ == "__main__":
    lo = int(sys.argv[1], 16)
    hi = int(sys.argv[2], 16)
    hits = refs_to(lo, hi)
    print(f"refs into [{lo:#x},{hi:#x}): {len(hits)}")
    by_addr = defaultdict(list)
    for pc, a, k in hits:
        by_addr[a].append((pc, k))
    for a in sorted(by_addr):
        print(f"  {a:#x}: {[(hex(pc), k) for pc, k in by_addr[a]]}")
