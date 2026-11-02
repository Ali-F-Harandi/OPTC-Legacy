// rea decompile_all
// name: FUN_00002658
// address: 0x2658
// body: available
// range: 0x2658-0x2797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00002658(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  ulong local_18;
  long local_10;
  char local_1;
  
  local_1 = 1;
  if (param_2 == (long *)0x0) {
    local_1 = '\x01';
  }
  else {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    local_1 = FUN_00002384(param_1,0,&local_18,&local_1c);
    if ((local_1 != '\0') && (local_10 = FUN_00009f18(local_18), local_10 == 0)) {
      uVar1 = FUN_0000573c();
      local_1 = FUN_00001eb0(0,0,uVar1,0x20,0x16f,1,1,local_18 & 0xffffffff,0,0);
    }
    if (local_1 != '\0') {
      local_1 = FUN_00002384(param_1,local_10,&local_18,&local_1c);
    }
    if (local_1 != '\0') {
      *param_2 = local_10;
      param_2[1] = local_18;
      *(undefined4 *)(param_2 + 2) = local_1c;
      *(undefined4 *)((long)param_2 + 0x14) = 0;
      param_2[3] = 0;
    }
  }
  return local_1;
}

