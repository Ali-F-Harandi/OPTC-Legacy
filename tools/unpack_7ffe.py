#!/usr/bin/env python3
"""OPTC Legacy — M1: unpack the lib__7ffe__.so embedded payload.

Reimplements the loader bootstrap reversed from decomp/native-loader-7ffe/:

  entry(.init_array) -> FUN_0010163c (bootstrap)
    FUN_001012bc()                load base (ASLR slide)
    FUN_00102a50(base, buf,…)     own path via /proc/self/maps
    FUN_00101dd8(path, …)         open self, walk PT_LOADs (find file end),
                                  mmap the overlay, walk *section headers*,
                                  find sh_type == 0x80000000 (LOUSER+0)
                                    payload_ptr = mapped + (sh_off - overlay) + 0x23C
    FUN_001046cpy(hdr, payload, 0x1000)   copy payload header
    FUN_001015f0(hdr, 0x1000)     validate
      hdr +0x08 u32 payload offset
      hdr +0x0C u32 payload size
      hdr +0x10 u32 decrypt key
      hdr +0x14 u32 entry offset
      hdr +0x18 u32 mprotect length
    alloc(size) + copy payload
    FUN_00101520(key, mem, size, 0)   DECRYPT:
        for i in 0 .. size/4:
            d[i] += (i + 3) * key        (mod 2^32)
            d[i] ^= (i + 1) * 0xBF20165D (mod 2^32)
    mprotect(mem, len, RWX) and call mem + entry.

Usage:
    python3 tools/unpack_7ffe.py <lib__7ffe__.so> <out-dir>
"""
import json
import os
import struct
import sys

M32 = 0xFFFFFFFF
XOR_CONST = 0xBF20165D          # == (-0x40dfe9a3) mod 2^32
PAYLOAD_SKIP = 0x23C            # bytes inside LOUSER before payload header
LOUSER_TYPE = 0x80000000
HDR_ENC_LEN = 0x20              # FUN_001015f0 decrypts the first 8 dwords


def decrypt(data: bytearray, key: int, start_dword: int = 0) -> bytearray:
    """FUN_00101520 — additive + XOR dword stream."""
    n = len(data) // 4
    for i in range(start_dword, n):
        k_add = ((i + 3) * key) & M32
        k_xor = ((i + 1) * XOR_CONST) & M32
        v = (struct.unpack_from("<I", data, i * 4)[0] + k_add) & M32
        struct.pack_into("<I", data, i * 4, v ^ k_xor)
    return data


def decrypt_header(hdr: bytearray) -> int:
    """FUN_001015f0 — header is self-keyed: dword 0 is the key,
    dwords 1..7 are encrypted with it (dword 0 restored afterwards)."""
    key = struct.unpack_from("<I", hdr, 0)[0]
    decrypt(hdr, key, 0)          # 0x20 bytes = 8 dwords
    struct.pack_into("<I", hdr, 0, key)   # *param_1 = uVar1
    return key


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        sys.exit(1)
    so_path, out_dir = sys.argv[1], sys.argv[2]
    os.makedirs(out_dir, exist_ok=True)
    data = open(so_path, "rb").read()

    # ---- locate the LOUSER+0 section (sh_type == 0x80000000) ----
    e_shoff, = struct.unpack_from("<Q", data, 0x28)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 0x3A)
    lou = None
    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        sh_name, sh_type = struct.unpack_from("<II", data, off)
        if sh_type == LOUSER_TYPE:
            sh_offset, sh_size = struct.unpack_from("<QQ", data, off + 0x18)
            lou = (sh_offset, sh_size)
    if not lou:
        print("[-] no LOUSER+0 (sh_type 0x80000000) section found")
        sys.exit(1)
    sh_off, sh_size = lou
    print(f"[+] LOUSER+0 section: file offset {sh_off:#x}, size {sh_size:#x} ({sh_size:,} B)")

    # ---- payload header at section + 0x23C (self-keyed, first 8 dwords encrypted) ----
    hdr_off = sh_off + PAYLOAD_SKIP
    hdr = bytearray(data[hdr_off: hdr_off + 0x1000])
    hdr_key = decrypt_header(hdr)
    magic0 = struct.unpack_from("<I", hdr, 0)[0]
    p_off, p_size, p_key, p_entry, p_mprot = struct.unpack_from("<IIIII", hdr, 8)
    print(f"[+] payload header @ {hdr_off:#x} (self-key {hdr_key:#010x}):")
    print(f"      magic      = {magic0:#010x}")
    print(f"      data_off   = {p_off:#x} ({p_off:,})")
    print(f"      size       = {p_size:#x} ({p_size:,} B)")
    print(f"      key        = {p_key:#010x}")
    print(f"      entry_off  = {p_entry:#x}")
    print(f"      mprot_len  = {p_mprot:#x}")
    if p_size > len(data):
        print("[-] implausible size — header parse failed")
        sys.exit(2)

    # ---- extract + decrypt ----
    blob_off = hdr_off + p_off
    blob = bytearray(data[blob_off: blob_off + p_size])
    print(f"[+] encrypted payload: file [{blob_off:#x} .. {blob_off + p_size:#x})")
    out_enc = os.path.join(out_dir, "7ffe-payload.enc")
    open(out_enc, "wb").write(blob)

    dec = decrypt(bytearray(blob), p_key)
    out_dec = os.path.join(out_dir, "7ffe-payload.dec")
    open(out_dec, "wb").write(dec)
    print(f"[+] decrypted -> {out_dec}")

    # ---- analyze result ----
    info = {"magic_hex": dec[:32].hex(), "entropy_note": None}
    print("[*] first 64 bytes (hex):", dec[:64].hex())
    for name, m in (("ELF", b"\x7fELF"), ("DEX", b"dex\n"), ("ZIP", b"PK\x03\x04"),
                    ("GZIP", b"\x1f\x8b"), ("PNG", b"\x89PNG")):
        if bytes(dec[:4]) == m or (name == "DEX" and dec[:4] == b"dex\n"):
            print(f"[+] ★ decrypted payload is {name}!")
            info["format"] = name

    # printable run stats — code vs data feel
    pr = sum(1 for b in dec[:65536] if 32 <= b < 127) / 65536
    info["printable_ratio_head"] = round(pr, 4)
    print(f"[*] printable ratio (first 64K): {pr:.4f}")

    with open(os.path.join(out_dir, "7ffe-unpack-report.json"), "w") as f:
        json.dump({
            "source": so_path,
            "louser_section": {"offset": sh_off, "size": sh_size},
            "payload_header": {
                "file_offset": hdr_off, "self_key": f"{hdr_key:#x}", "magic": f"{magic0:#x}",
                "data_offset": p_off, "size": p_size, "key": p_key,
                "entry_offset": p_entry, "mprotect_len": p_mprot,
            },
            "algorithm": {
                "name": "dword add+xor stream (FUN_00101520)",
                "add_stream": "(i+3)*key mod 2^32",
                "xor_stream": f"(i+1)*{XOR_CONST:#x} mod 2^32",
            },
            "result": info,
        }, f, indent=1)
    print(f"[+] report -> {os.path.join(out_dir, '7ffe-unpack-report.json')}")


if __name__ == "__main__":
    main()
