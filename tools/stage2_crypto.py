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
  0x0000176c     header-dword deobfuscator: clmul32(0x09451DD2, v)
  0x0000f9f4     LZ77/RLE decompressor (token u32: type<<10)
  0x0000f444     per-blob copy-or-LZ dispatch (memcpy when sizes match)
  0x0000dd70     data1.dat container parser (seeded header formulas)
  0x0000dacc/    stream -> AES-CBC -> container-extract pipeline fragment
    0x0000dafc
  0x0000ecd8     container entry iterator -> FUN_0000ee70 extractor

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

The FIPS-197 self-test validates the re-implemented decrypt against the
standard AES-256 vector (key=000102..1f, PT=00112233.., CT=8ea2b7ca..).
"""
import struct
import sys

M32 = 0xFFFFFFFF
GF_POLY = 0x579357EB
XOR_CONST = 0x09451DD2          # FUN_0000176c clmul operand
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


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    blob_path = args[0] if args else None
    data1_path = None
    if "--data1" in sys.argv:
        data1_path = sys.argv[sys.argv.index("--data1") + 1]

    if not blob_path:
        print(__doc__)
        sys.exit(1)

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
