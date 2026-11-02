#!/usr/bin/env python3
"""M3c-2: exact RTTI walk on the SHIPPED libgame.so ELF.

The shipped .so carries the full .data.rel.ro with real RELATIVE relocs
(the restored 0x9d image only overlays the CODE). We parse:
  * .rela.dyn R_AARCH64_RELATIVE (1027): vaddr -> addend
  * typeinfo objects:  {vptr, name*, base*}  (si) / {vptr, name*, flags,
    count, bases[]} (vmi)
and build the exact class DAG for the sinatra/NTY families:
  Data::BQ15915BQ159ReadStream, Data::BQ1597Decoder, Data::NtyReader,
  IO::Stream, and every subclass.

Method bodies are disassembled from the restored 0x9d image (merged.bin,
offset == vaddr) where needed.
"""
import struct
import sys
from collections import defaultdict

from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = '/home/z/my-project/download/re-work/apk/arm64_x/lib/arm64-v8a/libgame.so'
IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'

so = open(SO, 'rb').read()
img = open(IMG, 'rb').read()

elf = ELFFile(open(SO, 'rb'))


def vaddr_to_off(v):
    for seg in elf.iter_segments():
        if seg['p_type'] != 'PT_LOAD':
            continue
        va = seg['p_vaddr']
        if va <= v < va + seg['p_filesz']:
            return seg['p_offset'] + (v - va)
    return None


def read(v, n):
    o = vaddr_to_off(v)
    if o is None:
        return None
    return so[o:o + n]


def cstr(v):
    o = vaddr_to_off(v)
    if o is None:
        return None
    e = so.find(b'\x00', o)
    return so[o:e].decode(errors='replace')


# ---- all RELATIVE relocs: vaddr -> addend ----
rel = {}
for sec in elf.iter_sections():
    if sec.header['sh_type'] in ('SHT_RELA',):
        for r in sec.iter_relocations():
            if r['r_info_type'] == 1027:  # R_AARCH64_RELATIVE
                rel[r['r_offset']] = r['r_addend']
print(f"RELATIVE relocs: {len(rel)}")

# ---- locate typeinfo objects ----
# A typeinfo object: ti+8 has a reloc to a mangled name in .rodata.
# Distinguish si (ti+16 -> another ti) via the vptr identity.
TI_VPTRS = {}  # vptr value -> kind   (resolve after seeing common values)


def is_ti(ti):
    nm = rel.get(ti + 8)
    if nm is None:
        return None
    s = cstr(nm)
    if not s or not (len(s) > 2):
        return None
    if not (s[0] in 'N0123456789St' or s[0].isalpha()):
        return None
    # sanity: mangled names end with E if they start with N
    if s.startswith('N') and not s.endswith('E'):
        return None
    return s


tis = {}
for dst in rel:
    if dst & 7:
        continue
    ti = dst - 8
    nm = is_ti(ti)
    if nm:
        tis[ti] = nm
print(f"typeinfo objects: {len(tis)}")

# ---- classify si vs vmi and build parent edges ----
parents = defaultdict(list)
for ti, nm in tis.items():
    base = rel.get(ti + 16)
    if base is not None and base in tis:
        parents[ti].append(base)
    else:
        # vmi? base-array ptr at ti+16, count at ti+24
        cnt_raw = read(ti + 24, 4)
        if cnt_raw is not None:
            cnt = struct.unpack('<I', cnt_raw)[0]
            if 0 < cnt <= 8:
                arr = rel.get(ti + 16)
                ok = True
                for k in range(cnt):
                    b = rel.get(arr + 16 * k)
                    if b is None or b not in tis:
                        ok = False
                        break
                    parents[ti].append(b)
                if not ok:
                    parents[ti] = parents[ti][:0]

# ---- vtables: reloc dst (vt+8) -> ti ----
vts = defaultdict(list)
for dst, val in rel.items():
    if (dst & 7) == 0 and val in tis and (dst - 8) not in tis:
        # dst-8 = vtable start (its +8 slot points at ti)
        vts[val].append(dst - 8)


def ancestry(ti):
    out, stack = set(), [ti]
    while stack:
        t = stack.pop()
        for p in parents.get(t, []):
            if p not in out:
                out.add(p)
                stack.append(p)
    return out


def demangle_hint(nm):
    """Very rough: strip N..E nesting for display."""
    return nm


md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def disas(addr, n=40):
    if addr >= len(img):
        return '  <beyond restored image>'
    out = []
    for ins in md.disasm(img[addr:addr + n * 4 + 32], addr):
        out.append(f"  {ins.address:#x}: {ins.mnemonic:<8} {ins.op_str}")
        if len(out) >= n:
            break
    return '\n'.join(out)


def family(root_name):
    roots = [ti for ti, nm in tis.items() if nm == root_name]
    for root in roots:
        fam = sorted([t for t in tis if root in ancestry(t)] + [root])
        print(f"\n{'='*74}\n### family {root_name}  ti={root:#x}: {len(fam)} classes")
        for ti in fam:
            bases = [tis.get(b, hex(b)) for b in parents.get(ti, [])]
            print(f"\n-- {tis[ti]}")
            print(f"   ti {ti:#x}  bases={bases}")
            for vt in sorted(vts.get(ti, [])):
                slots = []
                a = vt + 0x10
                while a in rel:
                    slots.append(rel[a])
                    a += 8
                print(f"   vtable {vt:#x} ({len(slots)} slots): " +
                      ' '.join(f'{s:#x}' for s in slots))
    return roots


if __name__ == '__main__':
    # What are the typeinfo vptrs (0x417aa90 / 0x417aae0)?
    for v in (0x417aa90, 0x417aae0):
        # a reloc AT this vaddr? or is it a target?
        n = sum(1 for t in rel.values() if t == v)
        print(f"0x{v:#x}: used as reloc addend {n} times")
    for rn in ('N10bisqueBase4Data5BQ15915BQ159ReadStreamE',
               'N10bisqueBase4Data5BQ1597DecoderE',
               'N10bisqueBase4Data9NtyReaderE',
               'N10bisqueBase2IO6StreamE'):
        family(rn)
