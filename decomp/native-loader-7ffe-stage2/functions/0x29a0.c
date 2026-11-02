// rea decompile_all
// name: FUN_000029a0
// address: 0x29a0
// body: available
// range: 0x29a0-0x2d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000029a0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                 char param_5)

{
  int iVar1;
  undefined1 auStack_8a0 [32];
  undefined1 auStack_880 [1024];
  undefined8 local_480 [134];
  char local_49;
  int *local_48;
  uint local_3c;
  char *local_38;
  int local_2c;
  undefined8 local_28;
  char *local_20;
  char *local_18;
  undefined8 *local_10;
  int local_8;
  char local_4;
  char local_3;
  undefined1 local_2;
  char local_1;
  
  local_1 = 1;
  local_2 = 0;
  local_1 = FUN_0000adf4(param_1,auStack_880,0x400);
  if (local_1 != '\0') {
    local_1 = FUN_0000ad48(param_2);
  }
  local_3 = '\0';
  if (local_1 != '\0') {
    local_3 = FUN_00003128();
  }
LAB_00002ccc:
  do {
    do {
      if (local_1 == '\0') goto LAB_00002cd8;
      local_10 = local_480;
      if (local_1 != '\0') {
        local_49 = '\0';
        local_1 = FUN_0000a02c(&local_49,local_10,param_2);
        if (local_49 != '\0') goto LAB_00002cd8;
      }
    } while ((((local_1 != '\0') && (local_10[2] != 0)) ||
             ((local_1 != '\0' && ((*(uint *)(local_10 + 3) & 4) == 0)))) ||
            ((local_1 != '\0' &&
             (iVar1 = FUN_0000c554((long)local_10 + 0x2c,auStack_880), iVar1 != 0))));
    if ((local_1 != '\0') && (local_3 != '\x01')) {
      local_4 = '\0';
      if ((*(uint *)(local_10 + 3) & 1) == 0) {
        local_20 = (char *)*local_10;
        local_18 = local_20;
        if ((((*local_20 == '\x7f') && (local_20[1] == 'E')) && (local_20[2] == 'L')) &&
           (local_20[3] == 'F')) {
          if (param_5 == '\0') {
            local_38 = local_20 + *(long *)(local_20 + 0x20);
            local_3c = (uint)*(ushort *)(local_20 + 0x38);
            for (local_8 = 0; local_8 < (int)local_3c; local_8 = local_8 + 1) {
              local_48 = (int *)(local_38 + (long)local_8 * 0x38);
              if (*local_48 == 1) {
                local_4 = (local_48[1] & 1U) == 0;
                break;
              }
            }
          }
          else {
            local_28 = *local_10;
            local_2c = 0;
            local_2c = FUN_00004c0c(local_28,auStack_8a0);
            if (local_2c != 0) {
              local_4 = '\x01';
            }
          }
        }
      }
      else {
        local_4 = '\x01';
      }
      if (local_4 != '\x01') goto LAB_00002ccc;
    }
    if (local_1 != '\0') {
      local_2 = 1;
      if (param_3 != 0) {
        FUN_0000c338(param_3,local_10,0x430);
      }
LAB_00002cd8:
      if (local_1 != '\0') {
        local_1 = FUN_0000ad48(param_2);
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = local_2;
      }
      return local_1;
    }
  } while( true );
}

