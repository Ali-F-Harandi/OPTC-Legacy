#!/usr/bin/env python3
"""M2: disassemble e3's real blob extractor FUN_00002d34 (dd70 equivalent)
and locate the stream cipher + AES-CBC functions via their constants."""
import struct
import sys
from capstone import *

EV = '/home/z/my-project/download/re-work/repo/evidence'
IMGS = {
    'protector_e3': f'{EV}/e3_0xe3_merged.bin',
    'game_e3': f'{EV}/m2_game_e3_0xe3_image.bin',
}

which = sys.argv[1] if len(sys.argv) > 1 else 'game_e3'
img = open(IMGS[which], 'rb').read()
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def dump(lo, hi, note):
    print(f"\n===== e3[{which}] {note} [{lo:#x},{hi:#x}) =====")
    for ins in md.disasm(img[lo:hi], lo):
        print(f"  {ins.address:#08x}: {ins.mnemonic:10s} {ins.op_str}")


# real extractor called from 0x2644 wrapper
dump(0x2d34, 0x3100, 'blob extractor FUN_00002d34')
dump(0x3100, 0x3468, 'blob extractor FUN_00002d34 (cont)')
