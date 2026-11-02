#!/usr/bin/env python3
"""M3c-10: key-independent period detection on data1.dat.

If the cipher is a repeating-key XOR of period T (SD40SE: T=255), then
D[i] = C[i] ^ C[i+T] equals P[i] ^ P[i+T] — the key cancels. For plaintext
with structure (headers, names, zeros) D is strongly non-uniform.

Test T in {4, 8, 16, 32, 64, 128, 254, 255, 256, 510, 511, 512} plus
byte-value autocorrelation of C itself.
"""
import math
import sys
from collections import Counter

target = open('/home/z/my-project/download/re-work/apk/base_x/assets/7ffe/data1.dat', 'rb').read()


def ent(b):
    c = Counter(b)
    n = len(b)
    return -sum((v / n) * math.log2(v / n) for v in c.values())


print(f"C entropy: {ent(target):.4f}  ({len(target)} bytes)")
print(f"{'T':>5} {'H(D)':>7} {'zero%':>6}  note")
for T in (4, 8, 16, 32, 48, 64, 96, 128, 192, 250, 254, 255, 256, 260, 320,
          510, 511, 512, 1020, 1024, 2048, 4096):
    n = (len(target) - T) // T * T  # full blocks
    D = bytes(a ^ b for a, b in zip(target[:n], target[T:T + n]))
    z = D.count(0) / len(D) * 100
    print(f"{T:>5} {ent(D):>7.4f} {z:>5.1f}%")
