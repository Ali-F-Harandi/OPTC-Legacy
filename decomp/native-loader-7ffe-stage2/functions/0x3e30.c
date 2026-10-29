// rea decompile_all
// name: FUN_00003e30
// address: 0x3e30
// body: available
// range: 0x3e30-0x40bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00003e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int *param_5,long param_6)

{
  char cVar1;
  undefined1 auStack_448 [1031];
  char local_41;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  long local_28;
  int local_1c;
  undefined8 local_18;
  uint local_10;
  uint local_c;
  int local_8;
  char local_1;
  
  local_1 = '\x01';
  local_8 = 0;
  if (param_5 != (int *)0x0) {
    local_8 = *param_5;
  }
  local_10 = FUN_00005744(param_1,param_2);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    local_18 = FUN_000057a0(local_c,param_1,param_2);
    if (local_1 != '\0') {
      local_1 = FUN_000027f0(param_4);
    }
    while (local_1 != '\0') {
      local_40 = 0;
      if (local_1 != '\0') {
        local_41 = '\0';
        cVar1 = FUN_00004c60();
        if ((cVar1 == '\0') || (cVar1 = FUN_00004bf0(), cVar1 == '\0')) {
          local_31 = '\0';
        }
        else {
          local_31 = '\x01';
        }
        if (local_31 == '\0') {
          local_1 = FUN_00002ff4(local_18,param_3,param_4,&local_40,auStack_448,&local_41);
        }
        else {
          local_1 = FUN_00002fa8(local_18,param_3,param_4,&local_40,auStack_448,&local_41);
        }
        if (local_41 != '\x01') break;
      }
      if (param_6 != 0) {
        local_1c = local_8;
        local_28 = param_6 + (long)local_8 * 0x518;
        if (local_1 != '\0') {
          local_30 = local_40;
          local_1 = FUN_00007fe8(local_40,local_28,auStack_448);
        }
      }
      if (local_1 != '\0') {
        local_8 = local_8 + 1;
      }
    }
    if (local_1 != '\0') {
      local_1 = FUN_000027f0(param_4);
    }
    if (local_1 != '\x01') break;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = local_8;
  }
  return local_1;
}

