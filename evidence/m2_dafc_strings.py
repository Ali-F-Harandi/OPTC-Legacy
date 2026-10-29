#!/usr/bin/env python3
"""M2: decode every stack-string passed to FUN_0000dafc (stage-2's in-place
string decryptor, ror8-3 family) across BOTH stage-2 copies — hunting for
the assets/7ffe/data1.dat path and friends."""
import re
import struct
import sys

FILES = {
    'prot_stage2': '/home/z/my-project/download/re-work/m1b/7ffe-payload.dec',
    'game_stage2': '/home/z/my-project/download/re-work/m2/game-stage2.dec',
}


def ror8(x, n):
    return ((x >> n) | (x << (8 - n))) & 0xFF


def dec_str(bs):
    out = bytearray()
    for i, b in enumerate(bs):
        if b == 0:
            break
        out.append((~ror8(b, 3) - (i & 3)) & 0xFF)
    return bytes(out)


for label, path in FILES.items():
    print(f"===== {label} =====")
    src = open(path, 'rb').read()
    # find functions in the rea decompilation? Faster: raw scan for the
    # constant-push pattern. In ARM64 the 5 dwords come as movz/movk pairs
    # right before bl dafc. Instead of disassembly, use the decompiled C.
    dec_dir = ('/home/z/my-project/download/re-work/m1b/stage2_decompiled/functions'
               if label == 'prot_stage2' else None)
    if dec_dir is None:
        # game twin: same code offsets (99.84% identical) -> reuse prot list
        pass
    import glob
    import os
    for fn in sorted(glob.glob(f'{dec_dir}/*.c')):
        text = open(fn).read()
        if 'FUN_0000dafc' not in text or fn.endswith('0xdafc.c'):
            continue
        # collect local_XX = 0x...; assignments preceding the dafc call
        consts = re.findall(r'local_\w+ = (0x[0-9a-f]+);', text)
        # also handle = 0x...U forms
        if not consts:
            continue
        vals = [int(c, 16) for c in consts]
        # try consecutive windows of up to 8 dwords as the string buffer
        best = None
        for take in (8, 7, 6, 5, 4, 3, 2):
            if len(vals) < take:
                continue
            chunk = vals[:take]
            blob = b''.join(struct.pack('<I', v & 0xFFFFFFFF) for v in chunk)
            dec = dec_str(blob)
            # the decryptor stops at the first NUL — require a clean,
            # printable result that consumes most of the buffer
            if dec and all(32 <= b < 127 for b in dec) and len(dec) >= 3:
                # only accept if the string is non-trivially long or the
                # remaining dwords decode to garbage (NUL-terminated early)
                best = (take, dec.decode())
                break
        if best is None and vals:
            # fall back: decode all, show raw
            blob = b''.join(struct.pack('<I', v & 0xFFFFFFFF) for v in vals[:8])
            dec = dec_str(blob)
            if dec:
                best = (len(vals[:8]), dec.decode('latin1'))
        name = os.path.basename(fn)
        if best:
            print(f"  {name}: ({best[0]} dw) {best[1]!r}")
        else:
            print(f"  {name}: consts={[hex(v) for v in vals[:6]]} <undecoded>")
