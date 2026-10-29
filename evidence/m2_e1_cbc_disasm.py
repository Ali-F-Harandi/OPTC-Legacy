#!/usr/bin/env python3
"""M2: disassemble e1+0x820c — the AES-CBC driver e3 borrows via the registry.
Check: IV convention, block count, table location, key schedule use."""
import struct
from capstone import *

EV = '/home/z/my-project/download/re-work/repo/evidence'
img = open(f'{EV}/m2_game_e1_0x96_image.bin', 'rb').read()
print(f"game e1: {len(img):#x} B")
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def dump(lo, hi, note):
    print(f"\n===== e1[game] {note} [{lo:#x},{hi:#x}) =====")
    for ins in md.disasm(img[lo:hi], lo):
        print(f"  {ins.address:#08x}: {ins.mnemonic:10s} {ins.op_str}")


dump(0x820c, 0x8400, 'CBC driver 0x820c')

# does e1 carry AES Td tables? search for the standard Td0 first word 0x51F4A750
TD0_FIRST = struct.pack('<I', 0x51F4A750)
pos = img.find(TD0_FIRST)
print(f"\nstandard Td0[0]=0x51F4A750 found at: {pos:#x}" if pos >= 0 else "\nstandard Td0 NOT found in e1")
# also search big-endian
pos2 = img.find(struct.pack('>I', 0x51F4A750))
print(f"big-endian Td0[0] found at: {pos2:#x}" if pos2 >= 0 else "big-endian Td0[0] not found")
