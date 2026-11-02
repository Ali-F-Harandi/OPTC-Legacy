#!/usr/bin/env python3
"""OPTC — self-consistency test: Python RC4-255 core vs emulated engine core.

1. Encrypt a known plaintext with the Python core (m4_decrypt_data1.rc4_255)
2. keyExpansion + RC4 core under Unicorn (m3c_emu) with the same key
3. Compare — validates the (key_obj, in, out, len) calling convention.
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/work/repo/tools")
import m3c_emu as M
from m4_decrypt_data1 import rc4_255

RC4 = 0x39d3800
KEYEXP = 0x39d39f4

merged = open("/home/z/my-project/download/re-work/m2/9d_module/merged.bin", "rb").read()
T1 = merged[0x14F7375:0x14F7475]

key = bytes(range(0xA0, 0xA0 + 32))          # 32-byte test key
pt = b"MM\x00\x2a" + bytes((i * 7 + 3) & 0xFF for i in range(60))  # 64 B
ct = rc4_255(T1, key, pt)
assert ct != pt

print("python core: pt[0:8] =", pt[:8].hex(), " ct[0:8] =", ct[:8].hex())

# --- emulated: expand key then RC4 the ciphertext ---
key_a = M.HEAP + 0x800000
M.uc.mem_write(key_a, key)

def try_convention(desc_base, pass_desc, mode=0x40000000, out_off=0):
    desc_a = desc_base
    M.uc.mem_write(desc_a, b"\x00" * 0x40)
    r = M.call(KEYEXP, [desc_a, key_a, len(key), mode])
    if r != 0:
        return None, f"expand failed r={r:#x}"
    arg1 = desc_a if pass_desc else struct.unpack_from("<Q", M.rd(desc_a, 8), 0)[0]
    if not arg1:
        return None, "no holder ptr"
    ina = M.HEAP + 0x840000
    outa = ina + 0x2000
    M.uc.mem_write(ina, ct)
    r2 = M.call(RC4, [arg1, ina, outa, len(ct)])
    out = M.rd(outa, len(ct))
    return out, f"r2={r2:#x}"

for label, desc_base, pass_desc, out_off in (
    ("arg1 = desc (expansion out buffer)", M.HEAP + 0x810000, True, 0),
    ("arg1 = *desc (holder ptr)", M.HEAP + 0x810000, False, 0),
    ("arg1 = desc+8 area", M.HEAP + 0x810008, True, 0),
):
    out, info = try_convention(desc_base, pass_desc)
    if out is None:
        print(f"{label}: {info}")
        continue
    ok = out == pt
    print(f"{label}: {info} match={ok}")
    if ok:
        print("   *** CONVENTION CONFIRMED ***")
        print("   emu out[0:8]:", out[:8].hex())
        break
    else:
        print("   emu out[0:8]:", out[:8].hex(), " want:", pt[:8].hex())
