// rea decompile_all
// name: FUN_00003d00
// address: 0x3d00
// body: available
// range: 0x3d00-0x3dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00003d00(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  for (local_4 = 0; local_4 < (int)uVar4; local_4 = local_4 + 1) {
    piVar1 = (int *)(lVar3 + (long)local_4 * 0x38);
    if ((*piVar1 == 1) && ((piVar1[1] & 1U) != 0)) {
      lVar2 = *(long *)(param_1 + 0x20) + *(long *)(piVar1 + 4);
      lVar5 = *(long *)(piVar1 + 10);
      uVar6 = FUN_0000dacc(lVar2,(long)param_2,0);
      uVar7 = FUN_0000dacc(lVar2 + lVar5,(long)param_2,1);
      FUN_00003c20(uVar6,uVar7);
    }
  }
  return 1;
}

