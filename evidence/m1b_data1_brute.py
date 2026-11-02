#!/usr/bin/env python3
"""M1b — data1.dat dd70-seed brute force.

Hypotheses tested (seed = f(x^2), f = (sq>>17)^(sq<<11), like [0x257e8]):
  H1: x = any 16-bit value            (loader-style small constant)
  H2: x = u32(d1[0:4])                (4-byte file header as key)
  H3: x = f-count variants            (outer-container style)
  H4: seed used directly without squaring

Oracle: dd70 header decode must give kts % 3 == 0 (3-byte tree nodes),
0 < count <= 0x80, sane total, and chunk pairs tiling the file:
  last_off + last_size == len  AND  no gaps/overlaps when sorted.
Verified first against the three embedded module containers (seed known).
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import clmul32, dd70_seed, M32

XOR = 0x94511DD2
D1 = "/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat"


def seed_from_x(x):
    sq = (x * x) & M32
    return ((sq >> 17) ^ ((sq << 11) & M32)) & M32


def hdr_decode(view, seed):
    w0, w1, w2 = struct.unpack_from("<3I", view, 0)
    total = (seed * 0xF87B337C + ((0xA21DFB3A << (seed & 7)) & M32)
             + clmul32(XOR, w0)) & M32
    v1 = (((0x416E2AF2 >> (seed & 0xD)) + seed + 0xBD19C63C) & M32) ^ clmul32(XOR, w1)
    kts = (((0x643A3A3B << (seed & 0xB)) & M32) - (seed ^ 0x3B2BF538)
           + clmul32(XOR, w2)) & M32
    return total, v1 & 0xFF, (v1 >> 8) & 0xFF, kts


def pairs_decode(view, seed, count, kts):
    m1 = (((seed + 0xB31F451C) & M32) * seed) & M32
    m2 = (((seed + 0x30EF5CEF) & M32) * seed) & M32
    consumed = (12 + kts + 3) & ~3
    et = bytearray(view[consumed:consumed + count * 8])
    if len(et) < count * 8:
        return None
    for i in range(0, count * 8, 4):
        w = struct.unpack_from("<I", et, i)[0]
        w ^= (m1 << ((i & 3) + 3)) & M32
        w = clmul32(XOR, w)
        w = (w + (m2 >> ((i & 7) + 5))) & M32
        struct.pack_into("<I", et, i, w)
    return [(struct.unpack_from("<I", et, i * 8)[0],
             struct.unpack_from("<I", et, i * 8 + 4)[0]) for i in range(count)]


def check_container(view, seed, verbose=False):
    """Full sanity: header + tiling. Returns (ok, info)."""
    total, count, flags, kts = hdr_decode(view, seed)
    n = len(view)
    if not (0 < count <= 0x80):
        return False, None
    if not (0 < kts <= 0x10000 and kts % 3 == 0):
        return False, None
    if total > n * 4 or total == 0:          # output can exceed input (LZ)
        return False, None
    consumed = (12 + kts + 3) & ~3
    if consumed + count * 8 > n:
        return False, None
    pairs = pairs_decode(view, seed, count, kts)
    if pairs is None:
        return False, None
    # tiling: sorted ranges must cover [header_end, n) exactly
    rngs = sorted((o, o + s) for o, s in pairs if o < n and s > 0)
    if not rngs:
        return False, None
    cur = consumed + count * 8
    for o, e in rngs:
        if o != cur or e > n:
            return False, None
        cur = e
    if cur != n:
        return False, None
    return True, {"total": total, "count": count, "flags": flags, "kts": kts,
                  "pairs": pairs}


# ---- verify oracle on embedded module containers (known seed) ----
print("=== oracle check on embedded containers (seed from x=0x14B4) ===")
so = open("/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so", "rb").read()
sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import CONTAINER_OFF
cont = so[CONTAINER_OFF:]
seed = dd70_seed()
for name, off in (("e0", 0x178), ("e1", 0x3428), ("e3", 0x101860)):
    ok, info = check_container(cont[off:], seed)
    print(f"  {name}: oracle={'PASS' if ok else 'FAIL'}"
          + (f" (count={info['count']}, kts={info['kts']:#x})" if info else ""))

# ---- brute force data1.dat ----
d1 = open(D1, "rb").read()
print(f"\n=== data1.dat ({len(d1)} B) brute force ===")
tries = hits = 0

# H1: x in 16-bit space
for x in range(0x10000):
    s = seed_from_x(x)
    tries += 1
    ok, info = check_container(d1, s)
    if ok:
        hits += 1
        print(f"[H1 HIT] x={x:#x} seed={s:#010x} -> {info['count']} chunks, "
              f"kts={info['kts']:#x}, total={info['total']:#x}, flags={info['flags']:#x}")
        break

# H2: 4-byte header as key
x0 = struct.unpack_from("<I", d1, 0)[0]
for s in (seed_from_x(x0), x0):
    tries += 1
    ok, info = check_container(d1, s)
    if ok:
        hits += 1
        print(f"[H2 HIT] key={x0:#x} seed={s:#010x} -> count={info['count']}, kts={info['kts']:#x}")

# H3: body (skip 4-byte header) as container
body = d1[4:]
for x in range(0x10000):
    s = seed_from_x(x)
    tries += 1
    ok, info = check_container(body, s)
    if ok:
        hits += 1
        print(f"[H3 HIT] body x={x:#x} seed={s:#010x} -> count={info['count']}, "
              f"kts={info['kts']:#x}, total={info['total']:#x}, flags={info['flags']:#x}")
        break

print(f"done: {tries} seeds tried, {hits} hits")
