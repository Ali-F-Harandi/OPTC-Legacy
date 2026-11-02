// rea decompile_all
// name: FUN_000014e0
// address: 0x14e0
// body: available
// range: 0x14e0-0x165b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000014e0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7)

{
  undefined1 auStack_550 [1304];
  undefined8 local_38;
  long local_30;
  undefined1 *local_28;
  ulong local_20;
  long local_18;
  undefined8 local_10;
  char local_1;
  
  local_1 = 1;
  if (*(int *)(param_2 + 0x14) == 0) {
    local_1 = '\x01';
  }
  else {
    local_30 = 0;
    local_38 = 0;
    local_18 = param_3 + (ulong)*(uint *)(param_2 + 0x10);
    local_20 = (ulong)*(uint *)(param_2 + 0x14);
    local_10 = param_1;
    local_1 = FUN_0000e344(DAT_00026918,local_18,local_20,&local_30,&local_38);
    local_28 = auStack_550;
    if (local_1 != '\0') {
      local_1 = FUN_00001788(local_30,local_38,local_28,param_5,param_6);
    }
    if (local_1 != '\0') {
      local_1 = FUN_0000375c(local_10,local_28,param_7);
    }
    if (local_30 != 0) {
      FUN_00009f8c(local_30,local_38);
    }
  }
  return local_1;
}

