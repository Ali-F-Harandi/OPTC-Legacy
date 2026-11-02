// rea decompile_all
// name: FUN_000032a0
// address: 0x32a0
// body: available
// range: 0x32a0-0x34db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000032a0(long param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_c;
  int local_8;
  char local_1;
  
  local_1 = '\x01';
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  local_8 = 0;
  while ((local_8 < (int)uVar6 && (local_1 == '\x01'))) {
    piVar1 = (int *)(lVar5 + (long)local_8 * 0x38);
    if ((*piVar1 != 0) && (*piVar1 == 1)) {
      lVar9 = *(long *)(piVar1 + 4);
      lVar7 = *(long *)(piVar1 + 10);
      lVar8 = FUN_0000dacc(lVar4 + *(long *)(piVar1 + 4),(long)param_3,0);
      lVar7 = FUN_0000dacc(lVar4 + lVar9 + lVar7,(long)param_3,1);
      local_c = 0;
      if ((piVar1[1] & 1U) != 0) {
        local_c = 4;
      }
      if ((piVar1[1] & 2U) != 0) {
        local_c = local_c | 2;
      }
      if ((piVar1[1] & 4U) != 0) {
        local_c = local_c | 1;
      }
      if (param_2 != '\0') {
        local_c = local_c | 2;
      }
      if ((local_c != 3) &&
         (iVar2 = FUN_0001013c(0xe2,lVar8,lVar7 - lVar8,local_c,0,0,0), iVar2 != 0)) {
        uVar3 = FUN_0000573c();
        local_1 = FUN_00001eb0(0,0,uVar3,1,0x8b,1,1,lVar7 - lVar8 & 0xffffffff,0,0);
      }
    }
    local_8 = local_8 + 1;
  }
  return local_1;
}

