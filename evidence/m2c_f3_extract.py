#!/usr/bin/env python3
"""M2c: extract the f3 second-level container's modules with e3's private pipeline.

Container: f3/e2 blob, id=0xe3, 5 entries:
  0x8f  flags=0x20000 dd70 module (+patch)   init=0x5364 fnptr2=0x6b74
  0x97  flags=0x20000 dd70 module (+patch)              fnptr2=0x5ccc
  0x8e  flags=0x20000 dd70 module (+patch)   init=0x7314 fnptr2=0x9d14
  0xf4  flags=0x102   RAW 38.46MB (game) / 0xCE400 (protector)
  0xe4  flags=0x0     dd70 module (+patch)   init=0x24d0 fnptr2=0x5c38
Module decryption: e3 pipeline = dd70_parse(seed=sq([e3+0x1a2f8])) with chunks
  stream(key) -> CBC(e3 private ctx @+0x1a1f8) -> LZ scatter.
"""
import struct
import sys

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
import stage2_crypto as sc

EV = '/home/z/my-project/download/re-work/repo/evidence'
M2 = '/home/z/my-project/download/re-work/m2'

# key sets: (stream_key, private rk words, tables)
game_e3 = open(f'{M2}/game_modules/ee3_image.bin', 'rb').read()
prot_e3 = open(f'{EV}/e3_0xe3_merged.bin', 'rb').read()
prot_s2 = open('/home/z/my-project/download/re-work/m1b/7ffe-payload.dec', 'rb').read()
tabs = sc.load_tables(prot_s2)

KEYSETS = {
    'game': (0x461f, list(struct.unpack_from('<60I', game_e3, 0x1a1fc))),
    'prot': (0x6c74, list(struct.unpack_from('<60I', prot_e3, 0x1a1fc))),
}

f3 = open(f'{M2}/game_modules/f3_raw_0xf3.bin', 'rb').read()
so = open('/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so', 'rb').read()
e2 = so[0x9B1EC + 0x14fdc:0x9B1EC + 0x14fdc + 0xec884]

ENTRIES = {
    '0x8f': (0x1d4, 0x236e8, 0x87dc, 0x621),
    # game twin (patches at different offsets than protector)
}


def entries_of(blob):
    """decode the 5 entries (hardcode from the verified parse)"""
    if len(blob) > 0x1000000:   # game f3
        return [
            (0x8f, 0x20000, 0x1d4, 0x236e8, 0x87dc, 0x621, 0x5364, 0x6b74),
            (0x97, 0x20000, 0x8ff4, 0x21800, 0x10960, 0xac3, 0x0, 0x5ccc),
            (0x8e, 0x20000, 0x112ec, 0x27508, 0x1a7f4, 0xae6, 0x7314, 0x9d14),
            (0xf4, 0x102, 0x1b164, 0x25b34a4, 0x0, 0x0, 0x0, 0x0),
            (0xe4, 0x0, 0x25ce608, 0x1a648, 0x25d3638, 0x831, 0x24d0, 0x5c38),
        ]
    return [
        (0x8f, 0x20000, 0x1d4, 0x236e8, 0x87dc, 0x621, 0x5364, 0x6b74),
        (0x97, 0x20000, 0x8ff4, 0x21800, 0xe5c8, 0xac3, 0x0, 0x5ccc),
        (0x8e, 0x20000, 0xef54, 0x27508, 0x1845c, 0xae6, 0x7314, 0x9d14),
        (0xf4, 0x102, 0x18dcc, 0xce400, 0x0, 0x0, 0x0, 0x0),
        (0xe4, 0x0, 0xe71cc, 0x1a648, 0xec1fc, 0x831, 0x24d0, 0x5c38),
    ]


def extract_side(label, blob, key, rk, outdir):
    import os
    os.makedirs(outdir, exist_ok=True)
    print(f"\n########## {label} (stream key {key:#x}) ##########")
    for (mid, flags, soff, ssize, doff, dsize, ifn, f2) in entries_of(blob):
        print(f"\n--- module id={mid:#x} flags={flags:#x} src=[{soff:#x},{soff+ssize:#x}) ---")
        if flags & 2:
            print(f"    RAW register-only ({ssize:#x} B) — saved")
            open(f'{outdir}/raw_{mid:#x}.bin', 'wb').write(blob[soff:soff+ssize])
            continue
        view = blob[soff:]
        m = sc.dd70_parse(view, key=key)
        print(f"    dd70: total={m['total']:#x} count={m['count']} kts(tree)={len(m['tree'])} "
              f"flags={m['flags']:#x}")
        if m['total'] != ssize:
            print(f"    !! total {m['total']:#x} != src_size {ssize:#x}")
        img, stats = sc.dd70_extract(view, m, tabs, rk, key=key)
        fn = f'{outdir}/m{mid:02x}_image.bin'
        open(fn, 'wb').write(img)
        print(f"    image: {len(img):#x} B (ok={stats[0]} fail={stats[1]}) -> {fn}")
        if dsize:
            pm = sc.dd70_parse(blob[doff:], key=key)
            p, pstats = sc.dd70_extract(blob[doff:], pm, tabs, rk, key=key)
            pfn = f'{outdir}/m{mid:02x}_patch.bin'
            open(pfn, 'wb').write(p)
            print(f"    patch: {len(p):#x} B (ok={pstats[0]} fail={pstats[1]}) -> {pfn}")


extract_side('GAME f3 (38.5MB)', f3, *KEYSETS['game'], f'{M2}/f3_modules')
extract_side('PROT e2 (968KB)', e2, *KEYSETS['prot'], '/home/z/my-project/download/re-work/m2/e2_modules')
