#!/usr/bin/env python3
"""M2: decode ALL 38 strings passed to FUN_0000d528 (stage-2's second string
decryptor copy) by back-tracing movz/movk -> str [sp+off] at each call site."""
import struct
from capstone import *

data = open('/home/z/my-project/download/re-work/m1b/7ffe-payload.dec', 'rb').read()
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)


def ror8(x, n):
    return ((x >> n) | (x << (8 - n))) & 0xFF


def dec_str(bs):
    out = bytearray()
    for i, b in enumerate(bs):
        if b == 0:
            break
        out.append((~ror8(b, 3) - (i & 3)) & 0xFF)
    return bytes(out)


# find call sites
callsites = []
for off in range(0x5d4, 0x14000, 4):
    w = struct.unpack_from('<I', data, off)[0]
    if (w & 0xFC000000) == 0x94000000:
        imm = w & 0x3FFFFFF
        if imm & 0x2000000:
            imm -= 0x4000000
        if off + (imm << 2) == 0xd528:
            callsites.append(off)
print(f"{len(callsites)} call sites")

# disassemble the whole code once
insns = list(md.disasm(data[0x5d4:0x14000], 0x5d4))
idx = {ins.address: i for i, ins in enumerate(insns)}

for cs in callsites:
    if cs not in idx:
        continue
    i = idx[cs]
    # back-trace: collect reg constants and sp-relative stores
    regs = {}
    stores = {}
    start = max(0, i - 80)
    for j in range(start, i):
        p = insns[j]
        ops = p.op_str
        if p.mnemonic in ('mov', 'movz', 'movn'):
            parts = [q.strip() for q in ops.split(',')]
            if len(parts) == 2 and parts[1].startswith('#') and parts[0][0] == 'w':
                try:
                    regs[parts[0]] = int(parts[1].strip('#'), 0)
                except ValueError:
                    pass
        elif p.mnemonic == 'movk':
            parts = [q.strip() for q in ops.split(',')]
            if parts[0] in regs:
                try:
                    imm = int(parts[1].strip('#'), 0)
                    shift = 0
                    for q in parts[2:]:
                        if 'lsl' in q:
                            shift = int(q.split('#')[1].rstrip(']'), 0)
                    regs[parts[0]] = (regs[parts[0]] | (imm << shift)) & 0xFFFFFFFF
                except (ValueError, IndexError):
                    pass
        elif p.mnemonic in ('str', 'stp') and '[sp' in ops:
            import re
            m = re.search(r'\[sp(?:,\s*#(\-?0x[0-9a-f]+|\-?\d+))?\]', ops)
            if not m:
                continue
            off2 = int(m.group(1), 0) if m.group(1) else 0
            if p.mnemonic == 'str':
                rs = ops.split(',')[0].strip()
                if rs in regs:
                    stores[off2] = regs[rs]
            else:
                parts = [q.strip() for q in ops.split(',')]
                if parts[0] in regs:
                    stores[off2] = regs[parts[0]]
                if parts[1] in regs:
                    stores[off2 + 4] = regs[parts[1]]
    if not stores:
        print(f"  @{cs:#x}: no stores found")
        continue
    blob = b''.join(struct.pack('<I', stores[o]) for o in sorted(stores))
    dec = dec_str(blob)
    txt = dec.split(b'\0')[0]
    ok = all(32 <= b < 127 for b in txt) and len(txt) >= 2
    mark = ' <<<<' if any(k in txt.lower() for k in (b'data', b'7ffe', b'asset', b'.dat', b'apk')) else ''
    print(f"  @{cs:#08x} ({len(stores)} dw): {txt.decode('latin1')!r}{mark}" if ok
          else f"  @{cs:#08x} ({len(stores)} dw): <bin {dec[:32].hex()}>")
