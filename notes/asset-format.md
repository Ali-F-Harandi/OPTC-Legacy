# Custom Asset Format Notes — ONE PIECE TREASURE CRUISE 16.2.1

All observed in `base.apk:assets/`. Total shipped asset data: ~52 MB.
This is a structural description derived from static inspection; no decryption was performed.

## File families

| Family | Files | Purpose |
|---|---|---|
| `7ffe/data1.dat` | 1 file (181,700 B) | Encrypted blob consumed by `lib__7ffe__.so` (protection data) |
| `FONT.DAT.00..05` + `.idx` + `.vb` | 6 chunks | Glyph pages (~800 KB per chunk) |
| `RES.DAT.00..01` + `.idx` + `.vb` | 2 chunks | Core resources |
| `RES_LOADING.DAT.00..NN` + `.idx` + `.vb` | many chunks | Loading-screen resources |
| `RES_FILLINSPACE.DAT.00` + `.idx` + `.vb` | 1 chunk | Filler/padding resources |
| `ArialBM.fnt` | 1 file | BMFont-style bitmap font |

## `.idx` — binary chunk index

Little-endian, no magic. Observed layout (RES.DAT.idx, 40 bytes):

```text
00000000  00 00 00 64   header/version (0x64 = 100)
00000004  3d ef 4d 33   CRC32 of chunk 0 (?)        = 0x334def3d
00000008  62 1e 0e 5b   CRC32 of chunk 1 (?)        = 0x5b0e1e62
0000000c  00 00 00 02   chunk count = 2
00000010  00 17 18 30   ??? (0x00171830 = 1,516,592 = sum of both chunk sizes)
00000014  d4 dd bd 2b   timestamp? (0x2bbdddd4 — unix-like)
00000018  00 0c 80 00   chunk 0 size = 0x000c8000 = 819,200 (800 KiB)
0000001c  3b c7 61 20   chunk 0 CRC32 = 0x2061c73b
00000020  00 0a 98 30   chunk 1 size = 0x000a9830 = 694,320
00000024  d4 dd bd 2b   chunk 1 CRC32? (same as above — layout partially unresolved)
```

FONT.DAT.idx (56 bytes) follows the same shape with 4+ entries — per-chunk
`{u32 size, u32 crc}` records after a small header.

## `.vb` — version/manifest

Starts with a little-endian count, then ASCII UUIDs and binary metadata (RES.DAT.vb, 2,739 B):

```text
00000000  02 00 00 00                      entry count = 2
00000004  "683fb227-bfd3-e3d4-f4d8-fbebc4be58f7"   (36-char ASCII UUID, NUL-padded to 40)
0000002c  7f 0a 00 00                      data length = 0xa7f
00000030  be ac 2d f1 20 00 00 00 ...      payload (lengths, hashes, offsets)
```

Interpretation: `.vb` = per-family manifest mapping UUIDs → chunk metadata;
UUIDs likely identify resource-pack revisions for update/diff logic.

## `.DAT.NN` — chunked payload

- Fixed 800 KiB (0x000C8000) chunk size, final chunk remainder
- Contents are **not plain PNG/OGG** — chunk payloads fail all known magic sniffing
  and exhibit high entropy → **encrypted or compressed per-chunk**
  (decryptor lives in `libgame.so`; per-chunk CRC in `.idx` verified after decryption)

## `7ffe/data1.dat`

- 181,700 bytes, entropy ≈ uniform random from byte 0 — no header, no magic
- Consumed by `lib__7ffe__.so` (the build-randomized protection library)
- Decryption keys presumably derived at runtime (self-check chain in
  `lib__7ffe__.so:init_array → FUN_0010163c` gates usage)

## Open questions

1. Exact `.idx` header semantics (bytes 0x10–0x17)
2. Whether `.DAT` chunks are AES-CTR/XTS or a custom stream cipher
3. What `7ffe/data1.dat` decrypts to (suspected: config, keys, or anti-tamper policy)
4. UUID scheme in `.vb` (build IDs vs content IDs)
