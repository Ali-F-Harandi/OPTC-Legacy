#!/usr/bin/env python3
"""M3c-9: decrypt data1.dat with the CORRECT SD40SE semantics.

Correction vs M3b: the i==0xFF sentinel in the PRGA (0x39d3800) is checked
EVERY iteration, not first-use — the RC4 state RELOADS from the pristine
S-box every 255 bytes => the keystream has period 255.

PRGA (exact, from 0x39d3800):
    check:  if i == 0xFF: S <- pristine ; i = j = 0
    step:   i = (i+1)&0xFF ; j = (j + S[i])&0xFF ; swap(S[i],S[j])
            K = S[(S[i]+S[j])&0xFF] ; out = K ^ in
    (byte n (1-based) uses phase (n-1) mod 255)

KSA (custom-seeded, from key-expansion 0x39d3a30):
    S = T1 (256-B permutation @0x14f7375).copy() ; j = 0
    for i in 0..255: j = (j + S[i] + key[i % len]) & 0xFF ; swap
"""
import math
import sys
from collections import Counter

IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
T1_OFF = 0x14f7375

img = open(IMG, 'rb').read()
T1 = img[T1_OFF:T1_OFF + 256]

KEYS = [
    b'vuyWQSjlknpJF54ib36txVse',
    b'QZbidYS5LulOhQfbXJPVR5FG',
    b'JGcu2DjohFm84viZHe1Et5Qt',
    b'DFGRomanYuki-W9',
    b'16.2.1',
    b'vuyWQSjlknpJF54ib36txVseQZbidYS5LulOhQfbXJPVR5FG',
]


def ksa(key):
    S = bytearray(T1)
    j = 0
    for i in range(256):
        j = (j + S[i] + key[i % len(key)]) & 0xFF
        S[i], S[j] = S[j], S[i]
    return S


def prga_periodic(S_pristine, data):
    """PRGA with reload-every-255 — keystream period 255."""
    out = bytearray()
    S = bytearray(S_pristine)
    i = j = 0
    for n, b in enumerate(data):
        if i == 0xFF:
            S = bytearray(S_pristine)
            i = j = 0
        i = (i + 1) & 0xFF
        j = (j + S[i]) & 0xFF
        S[i], S[j] = S[j], S[i]
        out.append(S[(S[i] + S[j]) & 0xFF] ^ b)
    return bytes(out)


def entropy(b):
    if not b:
        return 0
    c = Counter(b)
    n = len(b)
    return -sum((v / n) * math.log2(v / n) for v in c.values())


if __name__ == '__main__':
    target = open('/home/z/my-project/download/re-work/apk/base_x/assets/7ffe/data1.dat', 'rb').read()
    print(f"data1.dat: {len(target)} bytes; entropy {entropy(target):.3f}")
    for k in KEYS:
        S = ksa(k)
        pt = prga_periodic(S, target[:1020])       # exactly 4 periods
        e = entropy(pt)
        print(f"\nkey={k[:24]!r:28} entropy={e:.3f}")
        print(f"  head: {pt[:48].hex()}")
        try:
            print(f"  ascii: {pt[:48].decode('ascii', errors='replace')!r}")
        except Exception:
            pass
        # structural check: XOR of consecutive periods should cancel the key
        if e < 7.0:
            print("  ^^ LOW ENTROPY — structure found!")
