#!/usr/bin/env python3
"""M2: decode stack strings in BOTH stage-2 copies (ror8-3 family) and the
game stub region of libgame.so, hunting for data1.dat / 7ffe / asset paths."""
import struct
import re
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN


def ror8(x, n):
    return ((x >> n) | (x << (8 - n))) & 0xFF


def dec_str_s2(bs):
    out = bytearray()
    for i, b in enumerate(bs):
        if b == 0:
            break
        out.append((~ror8(b, 3) - (i & 3)) & 0xFF)
    return bytes(out)


def rol8(b, n):
    return ((b << n) | (b >> (8 - n))) & 0xFF


def dec_str_e1(bs):
    out = bytearray()
    for i, b in enumerate(bs):
        if b == 0:
            break
        out.append((~rol8(b, 5) - (i & 3)) & 0xFF)
    return bytes(out)


def strings_via_call(data, target, decode, lo=0x400, hi=None, label=''):
    """Find BL target call sites, back-trace movz/movk stores, decode."""
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    hi = hi or len(data)
    callsites = []
    for off in range(lo, hi - 4, 4):
        w = struct.unpack_from("<I", data, off)[0]
        if (w & 0xFC000000) == 0x94000000:
            imm = w & 0x3FFFFFF
            if imm & 0x2000000:
                imm -= 0x4000000
            tgt = off + (imm << 2)
            if tgt == target:
                callsites.append(off)
    print(f"[{label}] {len(callsites)} calls to {target:#x}")
    out = []
    insns = list(md.disasm(data[lo:hi], lo))
    idx_of = {ins.address: i for i, ins in enumerate(insns)}
    for cs in callsites:
        if cs not in idx_of:
            continue
        i = idx_of[cs]
        regs = {}
        stores = {}
        for j in range(max(0, i - 60), i):
            p = insns[j]
            if p.mnemonic in ('mov', 'movz', 'movn') and not p.op_str.startswith(('x', 's', 'd')):
                parts = [q.strip() for q in p.op_str.split(',')]
                if len(parts) == 2 and parts[1].startswith('#'):
                    try:
                        regs[parts[0]] = int(parts[1].strip('#'), 0)
                    except ValueError:
                        pass
            elif p.mnemonic == 'movk':
                parts = [q.strip() for q in p.op_str.split(',')]
                if parts[0] in regs and parts[1].startswith('#'):
                    try:
                        imm = int(parts[1].strip('#'), 0)
                        shift = 0
                        for q in parts[2:]:
                            if 'lsl' in q:
                                shift = int(q.split('#')[1].strip(' ]'), 0)
                        regs[parts[0]] |= imm << shift
                    except ValueError:
                        pass
            elif p.mnemonic == 'str' and '[sp' in p.op_str:
                m = re.search(r'\[sp(?:,\s*#(\-?0x[0-9a-f]+|\-?\d+))?\]', p.op_str)
                if m:
                    off2 = int(m.group(1), 0) if m.group(1) else 0
                    rs = p.op_str.split(',')[0].strip()
                    if rs in regs:
                        stores[off2] = regs[rs]
        if not stores:
            continue
        blob = b''.join(struct.pack('<I', stores[o] & 0xFFFFFFFF) for o in sorted(stores))
        dec = decode(blob)
        txt = dec.split(b'\0')[0]
        if len(txt) >= 2 and all(0x20 <= b < 0x7f for b in txt):
            out.append((cs, txt.decode()))
    return out


M2 = '/home/z/my-project/download/re-work/m2'
EV = '/home/z/my-project/download/re-work/repo/evidence'

# stage-2 string decryptor fn = 0xd528 (protector); game twin should be same offset
for label, path in (('prot_stage2', '/home/z/my-project/download/re-work/m1b/7ffe-payload.dec'),
                    ('game_stage2', f'{M2}/game-stage2.dec')):
    data = open(path, 'rb').read()
    res = strings_via_call(data, 0xd528, dec_str_s2, 0x400, 0x14000, label)
    print(f"  {len(res)} decoded strings")
    for a, t in res:
        mark = ' <<<<' if any(k in t.lower() for k in ('data', '7ffe', 'asset', '.dat', 'apk', 'proc')) else ''
        print(f"    @{a:#08x}: {t!r}{mark}")
