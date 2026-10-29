// rea decompile_all
// name: FUN_000087c4
// address: 0x87c4
// body: available
// range: 0x87c4-0x8873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000087c4(long param_1,int param_2)

{
  int *piVar1;
  ulong local_18;
  int local_c;
  
  local_c = 0;
  local_18 = 0;
  do {
    if (*(ulong *)(param_1 + 0x38) <= local_18) {
      return (int *)0x0;
    }
    piVar1 = (int *)(*(long *)(param_1 + 0x30) + local_18 * 0x38);
    if (*piVar1 == 1) {
      if (local_c == param_2) {
        return piVar1;
      }
      local_c = local_c + 1;
    }
    local_18 = local_18 + 1;
  } while( true );
}

