#!/usr/bin/env python3
"""OPTC Legacy — M1b: stage-2 protector crypto toolkit (clean-room).

Reverses and re-implements the cryptographic core of the decrypted stage-2
module embedded in lib__7ffe__.so (regenerate with tools/unpack_7ffe.py):

  address        role
  -------------- ------------------------------------------------------
  0x00104f8      AES-256 decrypt block (T-table, big-endian I/O)
  0x0000ff24     AES-256 decrypt block (second inlined copy)
  0x00010204     AES-CBC driver (zero IV)      — ctx = {u16 bits,u16 rounds,u32 rk[60]}
  0x0000fc30     AES-CBC driver (loader path)  — same ctx layout
  0x0011d10..    Td0 / Td1 / Td2 / Td3         — byte-exact standard AES tables
  0x0012d10..    inverse S-box (byte-replicated)
  0x0013110..    Rcon
  0x00257f0      shipped AES-256 ctx: keysize=0x100, rounds=14, rk[60]
  0x0000eb34     additive/XOR dword stream cipher (key = [0x257e8] = 0x14B4)
  0x0000181c     GF(2^32) carry-less multiply, reduction poly 0x579357EB
  0x0000176c     header-dword deobfuscator: clmul32(0x94511DD2, v)
                 (movz 0x1dd2 + movk 0x9451<<16 — earlier notes dropped a digit)
  0x0000f9f4     LZ77/RLE decompressor (token u32: type<<10)
  0x0000f444     per-blob copy-or-LZ dispatch (memcpy when sizes match)
  0x0000dd70     data1.dat container parser (seeded header formulas)
  0x0000dacc/    stream -> AES-CBC -> container-extract pipeline fragment
    0x0000dafc
  0x0000ecd8     container entry iterator -> FUN_0000ee70 extractor

Embedded-module container (M1b hand-off, fully parsed by this file):

  stage-1 bootstrap (file 0x163c) computes the stage-2 entry args and calls
  it with  x4 = payload + align4(hdr[+8] + hdr[+0xC])  = file 0x9B1EC,
  x5 = plen - 0x25990 = 0x106E5C — i.e. the ~1 MB that follows the stage-2
  blob inside the LOUSER+0 section of lib__7ffe__.so IS a container of
  encrypted sub-modules:

    [8 B obfuscated head][4 x 0x5C obfuscated entries][~1 MB blobs]

  stage-2 chain: ENTRY(0x5d4) -> FUN_00000938 -> trampoline(0x550) ->
  FUN_000004a0 (count hardcoded 0xE2) -> FUN_00000964 -> FUN_000013f0
  (deob 8-byte head, runtime seed [0x2591c] = deob_w1 + acc, src = buf+8)
  -> FUN_000015f4 read_block(i) per 0x5C entry (seeded clmul formulas).

  Entry layout (u32 words): +0 id, +4 flags (bit1 = blob at +8, bit8 =
  register-only), +8 src offset, +0xC src size, +0x10 dst offset, +0x14 dst
  size, +0x18 id (repeat), +0x1C init-fn offset in blob, +0x20 second
  fn-pointer offset in blob.

Master key recovery (this file's key result): the shipped 240-byte schedule
is the *equivalent inverse-cipher* schedule in DECRYPTION (reversed) order:

  stored[0:4]   = w[56..59]           (enc round 14)
  stored[4:56]  = InvMixColumns(w[52..4])
  stored[56:60] = w[0..3]             (master words 0..3)

so master words 4..7 = MixColumns(stored[52:56]) and the full schedule
re-expands to a 60/60 match. The recovered AES-256 master key:

  0cff25e770136105e1a82d418ebfd5c6c9eee3060d59424e3fdda39e348e20b9

Usage:
  python3 tools/stage2_crypto.py <7ffe-payload.dec> [--fips] [--data1 <data1.dat>]
  python3 tools/stage2_crypto.py <lib__7ffe__.so> --container

The FIPS-197 self-test validates the re-implemented decrypt against the
standard AES-256 vector (key=000102..1f, PT=00112233.., CT=8ea2b7ca..).
"""
import struct
import sys

M32 = 0xFFFFFFFF
GF_POLY = 0x579357EB
XOR_CONST = 0x94511DD2          # FUN_0000176c clmul operand (movz/movk verified)
STREAM_KEY = 0x14B4             # [0x257e8] in the shipped stage-2 image

SBOX = bytes.fromhex(
    "637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0"
    "b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b275"
    "09832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cf"
    "d0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2"
    "cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdb"
    "e0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08"
    "ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9e"
    "e1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16")

# ---- stage-2 image offsets -------------------------------------------------
OFF_TD0, OFF_TD1, OFF_TD2, OFF_TD3, OFF_ISB = 0x11d10, 0x12110, 0x12510, 0x12910, 0x12d10
OFF_RCON = 0x13110
OFF_CTX = 0x257f0          # u16 keysize, u16 rounds, u32 rk[60]
OFF_RK = 0x257f4
OFF_CTX_SIZE = 0x258f0     # u32 = 0xF4 = 244 = sizeof(ctx)


def load_tables(blob):
    return (list(struct.unpack_from("<256I", blob, OFF_TD0)),
            list(struct.unpack_from("<256I", blob, OFF_TD1)),
            list(struct.unpack_from("<256I", blob, OFF_TD2)),
            list(struct.unpack_from("<256I", blob, OFF_TD3)),
            list(struct.unpack_from("<256I", blob, OFF_ISB)))


def gmul(a, b):
    p = 0
    for _ in range(8):
        if b & 1:
            p ^= a
        a <<= 1
        if a & 0x100:
            a ^= 0x1B
        b >>= 1
    return p & 0xFF


def imc_word(x):
    k = [(x >> 24) & 0xFF, (x >> 16) & 0xFF, (x >> 8) & 0xFF, x & 0xFF]
    n = [gmul(k[0], 14) ^ gmul(k[1], 11) ^ gmul(k[2], 13) ^ gmul(k[3], 9),
         gmul(k[0], 9) ^ gmul(k[1], 14) ^ gmul(k[2], 11) ^ gmul(k[3], 13),
         gmul(k[0], 13) ^ gmul(k[1], 9) ^ gmul(k[2], 14) ^ gmul(k[3], 11),
         gmul(k[0], 11) ^ gmul(k[1], 13) ^ gmul(k[2], 9) ^ gmul(k[3], 14)]
    return (n[0] << 24) | (n[1] << 16) | (n[2] << 8) | n[3]


def mc_word(x):
    k = [(x >> 24) & 0xFF, (x >> 16) & 0xFF, (x >> 8) & 0xFF, x & 0xFF]
    n = [gmul(k[0], 2) ^ gmul(k[1], 3) ^ k[2] ^ k[3],
         k[0] ^ gmul(k[1], 2) ^ gmul(k[2], 3) ^ k[3],
         k[0] ^ k[1] ^ gmul(k[2], 2) ^ gmul(k[3], 3),
         gmul(k[0], 3) ^ k[1] ^ k[2] ^ gmul(k[3], 2)]
    return (n[0] << 24) | (n[1] << 16) | (n[2] << 8) | n[3]


def expand256(master):
    w = list(master)
    rcon = 1
    for i in range(8, 60):
        t = w[i - 1]
        if i % 8 == 0:
            t = ((t << 8) | (t >> 24)) & M32
            t = (SBOX[(t >> 24) & 0xFF] << 24) | (SBOX[(t >> 16) & 0xFF] << 16) | \
                (SBOX[(t >> 8) & 0xFF] << 8) | SBOX[t & 0xFF]
            t ^= (rcon << 24)
            rcon = gmul(rcon, 2)
        elif i % 8 == 4:
            t = (SBOX[(t >> 24) & 0xFF] << 24) | (SBOX[(t >> 16) & 0xFF] << 16) | \
                (SBOX[(t >> 8) & 0xFF] << 8) | SBOX[t & 0xFF]
        w.append((w[i - 8] ^ t) & M32)
    return w


def recover_master_key(blob):
    """Recover the AES-256 master key from the shipped decrypt-order schedule."""
    stored = list(struct.unpack_from("<60I", blob, OFF_RK))
    master = list(stored[56:60]) + [mc_word(t) for t in stored[52:56]]
    w = expand256(master)
    dw = list(w[56:60])
    for r in range(1, 14):
        base = (14 - r) * 4
        dw += [imc_word(t) for t in w[base:base + 4]]
    dw += list(w[0:4])
    match = sum(1 for i in range(60) if dw[i] == stored[i])
    return master, match


def aes_dec_block(tabs, rk, block):
    Td0, Td1, Td2, Td3, ISb = tabs
    s0 = (block[0] << 24 | block[1] << 16 | block[2] << 8 | block[3]) ^ rk[0]
    s1 = (block[4] << 24 | block[5] << 16 | block[6] << 8 | block[7]) ^ rk[1]
    s2 = (block[8] << 24 | block[9] << 16 | block[10] << 8 | block[11]) ^ rk[2]
    s3 = (block[12] << 24 | block[13] << 16 | block[14] << 8 | block[15]) ^ rk[3]
    k = 4
    for it in range(7):
        t0 = Td0[s0 >> 24] ^ Td1[s3 >> 16 & 0xff] ^ Td2[s2 >> 8 & 0xff] ^ Td3[s1 & 0xff] ^ rk[k]
        t1 = Td0[s1 >> 24] ^ Td1[s0 >> 16 & 0xff] ^ Td2[s3 >> 8 & 0xff] ^ Td3[s2 & 0xff] ^ rk[k + 1]
        t2 = Td0[s2 >> 24] ^ Td1[s1 >> 16 & 0xff] ^ Td2[s0 >> 8 & 0xff] ^ Td3[s3 & 0xff] ^ rk[k + 2]
        t3 = Td0[s3 >> 24] ^ Td1[s2 >> 16 & 0xff] ^ Td2[s1 >> 8 & 0xff] ^ Td3[s0 & 0xff] ^ rk[k + 3]
        k += 4
        if it == 6:
            break
        s0 = Td0[t0 >> 24] ^ Td1[t3 >> 16 & 0xff] ^ Td2[t2 >> 8 & 0xff] ^ Td3[t1 & 0xff] ^ rk[k]
        s1 = Td0[t1 >> 24] ^ Td1[t0 >> 16 & 0xff] ^ Td2[t3 >> 8 & 0xff] ^ Td3[t2 & 0xff] ^ rk[k + 1]
        s2 = Td0[t2 >> 24] ^ Td1[t1 >> 16 & 0xff] ^ Td2[t0 >> 8 & 0xff] ^ Td3[t3 & 0xff] ^ rk[k + 2]
        s3 = Td0[t3 >> 24] ^ Td1[t2 >> 16 & 0xff] ^ Td2[t1 >> 8 & 0xff] ^ Td3[t0 & 0xff] ^ rk[k + 3]
        k += 4
    o0 = (ISb[t0 >> 24] & 0xFF000000) ^ (ISb[t3 >> 16 & 0xff] & 0xFF0000) ^ \
         (ISb[t2 >> 8 & 0xff] & 0xFF00) ^ (ISb[t1 & 0xff] & 0xFF) ^ rk[k]
    o1 = (ISb[t1 >> 24] & 0xFF000000) ^ (ISb[t0 >> 16 & 0xff] & 0xFF0000) ^ \
         (ISb[t3 >> 8 & 0xff] & 0xFF00) ^ (ISb[t2 & 0xff] & 0xFF) ^ rk[k + 1]
    o2 = (ISb[t2 >> 24] & 0xFF000000) ^ (ISb[t1 >> 16 & 0xff] & 0xFF0000) ^ \
         (ISb[t0 >> 8 & 0xff] & 0xFF00) ^ (ISb[t3 & 0xff] & 0xFF) ^ rk[k + 2]
    o3 = (ISb[t3 >> 24] & 0xFF000000) ^ (ISb[t2 >> 16 & 0xff] & 0xFF0000) ^ \
         (ISb[t1 >> 8 & 0xff] & 0xFF00) ^ (ISb[t0 & 0xff] & 0xFF) ^ rk[k + 3]
    return struct.pack(">IIII", o0 & M32, o1 & M32, o2 & M32, o3 & M32)


def cbc_decrypt(data, rk, tabs):
    """FUN_00010204 / FUN_0000fc30 — CBC with a zero IV, in place."""
    out = bytearray(data)
    prev = b"\x00" * 16
    for i in range(0, len(out) - len(out) % 16, 16):
        blk = bytes(out[i:i + 16])
        out[i:i + 16] = bytes(a ^ b for a, b in zip(aes_dec_block(tabs, rk, blk), prev))
        prev = blk
    return out


def clmul32(a, b):
    """FUN_0000181c — GF(2^32) carry-less multiply, reduction 0x579357EB."""
    res = 0
    a &= M32
    b &= M32
    while a:
        if a & 1:
            res ^= b
        top = (b >> 31) & 1
        b = (b << 1) & M32
        if top:
            b ^= GF_POLY
        a >>= 1
    return res


def stream_decrypt(data, key=STREAM_KEY):
    """FUN_0000eb34 — evolving additive/XOR dword stream (key = [0x257e8])."""
    d = bytearray(data)
    s1, s2 = 0x07B48238, 0xE34EAC63
    x = key & M32
    for i in range(len(d) // 4):
        s1 = (((((s1 + 0xE9FA57E4) & M32) * s1) & M32) + x + 0x8E495673) & M32
        s1 = (s1 << (i & 7)) & M32
        s2 = (((((s2 + 0x4F8B1BCA) & M32) * s2) & M32) + x + 0x72F6FCBE) & M32
        s2 = s2 >> ((i * i) & 0xF)
        x = (s1 ^ s2) & M32
        v = struct.unpack_from("<I", d, i * 4)[0]
        v = (v + ((i & 0xD) * 0xB43B9BAF)) & M32
        v ^= ((i & 3) * 0xAF57F7FB) & M32
        v = (v - x) & M32
        v ^= x
        struct.pack_into("<I", d, i * 4, v)
    return d


def container_seed(key=STREAM_KEY):
    """FUN_0000dd70 — seed = ((x*x)>>17) ^ ((x*x)<<11) mod 2^32."""
    sq = (key * key) & M32
    return ((sq >> 17) ^ ((sq << 11) & M32)) & M32


def parse_container_header(d, seed):
    """FUN_0000dd70 header decode (first 3 dwords of the decrypted container)."""
    w0, w1, w2 = struct.unpack_from("<3I", d, 0)
    magic = ((seed * 0xF87B337C) + ((0xA21DFB3A << (seed & 7)) & M32)
             + clmul32(XOR_CONST, w0)) & M32
    v1 = (((0x416E2AF2 >> (seed & 0xD)) + seed + 0xBD19C63C) & M32) ^ clmul32(XOR_CONST, w1)
    v2 = (((0x643A3A3B << (seed & 0xB)) & M32) - (seed ^ 0x3B2BF538)
          + clmul32(XOR_CONST, w2)) & M32
    return {"total_size": magic, "count": v1 & 0xFF, "flags": (v1 >> 8) & 0xFF,
            "key_table_size": v2}


# ---- embedded-module container (M1b hand-off) --------------------------------

CONTAINER_COUNT = 0xE2         # hardcoded in FUN_000004a0 (seed ingredient)
CONTAINER_OFF = 0x7585C + 0x20 + 0x25970    # = 0x9B1EC, right after the stage-2 blob

def container_acc(count=CONTAINER_COUNT):
    """FUN_000013f0 phase 1 — accumulator from the hardcoded count."""
    t = (count * 0x9D323CD7) & M32
    a = ((t >> (count & 7)) + 0x5E727D74) & M32
    b = ((t << (count & 0xB)) + 0xF71E3005) & M32
    return (a + b) & M32


def deob_container_head(head8, count=CONTAINER_COUNT):
    """FUN_000013f0 phases 2-4 — deobfuscate the 8-byte container head.

    Returns (words, runtime_seed) where runtime_seed is what the loader
    stores at stage-2 global [0x2591c] = deob_w1 + acc.
    """
    acc = container_acc(count)
    words = list(struct.unpack("<2I", head8))
    st = 0xCBF0C1D8
    out = []
    for i, w in enumerate(words):
        raw = w
        w = (w + st) & M32
        w = clmul32(XOR_CONST, w)
        w ^= ((i * 4 + 1) * 0xEBE81DBA + acc) & M32
        st = raw
        out.append(w)
    return out, (out[1] + acc) & M32


def read_entry_block(src, index, seed):
    """FUN_000015f4 — copy + deobfuscate entry `index` (0x5C bytes) in place.

    NOTE: every intermediate multiply is truncated to 32 bits BEFORE the
    logical shifts (ARM64 `mul` then `lsr`) — masking after the shift gives
    wrong results.
    """
    dst = bytearray(src[index * 0x5C:(index + 1) * 0x5C])
    if len(dst) < 0x5C:
        return None
    state = 0xF02F7685
    for off in range(0, 0x5C, 4):
        w = struct.unpack_from("<I", dst, off)[0]
        raw = w
        w ^= ((state * state) & M32) >> 3                     # mask BEFORE shift
        w = clmul32(XOR_CONST, w)
        w ^= ((((seed + 0x96F60B71) & M32) * seed) << ((index + 1) & 3)) & M32
        w = (w + (off + 1) * 0x79934CF6 + seed) & M32
        w = (w - ((((seed + 0x9D9B673D) & M32) * seed & M32) >> ((off + 3) & 5))) & M32
        state = raw
        struct.pack_into("<I", dst, off, w)
    return dst


def parse_embedded_container(so_bytes, n_entries=4):
    """Parse the module container embedded after the stage-2 blob.

    `so_bytes` = raw lib__7ffe__.so contents. Returns (head, seed, entries).
    """
    cont = so_bytes[CONTAINER_OFF:]
    head, seed = deob_container_head(cont[:8])
    src = cont[8:]
    entries = []
    for i in range(n_entries):
        e = read_entry_block(src, i, seed)
        if e is None:
            break
        f = struct.unpack("<23I", e)
        entries.append({
            "id": f[0], "flags": f[1], "src_off": f[2], "src_size": f[3],
            "dst_off": f[4], "dst_size": f[5], "init_fn": f[7], "fnptr2": f[8],
            "raw": e,
        })
    return head, seed, entries


# ---- nested dd70 containers: the module blobs (stream->CBC->tree-LZ) --------
#
# Reversal of the per-entry path (FUN_0000dc8 / FUN_00000f0c):
#   entry (f2, f3) -> dd70(container+f2, f3) = the module image source
#   entry (f4, f5) -> dd70(container+f4, f5) = a patch container (0x11b4 merge)
#
# dd70 container layout (seed = f([0x257e8]^2), deob formulas per dword):
#   [+0x00] total_size          [+0x04] count | flags<<8     [+0x08] key_table_size
#   [+0x0C] key table (kts B)   — dword clmul layer, then byte-add layer
#           == the LZ decode TREE: 3-byte nodes {u16 value|0x8000 leaf flag, u8 bits}
#   [align4] count pairs {u32 chunk_off, u32 chunk_size}
#   chunks: eb34(stream) -> fc30(CBC, blocks = len>>4 FLOOR — the tail bytes
#           stay stream-only) -> scatter header {base, n, entries_off, data_off}
#           + n x 16B entries {dst_off, dst_size, src_size, pad}
#           -> per entry: memcpy when sizes match, else the tree-LZ below.
#
# Two Python pitfalls hit while re-implementing (both fixed, verified 38/38):
#   * every (seed + K) * seed product is truncated to 32 bits BEFORE the
#     shifts — an untruncated Python int leaks high bits into the masks;
#   * the pairs-deob shifts are counter-based ((i&3)+3, (i&7)+5), NOT
#     seed-derived — Ghidra confused the registers (ldr x1 then and w1).

def dd70_seed(key=STREAM_KEY):
    return container_seed(key)


def dd70_parse(view, key=STREAM_KEY):
    """Parse one nested dd70 container view (bytes at container + f2/f4)."""
    seed = dd70_seed(key)
    w0, w1, w2 = struct.unpack_from("<3I", view, 0)
    total = (seed * 0xF87B337C + ((0xA21DFB3A << (seed & 7)) & M32)
             + clmul32(XOR_CONST, w0)) & M32
    v1 = (((0x416E2AF2 >> (seed & 0xD)) + seed + 0xBD19C63C) & M32) ^ clmul32(XOR_CONST, w1)
    count = v1 & 0xFF
    flags = (v1 >> 8) & 0xFF
    kts = (((0x643A3A3B << (seed & 0xB)) & M32) - (seed ^ 0x3B2BF538)
           + clmul32(XOR_CONST, w2)) & M32
    # key table: dword clmul layer, then unsigned byte-add layer
    mul_a = (((seed + 0xF1CB5B81) & M32) * seed) & M32
    mul_b = (((seed + 0xCE18397E) & M32) * seed) & M32
    kt = bytearray(view[12:12 + kts])
    for i in range(kts // 4):
        w = struct.unpack_from("<I", kt, i * 4)[0]
        struct.pack_into("<I", kt, i * 4, clmul32(XOR_CONST, w))
    for i in range(kts):
        t = (mul_a << (i & 0x1B)) & M32
        t = clmul32(XOR_CONST, t)
        t = ((t - (mul_b >> (i & 0x17))) & M32) >> (i & 0x1F)
        kt[i] = (kt[i] + (t & 0xFF)) & 0xFF
    tree = [struct.unpack_from("<HB", kt, i * 3) for i in range(kts // 3)]
    # chunk pairs
    m1 = (((seed + 0xB31F451C) & M32) * seed) & M32
    m2 = (((seed + 0x30EF5CEF) & M32) * seed) & M32
    consumed = (12 + kts + 3) & ~3          # FUN_0000d45c(., 4, 1) — align up
    et = bytearray(view[consumed:consumed + count * 8])
    for i in range(0, count * 8, 4):
        w = struct.unpack_from("<I", et, i)[0]
        w ^= (m1 << ((i & 3) + 3)) & M32
        w = clmul32(XOR_CONST, w)
        w = (w + (m2 >> ((i & 7) + 5))) & M32
        struct.pack_into("<I", et, i, w)
    pairs = [(struct.unpack_from("<I", et, i * 8)[0],
              struct.unpack_from("<I", et, i * 8 + 4)[0]) for i in range(count)]
    return {"total": total, "count": count, "flags": flags, "tree": tree,
            "pairs": pairs}


class TreeBitReader:
    """FUN_0000f15c/f1b4/f200 — LSB-first bit cursor with a 32-bit peek."""

    def __init__(self, data):
        self.d = data
        self.pos = 0

    def peek(self):                                  # FUN_0000f1b4
        b = self.pos >> 3
        v = int.from_bytes(self.d[b:b + 4].ljust(4, b"\0"), "little")
        return v >> (self.pos & 7)

    def consume(self, n):                            # FUN_0000f200
        self.pos += n


def tree_decode_sym(br, tree):
    """FUN_0000f2a4 — flattened prefix-code walk over the key-table tree.

    Root = tree[next 8 bits]; leaf roots carry the code length in `bits`,
    internal roots (bits = 8) descend testing successive bits 8, 9, ...
    with children at (parent.value & 0x7FFF) + bit.
    """
    p = br.peek()
    val, bits = tree[p & 0xFF]
    if val & 0x8000:
        br.consume(bits)
        return val & 0x7FFF
    k = bits
    mask = 1 << (k & 0x1F)
    while True:
        k += 1
        idx = (val & 0x7FFF) + (1 if (mask & p) else 0)
        val, _ = tree[idx]
        if val & 0x8000:
            br.consume(k)
            return val & 0x7FFF
        mask <<= 1


def tree_lz_decompress(src, dst_size, tree):
    """FUN_0000f9f4 token loop (symbols from tree_decode_sym):

    sym & 0x300 == 0x000  literal byte (accumulator preserved)
                == 0x100  accumulator = accum ? (accum << 8 | lo) : lo  (<= 2 bytes)
                == 0x200  RLE: repeat the last 1/2/4-byte unit, `accum or 1`
                          times; other lo values just skip (zero fill)
                == 0x300  windowed copy: `lo` bytes from distance accum + lo
    """
    br = TreeBitReader(src)
    out = bytearray()
    accum = 0
    while len(out) < dst_size:
        sym = tree_decode_sym(br, tree)
        lo = sym & 0xFF
        kind = sym & 0x300
        if kind == 0x000:
            out.append(lo)
        elif kind == 0x100:
            if accum > 0xFF:
                return None
            accum = (accum << 8 | lo) if accum else lo
        elif kind == 0x200:
            n_units = accum if accum else 1
            accum = 0
            total = lo * n_units
            if len(out) + total > dst_size:
                return None
            if lo == 1:
                out += bytes([out[-1] if out else 0]) * n_units
            elif lo == 2:
                if len(out) < 2:
                    return None
                out += bytes(out[-2:]) * n_units
            elif lo == 4:
                if len(out) < 4:
                    return None
                out += bytes(out[-4:]) * n_units
            else:
                out += b"\0" * total
        else:
            disp = accum + lo
            accum = 0
            if disp > len(out) or len(out) + lo > dst_size:
                return None
            for _ in range(lo):
                out.append(out[-disp])
    if not (len(src) * 8 - 8 < br.pos <= len(src) * 8):
        return None
    return bytes(out)


def dd70_extract(view, m, stage2_tabs, stage2_rk, key=STREAM_KEY):
    """Decrypt + assemble one dd70 container image. Returns (image, stats)."""
    img = bytearray(m["total"])
    entries_ok = entries_fail = 0
    for (off, size) in m["pairs"]:
        chunk = bytes(view[off:off + size])
        chunk = stream_decrypt(chunk, key)
        if m["flags"] != 1:
            chunk = cbc_decrypt(chunk, stage2_rk, stage2_tabs)   # floor(len/16)
        base, n, eoff, doff = struct.unpack_from("<4I", chunk, 0)
        cursor = 0
        for i in range(n):
            d, dsz, ssz, _ = struct.unpack_from("<4I", chunk, eoff + i * 0x10)
            src = chunk[doff + cursor:doff + cursor + ssz]
            if dsz == ssz:
                img[base + d:base + d + dsz] = src[:dsz]
                entries_ok += 1
            else:
                res = tree_lz_decompress(src, dsz, m["tree"])
                if res is None:
                    entries_fail += 1
                else:
                    img[base + d:base + d + dsz] = res
                    entries_ok += 1
            cursor += ssz
    return bytes(img), (entries_ok, entries_fail)


def extract_modules(so_bytes, blob, out_dir=None):
    """Decrypt all four embedded module blobs. Returns a result list."""
    import os
    tabs = load_tables(blob)
    rk = list(struct.unpack_from("<60I", blob, OFF_RK))
    cont = so_bytes[CONTAINER_OFF:]
    head, seed, entries = parse_embedded_container(so_bytes)
    results = []
    for e in entries:
        f = e
        rec = {"id": f["id"], "flags": f["flags"]}
        if f["flags"] & 2:      # bit1: raw inline blob (register-only)
            rec["kind"] = "raw"
            rec["image"] = bytes(cont[f["src_off"]:f["src_off"] + f["src_size"]])
        else:
            rec["kind"] = "dd70"
            m = dd70_parse(cont[f["src_off"]:])
            img, (ok, fail) = dd70_extract(cont[f["src_off"]:], m, tabs, rk)
            rec["image"] = img
            rec["total"] = m["total"]
            rec["chunks"] = m["count"]
            rec["entries_ok"] = ok
            rec["entries_fail"] = fail
            if f["dst_size"]:
                pm = dd70_parse(cont[f["dst_off"]:])
                pimg, (pok, pfail) = dd70_extract(cont[f["dst_off"]:], pm, tabs, rk)
                rec["patch_total"] = pm["total"]
                rec["patch_entries_ok"] = pok
                rec["patch_entries_fail"] = pfail
                rec["patch_image"] = pimg
        results.append(rec)
        if out_dir:
            os.makedirs(out_dir, exist_ok=True)
            with open(f"{out_dir}/module_{f['id']:#04x}.bin", "wb") as fh:
                fh.write(rec["image"])
    return results


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    blob_path = args[0] if args else None
    data1_path = None
    if "--data1" in sys.argv:
        data1_path = sys.argv[sys.argv.index("--data1") + 1]

    if not blob_path:
        print(__doc__)
        sys.exit(1)

    # embedded container mode (input = the .so itself, not the payload)
    if "--container" in sys.argv:
        so = open(blob_path, "rb").read()
        head, seed, entries = parse_embedded_container(so)
        print(f"[*] embedded container @ file {CONTAINER_OFF:#x} "
              f"({len(so) - CONTAINER_OFF:#x} bytes to EOF)")
        print(f"[*] head words = {[hex(w) for w in head]}, runtime seed = {seed:#010x}")
        for e in entries:
            blob_lo = CONTAINER_OFF + 8 + e["src_off"]
            print(f"    id={e['id']:#04x} flags={e['flags']:#x} "
                  f"src=[{e['src_off']:#x}..+{e['src_size']:#x}] "
                  f"dst=[{e['dst_off']:#x}..+{e['dst_size']:#x}] "
                  f"init_fn=+{e['init_fn']:#x} fnptr2=+{e['fnptr2']:#x} "
                  f"(file {blob_lo:#x})")
        print("[!] blobs are high-entropy (7.95 b/B) — stream/AES pipeline is the")
        print("    next M1b item.")
        return

    # full module-blob decryption (input = the .so; --payload = stage-2 image)
    if "--modules" in sys.argv:
        if "--payload" not in sys.argv:
            print("[!] --modules needs --payload <7ffe-payload.dec> "
                  "[--out <dir>]")
            sys.exit(1)
        so = open(blob_path, "rb").read()
        blob = open(sys.argv[sys.argv.index("--payload") + 1], "rb").read()
        out_dir = sys.argv[sys.argv.index("--out") + 1] if "--out" in sys.argv else None
        results = extract_modules(so, blob, out_dir)
        for r in results:
            if r["kind"] == "raw":
                print(f"[*] module id={r['id']:#04x}: RAW inline blob, "
                      f"{len(r['image']):#x} B (register-only)")
                if out_dir:
                    print(f"    -> {out_dir}/module_{r['id']:#04x}.bin")
            else:
                line = (f"[*] module id={r['id']:#04x}: dd70 image "
                        f"{r['total']:#x} B, {r['chunks']} chunks, "
                        f"entries ok={r['entries_ok']} fail={r['entries_fail']}")
                if "patch_total" in r:
                    line += (f"; patch {r['patch_total']:#x} B "
                             f"ok={r['patch_entries_ok']} fail={r['patch_entries_fail']}")
                print(line)
                if out_dir:
                    print(f"    -> {out_dir}/module_{r['id']:#04x}.bin")
        return

    blob = open(blob_path, "rb").read()
    tabs = load_tables(blob)

    # ctx sanity
    bits, rounds = struct.unpack_from("<HH", blob, OFF_CTX)
    ctx_size = struct.unpack_from("<I", blob, OFF_CTX_SIZE)[0]
    print(f"[*] shipped ctx @ {OFF_CTX:#x}: keysize={bits} bits, rounds={rounds}, "
          f"ctx_size={ctx_size:#x} (expect 0xf4)")

    # master key recovery
    master, match = recover_master_key(blob)
    key_hex = struct.pack(">8I", *master).hex()
    print(f"[*] schedule re-expansion match: {match}/60")
    if match == 60:
        print(f"[+] AES-256 MASTER KEY: {key_hex}")

    # FIPS-197 self-test
    if "--fips" in sys.argv:
        key = bytes(range(32))
        pt = bytes.fromhex("00112233445566778899aabbccddeeff")
        ct = bytes.fromhex("8ea2b7ca516745bfeafc49904b496089")
        we = expand256(list(struct.unpack(">8I", key)))
        dwt = list(we[56:60])
        for r in range(1, 14):
            base = (14 - r) * 4
            dwt += [imc_word(t) for t in we[base:base + 4]]
        dwt += list(we[0:4])
        out = aes_dec_block(tabs, dwt, ct)
        print(f"[*] FIPS-197 AES-256 decrypt: {'PASS' if out == pt else 'FAIL'} "
              f"({out.hex()})")

    # data1.dat chain status
    if data1_path:
        d1 = open(data1_path, "rb").read()
        print(f"\n[*] data1.dat: {len(d1)} bytes "
              f"(= 4 + {len(d1)-4}, 16-aligned tail: {(len(d1)-4) % 16 == 0})")
        rk = list(struct.unpack_from("<60I", blob, OFF_RK))
        s = stream_decrypt(d1)
        c = cbc_decrypt(s, rk, tabs)
        seed = container_seed()
        hdr = parse_container_header(c, seed)
        print(f"[*] chain stream->CBC->header: {hdr}")
        print("[!] NOTE: exact buffer wiring for data1.dat is the remaining M1b item —")
        print("    see notes/stage2-crypto.md §7.")


if __name__ == "__main__":
    main()
