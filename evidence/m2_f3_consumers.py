#!/usr/bin/env python3
"""M2: find device-0xf3 registry lookups (the e2/game-code blob consumers) in
e1, e3, and the stage-2 — the lookups pass id as an immediate (movz w0, #0xf3)."""
import struct
from capstone import *

EV = '/home/z/my-project/download/re-work/repo/evidence'
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def find_f3_lookups(img, lo, hi, label, lookup_fns):
    insns = list(md.disasm(img[lo:hi], lo))
    hits = []
    for i, ins in enumerate(insns):
        if ins.mnemonic in ('mov', 'movz') and ins.op_str.replace(' ', '') in (
                'w0,#0xf3', 'w0,#243', 'w1,#0xf3', 'w1,#243', 'w2,#0xf3', 'w2,#243'):
            # look ahead for a bl to a lookup fn within 12 insns
            for j in range(i + 1, min(i + 13, len(insns))):
                p = insns[j]
                if p.mnemonic == 'bl':
                    try:
                        t = int(p.op_str.strip('#'), 0)
                    except ValueError:
                        break
                    if t in lookup_fns:
                        hits.append((ins.address, t))
                    break
                if p.mnemonic in ('mov', 'movz') and '#0xf3' not in p.op_str and p.op_str.split(',')[0] in ('w0', 'w1', 'w2'):
                    break
    print(f"===== {label}: {len(hits)} x 0xf3 lookups =====")
    for a, t in hits:
        print(f"  mov #@{a:#x} -> lookup {t:#x}")
    return hits


# e3 lookup fns: 0x5af4 (descriptor lookup) / 0x5b2c (raw scan?) / 0x5ae8 (getter)
find_f3_lookups(open(f'{EV}/e3_0xe3_merged.bin', 'rb').read(), 0x1000, 0x18000,
                'protector e3', {0x5af4, 0x5b2c, 0x5ae8})
find_f3_lookups(open(f'{EV}/m2_game_e3_0xe3_image.bin', 'rb').read(), 0x1000, 0x18000,
                'game e3', {0x5af4, 0x5b2c, 0x5ae8})
# e1 lookup fns: 0xe694 (descriptor lookup) / 0xe6cc (raw scan) / 0xe688 (getter)
find_f3_lookups(open(f'{EV}/e1_0x96_merged.bin', 'rb').read(), 0x2000, 0x1a000,
                'protector e1', {0xe694, 0xe6cc, 0xe688})
find_f3_lookups(open(f'{EV}/m2_game_e1_0x96_image.bin', 'rb').read(), 0x2000, 0x1a000,
                'game e1', {0xe694, 0xe6cc, 0xe688})
# stage-2: registry register 0xf90c / accessor?
find_f3_lookups(open('/home/z/my-project/download/re-work/m1b/7ffe-payload.dec', 'rb').read(),
                0x400, 0x10500, 'protector stage-2', {0xf90c, 0xfa20, 0xf9a8})
