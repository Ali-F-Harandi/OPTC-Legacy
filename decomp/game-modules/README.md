# Game-side protector modules — decompiler output

Raw Ghidra 11.3.2 pseudocode (ARM64 `AARCH64:LE:64:v8A`) for the four
decrypted game-side modules of libgame.so's hidden stage-2 system. These are
the runtime drivers that boot the engine payload — including the module that
decrypts **0x9d** (the restored 71.6 MB engine `.text` overlay).

| Module | Functions | Role (see `notes/m2-game-consumer.md` + `notes/m3-9d-restore.md`) |
|---|---|---|
| `0x81` | 24 | game-side e0 twin — embedded module container (5 entries) |
| `0x8f` | 109 | device registry / APK finder — `/proc/self/maps` split table → `openat(<pkg>.apk)`; env-string deobfuscator `FUN_000091ec` |
| `0x96` | 203 | game-side e1 twin — ZIP reader (EOCD/CD walk, ×31 rolling-hash names, `read_zip_entry`) |
| `0x9b` | 148 | runtime driver of 0x9d — registry lookup, private codec (g = `0x129E7AF1`), patch installer; `FUN_00002910` is the 0x9d boot chain |

484 functions total. `FUN_*` names are auto-generated; the real names of the
engine functions live in the 0x9e restoration DB (80,005 recovered symbols,
`notes/m3-9d-restore.md` §5). Function names *inside* these four modules are
recoverable by cross-referencing the M2/M3 notes.

Per-function layout identical to `decomp/native-signer/`:
`functions/0x<addr>.c` + `decompile-index.json` (sha256 per function body and
of the decrypted module image it was produced from).
