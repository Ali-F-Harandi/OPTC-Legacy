#!/usr/bin/env python3
"""M3d-9: emulated-core matrix vs the CORRECTED 'MM' NTY oracle, all offsets."""
import struct
import sys

sys.path.insert(0, '/home/z/my-project/scripts')
sys.path.insert(0, '/home/z/my-project/re-work/repo-git/tools')
import m3c_emu as M

CIPHER159 = 0x39d3300
CIPHER144 = 0x39d4508
RC4 = 0x39d3800

KEYS = [
    b'vuyWQSjlknpJF54ib36txVse',
    b'QZbidYS5LulOhQfbXJPVR5FG',
    b'JGcu2DjohFm84viZHe1Et5Qt',
    b'16.2.1',
    b'683fb227-bfd3-e3d4-f4d8-fbebc4be58f7',
    b'fcfc813c-bb12-9f14-5916-7fe04f49d10e',
    b'000f4240-012C9985-00000000',
]

target = open('/home/z/my-project/download/re-work/apk/base_x/assets/7ffe/data1.dat', 'rb').read()
res_dat = open('/home/z/my-project/download/re-work/apk/base_x/assets/assets/RES.DAT.01', 'rb').read()
font_dat = open('/home/z/my-project/download/re-work/apk/base_x/assets/assets/FONT.DAT.01', 'rb').read()


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


def check(pt, tag):
    if pt[0:4] == b'MM\x00\x2a':
        cnt = struct.unpack_from('>H', pt, 8)[0]
        print(f"  *** HIT *** {tag}: MM magic, count={cnt}")
        return True
    return False


for name, data in (('data1.dat', target), ('RES.DAT.01', res_dat), ('FONT.DAT.01', font_dat)):
    print(f"== {name} ==")
    for k in KEYS:
        for mode in (0xE0000000, 0x40000000):
            holder = expand(k, mode)
            if holder is None:
                continue
            for cname, core in (('cipher159', CIPHER159), ('cipher144', CIPHER144), ('rc4', RC4)):
                for off in (0, 4, 0x34):
                    chunk = data[off:off + 64]
                    if len(chunk) < 16:
                        continue
                    ln = 64 if cname != 'cipher144' else 64
                    r, out = run(core, holder, chunk[:ln])
                    check(out, f'key={k[:12]!r} mode={mode:#x} {cname} off={off:#x}')
print("done")
