// rea decompile_all
// name: FUN_0000a814
// address: 0xa814
// body: available
// range: 0xa814-0xaa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000a814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  char local_19;
  ulong local_18;
  long local_10;
  int local_8;
  char local_1;
  
  if (param_1 == 0) {
    local_1 = '\0';
  }
  else {
    local_1 = '\x01';
    local_8 = 0xffffffff;
    local_38 = param_3;
    local_30 = param_2;
    local_28 = param_1;
    local_8 = FUN_000101d8(param_2,0);
    if (local_8 < 0) {
      uVar1 = FUN_0000b6d4();
      local_1 = FUN_00001eb0(0,0,uVar1,2,0x15b,1,2,-local_8,0,0);
    }
    local_10 = 0;
    local_18 = 0;
    while (local_1 != '\0') {
      if (local_1 != '\0') {
        local_18 = FUN_0000a7d4(local_38);
      }
      if ((local_1 != '\0') && (local_10 = FUN_00009f18(local_18), local_10 == 0)) {
        uVar1 = FUN_0000b6d4();
        piVar2 = (int *)FUN_00000a34();
        if (*piVar2 == 0xc) {
          uVar3 = 5;
        }
        else {
          uVar3 = 1;
        }
        local_1 = FUN_00001eb0(0,0,uVar1,2,0x17b,uVar3,3,local_18 & 0xffffffff,0,0);
      }
      local_19 = '\0';
      if (local_1 != '\0') {
        local_1 = FUN_0000a558(local_8,local_10,&local_38,local_18,&local_19);
      }
      if (local_1 != '\0') {
        if (local_19 != '\x01') break;
        if (local_10 != 0) {
          FUN_00009f8c(local_10,local_18);
        }
        local_10 = 0;
        local_18 = 0;
      }
    }
    if (local_1 != '\0') {
      *(long *)(local_28 + 8) = local_10;
      *(undefined8 *)(local_28 + 0x10) = local_38;
      *(ulong *)(local_28 + 0x18) = local_18;
      *(undefined8 *)(local_28 + 0x20) = 0;
    }
    if ((local_1 != '\x01') && (local_10 != 0)) {
      FUN_00009f8c(local_10,local_18);
    }
    if (-1 < local_8) {
      FUN_0001013c(0x39,(long)local_8,0,0,0,0,0);
    }
  }
  return local_1;
}

