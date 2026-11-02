// rea decompile_all
// name: FUN_0000755c
// address: 0x755c
// body: available
// range: 0x755c-0x76bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_0000755c(long param_1,ulong param_2)

{
  long lVar1;
  ushort local_22;
  long local_20;
  ulong local_18;
  long local_10;
  long local_8;
  
  local_8 = 0;
  local_18 = 0;
  local_10 = param_1;
  do {
    if (param_2 <= local_18) {
      return local_8;
    }
    local_20 = local_10 + (ulong)*(uint *)(local_10 + 8);
    lVar1 = (local_10 + 0x10) - param_1;
    if (local_8 < lVar1) {
      local_8 = lVar1;
    }
    for (local_22 = 0; local_22 < *(ushort *)(local_10 + 2); local_22 = local_22 + 1) {
      lVar1 = (local_20 + 0x10) - param_1;
      if (local_8 < lVar1) {
        local_8 = lVar1;
      }
      if (*(int *)(local_20 + 0xc) == 0) break;
      local_20 = local_20 + (ulong)*(uint *)(local_20 + 0xc);
    }
    if (*(int *)(local_10 + 0xc) == 0) {
      return local_8;
    }
    local_10 = local_10 + (ulong)*(uint *)(local_10 + 0xc);
    local_18 = local_18 + 1;
  } while( true );
}

