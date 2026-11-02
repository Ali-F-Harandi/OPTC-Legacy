#!/usr/bin/env python3
"""M3c-7: build the FULL PLT stub->target map (plt.tsv) once, then locate
callers of given game functions.

Output: /home/z/my-project/download/re-work/m3/plt.tsv
    <stub_hex> <kind> <target_hex_or_name>

Also: --callers <func_addr>  → find bl sites that reach <func_addr>
      (either direct bl or via its PLT stub).
"""
import struct
import sys
from collections import defaultdict

sys.path.insert(0, str(__import__('pathlib').Path(__file__).resolve().parent))
import stage2_crypto as sc
from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = '/home/z/my-project/download/re-work/apk/arm64_x/lib/arm64-v8a/libgame.so'
PATCH = '/home/z/my-project/download/re-work/m3/m9d_patch.bin'
IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
OUT = '/home/z/my-project/download/re-work/m3/plt.tsv'

PLT_LO, PLT_HI = 0x3F0B230, 0x3FB93C0
CODE_LO, CODE_HI = 0x1C00000, 0x4000000

so = open(SO, 'rb').read()
elf = ELFFile(open(SO, 'rb'))
img = open(IMG, 'rb').read()

_patch = sc.parse_patch(open(PATCH, 'rb').read())
fwd = {}
for r in _patch['reloc_a'] + _patch['reloc_b']:
    if r['type'] == 0x403:
        fwd[r['dst']] = r['val']

plt_syms = {}
dynsym = None
for sec in elf.iter_sections():
    if sec.header['sh_type'] == 'SHT_DYNSYM':
        dynsym = sec
if dynsym:
    for sec in elf.iter_sections():
        if sec.header['sh_type'] == 'SHT_RELA':
            for r in sec.iter_relocations():
                si = r['r_info_sym']
                if si and r['r_info_type'] in (1025, 1026):  # GLOB_DAT/JUMP_SLOT
                    plt_syms[r['r_offset']] = dynsym.get_symbol(si).name


def stub_got(addr):
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
    if (w1 & 0xFFC00000) != 0xF9400000 or ((w1 >> 5) & 0x1F) != rd:
        return None
    return page + (((w1 >> 10) & 0xFFF) << 3)


def build():
    rows = []
    a = PLT_LO
    while a + 16 <= PLT_HI:
        got = stub_got(a)
        if got is None:
            a += 4
            continue
        if got in fwd:
            rows.append((a, 'game', fwd[got]))
        elif got in plt_syms:
            rows.append((a, 'import', plt_syms[got]))
        else:
            rows.append((a, 'dyn', got))
        a += 16
    with open(OUT, 'w') as f:
        for s, k, t in rows:
            tt = t if isinstance(t, str) else f'{t:x}'
            f.write(f'{s:x}\t{k}\t{tt}\n')
    print(f"plt.tsv: {len(rows)} stubs -> {OUT}")
    return rows


def load():
    rows = []
    for line in open(OUT):
        s, k, t = line.rstrip('\n').split('\t')
        try:
            tv = int(t, 16)
        except ValueError:
            tv = t
        rows.append((int(s, 16), k, tv))
    return rows


def callers(func):
    rows = load()
    stubs = [s for s, k, t in rows if t == func and k == 'game']
    print(f"PLT stubs for {func:#x}: {[hex(s) for s in stubs]}")
    targets = set(stubs) | {func}
    # scan restored image for bl/b to those addresses
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    code = img[CODE_LO:CODE_HI]
    sites = []
    for i in range(len(code) // 4):
        w = struct.unpack_from('<I', code, i * 4)[0]
        # BL: 100101 imm26 ; B: 000101 imm26
        is_bl = (w & 0xFC000000) == 0x94000000
        is_b = (w & 0xFC000000) == 0x14000000
        if not (is_bl or is_b):
            continue
        imm = w & 0x3FFFFFF
        if imm & (1 << 25):
            imm -= 1 << 26
        pc = CODE_LO + i * 4
        t = pc + imm * 4
        if t in targets:
            sites.append((pc, t, 'bl' if is_bl else 'b'))
    return sites


if __name__ == '__main__':
    if sys.argv[1] == '--callers':
        for pc, t, k in callers(int(sys.argv[2], 16)):
            print(f"  {pc:#x}: {k} -> {t:#x}")
    else:
        build()
