// rea decompile_all
// name: FUN_00005404
// address: 0x5404
// body: available
// range: 0x5404-0x5573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_00005404(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long local_10;
  long *local_8;
  
  uVar1 = param_2[1] & 0xffffffff;
  uVar2 = (ulong)param_2[1] >> 0x20;
  lVar3 = param_2[2];
  local_8 = (long *)0x0;
  if (uVar2 != 0) {
    local_8 = (long *)(param_3 + uVar2 * 8);
  }
  local_10 = 0;
  if (uVar1 == 0x400) {
    local_10 = *local_8;
  }
  else if (uVar1 < 0x401) {
    if (uVar1 == 0x101) {
      local_10 = *local_8 + lVar3;
    }
    else if (uVar1 == 0x104) {
      local_10 = (*local_8 - *param_2) + lVar3;
    }
  }
  else if (uVar1 == 0x402) {
    local_10 = *local_8 + lVar3;
  }
  else if (uVar1 < 0x402) {
    local_10 = *local_8 + lVar3;
  }
  else if (uVar1 == 0x403) {
    local_10 = param_1 + lVar3;
  }
  return local_10;
}

