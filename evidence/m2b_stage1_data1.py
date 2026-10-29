#!/usr/bin/env python3
"""M2b: stage-1 family cipher (v += (i+3)*key; v ^= (i+1)*0xBF20165D) on
data1.dat with all known key candidates + statistical weak-cipher probes."""
import struct
import sys
import math

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import dec_addxor, M32

D1 = '/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat'
d1 = open(D1, 'rb').read()
head = struct.unpack_from('<I', d1, 0)[0]
body = d1[4:]
sq = (head * head) & M32
seed_head = ((sq >> 17) ^ ((sq << 11) & M32)) & M32


def entropy(b):
    if not b:
        return 0.0
    c = [0] * 256
    for x in b:
        c[x] += 1
    n = len(b)
    return -sum((v / n) * math.log2(v / n) for v in c if v)


def printable(b):
    return sum(1 for x in b if 32 <= x < 127 or x in (9, 10, 13)) / max(1, len(b))


def structure_probe(buf, label):
    """Check decrypted buffer for any known structure."""
    tags = []
    e = entropy(buf[:8192])
    pr = printable(buf[:512])
    if pr > 0.85:
        tags.append(f"printable={pr:.2f}")
    if e < 6.0:
        tags.append(f"entropy={e:.2f}")
    # dd70-style first-word sanity with a few seeds
    from stage2_crypto import parse_container_header
    for s in (seed_head, head, 0x461f, 0x6c74, 0x14b4, 0x2b47):
        h = parse_container_header(buf, s)
        if 0 < h['count'] <= 0x100 and 0 < h['key_table_size'] <= 0x1B00 and h['key_table_size'] % 3 == 0:
            tags.append(f"dd70(seed={s:#x}): count={h['count']} kts={h['key_table_size']:#x}")
    # scatter header
    if len(buf) >= 32:
        base, n, eoff, doff = struct.unpack_from('<4I', buf, 0)
        if 0 < n <= 0x2000 and 16 <= eoff and eoff + n * 16 <= len(buf) and eoff + n * 16 <= doff <= len(buf):
            tags.append(f"scatter(base={base:#x} n={n} eoff={eoff:#x} doff={doff:#x})")
    # magic signatures
    for name, sig in (('ELF', b'\x7fELF'), ('ZIP', b'PK\x03\x04'), ('GZ', b'\x1f\x8b'),
                      ('DEX', b'dex\n'), ('PNG', b'\x89PNG')):
        if sig in buf[:64]:
            tags.append(f"magic={name}")
    if tags:
        print(f"  [{label}] {'; '.join(tags)}")
        print(f"    head32: {bytes(buf[:32]).hex()}")
        return True
    return False


print("=== stage-1 family (decrypt direction) on data1.dat ===")
keys = {
    'head': head,
    'seed(head^2)': seed_head,
    'game_e3_0x461f': 0x461f,
    'prot_e3_0x6c74': 0x6c74,
    'prot_s2_0x14b4': 0x14b4,
    'game_s2_0x2b47': 0x2b47,
    '0x55': 0x55,
    '0x26': 0x26,
    '0x1d99a': 0x1d99a,
    '0x164c': 0x164c,
}
hits = 0
for vname, view in (('body', body), ('full', d1)):
    for kname, key in keys.items():
        # dword key form
        buf = dec_addxor(view, key)
        if structure_probe(buf, f"{vname} key={kname}"):
            hits += 1
        # 16-bit key form (stage-1 used u16 keys from the header)
        buf = dec_addxor(view, key & 0xFFFF)
        if structure_probe(buf, f"{vname} key16={kname}&0xffff"):
            hits += 1

# self-keyed variant: key derived from the head word bytes
for kname, key in (('head_hi16', head >> 16), ('head_lo16', head & 0xFFFF),
                   ('head^0xBF20165D', head ^ 0xBF20165D)):
    buf = dec_addxor(body, key)
    if structure_probe(buf, f"body key={kname}"):
        hits += 1

print(f"\nstage-1 family hits: {hits}")

# ---- statistical weak-cipher probe --------------------------------------
print("\n=== statistical structure of data1.dat body ===")
# 1) repeated 16-byte blocks (CBC with zero IV + repeated plaintext)
blocks = [body[i:i+16] for i in range(0, len(body) - 16, 16)]
seen, dups = {}, 0
for b in blocks:
    if b in seen:
        dups += 1
    else:
        seen[b] = 1
print(f"  16B blocks: {len(blocks)}, duplicate blocks: {dups}")
# 2) byte-value distribution flatness (chi-square-ish)
c = [0] * 256
for x in body:
    c[x] += 1
exp = len(body) / 256
chi = sum((v - exp) ** 2 / exp for v in c) / 255
print(f"  byte chi2/df = {chi:.3f} (uniform ~1.0, <0.9 or >1.1 suspicious)")
# 3) dword autocorrelation (XOR of adjacent dwords vs constants)
n = len(body) // 4
ws = struct.unpack_from(f'<{n}I', body, 0)
from collections import Counter
dx = Counter((ws[i] ^ ws[i+1]) & 0xFF for i in range(0, n - 1, 97))
print(f"  most common low-byte of adjacent-dword XOR: {dx.most_common(5)}")
# 4) position-mod-4 byte means (ADD-stream ciphers leak position structure)
for m in range(4):
    seg = body[m::4]
    print(f"  bytes[{m}::4]: mean={sum(seg)/len(seg):.1f} distinct={len(set(seg))}")
# 5) compare with e2 blob (protector) and game 0xf3 head
so = open('/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so', 'rb').read()
CONT = 0x9B1EC
e2 = so[CONT + 0x14fdc:CONT + 0x14fdc + 0xec884]
print(f"\n  protector e2: {len(e2)} B head={e2[:16].hex()}")
print(f"  data1 body head: {body[:16].hex()}")
print(f"  head words: data1={head:#x} e2={struct.unpack_from('<I', e2, 0)[0]:#x}")
