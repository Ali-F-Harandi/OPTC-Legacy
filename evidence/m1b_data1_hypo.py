#!/usr/bin/env python3
"""M1b — data1.dat: try the remaining format hypotheses.

A) stream(eb34) with key = 4-byte head, then CBC, on [4B head][body]:
   - candidates: x = head, x = f(head^2) (dd70-style), on body & full file
B) outer-container format ([8B obf head][N x 0x5C entries][blobs]) with the
   id-repeat oracle: entry words[0] == words[6] (independent of layout).
   - counts 1..0x100 (acc = f(count)), on body & full file
C) CBC-only then stream (reverse order).
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import (clmul32, stream_decrypt, cbc_decrypt, load_tables,
                           OFF_RK, M32, XOR_CONST)

BLOB = "/home/z/my-project/download/re-work/m1b/7ffe-payload.dec"
D1 = "/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat"

blob = open(BLOB, "rb").read()
tabs = load_tables(blob)
rk = list(struct.unpack_from("<60I", blob, OFF_RK))
d1 = open(D1, "rb").read()
head = struct.unpack_from("<I", d1, 0)[0]
body = d1[4:]
print(f"data1.dat {len(d1)} B, head={head:#010x}, body {len(body)} B "
      f"(16-aligned: {len(body) % 16 == 0})")


def sq_seed(x):
    sq = (x * x) & M32
    return ((sq >> 17) ^ ((sq << 11) & M32)) & M32


def entropy(b):
    if not b:
        return 0.0
    counts = [0] * 256
    for x in b:
        counts[x] += 1
    n = len(b)
    import math
    return -sum((c / n) * math.log2(c / n) for c in counts if c)


def looks_structured(b):
    """Any obvious plaintext signature?"""
    sigs = {"ELF": b"\x7fELF", "ZIP": b"PK\x03\x04", "GZ": b"\x1f\x8b",
            "DEX": b"dex\n", "PNG": b"\x89PNG", "RZIP": b"RZIP"}
    found = [n for n, s in sigs.items() if s in b[:4096]]
    zeros = b[:64].count(0)
    return found, zeros


# ---- A) stream with head-derived keys, then CBC ----
print("\n=== A) stream -> CBC with head-derived keys ===")
for label, x, buf in (("body, x=head", head, body),
                      ("full, x=head", head, d1),
                      ("body, x=seed(head^2)", sq_seed(head), body),
                      ("full, x=seed(head^2)", sq_seed(head), d1)):
    s = stream_decrypt(bytearray(buf), x)
    e1 = entropy(bytes(s[:4096]))
    c = cbc_decrypt(bytes(s), rk, tabs)
    e2 = entropy(bytes(c[:4096]))
    sig, zeros = looks_structured(bytes(c))
    print(f"  {label}: entropy stream={e1:.2f} -> cbc={e2:.2f} sigs={sig} "
          f"head64={bytes(c[:24]).hex()}")

# ---- B) outer-container, id-repeat oracle ----
print("\n=== B) outer format, id-repeat oracle ===")


def acc_for_count(n_):
    a0 = (n_ * 0x9D323CD7) & M32
    return ((a0 >> (n_ & 7)) + 0x5E727D74 + ((a0 << (n_ & 0xB)) & M32) + 0xF71E3005) & M32


def deob_head8(buf, acc):
    st = 0xCBF0C1D8
    out = []
    for i in range(2):
        w = struct.unpack_from("<I", buf, i * 4)[0]
        raw = w
        w = (w + st) & M32
        w = clmul32(XOR_CONST, w)
        w ^= ((i * 4 + 1) * 0xEBE81DBA + acc) & M32
        st = raw
        out.append(w)
    return out


def read_entry(src, index, seed):
    dst = bytearray(src[index * 0x5C:(index + 1) * 0x5C])
    if len(dst) < 0x5C:
        return None
    state = 0xF02F7685
    for off in range(0, 0x5C, 4):
        w = struct.unpack_from("<I", dst, off)[0]
        raw = w
        w ^= ((state * state) & M32) >> 3
        w = clmul32(XOR_CONST, w)
        w ^= ((((seed + 0x96F60B71) & M32) * seed) << ((index + 1) & 3)) & M32
        w = (w + (off + 1) * 0x79934CF6 + seed) & M32
        w = (w - ((((seed + 0x9D9B673D) & M32) * seed & M32) >> ((off + 3) & 5))) & M32
        state = raw
        struct.pack_into("<I", dst, off, w)
    return dst


hits = 0
for label, buf in (("full", d1), ("body", body)):
    for count in range(1, 0x101):
        acc = acc_for_count(count)
        try:
            hd = deob_head8(buf, acc)
        except struct.error:
            continue
        seed = (hd[1] + acc) & M32
        e = read_entry(buf[8:], 0, seed)
        if e is None:
            continue
        f = struct.unpack("<23I", e)
        if f[0] == f[6] and f[0] != 0 and f[0] < 0x10000 and f[1] < 0x10000:
            hits += 1
            print(f"  [{label} count={count}] id={f[0]:#x} flags={f[1]:#x} "
                  f"src=[{f[2]:#x}+{f[3]:#x}] dst=[{f[4]:#x}+{f[5]:#x}] "
                  f"head={[hex(w) for w in hd]} seed={seed:#010x}")
print(f"  -> {hits} hits")

# ---- C) CBC first, then stream ----
print("\n=== C) CBC -> stream (reverse order) ===")
for label, x, buf in (("body, x=head", head, body), ("body, x=seed(head^2)", sq_seed(head), body)):
    c = cbc_decrypt(bytearray(buf), rk, tabs)
    s = stream_decrypt(bytes(c), x)
    e = entropy(bytes(s[:4096]))
    sig, _ = looks_structured(bytes(s))
    print(f"  {label}: entropy={e:.2f} sigs={sig} head64={bytes(s[:24]).hex()}")
