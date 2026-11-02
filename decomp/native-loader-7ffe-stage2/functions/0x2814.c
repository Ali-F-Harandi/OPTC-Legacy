// rea decompile_all
// name: FUN_00002814
// address: 0x2814
// body: available
// range: 0x2814-0x299f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00002814(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 local_448 [1024];
  undefined1 local_48;
  undefined1 local_47;
  long local_38;
  long local_30;
  int local_24;
  long local_20;
  undefined1 local_15;
  int local_14;
  long local_10;
  undefined1 local_1;
  
  local_15 = 1;
  local_1 = 0;
  local_48 = 0x2f;
  local_47 = 0;
  local_20 = *param_2;
  local_10 = param_2[3];
  local_14 = *(int *)((long)param_2 + 0x14);
  local_24 = (int)param_2[2];
  do {
    if (local_24 <= local_14) goto LAB_00002950;
    local_30 = local_20 + local_10;
    local_38 = FUN_0000c448(local_30);
    local_10 = local_38 + local_10 + 1;
    local_14 = local_14 + 1;
    local_448[0] = 0;
    FUN_0000cb1c(local_448,local_30);
    FUN_0000cb1c(local_448,&local_48);
    FUN_0000cb1c(local_448,param_1);
    cVar1 = FUN_0000b68c(local_448);
  } while (cVar1 == '\0');
  local_1 = 1;
  FUN_0000ca14(param_3,local_448);
LAB_00002950:
  *(int *)((long)param_2 + 0x14) = local_14;
  param_2[3] = local_10;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = local_1;
  }
  return local_15;
}

