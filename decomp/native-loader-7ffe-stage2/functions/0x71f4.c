// rea decompile_all
// name: FUN_000071f4
// address: 0x71f4
// body: available
// range: 0x71f4-0x7407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000071f4(long param_1)

{
  long lVar1;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  char local_69 [24];
  char local_51 [9];
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined4 local_28;
  char local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_21 = '\x01';
  local_8 = 0;
  local_10 = 0;
  local_51[0] = '\0';
  local_28 = 4;
  local_30 = FUN_000067ac(param_1,4,local_51,0);
  if (local_51[0] != '\0') {
    local_8 = FUN_00008278(param_1,local_30);
    builtin_strncpy(local_69 + 1,".hash",6);
    local_38 = FUN_0000653c(param_1,local_69 + 1,0);
    if (local_38 != 0) {
      local_10 = *(undefined8 *)(local_38 + 0x20);
    }
  }
  if (local_21 != '\0') {
    *(undefined8 *)(param_1 + 0x68) = local_8;
    *(undefined8 *)(param_1 + 0x70) = local_10;
    local_18 = 0;
    local_20 = 0;
    if (local_21 != '\0') {
      local_69[0] = '\0';
      local_3c = 0x6ffffef5;
      local_48 = FUN_000067ac(param_1,0x6ffffef5,local_69,0);
      if (local_69[0] != '\0') {
        local_18 = FUN_00008278(param_1,local_48);
        local_80 = 0x2e;
        local_7f = 0x67;
        local_7e = 0x6e;
        local_7d = 0x75;
        local_7c = 0x2e;
        local_7b = 0x68;
        local_7a = 0x61;
        local_79 = 0x73;
        local_78 = 0x68;
        local_77 = 0;
        lVar1 = FUN_0000653c(param_1,&local_80,0);
        if (lVar1 != 0) {
          local_20 = *(undefined8 *)(lVar1 + 0x20);
        }
      }
    }
    if (local_21 != '\0') {
      *(undefined8 *)(param_1 + 0x78) = local_18;
      *(undefined8 *)(param_1 + 0x80) = local_20;
    }
  }
  return local_21;
}

