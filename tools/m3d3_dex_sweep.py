#!/usr/bin/env python3
"""M3d-3: sweep ALL DEX strings (plus base.apk resource strings) as sinatra
keys against data1.dat, RC4-255 core, windows at offset 0 AND 4 (the 4B head)."""
import struct
import glob
import re

IMG = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
T1_OFF = 0x14f7375
img = open(IMG, 'rb').read()
T1 = img[T1_OFF:T1_OFF + 256]
target = open('/home/z/my-project/download/re-work/apk/base_x/assets/7ffe/data1.dat', 'rb').read()


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


def sane(pt):
    if len(pt) < 14:
        return False
    f034, f036 = struct.unpack_from('>2H', pt, 0)
    count, = struct.unpack_from('>I', pt, 4)
    f03c, = struct.unpack_from('>H', pt, 8)
    f040, = struct.unpack_from('>I', pt, 10)
    if not (0 < count <= 0x200):
        return None
    if f034 > 0x400 or f036 > 0x400 or f03c > 0x400:
        return None
    if f040 > len(target):
        return None
    return (f034, f036, count, f03c, f040)


def dex_strings(path):
    d = open(path, 'rb').read()
    string_ids_size, string_ids_off = struct.unpack_from('<II', d, 0x38)
    out = []
    for i in range(string_ids_size):
        off = struct.unpack_from('<I', d, string_ids_off + i * 4)[0]
        p = off; shift = 0
        while True:
            b = d[p]; p += 1
            if not (b & 0x80):
                break
        end = d.index(b'\x00', p)
        if end - p <= 64:
            out.append(d[p:end])
    return out


cands = set()
for f in sorted(glob.glob('/home/z/my-project/download/re-work/apk/base_x/dex/classes*.dex')):
    for s in dex_strings(f):
        if 4 <= len(s) <= 48:
            cands.add(s)
# the 5 interesting explicit ones + embedded knowns
cands |= {b'8P1sW0EPJcslw7UzRsiXL64w-O50Ed-RBICtay1g24M', b'AzSBpY4F0rHiHFdinTvM',
          b'GXWy8XF3vIml3_MfnmSmyuKBpT3B0dWbHRR_4cgq-gA', b'IayrSTFL9eJ69YeSUO2',
          b'AzSCki82AwsLzKd5O8zo', b'vuyWQSjlknpJF54ib36txVse',
          b'QZbidYS5LulOhQfbXJPVR5FG', b'JGcu2DjohFm84viZHe1Et5Qt'}
print(f'{len(cands)} candidate strings')

hits = 0
for n, s in enumerate(cands):
    S = ksa(s)
    for off in (0, 4):
        pt = prga255(S, target[off:off + 14])
        r = sane(pt)
        if r:
            hits += 1
            print(f'HIT off={off} key={s[:40]!r} hdr={r}')
    if (n + 1) % 20000 == 0:
        print(f'  ... {n+1} tested, {hits} hits', flush=True)
print(f'done: {len(cands)} keys x 2 windows, {hits} hits')
