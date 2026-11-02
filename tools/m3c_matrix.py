#!/usr/bin/env python3
"""M3c-12: full key×core matrix against data1.dat (emulated cores)."""
import math
import struct
import sys
from collections import Counter

sys.path.insert(0, '/home/z/my-project/scripts')
import m3c_emu as M

KEYS = [
    b'vuyWQSjlknpJF54ib36txVse',
    b'QZbidYS5LulOhQfbXJPVR5FG',
    b'JGcu2DjohFm84viZHe1Et5Qt',
    b'DFGRomanYuki-W9',
    b'16.2.1',
]

CIPHER159 = 0x39d3300
CIPHER144 = 0x39d4508
RC4 = 0x39d3800


def ent(b):
    c = Counter(b)
    n = len(b)
    return -sum((v / n) * math.log2(v / n) for v in c.values())


def expand(key, mode=0xE0000000):
    M.uc.mem_write(M.HEAP + 0x800000, key)
    desc_a = M.HEAP + 0x810000
    M.uc.mem_write(desc_a, b'\x00' * 0x40)
    r = M.call(0x39d39f4, [desc_a, M.HEAP + 0x800000, len(key), mode])
    if r != 0:
        return None
    return struct.unpack_from('<Q', M.rd(desc_a, 8), 0)[0]


def run(core, holder, data):
    ina = M.HEAP + 0x840000
    outa = ina + 0x2000
    M.uc.mem_write(ina, data)
    r = M.call(core, [holder, ina, outa, len(data)])
    return r, M.rd(outa, len(data))


if __name__ == '__main__':
    target = open('/home/z/my-project/download/re-work/apk/base_x/assets/7ffe/data1.dat', 'rb').read()
    head = target[:1020]
    print(f"data1.dat head[{len(head)}] entropy {ent(head):.3f}")
    for k in KEYS:
        holder = expand(k)
        if holder is None:
            print(f'key {k[:12]!r}: expansion FAILED')
            continue
        for name, core, ln in (('cipher159', CIPHER159, 64),
                               ('cipher144', CIPHER144, 64),
                               ('rc4-255', RC4, 255)):
            r, out = run(core, holder, head[:ln])
            e = ent(out)
            asc = sum(1 for b in out if 32 <= b < 127 or b in (9, 10, 13)) / len(out)
            print(f"key={k[:16]!r:20} {name:10} r={r:#x} H={e:.3f} ascii%={asc*100:.0f}")
            print(f"   {out[:48].hex()}")
            print(f"   {out[:48].decode('ascii', 'replace')!r}")
