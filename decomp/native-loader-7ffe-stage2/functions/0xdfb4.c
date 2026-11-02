// rea decompile_all
// name: FUN_0000dfb4
// address: 0xdfb4
// body: available
// range: 0xdfb4-0xe22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0000dfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5,char param_6)

{
  undefined4 uVar1;
  long local_40;
  ulong local_18;
  long local_10;
  char local_1;
  
  local_1 = '\x01';
  local_10 = 0;
  local_18 = 0;
  local_40 = param_4;
  if (DAT_000256d8 != '\0') {
    local_18 = param_5 + 0x10;
    local_10 = FUN_00009f18(local_18);
    if (local_10 == 0) {
      uVar1 = FUN_0000f43c();
      local_1 = FUN_00001eb0(0,0,uVar1,1,0x75,1,1,local_18 & 0xffffffff,0,0);
    }
    local_40 = param_4;
    if (local_1 != '\0') {
      FUN_0000c338(local_10,param_4,param_5);
      local_40 = local_10;
    }
  }
  if (local_1 != '\0') {
    if (_DAT_000267e8 == 0) {
      uVar1 = FUN_0000f43c();
      local_1 = FUN_00001eb0(0,0,uVar1,1,0x82,1,2,0,0,0);
    }
    if (local_1 != '\0') {
      local_1 = FUN_0000f108(_DAT_000267e8,local_40,param_5);
    }
  }
  if ((local_1 != '\0') && (param_6 != '\x01')) {
    if (_DAT_000268f0 == 0) {
      uVar1 = FUN_0000f43c();
      local_1 = FUN_00001eb0(0,0,uVar1,1,0x8d,1,3,0,0,0);
    }
    if (local_1 != '\0') {
      local_1 = FUN_00010204(local_40,param_5,0x267f0,_DAT_000268f0);
    }
  }
  if ((local_1 != '\0') && (local_1 != '\0')) {
    local_1 = FUN_0000f2ac(param_1,param_2,local_40,param_5 & 0xffffffff);
  }
  if (local_10 != 0) {
    FUN_00009f8c(local_10,local_18);
  }
  return local_1;
}

