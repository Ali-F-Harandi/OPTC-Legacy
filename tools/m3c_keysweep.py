#!/usr/bin/env python3
"""M3c-14: sweep ALL rodata candidate strings as sinatra keys against data1.dat.

Oracle: decrypt the first 14 bytes; the NTY header is
    u16 BE @0 (field 0x34), u16 BE @2 (0x36), u32 BE @4 (0x38 = volume count),
    u16 BE @8 (0x3c), u32 BE @10 (0x40)
A sane header: 0 < count <= 0x200 and the two u16 fields < 0x1000-ish.

Cores tested (Python reimpl, RC4 validated byte-exact vs emulated core):
  rc4255  — custom-KSA + 255-periodic reload
Also collects stats on promising partial hits.
"""
import re
import struct
import sys

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
        return False
    if f034 > 0x400 or f036 > 0x400 or f03c > 0x400:
        return False
    if f040 > len(target):
        return False
    return (f034, f036, count, f03c, f040)


if __name__ == '__main__':
    # collect candidate keys: printable runs of len 4..48 in the string window
    strs = set()
    for m in re.finditer(rb'[\x21-\x7e]{4,48}', img[0x1305000:0x1600000]):
        s = m.group()
        strs.add(s)
    # also the 3 known keys + fonts + version
    print(f'{len(strs)} candidate strings')
    hits = 0
    tested = 0
    for s in strs:
        tested += 1
        S = ksa(s)
        pt = prga255(S, target[:14])
        if sane(pt):
            hits += 1
            print(f'HIT rc4255 key={s[:32]!r} hdr={sane(pt)}')
        if tested % 20000 == 0:
            print(f'  ... {tested} tested, {hits} hits', file=sys.stderr)
    print(f'done: {tested} keys, {hits} hits')
