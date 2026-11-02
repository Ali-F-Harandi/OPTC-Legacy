// rea decompile_all
// name: FUN_00008e38
// address: 0x8e38
// body: available
// range: 0x8e38-0x8fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00008e38(undefined8 param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_4;
  
  if ((param_2 != (uint *)0x0) && (uVar2 = *param_2, uVar2 != 0)) {
    uVar5 = FUN_00008da4(param_1);
    uVar6 = FUN_0000d994(uVar5,uVar2);
    for (local_4 = param_2[(uVar6 & 0xffffffff) + 2]; local_4 != 0;
        local_4 = param_2[(ulong)uVar2 + (ulong)local_4 + 2]) {
      puVar1 = (uint *)(param_3 + (ulong)local_4 * 0x18);
      cVar3 = FUN_00008d50(puVar1);
      if (((cVar3 == '\x01') && (*puVar1 <= param_5)) &&
         (iVar4 = FUN_0000c554(param_4 + (ulong)*puVar1,param_1), iVar4 == 0)) {
        return puVar1;
      }
    }
  }
  return (uint *)0x0;
}

