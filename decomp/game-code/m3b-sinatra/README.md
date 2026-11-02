# M3b — the sinatra cipher family (true addresses, RTTI-verified)

Ghidra 11.3.2 pseudocode from the restored 0x9d engine image with
PLT stubs resolved as thunks (44,567 stubs — see `tools/m3b_plt_resolve.py`).
These are the **true** addresses (RTTI-verified); the 0x9e symbol DB's
addresses belong to a different build (see notes/m3b-plt-rtti-cipher.md §2).

Core files:
- `1ef3ae4_*` — sinatraCall (BQ15915BQ159ReadStream)
- `1ef4338` cipher block core · `1ef46d4`/`1ef4758` SD40SE seek/read
- `39d3800` — **the RC4 PRGA** · `39d3a30` — **the key expansion (custom AES + KSA)**
- `39d39f4` — keylen validator/dispatcher
