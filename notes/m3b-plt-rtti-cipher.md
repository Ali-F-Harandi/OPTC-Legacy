# M3b — Static PLT resolution, true symbol map (RTTI), and the sinatra cipher family

> Status: **PLT 100 % resolved statically; the 0x9e symbol DB proven mis-mapped
> (RTTI is the ground truth); the sinatra cipher family reversed: custom-RC4
> (custom-permutation-seeded KSA) + a custom-S-box AES-192-style key schedule;
> the game's embedded key material located.** data1.dat's exact volume key is
> the remaining M3c work item — now sharply scoped.
> Tools: `tools/m3b_plt_resolve.py`, `tools/m3b_rtti.py`,
> `tools/ghidra-m3b/*.java` · Evidence: `evidence/m3b-plt.json`

## 1. The overlay insight → full static PLT resolution

The restored 0x9d image is an **overlay** over the *shipped* `libgame.so`:
its zero spans coincide with regions the shipped file already carries. In
particular the whole **PLT `[0x3F0B230, 0x3FB93C0)` is present, with real
stubs, in the shipped .so** (PT_LOAD1, vaddr == file offset):

```text
.plt stub (16 B):  adrp x16, <got page> ; ldr x17,[x16,#off] ; add x16,x16,#off] ; br x17
```

Decoding every stub gives **stub → GOT slot**; the patch's 289,412 relocs give
**GOT slot → value** (`0x403` rebase addends for the game's own preemptible
functions, `0x402` for the 425 libc/Android imports); `symbols.json` names the
targets:

| | |
|---|---|
| stubs decoded | **44,567** (2 bad = the two halves of PLT0) |
| → game's own functions | 44,073 (thunks created in Ghidra) |
| → imports (malloc, `__strlen_chk`, strtoull, longjmp, gl*, …) | 424 |
| unresolved GOT slots | 70 (only 64 ever called) |
| `bl`-into-PLT sites in .text | **750,047** calls, 38,477 distinct targets |

Top of the call histogram: `0x3f0b310` (151,171 calls — the out-of-line
`operator delete`-family stub), `0x3f0b2e0` (40,255 — `operator new`),
`0x3f0b290` (36,482 — `__strlen_chk`), `strtoull` (15,122), …

Why a 44.5 K-stub PLT for 425 imports: the engine's **80,005 exported
(preemptible) functions** are also called through PLT (default visibility ⇒
interposable), each backed by a `0x403`-relocated GOT slot. The previous
"runtime-built from 0xb2's 272 records" theory (M3 note) is corrected: 0xb2's
273 heap thunks are the *game→protector service array* (register-saving,
dispatcher-returns-target lazy-binding), unrelated to the .plt.

Reproduce: `python3 tools/m3b_plt_resolve.py` → `plt.tsv`
(`PLT <stub> <kind> <target> <name>`).

## 2. Correction: the 0x9e symbol DB does NOT match the restored .text

Decompiling "known" symbols produced wrong bodies (a `…sinatraCall` symbol
whose body plays `se_tap_ok.ogg` and traps; a `…seek` symbol that lays out
UI). Ground truth from **RTTI** (reloc-exact, cannot lie):

```text
typeinfo-name str  ←(0x403 addend)←  typeinfo+8
typeinfo object    ←(0x403 addend)←  vtable+8
vtable methods     —(0x403 addends)→  exact function addresses
```

Examples of mismatches: the symbol `BQ1599BisqueKey(char const*)` @0x3500dec
actually constructs **`MstCharacterGroupModel`** (its vtable's typeinfo says
so); the symbol `BQ15916StreamDecoder::seek` @0x2b74d14 is
**`Quest::ComboCount`** UI code. The 0x9e restoration DB was built from a
*different build/layout* of libgame.so — its 80,005 name↔address pairs are
usable as a *name pool* only. `tools/m3b_rtti.py` walks the true chain.

True addresses of the NTY machinery (all verified via typeinfo):

| class | vtable | methods |
|---|---|---|
| `Data::BQ1599BisqueKey` | 0x3fd6b38 | 0x1cf2214, 0x1cf2258 |
| `Data::BQ15921AbstractStreamDecoder` | 0x3fe5038 | 0x1ef4488, 0x1ef4334(∅), **0x1ef41e8 seek**, **0x1ef424c read** |
| `Data::BQ15916StreamDecoder159` | 0x3fe4fd0 | + unique 0x1ef415c, 0x1ef4320 |
| `Data::BQ15916StreamDecoder144` | 0x3fe5070 | + unique 0x1ef4514, 0x1ef45a0 |
| `Data::BQ15916StreamDecoder40SE` | 0x3fe50c0 | 0x1ef45b4, 0x1ef4644, **0x1ef46d4 seek**, **0x1ef4758 read** |
| `Data::BQ15915BQ159ReadStream` | 0x3fe4e30 | **sinatraCall @0x1ef3ae4** |
| `Data::BQ1597Decoder` | 0x3fe5c08 | 0x1f1cfa0, 0x1f1d02c, 0x1f1d0a8 (buffered read) |
| `Data::NtyReader` | 0x414a4e8 | 0x39dd7ec, 0x39dd9c4 |
| `NtyReader::NtyObservFDS` | 0x414a6a8 / 0x414a760 | 0x39e02cc…0x39e092c |

## 3. The sinatra cipher family (fully reversed)

### 3.1 The stream cipher = RC4 with a custom initial permutation

`BQ15916StreamDecoder40S::read` (0x1ef4758) → **RC4 PRGA @0x39d3800**
(ICF-aliased in PLT as `ectorIP25MultiQuest…`):

```text
state (in the sinatra-wrapped Stream object, decoder+0x18):
  +0x000  S[256]        +0x100 i        +0x101 j
  +0x108  → pristine S-box copy (state+0x110)

first use (i == 0xFF sentinel):  S ← *key_ptr ; i = j = 0
per byte:  i++; j += S[i]; swap(S[i],S[j]); out = S[(S[i]+S[j]) & 0xFF] ^ in
```

Standard PRGA — but the **KSA seeds S with a custom 256-byte permutation**
(image table @0x14f7375, verified a true permutation), not the identity:

```text
S = table@0x14f7375 .copy()
j = 0
for i in 0..255:  j = (j + S[i] + key[i mod keylen]) & 0xFF;  swap(S[i], S[j])
```

`SD40SE::seek` (0x1ef46d4) reframes at 255-byte boundaries
(`(pos/0xFF)*0xFF`) and resets the state (`itionE10ARENA_TEAM` = re-seed) —
the container is consumed in 255-byte frames.

### 3.2 The key object = custom-AES schedule + RC4 state

`BQ1599BisqueKey` (0x38 B: vtable + 6 qwords; qword[1] → holder) is built by
the key-expansion dispatcher **0x39d39f4 → PLT 0x3fa2710 → 0x39d3a30**:

```text
validate keylen ∈ {4, 8, 16, 24, 32}        (bitmask 0xab over (len-4)ror2)
rounds = table@0x1464760[len>>2…]            (24 B → 12 rounds = AES-192 shape)
expand:  W[i] = W[i-Nk] ^ ( i%Nk==0 ? RotWord∘SubWord(W[i-1]) ^ Rcon
                             : (Nk>6 && i%Nk==4) ? SubWord(W[i-1]) : W[i-1] )
  SubWord = T1∘T2  (double table substitution — NOT the AES S-box)
  Rcon    = T1[T3[adj + T1[T4[r]]]]  (adj = 0x19 / −0xE6)
  tables: T1@0x14f7375, T2@0x14f7475, T3@0x14f7575, T4@0x14f7675
holder = {flags, aes_schedule(208 B), rc4_state(0x220 B), …}
mode 0xE0000000 (bit 29) → also run the custom-seeded RC4 KSA over the key
```

A second branch (mode bit 28) builds a 0x2090-B table-backed variant
(table @0x14f7875, 0x48-B XOR mix) — unused in the 0xE0000000 path.

### 3.3 Where the keys come from

* a global descriptor (@0x4186980, .data.rel.ro) binds:
  **`"16.2.1"` · a 24-char key · sizes {24, 24, 8, 1224} · BSS storage
  {0x4243cf0 → key ptr, 0x4243cf8 → key len}** — i.e. the default key is a
  **24-byte string** (AES-192-shaped schedule, KSA-seeded RC4);
* embedded key strings found in .rodata (24 chars each):

  ```text
  vuyWQSjlknpJF54ib36txVse   (0x1329f11)
  QZbidYS5LulOhQfbXJPVR5FG   (0x1459d58)
  JGcu2DjohFm84viZHe1Et5Qt   (0x1377000)
  DFGRomanYuki-W9            (0x139653d, 15 chars — different role)
  ```

* runtime keys: the session manager (`0x1ce3bcc`–family, strings
  `/users/register`, `/users/sessions`, `udid`, `idfa`, `gdpr_*`) rebuilds
  `BQ1599BisqueKey` from the **kv-store entry `"bq159_key"`**
  (server-issued at registration, store version tag `v15.0.0_sent_store_info`).

### 3.4 Verification attempts against data1.dat (all negative so far)

`KSA(T1, key)` + PRGA with each embedded key (and the schedule-as-key /
schedule-as-S variants, T2-seeded KSA, 4-byte header skip) leaves entropy at
7.90–7.96 — none is data1.dat's key. Combined with M2b's statistics
(bits 0–1 of every u16 biased, frequent multiples of 0x100), the working
conclusion: **the 7ffe volume is consumed by a different decoder of the
family** (candidate: the 32-byte-block `BQ15915BQ159ReadStream` /
`BQ1597Decoder` path whose per-block transform lives behind one more vtable
indirection at `+0x28`), or with the server-issued `bq159_key`.

## 4. M3c work items (sharply scoped)

1. decompile `BQ15915BQ159ReadStream`'s `vmethod+0x28` (the per-block
   transform behind sinatraCall @0x1ef3ae4) and the `BQ1597Decoder` chain;
2. locate the *caller* of `e1::read_zip_entry` for `assets/7ffe/data1.dat`
   (the NtyPool volume-open) and read off the exact key argument;
3. decrypt data1.dat (M2b's bits-0/1 known-plaintext surface is the oracle);
4. rebase the 80 K-name pool onto true addresses via RTTI anchors and
   re-generate the Ghidra symbol set for mass decompilation.
