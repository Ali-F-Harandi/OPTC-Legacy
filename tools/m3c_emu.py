#!/usr/bin/env python3
"""M3c-11: Unicorn emulation harness for the bisque crypto cores.

Memory layout (all from the restored 0x9d image + shipped .so overlay):
  [0x00000000, 0x446fcc8)  engine image (merged.bin, fully relocated)
     + shipped .so overlay for [0x1a77380, 0x1C00000) (bootstrap) and
       [0x3F0B124, 0x3FB93C0) (__lcxx_override + .plt) where merged is zero
  [0x10000000, 0x10100000)  stack
  [0x20000000, 0x21000000)  heap (service allocator)
  [0x30000000, 0x30001000)  TLS block (canary at +0x28)
  [0x500000000, ...)        service trampolines (magic RET addresses)

Services (protector-filled GOT slots):
  0x41cad68 calloc(nmemb, size)     0x41b9178 malloc(size)
  0x41b8830 memcpy(d, s, n)         0x41b9198 free(p)
"""
import struct
import sys

from unicorn import *
from unicorn.arm64_const import *

MERGED = '/home/z/my-project/download/re-work/m2/9d_module/merged.bin'
SO = '/home/z/my-project/download/re-work/apk/arm64_x/lib/arm64-v8a/libgame.so'

STACK = 0x10000000
STACK_SZ = 0x100000
HEAP = 0x20000000
HEAP_SZ = 0x1000000
TLS = 0x30000000
MAGIC = 0x500000000
MAGIC_SZ = 0x10000
STOP = 0x600000000          # emulation return address

merged = open(MERGED, 'rb').read()
so = open(SO, 'rb').read()

# ---- build the full image ----
image = bytearray(merged)
def overlay(lo, hi):
    for a in range(lo, hi):
        pass
# byte-level overlay (regions are small enough)
for lo, hi in ((0x1a77380, 0x1C00000), (0x3F0B124, 0x3FB93C0)):
    seg = so[lo:hi]
    mseg = image[lo:hi]
    # overlay only where merged is zero (shipped carries the real content)
    out = bytearray(mseg)
    for i in range(0, len(seg), 16):
        if out[i:i+16] == b'\x00' * 16 and seg[i:i+16] != b'\x00' * 16:
            out[i:i+16] = seg[i:i+16]
    image[lo:hi] = out
IMAGE_SZ = (len(image) + 0xFFFF) & ~0xFFFF

# ---- services ----
SERVICES = {
    0x41cad68: 'calloc',
    0x41b9178: 'malloc',
    0x41b8830: 'memcpy',
    0x41b9198: 'free',
}
svc_addr = {}          # got slot -> magic address
RET = struct.pack('<I', 0xd65f03c0)      # aarch64 `ret`

uc = Uc(UC_ARCH_ARM64, UC_MODE_LITTLE_ENDIAN)
uc.mem_map(0, IMAGE_SZ, UC_PROT_ALL)
uc.mem_write(0, bytes(image))
uc.mem_map(STACK, STACK_SZ, UC_PROT_ALL)
uc.mem_map(HEAP, HEAP_SZ, UC_PROT_ALL)
uc.mem_map(TLS, 0x1000, UC_PROT_ALL)
uc.mem_map(MAGIC, MAGIC_SZ, UC_PROT_ALL)
uc.mem_map(STOP, 0x1000, UC_PROT_ALL)

# fill service GOT slots with magic trampoline addresses (16 bytes of RET)
for i, (slot, name) in enumerate(sorted(SERVICES.items())):
    a = MAGIC + 0x100 * (i + 1)
    uc.mem_write(a, RET * 4)
    uc.mem_write(slot, struct.pack('<Q', a))
    svc_addr[slot] = a
svc_by_magic = {a: n for n, a in
                ((k, v) for k, v in svc_addr.items())} if False else \
               {v: SERVICES[k] for k, v in svc_addr.items()}

# TLS + canary
uc.mem_write(TLS + 0x28, b'\xde\xad\xbe\xef\xca\xfe\xba\xbe')
try:
    uc.reg_write(UC_ARM64_REG_TPIDR_EL0, TLS)
except Exception as e:
    print('TPIDR_EL0 not settable:', e)

heap_ptr = HEAP + 0x100


def hook_code(uc_, addr, size, user):
    if addr in svc_by_magic:
        name = svc_by_magic[addr]
        global heap_ptr
        x0, x1, x2 = (uc_.reg_read(UC_ARM64_REG_X0),
                      uc_.reg_read(UC_ARM64_REG_X1),
                      uc_.reg_read(UC_ARM64_REG_X2))
        if name == 'calloc':
            n = (x0 * x1 + 15) & ~15
            uc_.reg_write(UC_ARM64_REG_X0, heap_ptr)
            uc_.mem_write(heap_ptr, b'\x00' * n)
            heap_ptr += n + 16
        elif name == 'malloc':
            n = (x0 + 15) & ~15
            uc_.reg_write(UC_ARM64_REG_X0, heap_ptr)
            heap_ptr += n + 16
        elif name == 'memcpy':
            d = uc_.mem_read(x1, x2)
            uc_.mem_write(x0, bytes(d))
            uc_.reg_write(UC_ARM64_REG_X0, x0)
        elif name == 'free':
            uc_.reg_write(UC_ARM64_REG_X0, 0)
        # x30 still holds the return address -> the RET at the magic page runs


uc.hook_add(UC_HOOK_CODE, hook_code, begin=MAGIC, end=MAGIC + MAGIC_SZ)


def call(func, args, timeout=0):
    """Run func(args...) with a stop sentinel as return address."""
    global heap_ptr
    sp = STACK + STACK_SZ - 0x1000
    for i, a in enumerate(args):
        uc.reg_write(UC_ARM64_REG_X0 + i, a)
    uc.reg_write(UC_ARM64_REG_X30, STOP)
    uc.reg_write(UC_ARM64_REG_SP, sp)
    uc.emu_start(func, STOP, timeout=timeout)
    return uc.reg_read(UC_ARM64_REG_X0)


def rd(addr, n):
    return bytes(uc.mem_read(addr, n))


if __name__ == '__main__':
    # smoke test: run the key expansion on a 24-byte key, then cipher159 a block
    key = b'vuyWQSjlknpJF54ib36txVse'
    key_a = HEAP + 0x800000
    uc.mem_write(key_a, key)
    desc_a = HEAP + 0x810000
    uc.mem_write(desc_a, b'\x00' * 0x40)
    r = call(0x39d39f4, [desc_a, key_a, len(key), 0xE0000000])
    print(f"expand -> x0={r:#x}")
    desc = rd(desc_a, 0x40)
    print('desc:', desc.hex())
    holder = struct.unpack_from('<Q', desc, 8)[0] if desc[8:16] != b'\x00'*8 else None
    print(f"holder @ {holder:#x}" if holder else 'no holder!')
    if holder:
        h = rd(holder, 0x38)
        print('holder:', h.hex())
        # cipher159: encrypt 16 zero bytes
        ina = HEAP + 0x820000
        uc.mem_write(ina, b'\x41' * 32)
        outa = ina + 0x1000
        r2 = call(0x39d3300, [holder, ina, outa, 32])
        print(f"cipher159 -> x0={r2:#x}")
        print('in :', rd(ina, 32).hex())
        print('out:', rd(outa, 32).hex())
