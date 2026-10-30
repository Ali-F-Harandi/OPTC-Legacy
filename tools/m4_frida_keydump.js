/*
 * m4_frida_keydump.js — OPTC 16.2.1 (com.namcobandaigames.spmoja010E)
 * Runtime key-capture agent (milestone M4).
 *
 * Ground truth (notes/m3-9d-restore.md): module 0x9d offsets == libgame.so
 * virtual addresses; the protector decrypts the 71.6 MB engine overlay into
 * libgame.so's mapping during startup. So every address below is used as
 *   runtime = Module.getBaseAddress("libgame.so") + OFFSET.
 *
 * Capture points (all Unicorn-verified in M3c/M3d):
 *   0x39d39f4  keyExpansion(out, key, keylen, mode)   <- PRIMARY
 *              valid keylens {4,8,16,24,32}; the data1.dat key arrives as
 *              keylen=32, mode=0x40000000 (RC4-255 only, bit 30)
 *   0x39d3a30  keyExpansionFull(out, key, keylen, rounds, mode) — backup
 *   0x39dea94  sigInstall(ctx, record) — record {u32 id, sig[0x24]@+4,
 *              u32 len@+0x28, u32 crc32@+0x2c, u32 @+0x30, payload@+0x34};
 *              record.sig[0:32] IS the RC4-255 key (notes/m3d-cache-decoder.md §4)
 *   0x39dda24  NtyReader::open(this, path, record) — logs which NTY opens
 *
 * Also dumps the crypto anchor tables so the offline decryptor is
 * self-sufficient:
 *   T1@0x14f7375 (RC4-255 KSA seed permutation), T2@0x14f7475,
 *   T3@0x14f7575, T4@0x14f7675, rounds table@0x1464760.
 *
 * Usage (runner, recommended):
 *   python3 tools/m4_frida_run.py                     # spawn + auto-save dumps
 *   python3 tools/m4_frida_run.py --attach            # attach to running game
 *   python3 tools/m4_frida_run.py --image             # + full 71.6 MB image dump
 * Usage (bare frida CLI):
 *   frida -U -f com.namcobandaigames.spmoja010E -l tools/m4_frida_keydump.js
 *   (hex dumps are printed to console; files are written via Java to the
 *    app-private files dir as a fallback when no runner is present)
 */

'use strict';

// ---------------- configuration ----------------
var PKG = 'com.namcobandaigames.spmoja010E';
var OFF = {
    keyExpansion:     0x39d39f4,
    keyExpansionFull: 0x39d3a30,
    sigInstall:       0x39dea94,
    ntyOpen:          0x39dda24,
    T1: 0x14f7375, T2: 0x14f7475, T3: 0x14f7575, T4: 0x14f7675,
    roundsTable: 0x1464760,
    stringsLo: 0x1400000, stringsHi: 0x1500000,
    imageEnd: 0x446fcc8
};
var VALID_KEYLEN = { 4: 1, 8: 1, 16: 1, 24: 1, 32: 1 };
var CALLERS = {
    0x39dea94: 'sigInstall',
    0x39d3fd0: 'keySpecFromDesc',
    0x1f2c6a0: 'install_global_key'
};
var WRITE_BACKUP_FILES = true;   // via Java into /data/data/<pkg>/files/

// ---------------- state ----------------
var DUMP = {
    agent: 'm4_frida_keydump.js',
    package: PKG,
    started: new Date().toISOString(),
    libgame_base: null,
    probe_bytes: null,          // first 16 B at keyExpansion (address sanity)
    tables: null,               // {T1..T4, rounds} hex
    keys: [],                   // keyExpansion captures
    sig_records: [],            // sigInstall captures
    opens: [],                  // NtyReader::open paths
    notes: []
};
var base = null;
var hooksArmed = false;
var seen = {};                  // dedup: key|mode -> count

// ---------------- helpers ----------------
function log() {
    var a = Array.prototype.slice.call(arguments);
    a.unshift('[m4]');
    console.log.apply(console, a);
}

function toHex(buf) {
    var u = new Uint8Array(buf);
    var s = '';
    for (var i = 0; i < u.length; i++) s += ('0' + u[i].toString(16)).slice(-2);
    return s;
}

function readBytes(p, n) {
    try { return Memory.readByteArray(p, n); } catch (e) { return null; }
}

function readCstr(p, max) {
    max = max || 512;
    try {
        var u = new Uint8Array(Memory.readByteArray(p, max));
        var s = '';
        for (var i = 0; i < u.length && u[i] !== 0; i++) s += String.fromCharCode(u[i]);
        return s;
    } catch (e) { return null; }
}

function u32at(p, off) {
    try {
        return Memory.readU32(p.add(off));
    } catch (e) { return null; }
}

function classify(keylen, mode) {
    mode = mode >>> 0;
    if (keylen === 32 && (mode & 0x40000000) !== 0 && (mode & 0x20000000) === 0)
        return 'DATA1/NTY SIGNATURE KEY (RC4-255, mode 0x40000000)';
    if (keylen === 32) return '32-byte key (mixed mode)';
    if (keylen === 24 && ((mode & 0xE0000000) >>> 0) === 0xE0000000)
        return 'global install key (24 B, AES+RC4)';
    return 'key';
}

function relName(addr) {
    if (base === null) return null;
    if (addr.compare(base) < 0) return null;
    var rel = addr.sub(base);
    var relN = parseInt(rel.toString(16), 16);   // fits: image is 71.6 MB
    if (isNaN(relN) || relN > OFF.imageEnd) return null;
    var best = null;
    for (var k in CALLERS) {
        var d = relN - parseInt(k, 10);
        if (d >= 0 && d < 0x10000) best = CALLERS[k] + (d ? '+0x' + d.toString(16) : '');
    }
    return 'img+0x' + relN.toString(16) + (best ? ' (' + best + ')' : '');
}

// Java file writes (app-private dir; pull with root adb or use the runner)
function writeFile(name, arrayBuf) {
    if (!WRITE_BACKUP_FILES) return null;
    var path = '/data/data/' + PKG + '/files/' + name;
    try {
        Java.perform(function () {
            var FOS = Java.use('java.io.FileOutputStream');
            var u = new Uint8Array(arrayBuf);
            var fos = FOS.$new(path);
            var CH = 65536;
            for (var i = 0; i < u.length; i += CH) {
                var n = Math.min(CH, u.length - i);
                var arr = Java.array('byte', new Array(n).fill(0));
                for (var j = 0; j < n; j++) arr[j] = (u[i + j] << 24) >> 24; // signed byte
                fos.write(arr);
            }
            fos.close();
        });
        return path;
    } catch (e) {
        log('file write failed (' + name + '): ' + e);
        return null;
    }
}

// ---------------- arm the hooks ----------------
function armHooks() {
    if (hooksArmed) return;
    hooksArmed = true;

    var pKey = base.add(OFF.keyExpansion);
    var pFull = base.add(OFF.keyExpansionFull);
    var pSig = base.add(OFF.sigInstall);
    var pOpen = base.add(OFF.ntyOpen);

    log('libgame.so base =', base, ' image size 0x' + OFF.imageEnd.toString(16));
    log('keyExpansion @', pKey, ' full @', pFull, ' sigInstall @', pSig);
    DUMP.probe_bytes = toHex(readBytes(pKey, 16) || new ArrayBuffer(16));
    log('probe @keyExpansion:', DUMP.probe_bytes);

    // ---- PRIMARY: keyExpansion(out, key, keylen, mode) ----
    Interceptor.attach(pKey, {
        onEnter: function (args) {
            var out = args[0], keyp = args[1];
            var keylen = args[2].toUInt32();
            var mode = args[3].toUInt32();
            var kl = (VALID_KEYLEN[keylen]) ? keylen : Math.min(keylen, 64);
            if (kl <= 0 || kl > 64) kl = 64;
            var kb = readBytes(keyp, kl + 4);          // +4: 36-byte sig neighborhood
            if (kb === null) kb = readBytes(keyp, kl); // end-of-mapping fallback
            var keyhex = kb ? toHex(kb) : null;
            var ev = {
                ts: new Date().toISOString(),
                pc: 'keyExpansion',
                out: out.toString(),
                key_ptr: keyp.toString(),
                keylen: keylen,
                mode: '0x' + (mode >>> 0).toString(16),
                key_hex: keyhex ? keyhex.slice(0, kl * 2) : null,
                sig36_hex: (kb && keylen === 32) ? toHex(kb).slice(0, 72) : null,
                caller: relName(this.returnAddress),
                classification: VALID_KEYLEN[keylen] ? classify(keylen, mode >>> 0) : 'INVALID keylen'
            };
            var dedup = ev.key_hex + '|' + ev.mode;
            seen[dedup] = (seen[dedup] || 0) + 1;
            ev.count = seen[dedup];
            DUMP.keys.push(ev);
            log('KEY len=' + keylen, 'mode=' + ev.mode, 'key=' + ev.key_hex,
                'x' + ev.count, 'caller=' + ev.caller, '::', ev.classification);
            if (ev.classification.indexOf('DATA1') === 0) {
                log('  *** THIS IS THE data1.dat 32-BYTE SIGNATURE KEY ***');
                log('  key  (32 B): ' + ev.key_hex);
                log('  sig  (36 B): ' + ev.sig36_hex);
            }
        }
    });

    // ---- backup: keyExpansionFull(out, key, keylen, rounds, mode) ----
    // NOTE: the dispatcher tail-jumps through the PLT, so its LR is unchanged
    // and callers of the dispatcher are indistinguishable here — dedup by
    // (key, mode) instead.
    Interceptor.attach(pFull, {
        onEnter: function (args) {
            var keylen = args[2].toUInt32();
            if (!VALID_KEYLEN[keylen]) return;           // only sane calls
            var kb = readBytes(args[1], keylen);
            var keyhex = kb ? toHex(kb) : null;
            var mode = '0x' + (args[4].toUInt32() >>> 0).toString(16);
            if (keyhex && seen[keyhex + '|' + mode]) return;   // already captured at the dispatcher
            var ev = {
                ts: new Date().toISOString(),
                pc: 'keyExpansionFull',
                keylen: keylen,
                rounds: args[3].toUInt32(),
                mode: mode,
                key_hex: keyhex,
                caller: relName(this.returnAddress),
                note: 'direct/PLT path'
            };
            if (keyhex) seen[keyhex + '|' + mode] = (seen[keyhex + '|' + mode] || 0) + 1;
            DUMP.keys.push(ev);
            log('KEY(full) len=' + keylen, 'rounds=' + ev.rounds, 'mode=' + mode,
                'key=' + keyhex, 'caller=' + ev.caller);
        }
    });

    // ---- sigInstall(ctx, record) ----
    Interceptor.attach(pSig, {
        onEnter: function (args) {
            var ctx = args[0], rec = args[1];
            var rb = readBytes(rec, 0x34);
            var sig_ctx = readBytes(ctx.add(0x28), 0x24);   // ctx key signature (ntyOpenCaller2 memcmp)
            var ev = {
                ts: new Date().toISOString(),
                pc: 'sigInstall',
                ctx: ctx.toString(),
                record_hex: rb ? toHex(rb) : null,
                fields: rb ? {
                    id: '0x' + toHex(rb.slice(0, 4)),
                    sig36_hex: toHex(rb.slice(4, 40)),
                    key32_hex: toHex(rb.slice(4, 36)),
                    len_le: u32at(rec, 0x28),
                    len_be: rb ? ((new Uint8Array(rb)[0x28] << 24) | (new Uint8Array(rb)[0x29] << 16) |
                                  (new Uint8Array(rb)[0x2a] << 8) | new Uint8Array(rb)[0x2b]) >>> 0 : null,
                    crc32_le: u32at(rec, 0x2c),
                    f30: u32at(rec, 0x30)
                } : null,
                ctx_sig24_hex: sig_ctx ? toHex(sig_ctx) : null
            };
            DUMP.sig_records.push(ev);
            log('SIG-INSTALL record=' + ev.record_hex);
            if (ev.fields) {
                log('  id=' + ev.fields.id + '  key32=' + ev.fields.key32_hex);
                log('  len(LE)=' + ev.fields.len_le + '  len(BE)=' + ('0x' + (ev.fields.len_be || 0).toString(16)) +
                    '  crc32=' + ('0x' + (ev.fields.crc32_le || 0).toString(16)));
            }
        }
    });

    // ---- NtyReader::open(this, path, record) — path may be arg0 or arg1
    // depending on the exact thunk; pick whichever decodes as a path ----
    Interceptor.attach(pOpen, {
        onEnter: function (args) {
            var path = null;
            for (var ai = 0; ai < 2 && !path; ai++) {
                var s = readCstr(args[ai], 1024);
                if (s && s.length > 3 && (s.charAt(0) === '/' || s.indexOf('/') >= 0))
                    path = s;
            }
            var ev = {
                ts: new Date().toISOString(),
                pc: 'NtyReader::open',
                path: path,
                arg0_hint: readCstr(args[0], 64),
                arg1_hint: readCstr(args[1], 64),
                has_record: !args[2].isNull()
            };
            DUMP.opens.push(ev);
            if (path) log('OPEN', path, ev.has_record ? '(+key record)' : '');
        }
    });

    log('hooks armed: keyExpansion + keyExpansionFull + sigInstall + NtyReader::open');
}

// ---------------- crypto tables ----------------
function dumpTables() {
    if (DUMP.tables) return;
    var t = {};
    var defs = [['T1', OFF.T1], ['T2', OFF.T2], ['T3', OFF.T3], ['T4', OFF.T4],
                ['rounds', OFF.roundsTable]];
    for (var i = 0; i < defs.length; i++) {
        var n = defs[i][0], off = defs[i][1];
        var sz = (n === 'rounds') ? 24 : 256;
        var b = readBytes(base.add(off), sz);
        t[n] = { offset: '0x' + off.toString(16), size: sz, hex: b ? toHex(b) : null };
    }
    DUMP.tables = t;
    log('T1 (RC4-255 KSA seed) first 32 B:', t.T1.hex ? t.T1.hex.slice(0, 64) : 'FAIL');
    log('T2/T3/T4 + rounds table captured:', !!t.T2.hex, !!t.T3.hex, !!t.T4.hex, !!t.rounds.hex);
}

// ---------------- wait for libgame.so + the 0x9d overlay ----------------
var pollCount = 0;
function poll() {
    if (base !== null) return;
    pollCount++;
    var m = Process.findModuleByName('libgame.so');
    if (!m) {
        if (pollCount % 20 === 1) log('waiting for libgame.so to load ...');
        return;
    }
    // The 0x9d overlay blank-check: at keyExpansion the restored engine code
    // is dense; before the protector installs it the region is zero.
    var probe = readBytes(m.base.add(OFF.keyExpansion), 16);
    if (probe) {
        var u = new Uint8Array(probe);
        var nz = 0;
        for (var i = 0; i < u.length; i++) if (u[i] !== 0) nz++;
        if (nz === 0) {
            if (pollCount % 20 === 1)
                log('libgame.so loaded @', m.base, '— waiting for the 0x9d overlay install ...');
            return;
        }
    }
    base = m.base;
    DUMP.libgame_base = base.toString();
    log('0x9d overlay is live (probe non-zero @' + base.add(OFF.keyExpansion) + ')');
    dumpTables();
    armHooks();
}

var timer = setInterval(function () {
    poll();
    if (base !== null) {
        clearInterval(timer);
        // keep watching for late table changes is unnecessary; done.
    }
}, 250);

// ---------------- RPC (for the runner) ----------------
rpc.exports = {
    status: function () {
        return {
            armed: hooksArmed,
            base: base ? base.toString() : null,
            keys: DUMP.keys.length,
            sig_records: DUMP.sig_records.length,
            opens: DUMP.opens.length
        };
    },
    getdump: function () {
        return DUMP;
    },
    // region dump: kind = 'strings' (1 MB, volume-name resolution) | 'image' (71.6 MB)
    dumpregion: function (kind) {
        if (base === null) return { error: 'overlay not ready' };
        var lo, hi;
        if (kind === 'strings') { lo = OFF.stringsLo; hi = OFF.stringsHi; }
        else if (kind === 'image') { lo = 0; hi = OFF.imageEnd; }
        else return { error: 'kind must be strings|image' };
        var CHUNK = 262144;
        var sent = 0;
        for (var off = lo; off < hi; off += CHUNK) {
            var n = Math.min(CHUNK, hi - off);
            var b = readBytes(base.add(off), n);
            if (!b) continue;
            send({ type: 'm4-region', kind: kind, offset: off, size: n }, b);
            sent += n;
        }
        return { ok: true, kind: kind, lo: '0x' + lo.toString(16), hi: '0x' + hi.toString(16), sent: sent };
    },
    writefiles: function () {
        // write the small artifacts via Java as CLI-only fallback
        var paths = [];
        var j = JSON.stringify(DUMP);
        var jb = new Uint8Array(j.length);
        for (var i = 0; i < j.length; i++) jb[i] = j.charCodeAt(i) & 0xFF;
        var p = writeFile('m4_keydump.json', jb.buffer);
        if (p) paths.push(p);
        ['T1', 'T2', 'T3', 'T4'].forEach(function (n) {
            if (!DUMP.tables || !DUMP.tables[n] || !DUMP.tables[n].hex) return;
            var h = DUMP.tables[n].hex;
            var u = new Uint8Array(h.length / 2);
            for (var i2 = 0; i2 < u.length; i2++) u[i2] = parseInt(h.substr(i2 * 2, 2), 16);
            var pp = writeFile('m4_' + n + '.bin', u.buffer);
            if (pp) paths.push(pp);
        });
        return paths;
    }
};

log('m4_frida_keydump loaded — waiting for the game (spawn me with the runner or frida CLI)');
