// rea decompile_all
// name: FUN_0000f2ac
// address: 0xf2ac
// body: available
// range: 0xf2ac-0xf43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000f2ac(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  uint local_24;
  char local_1;
  
  local_1 = '\x01';
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  iVar4 = *param_3;
  local_24 = 0;
  uVar5 = param_3[1];
  local_28 = 0;
  while( true ) {
    if (uVar5 <= local_28) {
      return local_1;
    }
    piVar1 = (int *)((long)param_3 + (ulong)local_28 * 0x10 + (ulong)uVar2);
    iVar6 = piVar1[2];
    if (local_1 != '\0') {
      local_1 = FUN_0000f444(param_1,param_2 + (ulong)(uint)(*piVar1 + iVar4),piVar1[1],
                             (long)param_3 + (ulong)local_24 + (ulong)uVar3,iVar6);
    }
    local_24 = local_24 + iVar6;
    if (local_1 != '\x01') break;
    local_28 = local_28 + 1;
  }
  return local_1;
}

