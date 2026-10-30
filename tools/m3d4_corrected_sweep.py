#!/usr/bin/env python3
"""M3d-4: CORRECTED NTY oracle sweep.

Ground truth from RES.DAT.00/FONT.DAT.00 (plaintext NTY containers):
  bytes[0:2] = 'MM' (0x4d4d BE), bytes[2:4] = 0x002a, u16@8 = volume count (small)
data1.dat is fully encrypted; the right key decrypts [0:4] to 'MM\\x00\\x2a'.
The old M3c oracle required field@0 <= 0x400 which REJECTS magic 0x4d4d —
that is why every sweep came back empty.
"""
import struct
import glob
import re

RW = "/home/z/my-project/download/re-work"
IMG = f"{RW}/m2/9d_module/merged.bin"
T1_OFF = 0x14f7375
img = open(IMG, 'rb').read()
T1 = img[T1_OFF:T1_OFF + 256]
target = open(f"{RW}/apk/base_x/assets/7ffe/data1.dat", 'rb').read()


def ksa(key):
    S = bytearray(T1)
    j = 0
    for i in range(256):
        j = (j + S[i] + key[i % len(key)]) & 0xFF
        S[i], S[j] = S[j], S[i]
    return S


def prga255(S_pristine, data):
    out = bytearray()
    S = bytearray(S_pristine)
    i = j = 0
    for b in data:
        if i == 0xFF:
            S = bytearray(S_pristine)
            i = j = 0
        i = (i + 1) & 0xFF
        j = (j + S[i]) & 0xFF
        S[i], S[j] = S[j], S[i]
        out.append(S[(S[i] + S[j]) & 0xFF] ^ b)
    return bytes(out)


def oracle(pt):
    if len(pt) < 12:
        return None
    if pt[0:2] != b'MM':
        return None
    if pt[2:4] != b'\x00\x2a':
        return None
    cnt = struct.unpack_from('>H', pt, 8)[0]
    if not (0 < cnt <= 0x100):
        return None
    return ('MM', cnt, pt[4:8].hex(), pt[10:12].hex())


def dex_strings(path):
    d = open(path, 'rb').read()
    string_ids_size, string_ids_off = struct.unpack_from('<II', d, 0x38)
    out = []
    for i in range(string_ids_size):
        off = struct.unpack_from('<I', d, string_ids_off + i * 4)[0]
        p = off
        while d[p] & 0x80:
            p += 1
        end = d.index(b'\x00', p + 1) if d[p] else d.index(b'\x00', p)
        if end - (p) <= 64:
            out.append(d[p:end])
    return out


cands = set()
# rodata strings (same window as M3c sweep)
for m in re.finditer(rb'[\x21-\x7e]{4,48}', img[0x1305000:0x1600000]):
    cands.add(m.group())
# DEX strings
for f in sorted(glob.glob(f"{RW}/apk/base_x/dex/classes*.dex")):
    for s in dex_strings(f):
        if 4 <= len(s) <= 48:
            cands.add(s)
# known embedded keys
cands |= {b'vuyWQSjlknpJF54ib36txVse', b'QZbidYS5LulOhQfbXJPVR5FG',
          b'JGcu2DjohFm84viZHe1Et5Qt', b'16.2.1', b'7ffe', b'data1', b'data2'}
print(f'{len(cands)} candidate strings')

hits = 0
for n, s in enumerate(cands):
    S = ksa(s)
    for off in (0, 4):
        pt = prga255(S, target[off:off + 14])
        r = oracle(pt)
        if r:
            hits += 1
            print(f'HIT off={off} key={s[:44]!r} -> {r}')
    if (n + 1) % 30000 == 0:
        print(f'  ... {n+1} tested, {hits} hits', flush=True)
print(f'done: {len(cands)} keys x 2 windows, {hits} hits')
