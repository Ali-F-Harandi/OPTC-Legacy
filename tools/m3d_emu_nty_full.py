#!/usr/bin/env python3
"""M3d-8: full NTY parse emulation with a mini-libc service layer.

All import GOT slots that are zero in the static image get magic trampolines:
common libc functions are implemented in Python; the rest return 0 (logged).
Usage: python3 m3d8_emu_full.py <file> [more files...]
       python3 m3d8_emu_full.py --json out.json <file>   (M4: volume table dump)
"""
import json
import struct
import sys

sys.path.insert(0, "/home/z/my-project/re-work/repo-git/tools")
import m3c_emu as E

from unicorn import *
from unicorn.arm64_const import *

RW = "/home/z/my-project/download/re-work"
img = open(f"{RW}/m2/9d_module/merged.bin", "rb").read()
so = open(f"{RW}/apk/arm64_x/lib/arm64-v8a/libgame.so", "rb").read()

uc = E.uc
MAGIC_SVC = 0x800000000
MAGIC_STR = 0x700000000
uc.mem_map(MAGIC_SVC, 0x100000, UC_PROT_ALL)
uc.mem_map(MAGIC_STR, 0x10000, UC_PROT_ALL)
RET = struct.pack("<I", 0xd65f03c0)


def stub_got(addr):
    w0, w1 = struct.unpack_from("<II", so, addr)
    if (w0 & 0x9F000000) != 0x90000000:
        return None
    immlo = (w0 >> 29) & 3
    immhi = (w0 >> 5) & 0x7FFFF
    imm = (immhi << 2) | immlo
    if imm & (1 << 20):
        imm -= 1 << 21
    page = ((addr >> 12) + imm) << 12
    rd = w0 & 0x1F
    if (w1 & 0xFFC00000) != 0xF9400000 or ((w1 >> 5) & 0x1F) != rd:
        return None
    return page + (((w1 >> 10) & 0xFFF) << 3)


# map: stub -> import name (from plt.tsv)
imp_name = {}
for line in open(f"{RW}/m3/plt.tsv"):
    s, k, t = line.rstrip("\n").split("\t")
    if k == "import":
        imp_name[int(s, 16)] = t

# find zero-GOT stubs (import AND dyn kinds); assign magic slots
DYN_NAMES = {0x41b9050: "memset", 0x41b8510: "strlen", 0x41b85a0: "memcmp",
             0x41bc478: "strchr", 0x41c8e38: "mutex_lock", 0x41c8e40: "mutex_unlock",
             0x41c6650: "map_compare", 0x41b8830: "memcpy"}
slot_of = {}          # magic addr -> (name)
name_to_slot = {}
next_slot = MAGIC_SVC + 0x1000
SKIP_GOT = {0x41cad68, 0x41b9178, 0x41b8830, 0x41b9198}   # serviced by m3c_emu
a = 0x3F0B230
while a + 16 <= 0x3FB93C0:
    g = stub_got(a)
    if g and g + 8 <= len(img) and g not in SKIP_GOT:
        q = struct.unpack_from("<Q", img, g)[0]
        nm = imp_name.get(a) or DYN_NAMES.get(g)
        if q == 0:
            if nm is None:
                nm = f"dyn_{g:x}"
            if nm not in name_to_slot:
                name_to_slot[nm] = next_slot
                uc.mem_write(next_slot, RET * 4)
                slot_of[next_slot] = nm
                next_slot += 0x100
            uc.mem_write(g, struct.pack("<Q", name_to_slot[nm]))
    a += 16
print(f"[*] patched {len(name_to_slot)} zero-GOT stubs with magic slots")

CALLLOG = []


def rd_cstr(a_, maxlen=4096):
    out = bytearray()
    while len(out) < maxlen:
        c = uc.mem_read(a_ + len(out), 1)[0]
        if c == 0:
            break
        out.append(c)
    return bytes(out)


def hook_svc(uc_, addr, size, user):
    nm = slot_of.get(addr)
    if nm is None:
        return
    x0, x1, x2, x3 = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                      uc_.reg_read(UC_ARM64_REG_X2), uc_.reg_read(UC_ARM64_REG_X3))
    CALLLOG.append((nm, x0, x1, x2))
    if nm in ("memset", "__memset_chk"):
        uc_.mem_write(x0, bytes([x1 & 0xFF]) * x2)
        uc_.reg_write(UC_ARM64_REG_X0, x0)
    elif nm in ("memcpy", "__memcpy_chk"):
        uc_.mem_write(x0, bytes(uc_.mem_read(x1, x2)))
        uc_.reg_write(UC_ARM64_REG_X0, x0)
    elif nm in ("strlen", "strnlen"):
        try:
            s = rd_cstr(x0)
            uc_.reg_write(UC_ARM64_REG_X0, len(s))
        except Exception:
            uc_.reg_write(UC_ARM64_REG_X0, 0)
    elif nm in ("strcpy", "__strcpy_chk"):
        s = rd_cstr(x1)
        uc_.mem_write(x0, s + b"\x00")
        uc_.reg_write(UC_ARM64_REG_X0, x0)
    elif nm in ("strncpy", "__strncpy_chk"):
        s = rd_cstr(x1)[:x2]
        uc_.mem_write(x0, s + b"\x00" * (x2 - len(s)))
        uc_.reg_write(UC_ARM64_REG_X0, x0)
    elif nm in ("strcmp", "strncmp"):
        A, B = rd_cstr(x0), rd_cstr(x1)
        if nm == "strncmp":
            A, B = A[:x2], B[:x2]
        uc_.reg_write(UC_ARM64_REG_X0, 0 if A == B else 1)
    elif nm in ("strcat", "__strcat_chk"):
        A = rd_cstr(x0)
        B = rd_cstr(x1)
        uc_.mem_write(x0, A + B + b"\x00")
        uc_.reg_write(UC_ARM64_REG_X0, x0)
    elif nm == "memcmp":
        A = bytes(uc_.mem_read(x0, x2))
        B = bytes(uc_.mem_read(x1, x2))
        uc_.reg_write(UC_ARM64_REG_X0, 0 if A == B else 1)
    elif nm in ("__strchr_chk", "strchr", "strrchr"):
        s = rd_cstr(x0)
        c = x1 & 0xFF
        idx = s.find(bytes([c]))
        uc_.reg_write(UC_ARM64_REG_X0, (x0 + idx) if idx >= 0 else 0)
    elif nm in ("mutex_lock", "mutex_unlock", "map_compare"):
        uc_.reg_write(UC_ARM64_REG_X0, 0)
    else:
        # unimplemented: return 0
        uc_.reg_write(UC_ARM64_REG_X0, 0)


uc.hook_add(UC_HOOK_CODE, hook_svc, begin=MAGIC_SVC, end=MAGIC_SVC + 0x100000)

# ---- fake stream ----
SLOTS = {"read": MAGIC_STR + 0x100, "seek": MAGIC_STR + 0x200, "tell": MAGIC_STR + 0x300}
for a_ in SLOTS.values():
    uc.mem_write(a_, RET * 4)


class FS:
    data = b""
    pos = 0

    @classmethod
    def reset(cls, d):
        cls.data = d
        cls.pos = 0


def hook_stream(uc_, addr, size, user):
    x0, x1, x2 = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                  uc_.reg_read(UC_ARM64_REG_X2))
    if addr == SLOTS["read"]:
        n = max(0, min(x2, len(FS.data) - FS.pos))
        uc_.mem_write(x1, FS.data[FS.pos:FS.pos + n])
        FS.pos += n
        uc_.reg_write(UC_ARM64_REG_X0, n)
    elif addr == SLOTS["seek"]:
        FS.pos = x1 if x2 in (0, 1, 2) else x1
        uc_.reg_write(UC_ARM64_REG_X0, FS.pos)
    elif addr == SLOTS["tell"]:
        uc_.reg_write(UC_ARM64_REG_X0, FS.pos)


uc.hook_add(UC_HOOK_CODE, hook_stream, begin=MAGIC_STR, end=MAGIC_STR + 0x10000)

# ---- key expansion hook ----
KEYLOG = []


def hook_expand(uc_, addr, size, user):
    x0, x1, x2, x3 = (uc_.reg_read(UC_ARM64_REG_X0), uc_.reg_read(UC_ARM64_REG_X1),
                      uc_.reg_read(UC_ARM64_REG_X2), uc_.reg_read(UC_ARM64_REG_X3))
    key = bytes(uc_.mem_read(x1, min(x2, 64)))
    KEYLOG.append((key, x2, x3))


uc.hook_add(UC_HOOK_CODE, hook_expand, begin=0x39d39f4, end=0x39d39f4 + 4)


JSON_ENTRIES = []
JSON_META = {}
JSON_FILES = []


def dump_entry(node, label=""):
    ent = bytes(uc.mem_read(node, 0x2b0))
    print(f"  entry{label} @{node:#x}: vt={struct.unpack_from('<Q', ent, 0)[0]:#x}")
    row = {"node": node}
    for off, nm in ((0x208, "min?"), (0x20c, "max?"), (0x250, "name-ptr"),
                    (0x25c, "flags"), (0x260, "class-bits"), (0x264, "idx"),
                    (0x268, "offset"), (0x26c, "size"), (0x270, "mode"),
                    (0x274, "field274"), (0x288, "field288")):
        v = struct.unpack_from("<Q", ent, off)[0]
        row[nm] = v
        extra = ""
        if off == 0x250 and 0 < v < 0x446FCC8:
            try:
                extra = " " + repr(rd_cstr(v))
                row["name"] = rd_cstr(v).decode("utf-8", "replace")
            except Exception:
                pass
        print(f"    +{off:#05x} ({nm:10s}) = {v:#x}{extra}")
    JSON_ENTRIES.append(row)
    return ent


def run(path, label):
    FS.reset(open(path, "rb").read())
    print(f"\n===== {label} ({len(FS.data)} B) =====")
    JSON_ENTRIES.clear()
    JSON_META["file"] = path
    ctx = E.HEAP + 0x900000
    uc.mem_write(ctx, b"\x00" * 0x4F8)
    E.call(0x1ef48b8, [ctx])
    stream = E.HEAP + 0x901000
    vt = E.HEAP + 0x902000
    uc.mem_write(vt + 0x18, struct.pack("<Q", SLOTS["read"]))
    uc.mem_write(vt + 0x30, struct.pack("<Q", SLOTS["seek"]))
    uc.mem_write(vt + 0x38, struct.pack("<Q", SLOTS["tell"]))
    uc.mem_write(stream, struct.pack("<Q", vt))
    try:
        r = E.call(0x39ddab4, [ctx, stream, 0])
        print(f"parse_NTY -> {r:#x}")
    except UcError as e:
        print(f"crash: {e} pc={uc.reg_read(UC_ARM64_REG_PC):#x}")
    cnt = struct.unpack_from("<I", uc.mem_read(ctx + 0x4b0, 4), 0)[0]
    print(f"volume count: {cnt}")
    lst = struct.unpack_from("<Q", uc.mem_read(ctx + 0x4a0, 8), 0)[0]
    node_prev = lst
    n = 0
    while lst and n < cnt:
        node = struct.unpack_from("<Q", uc.mem_read(lst + 8, 8), 0)[0]
        if not node:
            break
        dump_entry(node, f"[{n}]")
        lst = struct.unpack_from("<Q", uc.mem_read(lst + 0x10, 8), 0)[0] if lst else 0
        if lst == node_prev:
            break
        n += 1
    print(f"key expansions: {len(KEYLOG)}")
    for k, ln, m in KEYLOG:
        print(f"  KEY len={ln} mode={m:#x} {k.hex()}")
    print(f"svc calls: {len(CALLLOG)}; tail: {[c[0] for c in CALLLOG[-12:]]}")


if __name__ == "__main__":
    args = [a for a in sys.argv[1:]]
    json_path = None
    if "--json" in args:
        i = args.index("--json")
        json_path = args[i + 1]
        del args[i:i + 2]
    for i, p in enumerate(args):
        run(p, p.split("/")[-1])
        KEYLOG.clear()
        CALLLOG.clear()
        if json_path:
            JSON_FILES.append({"file": JSON_META["file"], "volumes": list(JSON_ENTRIES)})
    if json_path:
        json.dump(JSON_FILES, open(json_path, "w"), indent=1)
        print(f"\n[*] volume table JSON -> {json_path}")
