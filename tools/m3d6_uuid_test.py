#!/usr/bin/env python3
"""M3d-6: test UUID/idx-derived keys on encrypted NTYs with the corrected MM oracle."""
import struct

RW = "/home/z/my-project/download/re-work"
IMG = f"{RW}/m2/9d_module/merged.bin"
T1_OFF = 0x14f7375
img = open(IMG, 'rb').read()
T1 = img[T1_OFF:T1_OFF + 256]

targets = {
    'data1.dat': open(f"{RW}/apk/base_x/assets/7ffe/data1.dat", 'rb').read(),
    'RES.DAT.01': open(f"{RW}/apk/base_x/assets/assets/RES.DAT.01", 'rb').read(),
    'FONT.DAT.01': open(f"{RW}/apk/base_x/assets/assets/FONT.DAT.01", 'rb').read(),
    'FONT.DAT.02': open(f"{RW}/apk/base_x/assets/assets/FONT.DAT.02", 'rb').read(),
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
    if len(pt) < 12 or pt[0:2] != b'MM' or pt[2:4] != b'\x00\x2a':
        return None
    cnt = struct.unpack_from('>H', pt, 8)[0]
    if not (0 < cnt <= 0x100):
        return None
    return (pt[4:8].hex(), cnt)


res_vb = open(f"{RW}/apk/base_x/assets/assets/RES.DAT.vb", 'rb').read()
font_vb = open(f"{RW}/apk/base_x/assets/assets/FONT.DAT.vb", 'rb').read()
res_idx = open(f"{RW}/apk/base_x/assets/assets/RES.DAT.idx", 'rb').read()
font_idx = open(f"{RW}/apk/base_x/assets/assets/FONT.DAT.idx", 'rb').read()

keys = {
    'uuid_res': b'683fb227-bfd3-e3d4-f4d8-fbebc4be58f7',
    'uuid_font': b'fcfc813c-bb12-9f14-5916-7fe04f49d10e',
    'uuid_res_nodash': b'683fb227bfd3e3d4f4d8fbebc4be58f7',
    'uuid_font_nodash': b'fcfc813cbb129f14 59167fe04f49d10e'.replace(b' ', b''),
    'res_idx_hash': res_idx[4:12],
    'font_idx_hash': font_idx[4:12],
    'res_idx_all': res_idx[:16],
    'combo_res': b'683fb227-bfd3-e3d4-f4d8-fbebc4be58f7' + res_idx[4:12],
    'vb2_res': res_vb[:2 + 36],
}

for tname, td in targets.items():
    print(f"== {tname} ==")
    for kname, k in keys.items():
        S = ksa(k)
        for off in (0, 4):
            pt = prga255(S, td[off:off + 14])
            r = oracle(pt)
            if r:
                print(f"  HIT off={off} key={kname} -> {r}")
    print("  done")
