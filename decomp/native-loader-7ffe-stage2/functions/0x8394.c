// rea decompile_all
// name: FUN_00008394
// address: 0x8394
// body: available
// range: 0x8394-0x84d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00008394(char param_1,long param_2,int *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_10;
  
  iVar1 = *param_3;
  if (param_1 == '\0') {
    lVar2 = *(long *)(param_2 + 0x98);
    uVar3 = *(ulong *)(param_2 + 0xa0);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x88);
    uVar3 = *(ulong *)(param_2 + 0x90);
  }
  for (local_10 = 0; local_10 < uVar3; local_10 = local_10 + 1) {
    uVar4 = *(ulong *)(lVar2 + local_10 * 0x18 + 8) & 0xffffffff;
    if (param_4 == 0x3e) {
      if (uVar4 == 8) {
        iVar1 = iVar1 + 1;
      }
    }
    else if ((param_4 == 0xb7) && (uVar4 == 0x403)) {
      iVar1 = iVar1 + 1;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return 1;
}

