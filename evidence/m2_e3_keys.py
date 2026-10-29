#!/usr/bin/env python3
"""M2: gather the exact e3-side key material for the data1.dat retest.

  - [0x1a2f8] stream key x in BOTH e3 copies (protector + game)
  - e3 private AES ctx validation (stored schedule vs master-key re-expansion)
  - first bytes of data1.dat vs the game 0xf3 blob (the other [4B][16-aligned] file)
  - game container 0xf3 entry location (from m2-game-consumer.json)
"""
import struct
import sys
import hashlib

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import (M32, expand256, imc_word, mc_word, load_tables,
                           recover_master_key, stream_decrypt, container_seed)

EV = '/home/z/my-project/download/re-work/repo/evidence'
M2 = '/home/z/my-project/download/re-work/m2'

prot = open(f'{EV}/e3_0xe3_merged.bin', 'rb').read()
game = open(f'{EV}/m2_game_e3_0xe3_image.bin', 'rb').read()
print(f"protector e3: {len(prot):#x} B, game e3: {len(game):#x} B")

for name, img in (('protector_e3', prot), ('game_e3', game)):
    x = struct.unpack_from('<I', img, 0x1a2f8)[0]
    ctxsz = struct.unpack_from('<I', img, 0x1a1f0)[0]
    bits, rounds = struct.unpack_from('<HH', img, 0x1a1f8)
    seed = container_seed(x)
    print(f"\n[{name}] [0x1a2f8] stream key x = {x:#x}  -> dd70 seed = {seed:#010x}")
    print(f"[{name}] ctx: size={ctxsz:#x} keysize={bits:#x} rounds={rounds}")
    stored = list(struct.unpack_from('<60I', img, 0x1a1fc))
    master = list(stored[56:60]) + [mc_word(t) for t in stored[52:56]]
    w = expand256(master)
    dw = list(w[56:60])
    for r in range(1, 14):
        base = (14 - r) * 4
        dw += [imc_word(t) for t in w[base:base + 4]]
    dw += list(w[0:4])
    match = sum(1 for i in range(60) if dw[i] == stored[i])
    mk = b''.join(struct.pack('<I', t) for t in master)
    print(f"[{name}] master key (LE words): {mk.hex()}")
    print(f"[{name}] schedule re-expansion: {match}/60")

# where does the game 0xf3 blob live?
import json
cons = json.load(open(f'{EV}/m2-game-consumer.json'))
gc = cons['game_container']
print(f"\ngame container @ libgame.so file {gc['file_offset']}")
f3 = [e for e in gc['entries'] if e['id'] == '0xf3'][0]
print(f"0xf3 entry: {f3}")

SO = '/home/z/my-project/download/re-work/apkm_extracted/split_config.arm64_v8a.apk'
import zipfile
zf = zipfile.ZipFile(SO)
so = zf.read('lib/arm64-v8a/libgame.so')
print(f"libgame.so: {len(so):#x} B")
cont_off = int(gc['file_offset'], 0)

# entry table: [8B head][4 x 0x5C entries]; blobs start at +8+4*0x5C = +0x178
# read entry[2] (0xf3) src_off/src_size from the RAW table (obfuscated, but we
# already know src_off from the evidence: use the JSON values)
f3_off = 0x14fdc   # protector twin value; game twin may differ - parse properly below
# parse the game container with the GAME stage-2 key (0x2b47)
game_stage2 = open(f'{M2}/game-stage2.dec', 'rb').read()
x2 = struct.unpack_from('<I', game_stage2, 0x257e8)[0]
print(f"game stage-2 stream key [0x257e8] = {x2:#x}")

# deob the game container head + entries with the game stage-2 entry reader
sys.path.insert(0, "/home/z/my-project/scripts")
from stage2_crypto import read_entry_block, deob_container_head

cont = so[cont_off:cont_off + 0x400]
cnt = 0xE2  # orchestrator recipe constant (same as protector's FUN_000004a0)
words, seed_rt = deob_container_head(cont[:8], cnt)
print(f"game container head: w0={words[0]:#x} w1={words[1]:#x} runtime_seed={seed_rt:#010x}")
for i in range(4):
    blk = read_entry_block(cont[8:], i, seed_rt)
    if blk is None:
        print(f"  entry[{i}]: SHORT")
        continue
    did, flags, soff, ssz, doff, dsz = struct.unpack_from('<6I', blk, 0)
    print(f"  entry[{i}]: id={did:#x} flags={flags:#x} src_off={soff:#x} src_size={ssz:#x} dst_off={doff:#x} dst_size={dsz:#x}")
    if did == 0xf3:
        blob = so[cont_off + soff:cont_off + soff + 64]
        print(f"    0xf3 blob head: {blob[:32].hex()}")
        print(f"    (file {cont_off + soff:#x})")
        f3full = so[cont_off + soff:cont_off + soff + ssz]
        print(f"    0xf3 blob: {len(f3full)} B, (len-4)%16={(len(f3full)-4)%16}, (len-8)%92={(len(f3full)-8)%0x5c}")
        print(f"    first 16: {f3full[:16].hex()}")

d1 = open('/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat', 'rb').read()
print(f"\ndata1.dat: {len(d1)} B  head={d1[:4].hex()}  body[0:32]={d1[4:36].hex()}")
print(f"  body size = {len(d1) - 4} = {(len(d1) - 4) / 16} AES blocks, tail bytes = {(len(d1) - 4) % 16}")
