#!/usr/bin/env python3
"""M4: host-side runner for tools/m4_frida_keydump.js.

Spawns (or attaches to) ONE PIECE TREASURE CRUISE 16.2.1 on a rooted device
with frida-server running, waits for the protector to install the decrypted
0x9d engine overlay into libgame.so, then captures:

  * every keyExpansion(0x39d39f4) call — key bytes, keylen, mode, caller
    (the data1.dat key arrives as keylen=32, mode=0x40000000)
  * every sigInstall(0x39dea94) record — {id, sig[36], len, crc32}
  * every NtyReader::open path (correlates records with files)
  * the sinatra crypto tables T1..T4 + rounds (needed offline)

and saves everything to --out (default ./optc_dump/):
  keydump.json     all captures
  T1.bin T2.bin T3.bin T4.bin rounds.bin
  strings.bin      the [0x1400000,0x1500000) region (volume-name resolution)
  image.bin        optional --image: the full 71.6 MB runtime engine image

Usage:
  python3 tools/m4_frida_run.py                    # spawn the game
  python3 tools/m4_frida_run.py --attach           # attach to a running game
  python3 tools/m4_frida_run.py --image            # also dump the full image
  python3 tools/m4_frida_run.py --timeout 300      # auto-exit after 5 min

Requirements: frida + frida-tools (pip install frida-tools), rooted device
with a matching-arch frida-server (arm64), USB debugging on.
Play to the title screen — key installs happen during resource load.
"""
import argparse
import json
import os
import sys
import threading
import time

PKG = "com.namcobandaigames.spmoja010E"

try:
    import frida
except ImportError:
    sys.exit("frida not installed:  pip install frida-tools")


def main():
    ap = argparse.ArgumentParser(description="OPTC M4 runtime key dumper")
    ap.add_argument("--attach", action="store_true", help="attach to the running game instead of spawning")
    ap.add_argument("--device", default=None, help="device id (default: first USB device)")
    ap.add_argument("--package", default=PKG)
    ap.add_argument("--out", default="optc_dump", help="output directory (default ./optc_dump)")
    ap.add_argument("--image", action="store_true", help="also dump the full 71.6 MB engine image")
    ap.add_argument("--timeout", type=int, default=0, help="exit after N seconds (0 = until Ctrl-C)")
    args = ap.parse_args()

    os.makedirs(args.out, exist_ok=True)
    agent_src = open(os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                  "m4_frida_keydump.js"), encoding="utf-8").read()

    mgr = frida.get_device_manager()
    dev = mgr.get_device(args.device) if args.device else frida.get_usb_device(timeout=5)
    print(f"[*] device: {dev.name if hasattr(dev, 'name') else dev.id}")

    region_files = {}     # kind -> open file handle
    region_lock = threading.Lock()

    def on_message(message, data):
        if message.get("type") == "error":
            print(f"[!] agent error: {message.get('description')}")
            print(f"    {message.get('stack', '')[:400]}")
            return
        payload = message.get("payload") or {}
        if message.get("type") == "send" and payload.get("type") == "m4-region":
            kind = payload["kind"]
            with region_lock:
                f = region_files.get(kind)
                if f is None:
                    f = open(os.path.join(args.out, f"{kind}.bin"), "wb")
                    region_files[kind] = f
                f.write(data)
                f.flush()
            if payload["offset"] % (262144 * 40) == 0:
                print(f"    region {kind}: 0x{payload['offset']:x} ...")
        elif message.get("type") == "send":
            print(f"[msg] {json.dumps(payload)[:300]}")

    if args.attach:
        print(f"[*] attaching to {args.package} ...")
        session = dev.attach(args.package)
    else:
        print(f"[*] spawning {args.package} (suspend) ...")
        pid = dev.spawn([args.package])
        session = dev.attach(pid)

    script = session.create_script(agent_src)
    script.on("message", on_message)
    script.load()

    # frida >= 16 uses exports_sync; older releases expose .exports
    ex = getattr(script, "exports_sync", None) or script.exports

    if not args.attach:
        dev.resume(pid)
        print("[*] resumed — game starting; waiting for the 0x9d overlay install")

    stop = threading.Event()

    def saver():
        # periodically persist keydump.json so nothing is lost on crash
        while not stop.is_set():
            time.sleep(5)
            try:
                dump = ex.getdump()
                with open(os.path.join(args.out, "keydump.json"), "w") as f:
                    json.dump(dump, f, indent=1)
                for n in ("T1", "T2", "T3", "T4", "rounds"):
                    t = (dump.get("tables") or {}).get(n)
                    if t and t.get("hex"):
                        with open(os.path.join(args.out, f"{n}.bin"), "wb") as f:
                            f.write(bytes.fromhex(t["hex"]))
            except Exception as e:
                print(f"[!] periodic save failed: {e}")

    th = threading.Thread(target=saver, daemon=True)
    th.start()

    t0 = time.time()
    did_regions = False
    try:
        while True:
            time.sleep(1)
            try:
                st = ex.status()
            except Exception as e:
                print(f"[!] agent lost: {e}")
                break
            if not did_regions and st.get("armed"):
                print(f"[*] hooks armed (base={st['base']}) — "
                      f"keys={st['keys']} sig_records={st['sig_records']} opens={st['opens']}")
                try:
                    r = ex.dumpregion("strings")
                    print(f"[*] strings region: {r}")
                    if args.image:
                        print("[*] dumping full image (71.6 MB) — this takes a while ...")
                        r = ex.dumpregion("image")
                        print(f"[*] image region: {r}")
                except Exception as e:
                    print(f"[!] region dump failed: {e}")
                did_regions = True
            if st.get("keys") or st.get("sig_records"):
                print(f"[*] t+{int(time.time()-t0)}s  keys={st['keys']} "
                      f"sig_records={st['sig_records']}  opens={st['opens']}")
            if args.timeout and time.time() - t0 > args.timeout:
                print(f"[*] timeout {args.timeout}s reached")
                break
    except KeyboardInterrupt:
        print("\n[*] Ctrl-C — final save ...")

    stop.set()
    try:
        dump = ex.getdump()
        with open(os.path.join(args.out, "keydump.json"), "w") as f:
            json.dump(dump, f, indent=1)
        for n in ("T1", "T2", "T3", "T4", "rounds"):
            t = (dump.get("tables") or {}).get(n)
            if t and t.get("hex"):
                with open(os.path.join(args.out, f"{n}.bin"), "wb") as f:
                    f.write(bytes.fromhex(t["hex"]))
        print(f"[*] saved {args.out}/keydump.json")
        stars = [k for k in dump.get("keys", [])
                 if "DATA1" in (k.get("classification") or "")]
        if stars:
            print("\n===== data1.dat SIGNATURE KEY CAPTURED =====")
            for k in stars:
                print(f"  key32 = {k['key_hex']}")
                print(f"  sig36 = {k.get('sig36_hex')}  mode={k['mode']}  caller={k.get('caller')}")
            print("\nnext: python3 tools/m4_decrypt_data1.py "
                  f"--keydump {args.out}/keydump.json --t1 {args.out}/T1.bin --data1 data1.dat")
        else:
            print("[!] no DATA1-class key captured yet — play further into the "
                  "game (title screen / data download) and re-run")
    except Exception as e:
        print(f"[!] final save failed: {e}")
    finally:
        for f in region_files.values():
            f.close()
        session.detach()


if __name__ == "__main__":
    main()
