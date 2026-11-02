#!/usr/bin/env python3
"""OPTC — sweep .vb binary keys against the encrypted .01 NTY family.

Hypothesis (from this session's reversing): the .vb assets carry the
per-volume sigInstall key records; the 32-byte key is record.sig[0:32].
The .01 files (RES/FONT/RES_LOADING) are the block-cipher family.

Method: emulate keyExpansion (0x39d39f4) + cores (cipher159 0x39d3300,
cipher144 0x39d4508, RC4 0x39d3800) from the restored engine under Unicorn
(via tools/m3c_emu.py), sweep every 32-byte window of the .vb file as the
key x modes {0xE0000000, 0x40000000} x payload offsets {0,4,0x34},
oracle = plaintext head 'MM\\x00\\x2a'.
"""
import struct
import sys
import zipfile

sys.path.insert(0, "/home/z/my-project/work/repo/tools")
import m3c_emu as M

CIPHER159 = 0x39d3300
CIPHER144 = 0x39d4508
RC4 = 0x39d3800

Z = zipfile.ZipFile("/home/z/my-project/upload/apkm/base.apk")

expand_cache = {}


def expand(key, mode):
    ck = (key, mode)
    if ck in expand_cache:
        return expand_cache[ck]
    M.uc.mem_write(M.HEAP + 0x800000, key)
    desc_a = M.HEAP + 0x810000
    M.uc.mem_write(desc_a, b"\x00" * 0x40)
    r = M.call(0x39d39f4, [desc_a, M.HEAP + 0x800000, len(key), mode])
    if r != 0:
        expand_cache[ck] = None
        return None
    holder = struct.unpack_from("<Q", M.rd(desc_a, 8), 0)[0]
    expand_cache[ck] = holder
    return holder


def run(core, holder, data):
    ina = M.HEAP + 0x840000
    outa = ina + 0x2000
    M.uc.mem_write(ina, data)
    r = M.call(core, [holder, ina, outa, len(data)])
    return r, M.rd(outa, len(data))


def check(pt):
    if pt[0:4] == b"MM\x00\x2a":
        cnt = struct.unpack_from(">H", pt, 8)[0]
        if 0 < cnt < 100000:
            return cnt
    return None


def sweep(vb_name, target_name, stride=1, max_windows=None):
    vb = Z.read(vb_name)
    tgt = Z.read(target_name)[:96]
    n = len(vb) - 32
    if max_windows:
        n = min(n, max_windows)
    print(f"== {vb_name} ({len(vb)} B) vs {target_name}: {n} windows")
    hits = 0
    for i in range(0, n, stride):
        key = vb[i:i + 32]
        for mode in (0xE0000000, 0x40000000):
            holder = expand(key, mode)
            if holder is None:
                continue
            for cname, core in (("c159", CIPHER159), ("c144", CIPHER144), ("rc4", RC4)):
                for off in (0, 4, 0x34):
                    chunk = tgt[off:off + 64]
                    if len(chunk) < 16:
                        continue
                    r, out = run(core, holder, chunk)
                    cnt = check(out)
                    if cnt is not None:
                        hits += 1
                        print(f"  *** HIT *** key@vb+{i:#x} mode={mode:#x} {cname} "
                              f"off={off:#x} count={cnt} key={key.hex()}")
        if i % 64 == 0 and i:
            print(f"   ... {i}/{n}", flush=True)
    if not hits:
        print("   (no hits)")
    return hits


if __name__ == "__main__":
    total = 0
    total += sweep("assets/FONT.DAT.vb", "assets/FONT.DAT.01")
    total += sweep("assets/RES.DAT.vb", "assets/RES.DAT.01")
    print(f"\nTOTAL HITS: {total}")
