#!/usr/bin/env python3
"""M1b — data1.dat: EXHAUSTIVE 32-bit dd70-seed search (numpy-vectorized).

The dd70 header decode per seed s (clmul parts are seed-independent):
  total = (s*0xF87B337C + (0xA21DFB3A << (s&7)) + C0)          C0 = clmul(X, w0)
  v1    = ((0x416E2AF2 >> (s&0xD)) + s + 0xBD19C63C) ^ C1      C1 = clmul(X, w1)
  kts   = ((0x643A3A3B << (s&0xB)) - (s ^ 0x3B2BF538) + C2)    C2 = clmul(X, w2)
  count = v1 & 0xFF, flags = v1 >> 8 & 0xFF

Filter: 1 <= count <= 0x80; 0 < kts <= 0x20000, kts % 3 == 0;
        total <= 0x8000000; align4(12+kts) + count*8 <= len.
Survivors -> full pairs decode + tiling verification.
"""
import struct
import sys

import numpy as np

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import clmul32, M32, XOR_CONST

D1 = "/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat"
d1 = open(D1, "rb").read()


def clmul_np(a, w_arr):
    """clmul32(a, w) for a numpy array of w (uint32), a fixed."""
    out = np.zeros_like(w_arr)
    aa = a
    for i in range(32):
        out ^= ((w_arr >> i) & 1) * aa          # bit i set -> xor aa
        top = aa >> 31
        aa = (aa << 1) & np.uint32(M32)
        aa ^= top * np.uint32(0x579357EB)
    return out


def full_check(view, seed):
    """Slow scalar check: header + pairs decode + tiling. Returns info/None."""
    w0, w1, w2 = struct.unpack_from("<3I", view, 0)
    total = (seed * 0xF87B337C + ((0xA21DFB3A << (seed & 7)) & M32)
             + clmul32(XOR_CONST, w0)) & M32
    v1 = (((0x416E2AF2 >> (seed & 0xD)) + seed + 0xBD19C63C) & M32) ^ clmul32(XOR_CONST, w1)
    kts = (((0x643A3A3B << (seed & 0xB)) & M32) - (seed ^ 0x3B2BF538)
           + clmul32(XOR_CONST, w2)) & M32
    count, flags = v1 & 0xFF, (v1 >> 8) & 0xFF
    n = len(view)
    if not (0 < count <= 0x80 and 0 < kts <= 0x20000 and kts % 3 == 0):
        return None
    if total == 0 or total > 0x8000000:
        return None
    consumed = (12 + kts + 3) & ~3
    if consumed + count * 8 > n:
        return None
    m1 = (((seed + 0xB31F451C) & M32) * seed) & M32
    m2 = (((seed + 0x30EF5CEF) & M32) * seed) & M32
    et = bytearray(view[consumed:consumed + count * 8])
    for i in range(0, count * 8, 4):
        w = struct.unpack_from("<I", et, i)[0]
        w ^= (m1 << ((i & 3) + 3)) & M32
        w = clmul32(XOR_CONST, w)
        w = (w + (m2 >> ((i & 7) + 5))) & M32
        struct.pack_into("<I", et, i, w)
    pairs = [(struct.unpack_from("<I", et, i * 8)[0],
              struct.unpack_from("<I", et, i * 8 + 4)[0]) for i in range(count)]
    rngs = sorted((o, o + s) for o, s in pairs)
    cur = consumed + count * 8
    for o, e in rngs:
        if o != cur or e > n:
            return None
        cur = e
    if cur != n:
        return None
    return {"total": total, "count": count, "flags": flags, "kts": kts, "pairs": pairs}


def vector_search(view, label):
    n = len(view)
    w0, w1, w2 = struct.unpack_from("<3I", view, 0)
    C0 = np.uint32(clmul32(XOR_CONST, w0))
    C1 = np.uint32(clmul32(XOR_CONST, w1))
    C2 = np.uint32(clmul32(XOR_CONST, w2))
    K1 = np.uint32(0xF87B337C)
    HB = np.uint32(0xA21DFB3A)
    VB = np.uint32(0x416E2AF2)
    KC = np.uint32(0x643A3A3B)
    KS = np.uint32(0x3B2BF538)
    BD = np.uint32(0xBD19C63C)

    survivors = []
    CH = 1 << 22
    for base in range(0, 1 << 32, CH):
        s = np.arange(base, base + CH, dtype=np.uint64).astype(np.uint32)
        sh7 = (s & np.uint32(7)).astype(np.uint64)
        shD = (s & np.uint32(0xD)).astype(np.uint64)
        shB = (s & np.uint32(0xB)).astype(np.uint64)
        s64 = s.astype(np.uint64)
        total = (s64 * np.uint64(0xF87B337C)
                 + (np.uint64(0xA21DFB3A) << sh7)
                 + np.uint64(C0)) & np.uint64(M32)
        v1 = (((np.uint64(0x416E2AF2) >> shD) + s64 + np.uint64(0xBD19C63C))
              ^ np.uint64(C1)) & np.uint64(M32)
        kts = ((np.uint64(0x643A3A3B) << shB)
               - (s64 ^ np.uint64(0x3B2BF538)) + np.uint64(C2)) & np.uint64(M32)
        count = v1 & np.uint64(0xFF)
        consumed = ((np.uint64(12) + kts + np.uint64(3)) & np.uint64(0xFFFFFFFFFFFFFFFC)) + count * np.uint64(8)
        mask = ((count >= 1) & (count <= 0x80)
                & (kts >= 1) & (kts <= 0x20000) & ((kts % 3) == 0)
                & (total >= 1) & (total <= 0x8000000)
                & (consumed <= np.uint64(n)))
        idx = np.nonzero(mask)[0]
        for i in idx:
            seed = int(s[i])
            info = full_check(view, seed)
            if info:
                print(f"[{label} HIT] seed={seed:#010x} count={info['count']} "
                      f"kts={info['kts']:#x} total={info['total']:#x} flags={info['flags']:#x}")
                survivors.append(seed)
        if base % (1 << 28) == 0:
            print(f"  [{label}] {base:#x}/2^32 ...", flush=True)
    return survivors


print(f"data1.dat: {len(d1)} B")
print("[1/2] full file as container")
h1 = vector_search(d1, "full")
print(f"-> {len(h1)} seeds")
print("[2/2] body (skip 4-byte head) as container")
h2 = vector_search(d1[4:], "body")
print(f"-> {len(h2)} seeds")
for label, hits, view in (("full", h1, d1), ("body", h2, d1[4:])):
    for seed in hits:
        info = full_check(view, seed)
        print(f"\n=== {label} seed={seed:#010x} ===")
        print(f"  count={info['count']} kts={info['kts']:#x} total={info['total']:#x} "
              f"flags={info['flags']:#x}")
        print(f"  pairs: {[(hex(o), hex(s)) for o, s in info['pairs'][:12]]}")
        # recover the key x: solve x^2 = seed? (not unique) — just report seed
