#!/usr/bin/env python3
"""M2c: test data1.dat / f3 / e2 as e3-FORMAT second-level containers.

e3 container format (from game-e3 disasm, offsets +0x2870 head, +0x297c entry):
    head (8 B at base): {w0, w1}
    seed      = ((id*0x9D323CD7) << (id&0xB)) + ((id*0x9D323CD7) >> (id&7))  mod 2^32
    magic     = deob(w0 + 0xCBF0C1D8) ^ (seed + 0x4178CB33)
    countword = deob(w0 + w1)     ^ (seed + 0xF119421B)
    head_g    = seed + 0x5590AD79 + countword     (-> global [0x1a314])
    entries: count x 0x5C at base+8, per dword j:
      dec[j] = (0x79934CF6 + j*0xE64D33D8) + head_g + (deob(raw ^ (C2>>3)) ^ eshift)
               - (m2 >> ((4j+3) & 5))
      C2 = 0xF02F7685^2 mod 2^32
      eshift = ((head_g + 0x96F60B71) * head_g) << ((index+1) & 3)
      m2 = head_g*0x06A55BCC + (head_g + 0x96F60B71)*head_g
Oracle: magic ~ file size (or 0x1000000-ish), count sane (1..0x100), and
first entry decodes to {id, flags, src_off, src_size...} with sane fields.
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import clmul32, M32

C2 = (0xF02F7685 * 0xF02F7685) & M32
C2S3 = C2 >> 3


def deob(v):
    return clmul32(0x94511DD2, v & M32)


def seed_of(iD):
    p = (iD * 0x9D323CD7) & M32
    return ((p << (iD & 0xB)) & M32) + (p >> (iD & 7)) & M32


def head_decode(w0, w1, iD):
    s = seed_of(iD)
    magic = deob((w0 + 0xCBF0C1D8) & M32) ^ ((s + 0x4178CB33) & M32)
    countword = deob((w0 + w1) & M32) ^ ((s + 0xF119421B) & M32)
    head_g = (s + 0x5590AD79 + countword) & M32
    return magic & M32, countword & M32, head_g & M32


def entry_decode(raw23, head_g, index):
    eshift = ((((head_g + 0x96F60B71) & M32) * head_g) & M32) << ((index + 1) & 3)
    eshift &= M32
    m2 = (head_g * 0x06A55BCC + (((head_g + 0x96F60B71) & M32) * head_g)) & M32
    out = []
    prev = 0xF02F7685                # chained square seed (loop-head w0)
    for j in range(23):
        raw = raw23[j]
        sq = (prev * prev) & M32     # w0 = prev raw (or the constant at j=0); squared
        v = deob(raw ^ (sq >> 3)) ^ eshift
        v = (0x79934CF6 + j * 0xE64D33D8 + head_g + v) & M32
        v = (v - (m2 >> ((4 * j + 3) & 5))) & M32
        out.append(v)
        prev = raw
    return out


def probe(name, data, base_off=0):
    print(f"\n===== {name} (base+{base_off:#x}, {len(data)-base_off} B) =====")
    w0, w1 = struct.unpack_from('<2I', data, base_off)
    results = []
    for iD in range(1, 0xE3):
        magic, cw, hg = head_decode(w0, w1, iD)
        count = cw & 0xFF
        flags = (cw >> 8) & 0xFF
        # sanity: count small, magic in a sane range
        if 1 <= count <= 0x80 and (magic == len(data) - base_off or magic == len(data) or
                                   0x100 <= magic <= 0x8000000):
            results.append((iD, magic, count, flags, cw, hg))
    for iD, magic, count, flags, cw, hg in results:
        fsz = len(data) - base_off
        mark = ' <== SIZE MATCH' if magic in (fsz, fsz - 8, len(data)) else ''
        print(f"  id={iD:#04x}: magic={magic:#010x} count={count:3d} flags={flags:#04x}"
              f" cw={cw:#010x} hg={hg:#010x}{mark}")
        # decode first entry
        eoff = base_off + 8
        if count >= 1 and eoff + 0x5C <= len(data):
            raw23 = struct.unpack_from('<23I', data, eoff)
            dec = entry_decode(raw23, hg, 0)
            print(f"        entry[0]: id={dec[0]:#x} flags={dec[1]:#x} src_off={dec[2]:#x}"
                  f" src_size={dec[3]:#x} dst_off={dec[4]:#x} dst_size={dec[5]:#x}"
                  f" f7={dec[7]:#x} f8={dec[8]:#x}")
            sane = (1 <= dec[0] <= 0xFFFF and dec[2] + dec[3] <= len(data) - base_off
                    and dec[3] < len(data))
            print(f"        entry sane: {sane}")
    if not results:
        print("  no sane decodings")


# the candidates
D1 = '/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat'
d1 = open(D1, 'rb').read()
f3 = open('/home/z/my-project/download/re-work/m2/game_modules/f3_raw_0xf3.bin', 'rb').read()
so = open('/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so', 'rb').read()
e2 = so[0x9B1EC + 0x14fdc:0x9B1EC + 0x14fdc + 0xec884]

probe('data1.dat [0:]', d1, 0)
probe('data1.dat [4:]', d1, 4)
probe('f3', f3, 0)
probe('e2 [0:]', e2, 0)
probe('e2 [4:]', e2, 4)
