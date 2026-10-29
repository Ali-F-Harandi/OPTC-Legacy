// rea decompile_all
// name: FUN_0000607c
// address: 0x607c
// body: available
// range: 0x607c-0x62ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0000607c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long local_18;
  long local_10;
  uint local_8;
  char local_1;
  
  local_1 = '\x01';
  _DAT_00026968 = 0;
  _DAT_00026960 = 0;
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar1 = FUN_00005f70(1,param_1);
    local_8 = FUN_00005f70(0,param_1);
    if (local_8 < uVar1) {
      local_8 = uVar1;
    }
  }
  else {
    local_8 = (uint)*(undefined8 *)(param_1 + 0xb0);
  }
  local_10 = 0;
  if ((local_8 != 0) && (local_10 = FUN_00009f18((ulong)local_8 << 3), local_10 == 0)) {
    uVar2 = FUN_0000573c();
    local_1 = FUN_00001eb0(0,0,uVar2,0x18,0x1f6,1,4,local_8,0,0);
  }
  local_18 = 0;
  if (((local_1 != '\0') && (local_8 != 0)) &&
     (local_18 = FUN_00009f18((ulong)local_8 << 2), local_18 == 0)) {
    uVar2 = FUN_0000573c();
    local_1 = FUN_00001eb0(0,0,uVar2,0x18,0x1fd,1,5,local_8,0,0);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00005cb8(1,param_1,local_10,local_18,local_8);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00005cb8(0,param_1,local_10,local_18,local_8);
  }
  if (local_1 != '\0') {
    _DAT_00026960 = local_10;
    _DAT_00026968 = local_8;
  }
  if (local_18 != 0) {
    FUN_00009f8c(local_18,local_8);
  }
  return local_1;
}

