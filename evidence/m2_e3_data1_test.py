#!/usr/bin/env python3
"""M2: data1.dat vs e3's private crypto — the decisive retest.

M1b ruled out data1.dat as a dd70/outer container with ANY seed (the e3
container formulas turned out to be constant-folded stage-2 math — verified),
and its raw-chunk stream+CBC probes used ONLY the stage-2 shipped AES key with
an entropy oracle. What was never tried:

  - e3's PRIVATE AES-256 keys (game: 85135633.., protector: 641f783d..)
  - e3's stream keys x = [0x1a2f8] (game 0x461f, protector 0x6c74)
  - the game stage-2 key (6384b59a..) / game stream key 0x2b47
  - a STRUCTURAL oracle: the FUN_00002b10 pipeline decrypts each chunk to a
    scatter descriptor {base, count, entries_off, data_off} + n x 16B
    {dst_off, dst_size, src_size} + data  (verified shape from M1b chunks)

Matrix: view {body, full} x stream-key {e3 keys, stage-2 keys, head-derived,
none} x AES-key {game-e3, prot-e3, game-stage2, prot-stage2, none} x order
{stream->cbc, cbc->stream} -> scatter oracle + dd70 re-parse + structure scan.
"""
import math
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
from stage2_crypto import (M32, load_tables, cbc_decrypt, stream_decrypt,
                           clmul32, parse_container_header, dd70_parse,
                           XOR_CONST, OFF_RK)

EV = '/home/z/my-project/download/re-work/repo/evidence'
M2 = '/home/z/my-project/download/re-work/m2'

D1 = '/home/z/my-project/download/re-work/assets-sample/assets/7ffe/data1.dat'

# ---- load the four key sets -------------------------------------------------
prot_s2 = open('/home/z/my-project/download/re-work/m1b/7ffe-payload.dec', 'rb').read()
game_s2 = open(f'{M2}/game-stage2.dec', 'rb').read()
prot_e3 = open(f'{EV}/e3_0xe3_merged.bin', 'rb').read()
game_e3 = open(f'{EV}/m2_game_e3_0xe3_image.bin', 'rb').read()


def ctx_of(img, rk_off=0x1a1fc, ts_off=0x11d10):
    """(tables, round-keys) for an image's shipped AES ctx."""
    return (load_tables_at(img, ts_off),
            list(struct.unpack_from('<60I', img, rk_off)))


def load_tables_at(blob, td0_off):
    return (list(struct.unpack_from('<256I', blob, td0_off)),
            list(struct.unpack_from('<256I', blob, td0_off + 0x400)),
            list(struct.unpack_from('<256I', blob, td0_off + 0x800)),
            list(struct.unpack_from('<256I', blob, td0_off + 0xc00)),
            list(struct.unpack_from('<256I', blob, td0_off + 0x1000)))


# stage-2 images: Td0 at 0x11d10, rk at 0x257f4;  e3 images: rk at 0x1a1fc
STD_TABS = load_tables_at(prot_s2, 0x11d10)
KEYS = {}
for name, img, rk_off in (('prot_stage2', prot_s2, 0x257f4),
                          ('game_stage2', game_s2, 0x257f4),
                          ('prot_e3', prot_e3, 0x1a1fc),
                          ('game_e3', game_e3, 0x1a1fc)):
    rk = list(struct.unpack_from('<60I', img, rk_off))
    KEYS[name] = (STD_TABS, rk)

STREAM_X = {
    'game_e3_x=0x461f': 0x461f,
    'prot_e3_x=0x6c74': 0x6c74,
    'game_stage2_x=0x2b47': 0x2b47,
    'prot_stage2_x=0x14b4': 0x14b4,
}

d1 = open(D1, 'rb').read()
head = struct.unpack_from('<I', d1, 0)[0]
body = d1[4:]
sq = (head * head) & M32
STREAM_X['head'] = head
STREAM_X['seed(head^2)'] = ((sq >> 17) ^ ((sq << 11) & M32)) & M32


def sq_seed(x):
    q = (x * x) & M32
    return ((q >> 17) ^ ((q << 11) & M32)) & M32


# ---- oracle: scatter descriptor (the FUN_00003468 plaintext shape) ---------
def scatter_check(buf):
    """{u32 base; u32 count; u32 entries_off; u32 data_off} + n x 16B entries."""
    if len(buf) < 32:
        return None
    base, n, eoff, doff = struct.unpack_from('<4I', buf, 0)
    if not (0 < n <= 0x2000):
        return None
    if eoff < 16 or eoff + n * 16 > len(buf):
        return None
    if doff < eoff + n * 16 or doff > len(buf):
        return None
    cursor = 0
    for i in range(n):
        d, dsz, ssz, _ = struct.unpack_from('<4I', buf, eoff + i * 16)
        if d > 0x8000000 or dsz > 0x8000000:
            return None
        if doff + cursor + ssz > len(buf):
            return None
        cursor += ssz
    return {'base': base, 'n': n, 'eoff': eoff, 'doff': doff, 'src_total': cursor}


def dd70_check(buf, seeds):
    """dd70 header decode with the given candidate seeds."""
    for s in seeds:
        h = parse_container_header(buf, s)
        c, k = h['count'], h['key_table_size']
        if 0 < c <= 0x100 and 0 < k <= 0x1B00 and k % 3 == 0:
            consumed = (12 + k + 3) & ~3
            if consumed + c * 8 <= len(buf):
                return {'seed': s, **h}
    return None


def entropy(b):
    if not b:
        return 0.0
    counts = [0] * 256
    for x in b:
        counts[x] += 1
    n = len(b)
    return -sum((c / n) * math.log2(c / n) for c in counts if c)


def printable(b):
    return sum(1 for x in b if 32 <= x < 127 or x in (9, 10, 13)) / max(1, len(b))


# ---- calibration: real scatter headers from the M1b e3 module chunks -------
print("=== calibration: scatter headers of real module chunks (stage-2 keys) ===")
so = open('/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so', 'rb').read()
CONT = 0x9B1EC
cont = so[CONT:]
m = dd70_parse(cont[0x101860:])          # e3 module blob
tabs_s2, rk_s2 = KEYS['prot_stage2']
for idx, (off, size) in enumerate(m['pairs'][:3]):
    chunk = bytes(cont[0x101860 + off:0x101860 + off + size])
    chunk = stream_decrypt(chunk, 0x14b4)
    if m['flags'] != 1:
        chunk = cbc_decrypt(chunk, rk_s2, tabs_s2)
    sc = scatter_check(chunk)
    b, n, eo, do = struct.unpack_from('<4I', chunk, 0)
    print(f"  chunk[{idx}] {size:#x}B: base={b:#x} n={n} eoff={eo:#x} doff={do:#x} "
          f"oracle={'PASS' if sc else 'FAIL'}")
    if idx == 0:
        print(f"    first entries: {[struct.unpack_from('<4I', chunk, eo + i*16) for i in range(min(3, n))]}")

# ---- the matrix -------------------------------------------------------------
print("\n=== data1.dat key matrix ===")
print(f"file: {len(d1)} B, head={head:#010x}, body {len(body)} B")

views = {'body': body, 'full': d1}
results = []
for vname, view in views.items():
    for xname, x in sorted(STREAM_X.items()):
        for aname in ('game_e3', 'prot_e3', 'game_stage2', 'prot_stage2', 'none'):
            for order in ('s->c', 'c->s'):
                for no_stream in (False, True):
                    if no_stream and xname != 'game_e3_x=0x461f':
                        continue  # only probe no-stream once per view/key
                    buf = bytearray(view)
                    if not no_stream:
                        if order == 's->c':
                            buf = stream_decrypt(buf, x)
                            if aname != 'none':
                                buf = cbc_decrypt(buf, KEYS[aname][1], KEYS[aname][0])
                        else:
                            if aname != 'none':
                                buf = cbc_decrypt(buf, KEYS[aname][1], KEYS[aname][0])
                            buf = stream_decrypt(buf, x)
                    else:
                        if aname != 'none':
                            buf = cbc_decrypt(buf, KEYS[aname][1], KEYS[aname][0])
                    sc = scatter_check(bytes(buf))
                    dd = dd70_check(bytes(buf), {sq_seed(x), x, sq_seed(head), head})
                    e = entropy(bytes(buf[:4096]))
                    pr = printable(bytes(buf[:256]))
                    tag = []
                    if sc:
                        tag.append(f"SCATTER {sc}")
                    if dd:
                        tag.append(f"DD70 {dd}")
                    if pr > 0.85:
                        tag.append(f"printable={pr:.2f}")
                    if e < 6.5:
                        tag.append(f"low-entropy={e:.2f}")
                    if tag:
                        print(f"  [{vname} x={xname} aes={aname} {order}{'+nostream' if no_stream else ''}] "
                              f"e={e:.2f} -> {'; '.join(tag)}")
                        results.append((vname, xname, aname, order, no_stream, tag))
                    elif e < 7.3:
                        print(f"  [{vname} x={xname} aes={aname} {order}] e={e:.2f} head16={bytes(buf[:16]).hex()}")

print(f"\nhits: {len(results)}")
if not results:
    print("no structural hits — head16 of the canonical combos:")
    for vname, view in views.items():
        for xname, x in (('game_e3_x=0x461f', 0x461f), ('prot_e3_x=0x6c74', 0x6c74)):
            for aname in ('game_e3', 'prot_e3'):
                buf = stream_decrypt(bytearray(view), x)
                buf = cbc_decrypt(buf, KEYS[aname][1], KEYS[aname][0])
                print(f"  {vname} x={xname} aes={aname}: {bytes(buf[:24]).hex()}")
