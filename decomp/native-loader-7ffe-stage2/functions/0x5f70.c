// rea decompile_all
// name: FUN_00005f70
// address: 0x5f70
// body: available
// range: 0x5f70-0x607b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00005f70(char param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  if (param_1 == '\0') {
    lVar3 = *(long *)(param_2 + 0x98);
    iVar2 = (int)*(undefined8 *)(param_2 + 0xa0);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x88);
    iVar2 = (int)*(undefined8 *)(param_2 + 0x90);
  }
  for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
    lVar1 = lVar3 + (long)local_8 * 0x18;
    if ((*(ulong *)(lVar1 + 8) >> 0x20 != 0) &&
       (uVar4 = FUN_000058bc(lVar1,local_8,*(ulong *)(param_2 + 0xb0) & 0xffffffff), local_4 < uVar4
       )) {
      local_4 = (uint)uVar4;
    }
  }
  return local_4;
}

