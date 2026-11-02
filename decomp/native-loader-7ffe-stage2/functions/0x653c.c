// rea decompile_all
// name: FUN_0000653c
// address: 0x653c
// body: available
// range: 0x653c-0x667b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_0000653c(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_18;
  uint *local_10;
  undefined1 local_1;
  
  local_1 = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    local_10 = (uint *)0x0;
  }
  else {
    uVar4 = param_1[9];
    lVar5 = param_1[8];
    lVar6 = *(long *)(lVar5 + param_1[10] * 0x40 + 0x18);
    local_10 = (uint *)0x0;
    for (local_18 = 0; local_18 < uVar4; local_18 = local_18 + 1) {
      puVar1 = (uint *)(lVar5 + local_18 * 0x40);
      iVar2 = FUN_0000c554(param_2,lVar3 + lVar6 + (ulong)*puVar1);
      if (iVar2 == 0) {
        local_1 = 1;
        local_10 = puVar1;
        break;
      }
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = local_1;
    }
  }
  return local_10;
}

