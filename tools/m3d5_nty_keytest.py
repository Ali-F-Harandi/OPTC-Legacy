#!/usr/bin/env python3
"""M3d-5: corrected-oracle key test on ALL encrypted NTYs (data1.dat, RES.DAT.01,
FONT.DAT.01) with the 3 embedded keys + rodata strings, RC4-255 core."""
import struct
import re

RW = "/home/z/my-project/download/re-work"
IMG = f"{RW}/m2/9d_module/merged.bin"
T1_OFF = 0x14f7375
img = open(IMG, 'rb').read()
T1 = img[T1_OFF:T1_OFF + 256]

targets = {
    'data1.dat': open(f"{RW}/apk/base_x/assets/7ffe/data1.dat", 'rb').read(),
    'RES.DAT.01': open(f"{RW}/apk/base_x/assets/assets/RES.DAT.01", 'rb').read(),
    'FONT.DAT.01': open(f"{RW}/apk/base_x/assets/assets/FONT.DAT.01", 'rb').read(),
}


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
    if len(pt) < 12 or pt[0:2] != b'MM':
        return None
    if pt[2:4] != b'\x00\x2a':
        return None
    cnt = struct.unpack_from('>H', pt, 8)[0]
    if not (0 < cnt <= 0x100):
        return None
    return (pt[4:8].hex(), cnt, pt[10:12].hex())


# candidate keys: the 3 embedded + version + tag + printable rodata strings
cands = {b'vuyWQSjlknpJF54ib36txVse', b'QZbidYS5LulOhQfbXJPVR5FG',
         b'JGcu2DjohFm84viZHe1Et5Qt', b'16.2.1', b'7ffe', b'000f4240-012C9985-00000000',
         b'683fb227-bfd', b'fcfc813c-bb1'}
for m in re.finditer(rb'[\x21-\x7e]{4,48}', img[0x1305000:0x1600000]):
    cands.add(m.group())
print(f"{len(cands)} candidate keys")

for tname, td in targets.items():
    print(f"\n== {tname} ({len(td)} B): head {td[:8].hex()} ==")
    hits = 0
    for s in cands:
        S = ksa(s)
        for off in (0, 4):
            pt = prga255(S, td[off:off + 14])
            r = oracle(pt)
            if r:
                hits += 1
                print(f"  HIT off={off} key={s[:44]!r} -> {r}")
    print(f"  {hits} hits")
