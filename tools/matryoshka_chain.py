#!/usr/bin/env python3
"""M2c: the FULL matryoshka extractor.

Chain discovered:
  stage-2 container → f3 (raw) --e3's init--> level-2 container (id=0xe3)
    modules 0x8f/0x97/0x8e + e4 + raw 0xf4
  0xf4 (raw) --e4's init--> level-3 container (id=0xe4)
    modules 0x2/0x69/0x60/0x68/0x40/0x20/0x54/0x33 + e5 + raw 0xf5
  0xf5 (raw) --e5's init--> level-4 container (id=0xe5) ... until it ends.

Per-level keys: the eN processor module carries a private AES-256 schedule
(found via {0xF4, 0x000E0100} trailer) and a stream key at schedule_end+0xC.
dd70 modules use seed = sq(stream_key); chunks = stream -> CBC(private) -> LZ.
"""
import struct
import sys
import os

sys.path.insert(0, "/home/z/my-project/download/re-work/repo/tools")
import stage2_crypto as sc
from stage2_crypto import clmul32, M32

M2 = '/home/z/my-project/download/re-work/m2'
tabs = sc.load_tables(open('/home/z/my-project/download/re-work/m1b/7ffe-payload.dec', 'rb').read())


def deob(v):
    return clmul32(0x94511DD2, v & M32)


def seed_of(iD):
    p = (iD * 0x9D323CD7) & M32
    return (((p << (iD & 0xB)) & M32) + (p >> (iD & 7))) & M32


def entry_decode(raw23, head_g, index):
    eshift = ((((head_g + 0x96F60B71) & M32) * head_g) & M32) << ((index + 1) & 3)
    eshift &= M32
    m2 = (head_g * 0x06A55BCC + (((head_g + 0x96F60B71) & M32) * head_g)) & M32
    out = []
    prev = 0xF02F7685
    for j in range(23):
        raw = raw23[j]
        sq = (prev * prev) & M32
        v = deob(raw ^ (sq >> 3)) ^ eshift
        v = (0x79934CF6 + j * 0xE64D33D8 + head_g + v) & M32
        v = (v - (m2 >> ((4 * j + 3) & 5))) & M32
        out.append(v)
        prev = raw
    return out


def parse_container(blob, idc):
    """Returns (entries, head_g) or None if the head/entries look wrong."""
    if len(blob) < 0x100:
        return None
    w0, w1 = struct.unpack_from('<2I', blob, 0)
    s = seed_of(idc)
    countword = deob((w0 + w1) & M32) ^ ((s + 0xF119421B) & M32)
    head_g = (s + 0x5590AD79 + countword) & M32
    entries = []
    for i in range(256):
        off = 8 + i * 0x5C
        if off + 0x5C > len(blob):
            break
        raw23 = struct.unpack_from('<23I', blob, off)
        dec = entry_decode(raw23, head_g, i)
        if dec[0] == 0:
            break
        eid, eflags, soff, ssize = dec[0], dec[1], dec[2], dec[3]
        # an insane entry = past the table (module data) — the real loop's dd70 would fail here
        # src_size = the module's IMAGE size (dd70 total), not the stored extent —
        # stored (LZ-compressed) bytes are fewer. Raw placeholder entries may be
        # size-0. Bound only the offsets.
        ok_sz = ssize == 0 or (0 < ssize <= 0x8000000)
        if not (0 < eid <= 0xFFFF and soff < len(blob)
                and ok_sz and eflags < 0x4000000):
            break
        entries.append(dec)
    if not entries:
        return None
    # authoritative check: table must end exactly at entry[0].src_off
    expect = 8 + len(entries) * 0x5C
    if entries[0][2] != expect:
        return None
    return entries, head_g


def find_trailer(mod):
    """Locate {0xF4, 0x000E0100} → (schedule_off, stream_key_off).
    Layout: [0xF4][config][gap?][240B schedule][gap 0xC][stream key]."""
    for off in range(0x1000, len(mod) - 0x120, 4):
        if struct.unpack_from('<I', mod, off)[0] == 0xF4 and \
           struct.unpack_from('<I', mod, off + 8)[0] == 0x000E0100:
            sched = off + 0xC                      # e3: 0x1a1f0+0xC=0x1a1fc; e4: 0x1a1f8+0xC=0x1a204
            skey = sched + 0xF0 + 0xC
            if skey + 4 <= len(mod):
                return sched, skey
    return None, None


def dd70_module(blob, soff, stream_key, rk, outdir, tag):
    view = blob[soff:]
    m = sc.dd70_parse(view, key=stream_key)
    img, stats = sc.dd70_extract(view, m, tabs, rk, key=stream_key)
    open(f'{outdir}/{tag}_image.bin', 'wb').write(img)
    return len(img), stats, m


def run_chain(label, level_blob, level_id, outdir, e_keys, depth=0):
    """e_keys: dict {module_id: (stream_key, rk)} for known processors."""
    pad = '  ' * depth
    r = parse_container(level_blob, level_id)
    if r is None:
        print(f"{pad}[{label}] NOT a container (id={level_id:#x}) — chain ends. "
              f"{len(level_blob)} bytes remain.")
        open(f'{outdir}/leaf_{label}.bin', 'wb').write(level_blob)
        return
    entries, head_g = r
    print(f"{pad}[{label}] container id={level_id:#x}: {len(entries)} entries, head_g={head_g:#x}")
    next_raw = None
    next_proc = None
    for i, e in enumerate(entries):
        eid, eflags, soff, ssize, doff, dsize, f6, init_fn, fnptr2 = e[:9]
        kind = 'RAW' if eflags & 2 else 'dd70'
        print(f"{pad}  entry[{i}] id={eid:#x} flags={eflags:#x} {kind} "
              f"[{soff:#x}, {soff+ssize:#x}) {ssize:#x}B")
        if ssize == 0:
            print(f"{pad}    (empty placeholder — skipped)")
            continue
        if eflags & 2:
            fn = f'{outdir}/raw_L{depth}_{eid:#x}.bin'
            open(fn, 'wb').write(level_blob[soff:soff+ssize])
            if eid == level_id + 0x11:      # the next raw (f-pattern)
                next_raw = (eid, level_blob[soff:soff+ssize])
            else:
                next_raw = next_raw or (eid, level_blob[soff:soff+ssize])
        else:
            # find the processor module for THIS level
            proc_id = level_id              # e3 for level 2, e4 for level 3...
            key = e_keys.get(proc_id)
            if key is None:
                print(f"{pad}    !! no keys for processor {proc_id:#x} — stop")
                return
            skey, rk = key
            try:
                n, stats, m = dd70_module(level_blob, soff, skey, rk, outdir,
                                          f'L{depth}_m{eid:02x}')
                print(f"{pad}    -> image {n:#x}B (ok={stats[0]} fail={stats[1]})")
                img = open(f'{outdir}/L{depth}_m{eid:02x}_image.bin','rb').read()
                if dsize:
                    pm = sc.dd70_parse(level_blob[doff:], key=skey)
                    p, ps = sc.dd70_extract(level_blob[doff:], pm, tabs, rk, key=skey)
                    open(f'{outdir}/L{depth}_m{eid:02x}_patch.bin','wb').write(p)
                    mimg = bytearray(img)
                    pp = sc.parse_patch(p)
                    merged, info = sc.merge_patch(mimg, pp)
                    open(f'{outdir}/L{depth}_m{eid:02x}_merged.bin','wb').write(bytes(merged))
                    img = bytes(merged)
                # is this the NEXT processor (e5, e6...)?
                if eid == level_id + 1 and init_fn == 0x24d0:
                    sched, sko = find_trailer(img)
                    if sched:
                        nskey = struct.unpack_from('<I', img, sko)[0]
                        nrk = list(struct.unpack_from('<60I', img, sched))
                        e_keys[eid] = (nskey, nrk)
                        next_proc = eid
                        print(f"{pad}    ** processor {eid:#x}: stream key {nskey:#x}, "
                              f"schedule@+{sched:#x}")
            except Exception as ex:
                print(f"{pad}    !! dd70 fail: {ex}")
    # recurse into the next raw blob with the next processor's id
    if next_raw and next_proc:
        run_chain(f'{next_raw[0]:#x}', next_raw[1], next_proc, outdir, e_keys, depth + 1)
    elif next_raw:
        print(f"{pad}  raw {next_raw[0]:#x} exists but no next processor — chain ends")


# ---- level 2 setup: e3 keys (already recovered) ----
game_e3 = open(f'{M2}/game_modules/ee3_merged.bin','rb').read() if os.path.exists(f'{M2}/game_modules/ee3_merged.bin') else open(f'{M2}/game_modules/ee3_image.bin','rb').read()
prot_e3 = open('/home/z/my-project/download/re-work/repo/evidence/e3_0xe3_merged.bin','rb').read()
f3 = open(f'{M2}/game_modules/f3_raw_0xf3.bin','rb').read()
so = open('/home/z/my-project/download/re-work/native-libs/lib__7ffe__.so','rb').read()
e2 = so[0x9B1EC + 0x14fdc:0x9B1EC + 0x14fdc + 0xec884]

for side, blob, e3img, outdir in (
        ('GAME', f3, game_e3, f'{M2}/f3_chain'),
        ('PROT', e2, prot_e3, f'{M2}/e2_chain')):
    os.makedirs(outdir, exist_ok=True)
    sched, sko = find_trailer(e3img)
    skey = struct.unpack_from('<I', e3img, sko)[0]
    rk = list(struct.unpack_from('<60I', e3img, sched))
    print(f"\n############ {side}: e3 stream key {skey:#x}, schedule@{sched:#x} ############")
    run_chain('f3', blob, 0xe3, outdir, {0xe3: (skey, rk)})
