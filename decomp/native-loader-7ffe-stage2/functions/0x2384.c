// rea decompile_all
// name: FUN_00002384
// address: 0x2384
// body: available
// range: 0x2384-0x2657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00002384(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 auStack_490 [1024];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [20];
  undefined4 local_54;
  undefined8 local_50;
  char local_41;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  long local_18;
  undefined1 *local_10;
  char local_1;
  
  local_1 = '\x01';
  local_50 = 0;
  local_54 = 0;
  if (param_1 != 0) {
    local_10 = auStack_490;
    FUN_0000ca14(local_10,param_1);
    local_20 = (undefined1 *)FUN_0000c8c0(local_10,0x2f);
    if (local_20 == (undefined1 *)0x0) {
      local_10 = (undefined1 *)0x0;
    }
    else {
      *local_20 = 0;
    }
    local_1 = FUN_00001f64(local_10,param_2,&local_50,&local_54);
  }
  if (local_1 != '\0') {
    local_28 = auStack_68;
    if (local_1 != '\0') {
      local_1 = FUN_0000b428(local_28);
    }
    local_18 = 0;
    if (local_1 != '\0') {
      local_78 = 0x85f4d59d;
      local_74 = 0xdd5de5b5;
      local_70 = 0x65f42d6d;
      local_6c = 0xad55f5;
      local_30 = FUN_0000dafc(&local_78,0x10);
      local_18 = FUN_0000b570(local_28,local_30);
      FUN_0000dbc0(local_30);
    }
    if (local_1 != '\0') {
      if (local_18 == 0) {
        local_1 = FUN_00002178(param_2,&local_50,&local_54);
      }
      else {
        local_38 = auStack_90;
        local_40 = FUN_0000c448(local_18);
        if (local_1 != '\0') {
          local_1 = FUN_0000ddb0(local_38,local_18,local_40,0x3a);
        }
        while ((local_1 != '\0' && (lVar1 = FUN_0000de74(local_38,auStack_490,0x400), lVar1 != 0)))
        {
          local_41 = FUN_00002074(auStack_490);
          if (local_41 == '\0') {
            local_1 = FUN_00001f64(auStack_490,param_2,&local_50,&local_54);
          }
          else {
            local_1 = FUN_00002178(param_2,&local_50,&local_54);
          }
        }
        FUN_0000de18(local_38);
      }
    }
    FUN_0000b514(local_28);
  }
  if (local_1 != '\0') {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = local_50;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_54;
    }
  }
  return local_1;
}

