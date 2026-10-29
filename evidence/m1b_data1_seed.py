#!/usr/bin/env python3
"""M1b — data1.dat seed: brute-force the outer-container entry count.

The outer container (embedded-module format, FUN_000013f0/15f4):
  [8 B obfuscated head][count x 0x5C obfuscated entries][blobs]

  head deob (FUN_000013f0): acc = f(count); st = 0xCBF0C1D8
    per word i: w = clmul(0x94511DD2, w + st) ^ ((i*4+1)*0xEBE81DBA + acc); st = raw
  runtime seed = head[1] + acc          (stored to [0x2591c])
  entry deob (FUN_000015f4) with that seed, state chain 0xF02F7685.

Oracle: entry[0].src_off == 8 + count*0x5C (the blob region starts right
after the entry table — verified on the embedded container: 4*0x5C+8=0x178).
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import clmul32, read_entry_block, M32

XOR = 0x94511DD2
D1 = "/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat"

d1 = open(D1, "rb").read()
print(f"data1.dat: {len(d1)} B ({len(d1)/1024:.1f} KiB)")


def acc_for_count(n):
    """FUN_000013f0 accuulator — 0x1420..0x148c."""
    a0 = (n * 0x9D323CD7) & M32
    return ((a0 >> (n & 7)) + 0x5E727D74 + ((a0 << (n & 0xB)) & M32) + 0xF71E3005) & M32


def deob_head(buf, acc):
    st = 0xCBF0C1D8
    out = []
    for i in range(2):
        w = struct.unpack_from("<I", buf, i * 4)[0]
        raw = w
        w = (w + st) & M32
        w = clmul32(XOR, w)
        w ^= ((i * 4 + 1) * 0xEBE81DBA + acc) & M32
        st = raw
        out.append(w)
    return out


hits = []
for count in range(1, 0xE3):
    acc = acc_for_count(count)
    head = deob_head(d1, acc)
    seed = (head[1] + acc) & M32
    src = d1[8:]
    e = read_entry_block(src, 0, seed)
    if e is None:
        continue
    f = struct.unpack("<23I", e)
    id_, flags, src_off, src_size = f[0], f[1], f[2], f[3]
    dst_off, dst_size = f[4], f[5]
    expect = 8 + count * 0x5C
    sane = (src_off == expect and 0 < src_size <= len(d1) - src_off
            and flags < 0x10000)
    if sane:
        hits.append(count)
        print(f"[HIT] count={count}: id={id_:#x} flags={flags:#x} "
              f"src=[{src_off:#x}+{src_size:#x}] dst=[{dst_off:#x}+{dst_size:#x}] "
              f"head={[hex(w) for w in head]} seed={seed:#010x}")

if not hits:
    print("no hit — trying relaxed check (any entry with src_off == 8+count*0x5C):")
    for count in range(1, 0xE3):
        acc = acc_for_count(count)
        head = deob_head(d1, acc)
        seed = (head[1] + acc) & M32
        e = read_entry_block(d1[8:], 0, seed)
        if e is None:
            continue
        f = struct.unpack("<23I", e)
        if f[2] == 8 + count * 0x5C:
            print(f"  count={count}: id={f[0]:#x} flags={f[1]:#x} sz={f[3]:#x}")
