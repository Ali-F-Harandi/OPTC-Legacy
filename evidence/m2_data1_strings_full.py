#!/usr/bin/env python3
"""M2: scan e3 (both copies, full code range) + the libgame.so stub for
obfuscated stack strings in BOTH families (ror8-3 stage-2 / rol8-5 e1),
hunting the data1.dat / 7ffe / assets path."""
import struct
import re
from capstone import *


def rol8(b, n):
    return ((b << n) | (b >> (8 - n))) & 0xFF


def ror8(b, n):
    return ((b >> n) | (b << (8 - n))) & 0xFF


def deob_e1(bs):
    out = bytearray()
    for i, c in enumerate(bs):
        if c == 0:
            break
        out.append((~rol8(c, 5) - (i & 3)) & 0xFF)
    return bytes(out)


def deob_s2(bs):
    out = bytearray()
    for i, c in enumerate(bs):
        if c == 0:
            break
        out.append((~ror8(c, 3) - (i & 3)) & 0xFF)
    return bytes(out)


def scan(img, lo, hi, label):
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    regvals, stores, results = {}, {}, []
    for ins in md.disasm(img[lo:hi], lo):
        m, ops = ins.mnemonic, ins.op_str
        if m == 'ret':
            if stores:
                results.append(dict(stores))
            regvals, stores = {}, {}
            continue
        if m in ('mov', 'movz', 'movn'):
            parts = [p.strip() for p in ops.split(',')]
            if len(parts) == 2 and parts[1].startswith('#') and parts[0][0] in 'wx':
                try:
                    regvals[parts[0]] = int(parts[1].strip('#'), 0)
                except ValueError:
                    pass
        elif m == 'movk':
            parts = [p.strip() for p in ops.split(',')]
            if parts[0] in regvals:
                try:
                    imm = int(parts[1].strip('#'), 0)
                    shift = 0
                    for q in parts[2:]:
                        if 'lsl' in q:
                            shift = int(q.split('#')[1].rstrip(' ]'), 0)
                    regvals[parts[0]] |= imm << shift
                except (ValueError, IndexError):
                    pass
        elif m in ('str', 'stp') and ('[sp' in ops or '[x29' in ops):
            try:
                mo = re.search(r'\[(sp|x29)(?:,\s*#(\-?0x[0-9a-f]+|\-?\d+))?\]', ops)
                if not mo:
                    continue
                off = int(mo.group(2), 0) if mo.group(2) else 0
                if mo.group(1) == 'sp':
                    off += 0x400
                if m == 'str':
                    rs = ops.split(',')[0].strip()
                    if rs in regvals:
                        stores[off] = regvals[rs] & 0xFFFFFFFF
                else:
                    parts = [p.strip() for p in ops.split(',')]
                    if parts[0] in regvals:
                        stores[off] = regvals[parts[0]] & 0xFFFFFFFF
                    if parts[1] in regvals:
                        stores[off + 4] = regvals[parts[1]] & 0xFFFFFFFF
            except Exception:
                pass
    if stores:
        results.append(dict(stores))
    print(f"===== {label} [{lo:#x},{hi:#x}): {len(results)} buffers =====")
    for st in results:
        if len(st) < 2:
            continue
        addrs = sorted(st)
        blob = b''.join(struct.pack('<I', st[o]) for o in addrs)
        for name, fn in (('e1fam', deob_e1), ('s2fam', deob_s2)):
            dec = fn(blob)
            txt = dec.split(b'\0')[0]
            if len(txt) >= 4 and all(32 <= b < 127 for b in txt):
                mark = ' <<<<' if any(k in txt for k in (b'data', b'7ffe', b'asset', b'.dat', b'apk', b'zip', b'PK')) else ''
                print(f"  @{addrs[0]:#08x} [{name}] ({len(addrs)} dw): {txt.decode()!r}{mark}")
                break


EV = '/home/z/my-project/download/re-work/repo/evidence'
scan(open(f'{EV}/e3_0xe3_merged.bin', 'rb').read(), 0x1000, 0x18000, 'protector e3')
scan(open(f'{EV}/m2_game_e3_0xe3_image.bin', 'rb').read(), 0x1000, 0x18000, 'game e3')

# game stub: libgame.so .text
import zipfile
z = zipfile.ZipFile('/home/z/my-project/download/re-work/apkm_extracted/split_config.arm64_v8a.apk')
so = z.read('lib/arm64-v8a/libgame.so')
scan(so, 0x1a77380, 0x1a80000, 'libgame.so stub')
