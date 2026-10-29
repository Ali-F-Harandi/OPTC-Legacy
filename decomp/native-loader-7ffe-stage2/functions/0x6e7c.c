// rea decompile_all
// name: FUN_00006e7c
// address: 0x6e7c
// body: available
// range: 0x6e7c-0x6fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00006e7c(char param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  char local_39 [9];
  ulong local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulong local_10;
  long local_8;
  
  local_11 = 1;
  local_8 = 0;
  local_39[0] = '\x01';
  if (param_1 == '\0') {
    local_18 = 0x17;
  }
  else {
    local_18 = 7;
  }
  local_20 = FUN_000067ac(param_2,local_18,local_39,0);
  if (local_39[0] != '\0') {
    local_8 = FUN_00008278(param_2,local_20);
  }
  local_10 = 0;
  if (local_8 != 0) {
    if (param_1 == '\0') {
      local_24 = 2;
    }
    else {
      local_24 = 8;
    }
    local_30 = FUN_000067ac(param_2,local_24,0,0);
    local_39[1] = '\x18';
    local_39[2] = '\0';
    local_39[3] = '\0';
    local_39[4] = '\0';
    local_39[5] = '\0';
    local_39[6] = '\0';
    local_39[7] = '\0';
    local_39[8] = '\0';
    local_10 = FUN_0000d964(local_30 & 0xffffffff,0x18);
    local_10 = local_10 & 0xffffffff;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_8;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = local_10;
  }
  return local_11;
}

