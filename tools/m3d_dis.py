#!/usr/bin/env python3
"""M3d disassembler helper — annotated AArch64 disasm of the restored image.

Usage: python3 m3d_dis.py <addr> [<n_ins>] [more addr/n pairs...]
Annotates: PLT stubs (via plt.tsv), symbol names, string pool refs.
"""
import json
import struct
import sys

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

RW = "/home/z/my-project/download/re-work"
img = open(f"{RW}/m2/9d_module/merged.bin", "rb").read()
syms = {s["addr"]: s["name"] for s in json.load(open(f"{RW}/m3/symbols.json"))}
plt = {}
for line in open(f"{RW}/m3/plt.tsv"):
    s, k, t = line.rstrip("\n").split("\t")
    plt[int(s, 16)] = (k, t)
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
CODE_LO, CODE_HI = 0x1C00000, 0x4000000


def cstr(a, maxlen=90):
    if not (0x1400000 <= a < 0x1500000):
        return None
    end = img.find(b"\x00", a)
    if end < 0 or end - a > maxlen:
        return None
    s = img[a:end]
    try:
        t = s.decode("utf-8")
    except UnicodeDecodeError:
        return None
    if t and all(32 <= ord(c) < 127 for c in t):
        return t
    return None


def dis(fn, n=80):
    print(f"\n===== fn {fn:#x} {syms.get(fn, '')} =====")
    last_adrp = {}
    for ins in md.disasm(img[fn:fn + n * 4], fn):
        extra = ""
        op = ins.op_str
        if ins.mnemonic in ("bl", "b") and op.startswith("#"):
            t = int(op[1:], 16)
            if t in plt:
                k, tt = plt[t]
                nm = syms.get(int(tt, 16), "") if k == "game" else ""
                extra = f"   ; PLT[{k}] {tt} {nm[:60]}"
            elif t in syms:
                extra = f"   ; {syms[t][:70]}"
        if ins.mnemonic == "adrp":
            try:
                rd = op.split(",")[0].strip()
                last_adrp[rd] = int(op.split("#")[1], 16)
            except Exception:
                pass
        elif ins.mnemonic == "add" and "#0x" in op:
            parts = op.split(",")
            if len(parts) == 3 and parts[0].strip() in last_adrp \
                    and parts[1].strip() in last_adrp:
                base = last_adrp[parts[1].strip()]
                try:
                    imm = int(parts[2].strip().lstrip("#"), 16)
                except ValueError:
                    imm = 0
                a = base + imm
                s = cstr(a)
                extra = f"   ; ={a:#x}" + (f' "{s}"' if s else "")
        elif ins.mnemonic == "ldr" and "[x" in op and "#0x" in op:
            # ldr xN, [xM, #imm] with known adrp page
            try:
                rt = op.split(",")[0].strip()
                rest = op[op.index("[") + 1:op.index("]")]
                parts = [p.strip() for p in rest.split(",")]
                if len(parts) == 2 and parts[0] in last_adrp:
                    base = last_adrp[parts[0]]
                    imm = int(parts[1].lstrip("#"), 16)
                    a = base + imm
                    s = cstr(a)
                    if s:
                        extra = f'   ; -> "{s}"'
                    elif 0x4000000 <= a < 0x4230000:
                        q = struct.unpack_from("<Q", img, a)[0] if a + 8 <= len(img) else 0
                        extra = f"   ; GOT {a:#x} -> {q:#x}"
            except Exception:
                pass
        print(f"  {ins.address:#x}: {ins.mnemonic:<8} {op}{extra}")


if __name__ == "__main__":
    args = sys.argv[1:]
    i = 0
    while i < len(args):
        a = int(args[i], 16)
        n = int(args[i + 1]) if i + 1 < len(args) and args[i + 1].isdigit() else 80
        dis(a, n)
        i += 2 if args[i + 1:i + 2] and args[i + 1].isdigit() else 1
