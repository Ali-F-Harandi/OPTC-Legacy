#!/usr/bin/env python3
"""M2: disassemble e3's private container-crypto functions to extract the
exact formula constants that differ from the protector stage-2:

  e3+0x2644  dd70-equivalent container parser   (stage-2: 0xdd70)
  e3+0x297c  entry reader (0x5C blocks)         (stage-2: 0x15f4)
  e3+0x2a68  clmul deobfuscator wrapper         (stage-2: 0x176c)
  e3 stream cipher (0xeb34-equiv): locate via constants
  config/trailer region dump 0x1a1e0..0x1a638

Works on BOTH e3 copies (protector e3_0xe3_merged.bin and game
m2_game_e3_0xe3_image.bin) to confirm code identity + key differences.
"""
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
md.detail = False


def dump(lo, hi, note):
    print(f"\n===== e3[{which}] {note} [{lo:#x},{hi:#x}) =====")
    for ins in md.disasm(img[lo:hi], lo):
        print(f"  {ins.address:#08x}: {ins.mnemonic:10s} {ins.op_str}")


# --- 1) dd70-equivalent parser at +0x2644 ---
dump(0x2644, 0x2870, 'dd70 container parser')

# --- 2) entry reader at +0x297c ---
dump(0x297c, 0x2a68, 'entry reader (0x5C blocks)')

# --- 3) clmul wrapper at +0x2a68 ---
dump(0x2a68, 0x2aa0, 'clmul wrapper')

# --- 4) config / trailer region ---
print(f"\n===== e3[{which}] tail region 0x1a1e0..0x1a638 (u32) =====")
for off in range(0x1a1e0, min(0x1a638, len(img)), 4):
    w = struct.unpack_from('<I', img, off)[0]
    print(f"  {off:#08x}: {w:#010x}")
