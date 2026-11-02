#!/usr/bin/env python3
"""M3c-6: PLT stub resolver (shipped .so stubs + patch GOT relocs).

.plt stub (16 B) in the shipped libgame.so PT_LOAD1 (offset==vaddr):
    adrp x16, <got page> ; ldr x17,[x16,#off] ; add x16,x16,#off ; br x17
GOT slot value = 0x403 reloc addend from the 0x9d patch (the game's own
preemptible functions), or an Android import (slot in .got.plt region with
dynsym via .rela.plt).

Usage:  python3 m3c_plt.py <stub_addr> [<stub_addr> ...]
        python3 m3c_plt.py --bl <caller_addr>   # resolve bl targets around
"""
import struct
import sys

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc
from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = '/home/z/my-project/download/re-work/apk/arm64_x/lib/arm64-v8a/libgame.so'
PATCH = '/home/z/my-project/download/re-work/m3/m9d_patch.bin'
IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'

so = open(SO, 'rb').read()
elf = ELFFile(open(SO, 'rb'))
img = open(IMG, 'rb').read()

# patch relocs: 0x403 -> addend
fwd = {}
for r in sc.parse_patch(open(PATCH, 'rb').read())['reloc_a'] + \
        sc.parse_patch(open(PATCH, 'rb').read())['reloc_b']:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']

# .rela.plt: GOT slot -> import symbol name
plt_syms = {}
dynsym = None
for sec in elf.iter_sections():
    if sec.header['sh_type'] == 'SHT_DYNSYM':
        dynsym = sec
if dynsym:
    for sec in elf.iter_sections():
        if sec.header['sh_type'] == 'SHT_RELA' and sec.header['sh_info'] != 0:
            for r in sec.iter_relocations():
                sym_idx = r['r_info_sym']
                if sym_idx:
                    plt_syms[r['r_offset']] = dynsym.get_symbol(sym_idx).name


def stub_got(addr):
    """Decode a .plt stub at vaddr==offset addr -> GOT slot."""
    w0, w1 = struct.unpack_from('<II', so, addr)
    if (w0 & 0x9F000000) != 0x90000000:
        return None
    immlo = (w0 >> 29) & 3
    immhi = (w0 >> 5) & 0x7FFFF
    imm = (immhi << 2) | immlo
    if imm & (1 << 20):
        imm -= 1 << 21
    page = ((addr >> 12) + imm) << 12
    rd = w0 & 0x1F
    if (w1 & 0xFFC00000) != 0xF9400000:
        return None
    rn = (w1 >> 5) & 0x1F
    if rn != rd:
        return None
    off = ((w1 >> 10) & 0xFFF) << 3
    return page + off


def resolve(addr):
    got = stub_got(addr)
    if got is None:
        return ('not-a-stub', None)
    if got in fwd:
        return ('game', fwd[got])
    if got in plt_syms:
        return ('import', plt_syms[got])
    return ('unresolved-got', got)


md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def show_bl(caller, span=40):
    """Disassemble around caller and annotate bl/b targets."""
    a = caller
    for ins in md.disasm(img[a:a + span * 4], a):
        note = ''
        if ins.mnemonic in ('bl', 'b') and ins.op_str.startswith('#'):
            t = int(ins.op_str[1:], 16)
            if 0x3F0B230 <= t < 0x3FB93C0:
                kind, val = resolve(t)
                note = f'   ; PLT->{kind} {val if isinstance(val,str) else hex(val) if val else "?"}'
        print(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}{note}")


if __name__ == '__main__':
    args = sys.argv[1:]
    if args and args[0] == '--bl':
        show_bl(int(args[1], 16))
    else:
        for a in args:
            print(f"{int(a,16):#x}: {resolve(int(a,16))}")
