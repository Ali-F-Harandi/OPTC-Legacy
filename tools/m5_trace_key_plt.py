#!/usr/bin/env python3
"""OPTC — full PLT resolution + caller scan for key-provisioning functions.

Chain:  shipped libgame.so .plt stub -> GOT slot  (decode adrp/ldr/add/br)
        patch 0x403 relocs / merged.bin GOT region -> slot holds target VA
        symbols.json -> target VA boundaries
Then:  scan .text of merged.bin for BL to any stub of a target function,
       map call sites to containing functions.
"""
import bisect
import json
import struct

SO = "/home/z/my-project/download/re-work/native-libs/libgame.so"
IMG = "/home/z/my-project/download/re-work/m2/9d_module/merged.bin"
SYMS = "/home/z/my-project/download/re-work/m3/symbols.json"
PLT_LO, PLT_HI = 0x3F0B230, 0x3FB93C0
TEXT_LO, TEXT_HI = 0x1C00000, 0x4000000
PTR_LO, PTR_HI = 0x4000000, 0x4230000

TARGETS = {
    0x3983e94: "GlobalNtyPool::attach(path,key,method)",
    0x3500dec: "NtyManager::NtyManager(key*,path)",
    0x29110b8: "GNP::NtyAPU::set(const char*)",
    0x1cd67b8: "GlobalNtyPool::findVolumeByName",
    0x20859d8: "GlobalNtyPool::findCacheDescriptor",
    0x35e41c0: "GlobalNtyPool::createCacheByName",
    0x230d9e0: "GlobalNtyPool::getVolumeInfoByAPUE",
    0x39d39f4: "keyExpansion(out,key,keylen,mode)",
    0x39d3fd0: "keySpecFromDesc",
    0x39dea94: "sigInstall(ctx,record)",
    0x39dda24: "NtyReader::open(this,path,record)",
}


def decode_adrp(insn, pc):
    rd = insn & 0x1F
    immlo = (insn >> 29) & 3
    immhi = (insn >> 5) & 0x7FFFF
    imm = (immhi << 2) | immlo
    if imm & 0x100000:
        imm -= 0x200000
    return rd, ((pc & ~0xFFF) + (imm << 12)) & 0xFFFFFFFF


def main():
    so = open(SO, "rb").read()
    img = open(IMG, "rb").read()
    syms = sorted(json.load(open(SYMS)), key=lambda s: s["addr"])
    addrs = [s["addr"] for s in syms]

    # stub -> got slot
    stub2slot = {}
    for a in range(PLT_LO, PLT_HI, 16):
        w = struct.unpack_from("<4I", so, a)
        if w[0] == 0 and w[1] == 0:
            continue
        try:
            rd, page = decode_adrp(w[0], a)
            imm12 = (w[1] >> 10) & 0xFFF
            rn = (w[1] >> 5) & 0x1F
            rt = w[1] & 0x1F
            assert rd == 16 and rn == 16 and rt == 17
            assert (w[2] >> 24) == 0x91 and (w[3] >> 16) == 0xD61F
            stub2slot[a] = page + imm12 * 8
        except Exception:
            pass
    print(f"PLT stubs decoded: {len(stub2slot)}")

    # slot -> target VA (from merged.bin pointer region)
    slot2target = {}
    for f in TARGETS:
        for off in range(PTR_LO, min(PTR_HI, len(img)) - 8, 8):
            if struct.unpack_from("<Q", img, off)[0] == f:
                slot2target[off] = f
    print(f"target GOT slots: {[hex(s) for s in slot2target]}")

    # stubs of interest
    want = {}
    for stub, slot in stub2slot.items():
        if slot in slot2target:
            want[stub] = TARGETS[slot2target[slot]]
    print(f"target PLT stubs: {[(hex(s), l) for s, l in want.items()]}")

    # direct targets too
    for f in TARGETS:
        want.setdefault(f, TARGETS[f])

    # scan BL
    callers = {}
    for off in range(TEXT_LO, TEXT_HI - 4, 4):
        w = struct.unpack_from("<I", img, off)[0]
        if (w >> 26) != 0b100101:
            continue
        imm = w & 0x3FFFFFF
        if imm & 0x2000000:
            imm -= 0x4000000
        dst = off + imm * 4
        if dst in want:
            i = bisect.bisect_right(addrs, off) - 1
            fn = syms[i] if i >= 0 and syms[i]["addr"] <= off < syms[i]["addr"] + syms[i]["size"] else None
            key = fn["addr"] if fn else off
            nm = fn["name"] if fn else "?"
            callers.setdefault(want[dst], {}).setdefault(f"{key:#x}|{nm[:60]}", []).append(off)

    print("\n================ CALLERS ================")
    for label, fns in callers.items():
        print(f"\n### {label}")
        for k, sites in sorted(fns.items()):
            print(f"   {k}  x{len(sites)} sites {[hex(s) for s in sites[:8]]}")

    json.dump({k: v for k, v in callers.items()},
              open("/home/z/my-project/work/key_plt_callers.json", "w"), indent=1)


if __name__ == "__main__":
    main()
