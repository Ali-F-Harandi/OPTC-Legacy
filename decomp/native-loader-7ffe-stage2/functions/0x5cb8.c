// rea decompile_all
// name: FUN_00005cb8
// address: 0x5cb8
// body: available
// range: 0x5cb8-0x5f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00005ea4) */
/* WARNING: Removing unreachable block (ram,0x00005eb8) */

char FUN_00005cb8(char param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined1 auStack_a8 [55];
  char local_71;
  undefined8 *local_70;
  undefined1 local_61;
  long local_60;
  uint local_54;
  uint *local_50;
  undefined1 local_41;
  long local_40;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  char local_1;
  
  local_1 = '\x01';
  if (param_1 == '\0') {
    local_18 = *(undefined8 *)(param_2 + 0x98);
    local_1c = (undefined4)*(undefined8 *)(param_2 + 0xa0);
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 0x88);
    local_1c = (undefined4)*(undefined8 *)(param_2 + 0x90);
  }
  local_1d = 0;
  local_28 = auStack_a8;
  FUN_0000c214(local_28,0,0x30);
  local_2c = 0;
  local_30 = local_1c;
  if (local_1 != '\0') {
    local_1 = FUN_00005c34(local_28,param_2,param_3,param_4,local_18,local_1c,0,local_1c);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00005a44(local_28);
  }
  if (local_1 != '\0') {
    local_38 = *(long *)(param_2 + 0xa8);
    local_40 = *(long *)(param_2 + 0xb8);
    for (local_8 = 0; local_8 < param_5; local_8 = local_8 + 1) {
      local_41 = (*(uint *)(param_4 + (ulong)local_8 * 4) & 1) != 0;
      if (((bool)local_41) &&
         (local_71 = (*(uint *)(param_4 + (ulong)local_8 * 4) & 2) != 0, !(bool)local_71)) {
        local_50 = (uint *)(local_38 + (ulong)local_8 * 0x18);
        local_54 = *local_50;
        local_60 = local_40 + (ulong)local_54;
        local_10 = 0;
        local_61 = 0;
        if (!(bool)local_71) {
          local_10 = FUN_0000639c(local_60,&local_71);
        }
        if (local_71 != '\0') {
          *(uint *)(param_4 + (ulong)local_8 * 4) = *(uint *)(param_4 + (ulong)local_8 * 4) | 2;
          local_70 = (undefined8 *)(param_3 + (ulong)local_8 * 8);
          *local_70 = local_10;
        }
      }
    }
  }
  return local_1;
}

