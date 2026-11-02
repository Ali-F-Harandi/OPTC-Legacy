#!/usr/bin/env python3
"""M2b: hunt for 16-bit (or other) stream-cipher instances across ALL known
binaries — search for the family constants as movz/movk immediates.

32-bit family: 0xE9FA57E4 0x8E495673 0x4F8B1BCA 0x72F6FCBE 0xB43B9BAF 0xAF57F7FB
               init 0x07B48238 0xE34EAC63
16-bit trunc: 0x57E4 0x5673 0x1BCA 0xFCBE 0x9BAF 0xF7FB init 0x8238 0xAC63
"""
import struct
import zipfile
from capstone import *

CONSTS32 = [0xE9FA57E4, 0x8E495673, 0x4F8B1BCA, 0x72F6FCBE, 0xB43B9BAF,
            0xAF57F7FB, 0x07B48238, 0xE34EAC63]
CONSTS16 = [0x57E4, 0x5673, 0x1BCA, 0xFCBE, 0x9BAF, 0xF7FB, 0x8238, 0xAC63]

FILES = {
    'lib__7ffe__.so': '/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so',
    'libgame.so (from apk)': None,  # loaded below
    'game-stage2.dec': '/home/z/my-project/download/re-work/m2/game-stage2.dec',
    'e0 merged': '/home/z/my-project/download/re-work/repo/evidence/e0_0x81_merged.bin',
    'e1 merged': '/home/z/my-project/download/re-work/repo/evidence/e1_0x96_merged.bin',
    'e3 merged': '/home/z/my-project/download/re-work/repo/evidence/e3_0xe3_merged.bin',
    'game e3': '/home/z/my-project/download/re-work/repo/evidence/m2_game_e3_0xe3_image.bin',
    'game e1': '/home/z/my-project/download/re-work/repo/evidence/m2_game_e1_0x96_image.bin',
    'game e0': '/home/z/my-project/download/re-work/repo/evidence/m2_game_e0_0x81_image.bin',
    '7ffe-payload.dec': '/home/z/my-project/download/re-work/m1b/7ffe-payload.dec',
}

z = zipfile.ZipFile('/home/z/my-project/download/re-work/apkm_extracted/split_config.arm64_v8a.apk')


def scan(name, data, lo, hi):
    """count movz/movk immediates matching the family constants"""
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    found32, found16 = {}, {}
    for ins in md.disasm(data[lo:hi], lo):
        if ins.mnemonic in ('mov', 'movz', 'movk', 'movn'):
            ops = ins.op_str
            for hexpart in ops.split('#')[1:]:
                try:
                    v = int(hexpart.strip().split(',')[0].rstrip('] lsl'), 0)
                except ValueError:
                    continue
                if v in CONSTS32:
                    found32[v] = found32.get(v, 0) + 1
                if v in CONSTS16:
                    found16[v] = found16.get(v, 0) + 1
    if found32 or found16:
        print(f"{name}: 32-bit consts { {hex(k): v for k, v in found32.items()} }")
        if found16:
            print(f"{'':>{len(name)}}  16-bit consts { {hex(k): v for k, v in found16.items()} }")


for name, path in FILES.items():
    if path is None:
        so = z.read('lib/arm64-v8a/libgame.so')
        scan('libgame.so stub', so, 0x1a77380, 0x1a80000)
        continue
    data = open(path, 'rb').read()
    if name == 'lib__7ffe__.so':
        # scan the executable region (stage-1 code) — find PT_LOAD exec bounds
        scan(name, data, 0x1000, 0x20000)
    else:
        scan(name, data, 0x400, min(len(data), 0x30000))
