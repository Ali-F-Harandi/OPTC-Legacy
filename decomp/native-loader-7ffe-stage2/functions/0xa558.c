// rea decompile_all
// name: FUN_0000a558
// address: 0xa558
// body: available
// range: 0xa558-0xa7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000a558(int param_1,undefined1 *param_2,long *param_3,long param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  long local_1050;
  undefined1 *local_1040;
  undefined1 auStack_1028 [4096];
  long local_28;
  undefined8 local_20;
  long local_18;
  long local_10;
  undefined1 local_2;
  char local_1;
  
  local_1 = '\x01';
  local_20 = 0;
  local_20 = FUN_0001013c(0x3e,(long)param_1,0,0,0,0,0);
  local_1050 = param_4;
  local_1040 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    local_1040 = auStack_1028;
    local_1050 = 0x1000;
  }
  local_2 = 0;
  local_10 = 0;
  local_18 = 0;
  do {
    do {
      if (local_1 == '\0') goto LAB_0000a75c;
      local_28 = FUN_0001013c(0x3f,(long)param_1,local_1040 + local_18,local_1050 - local_18,0,0,0);
      if (local_28 < 0) {
        uVar1 = FUN_0000b6d4();
        local_1 = FUN_00001eb0(0,0,uVar1,2,0x114,1,1,0,0,0);
        goto LAB_0000a75c;
      }
      if (local_28 == 0) goto LAB_0000a75c;
    } while (local_28 < 1);
    local_18 = local_18 + local_28;
    local_10 = local_10 + local_28;
  } while (local_1050 != local_18);
  local_2 = 1;
LAB_0000a75c:
  if (param_3 != (long *)0x0) {
    *param_3 = local_10;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = local_2;
  }
  return local_1;
}

