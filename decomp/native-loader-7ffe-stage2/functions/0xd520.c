// rea decompile_all
// name: FUN_0000d520
// address: 0xd520
// body: available
// range: 0xd520-0xd7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0000d520(char *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  char local_2048 [4096];
  undefined1 auStack_1048 [4096];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_28;
  undefined1 local_27;
  long local_18;
  long local_10;
  char *local_8;
  
  local_28 = 0x2f;
  local_27 = 0;
  local_38 = 0x2e;
  local_37 = 0;
  local_48 = 0x2e;
  local_47 = 0x2e;
  local_46 = 0;
  local_2048[0] = '\0';
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    local_18 = FUN_0000c830(local_8,0x2f);
    local_10 = 0;
    if (local_18 == 0) {
      local_10 = FUN_0000c448(local_8);
    }
    else {
      local_10 = local_18 - (long)local_8;
    }
    if (local_10 != 0) {
      FUN_0000ca98(auStack_1048,local_8,local_10);
      auStack_1048[local_10] = 0;
      iVar1 = FUN_0000c554(auStack_1048,&local_38);
      if (iVar1 != 0) {
        iVar1 = FUN_0000c554(auStack_1048,&local_48);
        if (iVar1 == 0) {
          FUN_0000d4c4(local_2048);
        }
        else {
          FUN_0000cb1c(local_2048,&local_28);
          FUN_0000cb1c(local_2048,auStack_1048);
        }
      }
    }
    local_8 = local_8 + local_10;
    if (*local_8 == '\0') break;
  }
  if (local_2048[0] == '\0') {
    FUN_0000cb1c(local_2048,&local_28);
  }
  uVar2 = FUN_0000c448(local_2048);
  if (uVar2 <= param_3) {
    FUN_0000ca98(param_2,local_2048,param_3);
  }
  return uVar2 <= param_3;
}

