#!/usr/bin/env python3
"""M3: decrypt module 0x9d — the REAL game code (merged.bin).

Keys recovered from module 0x9b (the runtime consumer, init 0x2f68):
  entry codec : g = 0x129E7AF1 (at 0x9b+0x20210)
                m1 = (g + 0xD3E87144) * g
                m2 = m1 + g * 0x0BD9418D
                dec[j] = (raw[j] - (m1 << 4*(j&1))) ^ (m2 >> ((g + 4j) & 7))
  stream key  : 0x39BC  (solved: container_seed(0x39BC) matches the dd70 head)
  AES-256 rk  : the 60 dwords at 0x9b+0x2021C (private schedule)

0x9d layout: {0x5C descriptor} + dd70 module (total 0x446FCC8)
                            + dd70 patch   (total 0x6A3C4B, at stored 0x1D37694)
Usage: python3 tools/m3_decrypt_9d.py <re-work-dir>
  <re-work-dir> must contain m1b/7ffe-payload.dec, m2/f3_chain/raw_L4_0x9d.bin
  and m2/f3_chain/L4_m9b_merged.bin (see tools/matryoshka_chain.py).
"""
import json
import os
import struct
import sys

sys.path.insert(0, os.path.join(os.path.dirname(__file__)))
import stage2_crypto as sc
from stage2_crypto import M32

G = 0x129E7AF1
STREAM_KEY = 0x39BC
SCHED_OFF = 0x2021C            # in module 0x9b (merged image)
PATCH_OFF = 0x1D37694          # stored offset of the patch dd70 inside 0x9d


def decode_entry(raw23):
    m1 = ((G + 0xD3E87144) & M32) * G & M32
    m2 = (m1 + G * 0x0BD9418D) & M32
    out = []
    for j in range(23):
        v = (raw23[j] - (m1 << (4 * (j & 1)))) & M32
        v ^= (m2 >> ((G + 4 * j) & 7))
        out.append(v)
    return out


def main():
    rw = sys.argv[1] if len(sys.argv) > 1 else "."
    out_dir = os.path.join(rw, "m3")
    os.makedirs(out_dir, exist_ok=True)

    blob = open(f"{rw}/m2/f3_chain/raw_L4_0x9d.bin", "rb").read()
    m9b = open(f"{rw}/m2/f3_chain/L4_m9b_merged.bin", "rb").read()
    tabs = sc.load_tables(open(f"{rw}/m1b/7ffe-payload.dec", "rb").read())
    rk = list(struct.unpack_from("<60I", m9b, SCHED_OFF))

    # 1) descriptor
    dec = decode_entry(struct.unpack_from("<23I", blob, 0))
    eid, flags, soff, ssize, doff, dsize = dec[:6]
    print(f"entry: id={eid:#x} flags={flags:#x} src=({soff:#x},{ssize:#x}) "
          f"dst=({doff:#x},{dsize:#x})")
    assert eid == 0x9D and soff == 0x5C

    # 2) module
    view = blob[soff:]
    m = sc.dd70_parse(view, key=STREAM_KEY)
    assert m["total"] == ssize, (hex(m["total"]), hex(ssize))
    img, (ok, fail) = sc.dd70_extract(view, m, tabs, rk, key=STREAM_KEY)
    print(f"module: {len(img):#x} B, {ok} entries ok, {fail} fail")
    open(f"{out_dir}/m9d_image.bin", "wb").write(img)

    # 3) patch
    pview = blob[PATCH_OFF:]
    pm = sc.dd70_parse(pview, key=STREAM_KEY)
    assert pm["total"] == dsize
    pimg, (pok, pfail) = sc.dd70_extract(pview, pm, tabs, rk, key=STREAM_KEY)
    print(f"patch: {len(pimg):#x} B, {pok} entries ok, {pfail} fail")
    open(f"{out_dir}/m9d_patch.bin", "wb").write(pimg)

    # 4) symbol table from 0x9e (the blanked-dynsym restoration DB)
    img9e = open(f"{rw}/m2/f3_chain/L4_m9e_image.bin", "rb").read()
    SP, IDX_OFF = 0x33CCB8, 0x2C6650
    syms = []
    for off in range(0x88, IDX_OFF - 0x18, 4):
        name, tag = struct.unpack_from("<2I", img9e, off)
        val, pad, size, pad2 = struct.unpack_from("<4I", img9e, off + 8)
        if tag == 0x000E0012 and 0x1A77380 <= val < 0x3F0B124 \
                and 0 < size < 0x100000:
            end = img9e.index(b"\x00", SP + name)
            syms.append({"addr": val, "size": size,
                         "name": img9e[SP + name:end].decode("utf-8", "replace")})
    syms.sort(key=lambda s: s["addr"])
    json.dump(syms, open(f"{out_dir}/symbols.json", "w"))
    print(f"symbols: {len(syms)} FUNC records -> {out_dir}/symbols.json")


if __name__ == "__main__":
    main()
