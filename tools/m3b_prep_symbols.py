#!/usr/bin/env python3
"""Prepare Ghidra symbol import files from symbols.json + got_map.json.

Outputs (tab-separated, easy to parse from Java):
  /tmp/ghidra_m3b/symbols.tsv   FUNC <hex-addr> <size> <sanitized-unique-name>
  /tmp/ghidra_m3b/got.tsv       GOT  <hex-addr> <name>
  /tmp/ghidra_m3b/targets.tsv   TGT  <hex-addr> <size>   (functions to decompile)
"""
import json
import os
import re

OUT = "/tmp/ghidra_m3b"
os.makedirs(OUT, exist_ok=True)

syms = json.load(open('/home/z/my-project/download/re-work/m3/symbols.json'))
gm = json.load(open('/home/z/my-project/download/re-work/m3/got_map.json'))

SAFE = re.compile(r'[^A-Za-z0-9_]')

def sanitize(name):
    s = SAFE.sub('_', name)[:180]
    if not s or not (s[0].isalpha() or s[0] == '_'):
        s = '_' + s
    return s

# ---- symbols (unique names) ----
used = {}
lines = []
for s in syms:
    base = sanitize(s['name'])
    n = used.get(base, 0)
    used[base] = n + 1
    name = base if n == 0 else f"{base}__{n+1}"
    lines.append(f"FUNC\t{s['addr']:x}\t{s['size']}\t{name}")
with open(f"{OUT}/symbols.tsv", "w") as fh:
    fh.write("\n".join(lines))
print(f"symbols: {len(lines)}")

# ---- got labels ----
glines = []
for k, v in sorted(gm.items(), key=lambda kv: int(kv[0])):
    glines.append(f"GOT\t{int(k):x}\tIMP_{sanitize(v)}")
with open(f"{OUT}/got.tsv", "w") as fh:
    fh.write("\n".join(glines))
print(f"got: {len(glines)}")

# ---- decompile targets: the sinatra/NTY machinery ----
TARGETS = [
    # (addr, size, tag)
    (0x3500dec, 48,   "BQ1599BisqueKey_ctor_charp"),
    (0x1dedcf0, 376,  "StreamDecoder_sinatrize"),
    (0x2e2f070, 684,  "BQ15912DecoderPlane_decode"),
    (0x2cdfe94, 156,  "BQ15921AbstractStreamDecoder_decode"),
    (0x3648d38, 184,  "BQ15916StreamDecoder_SC2_ctor"),
    (0x2b74d14, 1340, "BQ15916StreamDecoder_seek"),
    (0x3335290, 8444, "bindNty"),
    (0x1cd67b8, 136,  "GlobalNtyPool_findVolumeByName"),
    (0x29b1270, 284,  "QSSImageList_init_NtyReader_BisqueKey"),
    (0x214de6c, 168,  "NtyPoolCommon_loadBurstIndex"),
    (0x254db40, 244,  "NtyReader_loadNettyBurstIndex"),
    (0x2764908, 8,    "BQ1599BisqueKey_ctor_NtyReader_Stream_u32"),
    (0x3983e94, 60,   "BQ1599BisqueKey_ctor_ATTACH_NTY_METHODE"),
    (0x2dc00fc, 108,  "BQ1599BisqueKey_dtor_D0"),
    (0x2536fd4, 916,  "decrypt_bare"),
    (0x301bfb8, 1900, "encrypt_bare"),
    (0x26154b8, 68,   "BQ15916StreamDecoder_159E"),
    (0x28aa470, 348,  "BQ15913StreamDecoder_D0"),
    (0x2c4aeb4, 36,   "BQ15913StreamDecoder_D2"),
    (0x36c4840, 84,   "BQ15918StreamDecoderPlane"),
    (0x3d979d0, 232,  "BQ15918StreamDecoderPlane_D0"),
    (0x201f704, 232,  "BQ1597Decoder"),
    (0x210cb18, 80,   "BQ15910Decoder144"),
    (0x221923c, 64,   "BQ15910Decoder40SE"),
    (0x237ef5c, 4,    "BQ15910Decoder144_D0"),
    (0x22fa00c, 292,  "BQ15921AbstractStreamDecoder_D0"),
    (0x25155c8, 60,   "sinatraCall_thunk_A"),
    (0x2d3a834, 36,   "sinatraCall_thunk_B"),
    (0x2d3a858, 40,   "sinatraCall_thunk_C"),
    (0x2515604, 60,   "sinatraCall_thunk_D"),
    (0x247c024, 656,  "NtyObservFD_copy"),
    (0x1ac9614, 40,   "NtyObservFD_getLength"),
    (0x1f563c4, 24,   "NtyObservFD_unsafeRead"),
    (0x2161574, 8,    "NtyObservFD_close"),
    (0x21d7540, 92,   "NtyObservFD_GetRef"),
    (0x2219394, 64,   "NtyObservFD_D1"),
    (0x1c21934, 64,   "GlobalNtyPool_remove"),
    (0x1ef1c9c, 36,   "GlobalNtyPool_createLocalCache"),
    (0x200e8e0, 312,  "GlobalNtyPool_addPatchNTYInternal"),
    (0x20859d8, 192,  "GlobalNtyPool_findCacheDescriptor"),
    (0x2085a98, 460,  "GlobalNtyPool_findCacheDescriptor_cont"),
    (0x25cb148, 68,   "GlobalNtyPool_lookupReadablePath"),
    (0x35e41c0, 92,   "GlobalNtyPool_findCacheByName"),
    (0x230d9e0, 244,  "GlobalNtyPool_getVolumeInfoByAPU"),
    (0x2292ef8, 108,  "GlobalNtyPool_getVolumeInfo"),
    (0x29110b8, 4,    "GNP_NtyAPU_set"),
    (0x1b81fec, 1096, "NtyPoolCommon_destroyPhysicalVolume"),
    (0x2462524, 1424, "NtyPoolCommon_createSystemCacheFileName"),
    (0x1b50a84, 28,   "NtyPoolCommon_diskCacheFileName"),
    (0x2c06cc8, 848,  "GlobalNtyPool_invalidateMemoryCache"),
]
tlines = [f"TGT\t{a:x}\t{sz}\t{tag}" for a, sz, tag in TARGETS]
with open(f"{OUT}/targets.tsv", "w") as fh:
    fh.write("\n".join(tlines))
print(f"targets: {len(tlines)}")
