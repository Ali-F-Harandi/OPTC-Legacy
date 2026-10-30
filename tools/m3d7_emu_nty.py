#!/usr/bin/env python3
"""M3d-7: emulate parse_NTY on a REAL NTY file with a fake IO::Stream.

Fake stream: vtable in the magic page; read(+0x18)/seek(+0x30)/tell(+0x38)
implemented in Python over an in-memory file image. Hooks:
  - key expansion 0x39d39f4: log key bytes, len, mode
  - every read: log offset/len
Run on the plaintext RES.DAT.00 first (format ground truth), then others.
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/re-work/repo-git/tools")
import m3c_emu as E          # sets up uc, image, services, call(), rd()

from unicorn import *
from unicorn.arm64_const import *

RW = "/home/z/my-project/download/re-work"

MAGIC2 = 0x700000000         # second magic page (fake stream vtable slots)
uc = E.uc

# ---- fake stream state ----
class FS:
    data = b""
    pos = 0
    reads = []

    @classmethod
    def read(cls, buf, ln):
        n = min(ln, len(cls.data) - cls.pos)
        uc.mem_write(buf, cls.data[cls.pos:cls.pos + n])
        cls.pos += n
        cls.reads.append(n)
        return n

    @classmethod
    def seek(cls, pos, whence=0):
        if whence == 0:
            cls.pos = pos
        elif whence == 1:
            cls.pos += pos
        elif whence == 2:
            cls.pos = len(cls.data) + pos
        return cls.pos

    @classmethod
    def tell(cls):
        return len(cls.data) - cls.pos   # REMAINING (matches BQFileStream tell)


uc.mem_map(MAGIC2, 0x10000, UC_PROT_ALL)
RET = struct.pack("<I", 0xd65f03c0)
SLOTS = {"read": MAGIC2 + 0x100, "seek": MAGIC2 + 0x200, "tell": MAGIC2 + 0x300}
for a in SLOTS.values():
    uc.mem_write(a, RET * 4)

# memset import service (GOT 0x41b9050 unresolved in the static image)
MAGIC3 = 0x800000000
uc.mem_map(MAGIC3, 0x10000, UC_PROT_ALL)
MEMSET = MAGIC3 + 0x100
uc.mem_write(MEMSET, RET * 4)
uc.mem_write(0x41b9050, struct.pack("<Q", MEMSET))


def hook_memset(uc_, addr, size, user):
    if addr == MEMSET:
        d, v, n = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                   uc_.reg_read(UC_ARM64_REG_X2))
        uc_.mem_write(d, bytes([v & 0xFF]) * n)
        uc_.reg_write(UC_ARM64_REG_X0, d)


uc.hook_add(UC_HOOK_CODE, hook_memset, begin=MAGIC3, end=MAGIC3 + 0x10000)


def hook_stream(uc_, addr, size, user):
    x0, x1, x2 = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                  uc_.reg_read(UC_ARM64_REG_X2))
    if addr == SLOTS["read"]:
        r = FS.read(x1, x2)
        uc_.reg_write(UC_ARM64_REG_X0, r & 0xFFFFFFFFFFFFFFFF)
    elif addr == SLOTS["seek"]:
        # seek(this, pos, whence?)  -- signatures may be (this,pos,whence)
        r = FS.seek(x1, x2 if x2 in (0, 1, 2) else 0)
        uc_.reg_write(UC_ARM64_REG_X0, r & 0xFFFFFFFFFFFFFFFF)
    elif addr == SLOTS["tell"]:
        uc_.reg_write(UC_ARM64_REG_X0, FS.tell() & 0xFFFFFFFFFFFFFFFF)


uc.hook_add(UC_HOOK_CODE, hook_stream, begin=MAGIC2, end=MAGIC2 + 0x10000)

# ---- key-expansion hook ----
KEYLOG = []


def hook_expand(uc_, addr, size, user):
    x0, x1, x2, x3 = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                      uc_.reg_read(UC_ARM64_REG_X2), uc_.reg_read(UC_ARM64_REG_X3))
    key = bytes(uc_.mem_read(x1, min(x2, 64)))
    KEYLOG.append((key, x2, x3))
    print(f"  [keyExpand] len={x2} mode={x3:#x} key={key.hex()}")


uc.hook_add(UC_HOOK_CODE, hook_expand, begin=0x39d39f4, end=0x39d39f4 + 4)

# ---- build objects ----
HEAP = E.HEAP


def run_nty(path, label):
    FS.data = open(path, "rb").read()
    FS.pos = 0
    FS.reads = []
    print(f"\n===== {label}: {len(FS.data)} B =====")
    ctx = HEAP + 0x900000
    uc.mem_write(ctx, b"\x00" * 0x4F8)
    # NtyReader ctor
    r = E.call(0x1ef48b8, [ctx])
    # fake stream object: vtable with slots
    stream = HEAP + 0x901000
    vt = HEAP + 0x902000
    uc.mem_write(vt + 0x18, struct.pack("<Q", SLOTS["read"]))
    uc.mem_write(vt + 0x30, struct.pack("<Q", SLOTS["seek"]))
    uc.mem_write(vt + 0x38, struct.pack("<Q", SLOTS["tell"]))
    uc.mem_write(stream, struct.pack("<Q", vt))
    # parse_NTY(ctx, stream, param=0)
    r = E.call(0x39ddab4, [ctx, stream, 0])
    print(f"parse_NTY -> {r:#x}")
    f34, f36, f38, f3c, f40 = struct.unpack_from("<HHIHI", uc.mem_read(ctx, 0x44), 0)
    print(f"ctx: +0x34={f34:#x} +0x36={f36:#x} +0x38={f38:#x} +0x3c={f3c:#x} +0x40={f40:#x}")
    print(f"ctx+0x20(count?)={struct.unpack_from('<I', uc.mem_read(ctx+0x20,4),0)[0]:#x}")
    cnt = struct.unpack_from("<I", uc.mem_read(ctx + 0x4b0, 4), 0)[0]
    print(f"ctx+0x4b0(volume count)={cnt}")
    print(f"reads: {len(FS.reads)} calls, {sum(FS.reads)} bytes; pos now {FS.pos}")
    # dump the volume entry (first one at ctx+0x4a0 list)
    lst = struct.unpack_from("<Q", uc.mem_read(ctx + 0x4a0, 8), 0)[0]
    if lst:
        node = struct.unpack_from("<Q", uc.mem_read(lst + 8, 8), 0)[0] if lst else 0
        # entry stored at node+8? (list node {next?, entry})
        print(f"volume list head {lst:#x}, [head+8]={node:#x}")
        if node:
            ent = bytes(uc.mem_read(node, 0x300))
            print(f"entry[0:0x120]: {ent[:0x120].hex()}")
    return ctx


if __name__ == "__main__":
    run_nty(f"{RW}/apk/base_x/assets/assets/RES.DAT.00", "RES.DAT.00 (plaintext NTY)")
    print(f"\nKEYLOG: {len(KEYLOG)} expansions")
