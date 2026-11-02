// rea decompile_all
// name: FUN_0000667c
// address: 0x667c
// body: available
// range: 0x667c-0x67ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_0000667c(long param_1,long param_2,char *param_3,int *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_1;
  
  local_1 = '\0';
  if (param_4 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_4;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  local_10 = (ulong)local_8;
  while( true ) {
    if ((*(ulong *)(param_1 + 0x60) <= local_10) ||
       (plVar1 = (long *)(lVar2 + local_10 * 0x10), *plVar1 == 0)) goto LAB_0000674c;
    if (*plVar1 == param_2) break;
    local_10 = local_10 + 1;
  }
  local_1 = '\x01';
  local_8 = local_8 + 1;
LAB_0000674c:
  if (param_3 != (char *)0x0) {
    *param_3 = local_1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_8;
  }
  if (local_1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + local_10 * 0x10;
  }
  return lVar2;
}

