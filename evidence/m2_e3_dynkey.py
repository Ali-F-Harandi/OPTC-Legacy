#!/usr/bin/env python3
"""M2: (a) find all WRITES to e3's stream-key global [0x1a2f8] and related
config globals; (b) resolve the CBC driver's registry descriptor PTR_LAB_00019ee0."""
import struct
from capstone import *

EV = '/home/z/my-project/download/re-work/repo/evidence'
img = open(f'{EV}/m2_game_e3_0xe3_image.bin', 'rb').read()
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)

code_lo, code_hi = 0x1000, 0x11000
insns = list(md.disasm(img[code_lo:code_hi], code_lo))
print(f"{len(insns)} instructions in [{code_lo:#x},{code_hi:#x})")

# track adrp registers -> page; find str/ldr with offset 0x2f8 (page 0x1a000)
# and any store to the config region 0x1a1e0..0x1a330
pages = {}
print("\n=== accesses to [0x1a2f8] and the config trailer region ===")
for i, ins in enumerate(insns):
    if ins.mnemonic == 'adrp':
        try:
            rd, imm = [p.strip() for p in ins.op_str.split(',')]
            pages[rd] = int(imm.strip('#'), 0)
        except ValueError:
            pass
    elif ins.mnemonic in ('ldr', 'str', 'ldrb', 'strb', 'ldrh', 'strh') and '[' in ins.op_str:
        m = ins.op_str.split('[')
        if len(m) < 2:
            continue
        base = m[1].split(',')[0].strip()
        if base not in pages:
            continue
        page = pages[base]
        if '#' not in ins.op_str:
            continue
        try:
            off_s = ins.op_str.split('#')[1].rstrip(']').split(',')[0].strip()
            off = int(off_s, 0)
        except (ValueError, IndexError):
            continue
        addr = page + off
        if addr in (0x1a2f8, 0x1a2fc, 0x1a300, 0x1a1f0, 0x1a1f8) or 0x1a2f0 <= addr <= 0x1a310:
            print(f"  {ins.address:#08x}: {ins.mnemonic:5s} {ins.op_str:40s} -> [{addr:#x}]")

# resolve PTR_LAB_00019ee0 -> descriptor {u32 id; u32 offset}
print("\n=== registry descriptors around 0x19ee0 ===")
for g in range(0x19e00, 0x19f00, 8):
    ptr = struct.unpack_from('<Q', img, g)[0]
    if ptr and ptr + 8 <= len(img):
        did, doff = struct.unpack_from('<II', img, ptr)
        if did and doff:
            print(f"  global {g:#x} -> ptr {ptr:#x}: id={did:#x} fn_off={doff:#x}")

# find which functions use 0x19ee0
print("\n=== users of global 0x19ee0 (the CBC descriptor) ===")
pages = {}
for i, ins in enumerate(insns):
    if ins.mnemonic == 'adrp':
        try:
            rd, imm = [p.strip() for p in ins.op_str.split(',')]
            pages[rd] = int(imm.strip('#'), 0)
        except ValueError:
            pass
    elif ins.mnemonic in ('ldr', 'add') and '[' in ins.op_str or (ins.mnemonic == 'add' and 'x' in ins.op_str):
        for reg, page in pages.items():
            if reg in ins.op_str:
                # crude: check if this computes 0x19ee0
                pass
# simpler: dump around 0x42a8's lookup
print("\n=== FUN_000042a8 (CBC wrapper) disasm ===")
for ins in md.disasm(img[0x42a8:0x42f0], 0x42a8):
    print(f"  {ins.address:#08x}: {ins.mnemonic:10s} {ins.op_str}")
