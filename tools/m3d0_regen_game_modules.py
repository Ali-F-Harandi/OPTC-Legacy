#!/usr/bin/env python3
"""M3d-0: regenerate the game-side first-level container modules (m2/game_modules).

From the shipped libgame.so (LOUSER+0 tail):
  stage-2 header @ GAME_SEC_OFF+GAME_PREFIX -> game stage-2 image (0x25970 B)
  container  @ right after the stage-2 -> 4 entries {0x81, 0x96, 0xf3 raw, 0xe3}
Uses the GAME stage-2 keys (stream seed [0x257e8]=0x2B47, private rk @0x257f4).
Produces the layout tools/matryoshka_chain.py expects under m2/game_modules/.
"""
import os
import struct
import sys

sys.path.insert(0, "/home/z/my-project/re-work/repo-git/tools")
import stage2_crypto as sc

RW = "/home/z/my-project/download/re-work"
SO = f"{RW}/apk/arm64_x/lib/arm64-v8a/libgame.so"
OUT = f"{RW}/m2/game_modules"

so = open(SO, "rb").read()
hdr_off = sc.GAME_SEC_OFF + sc.GAME_PREFIX
key0 = struct.unpack_from("<I", so, hdr_off)[0]
hdr = bytearray(sc.dec_addxor(so[hdr_off:hdr_off + 0x20], key0))
struct.pack_into("<I", hdr, 0, key0)
data_off, size, key, entry = (struct.unpack_from("<I", hdr, 8)[0],
                              struct.unpack_from("<I", hdr, 0xC)[0],
                              struct.unpack_from("<I", hdr, 0x10)[0],
                              struct.unpack_from("<I", hdr, 0x14)[0])
print(f"[*] LOUSER header: data_off={data_off:#x} size={size:#x} key={key:#x} entry=+{entry:#x}")

body = so[hdr_off + data_off: hdr_off + data_off + size]
blob2 = sc.dec_addxor(body, key)
print(f"[*] game stage-2: {len(blob2):#x} bytes")

# verify against the repo's committed copy
ev = "/home/z/my-project/re-work/repo-git/evidence/m2_game-stage2.bin"
if os.path.exists(ev):
    ref = open(ev, "rb").read()
    print(f"[*] vs evidence/m2_game-stage2.bin: {'IDENTICAL' if ref == blob2 else 'DIFFERS (' + str(len(ref)) + ' B ref)'}")

gseed = struct.unpack_from("<I", blob2, 0x257E8)[0]
print(f"[*] game stream seed [0x257e8] = {gseed:#x}")
mkey, match = sc.recover_master_key(blob2)
print(f"[*] schedule re-expansion match: {match}/60 "
      f"(master {struct.pack('>8I', *mkey).hex() if match == 60 else '?'})")

tabs = sc.load_tables(blob2)
rk = list(struct.unpack_from("<60I", blob2, sc.OFF_RK))

os.makedirs(OUT, exist_ok=True)
old = sc.STREAM_KEY
sc.STREAM_KEY = gseed
try:
    cont = so[hdr_off + data_off + size:]
    head, seed = sc.deob_container_head(cont[:8])
    print(f"[*] game container @ file {hdr_off + data_off + size:#x}, seed {seed:#x}")
    src = cont[8:]
    for i in range(4):
        e = sc.read_entry_block(src, i, seed)
        f = struct.unpack("<23I", e)
        eid, flags, soff, ssize, doff, dsize = f[:6]
        init_fn, fnptr2 = f[7], f[8]
        print(f"    id={eid:#04x} flags={flags:#x} src=[{soff:#x}..+{ssize:#x}] "
              f"dst=[{doff:#x}..+{dsize:#x}] init=+{init_fn:#x} fn2=+{fnptr2:#x}")
        if flags & 2:
            open(f"{OUT}/f3_raw_{eid:#x}.bin", "wb").write(cont[soff:soff + ssize])
            print(f"      -> RAW {ssize:#x} B -> f3_raw_{eid:#x}.bin")
            continue
        m = sc.dd70_parse(cont[soff:], key=gseed)
        img, (ok, fail) = sc.dd70_extract(cont[soff:], m, tabs, rk, key=gseed)
        tag = {0x81: "ee0_0x81", 0x96: "ee1_0x96", 0xE3: "ee3_0xe3"}[eid]
        open(f"{OUT}/{tag}_image.bin", "wb").write(img)
        print(f"      -> dd70 image {len(img):#x} B, {m['count']} chunks, ok={ok} fail={fail}")
        if dsize:
            pm = sc.dd70_parse(cont[doff:], key=gseed)
            pimg, (pok, pfail) = sc.dd70_extract(cont[doff:], pm, tabs, rk, key=gseed)
            open(f"{OUT}/{tag}_patch.bin", "wb").write(pimg)
            pd = sc.parse_patch(pimg)
            merged, _ = sc.merge_patch(bytearray(img), pd, base=0)
            open(f"{OUT}/{tag}_merged.bin", "wb").write(bytes(merged))
            print(f"      -> patch {len(pimg):#x} B ok={pok} fail={pfail}; merged {len(merged):#x} B")
finally:
    sc.STREAM_KEY = old
print("[+] done:", sorted(os.listdir(OUT)))
