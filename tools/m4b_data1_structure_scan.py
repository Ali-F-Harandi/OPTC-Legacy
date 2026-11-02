#!/usr/bin/env python3
"""Targeted scans of the real data1.dat (181,700 B):
1. Where would a sigInstall key-record plausibly start? A valid record at
   offset R requires len@R+0x28 == filesize - R - 0x34 (LE or BE).
2. Any u32 in the file equal to plausible payload/file lengths?
3. Entropy/structure sanity of head vs body (is the head also encrypted?).
"""
import struct
import zlib
import math

D = open('/home/z/my-project/download/optc-m4-capture-kit/data1.dat', 'rb').read()
N = len(D)
print(f"size = {N} (0x{N:x})")

# ---- 1. record-location scan ----
hits = []
for R in range(0, min(N - 0x34, 0x10000)):
    le = struct.unpack_from('<I', D, R + 0x28)[0]
    be = struct.unpack_from('>I', D, R + 0x28)[0]
    want = N - R - 0x34
    if le == want or be == want:
        hits.append((R, 'LE' if le == want else 'BE'))
print(f"[1] len-field consistency hits: {hits if hits else 'NONE'}")

# ---- 2. plausible length constants anywhere ----
targets = {N, N - 0x34, N - 4, N - 0x34 - 12}
found = []
for off in range(0, N - 4):
    v = struct.unpack_from('<I', D, off)[0]
    if v in targets:
        found.append((off, 'LE', v))
    v = struct.unpack_from('>I', D, off)[0]
    if v in targets:
        found.append((off, 'BE', v))
print(f"[2] length-constant occurrences: {found[:20] if found else 'NONE'}")

# ---- 3. head structure sanity ----
head = D[:0x40]
print(f"[3] head[0:0x40] = {head.hex()}")
# if head were a plaintext record, id/len/crc would look sane; len le/be:
print(f"    len@0x28 le={struct.unpack_from('<I', D, 0x28)[0]} "
      f"be={struct.unpack_from('>I', D, 0x28)[0]}  (payload would be {N-0x34})")

def entropy(b):
    if not b:
        return 0.0
    freq = [0] * 256
    for x in b:
        freq[x] += 1
    n = len(b)
    e = 0.0
    for f in freq:
        if f:
            p = f / n
            e -= p * math.log2(p)
    return e

print(f"    entropy head[0:0x34] = {entropy(D[:0x34]):.3f}")
print(f"    entropy head[0:0x100] = {entropy(D[:0x100]):.3f}")
print(f"    entropy body          = {entropy(D[0x34:0x10034]):.3f}")
print(f"    entropy tail[0x100:]  = {entropy(D[-256:]):.3f}")

# printable ratio of head
pr = sum(1 for x in D[:0x34] if 0x20 <= x < 0x7f) / 0x34
print(f"    printable ratio head  = {pr:.3f}")

# ---- 4. tail as record? (trailer hypothesis) ----
tail_hits = []
for R in range(N - 0x400, N - 0x34):
    if R < 0:
        continue
    le = struct.unpack_from('<I', D, R + 0x28)[0]
    be = struct.unpack_from('>I', D, R + 0x28)[0]
    want = N - R - 0x34
    if le == want or be == want:
        tail_hits.append((R, 'LE' if le == want else 'BE'))
print(f"[4] trailer record hits: {tail_hits if tail_hits else 'NONE'}")

# ---- 5. crc32 cross-check: does any window's crc match a stored u32? ----
# (cheap version: crc32 of body vs the 4 head u32s and a few tail u32s)
body = D[0x34:]
crc_body = zlib.crc32(body) & 0xFFFFFFFF
crc_all = zlib.crc32(D) & 0xFFFFFFFF
print(f"[5] crc32(body@0x34)={crc_body:08x}  crc32(whole)={crc_all:08x}")
stored = set()
for off in list(range(0, 0x40)) + list(range(N - 0x40, N - 4)):
    stored.add(struct.unpack_from('<I', D, off)[0])
    stored.add(struct.unpack_from('>I', D, off)[0])
print(f"    crc matches stored u32: {crc_body in stored or crc_all in stored}")

# ---- 6. MM magic hunt under single-byte XOR (is there a trivial obfuscation?) ----
mm = b'MM\x00\x2a'
for k in range(1, 256):
    if D[:4] == bytes(b ^ k for b in mm):
        print(f"[6] head is MM XOR {k:#04x}!")
        break
else:
    print("[6] head is not single-byte-XOR MM")
# and anywhere in file
pos = []
for k in range(256):
    pat = bytes(b ^ k for b in mm)
    off = D.find(pat)
    while off != -1 and len(pos) < 8:
        pos.append((off, k))
        off = D.find(pat, off + 1)
print(f"    XOR-MM occurrences anywhere: {pos if pos else 'NONE'}")
