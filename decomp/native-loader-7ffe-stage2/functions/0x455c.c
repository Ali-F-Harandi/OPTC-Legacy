// rea decompile_all
// name: FUN_0000455c
// address: 0x455c
// body: available
// range: 0x455c-0x46c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0000455c(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int local_c;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar2 = (int)*(undefined8 *)(param_1 + 0xb0);
    if ((lVar4 != 0) && (iVar2 != 0)) {
      lVar5 = *(long *)(param_1 + 0xb8);
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      if (lVar5 != 0) {
        for (local_c = 0; local_c < iVar2; local_c = local_c + 1) {
          piVar1 = (int *)(lVar4 + (long)local_c * 0x18);
          if (((*piVar1 != 0) && (lVar7 = FUN_00009edc(*piVar1,lVar5,uVar6), lVar7 != 0)) &&
             (iVar3 = FUN_0000c554(param_2,lVar7), iVar3 == 0)) {
            if (param_3 != (int *)0x0) {
              *param_3 = local_c;
              return piVar1;
            }
            return piVar1;
          }
        }
      }
    }
  }
  return (int *)0x0;
}

