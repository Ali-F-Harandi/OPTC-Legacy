// rea decompile_all
// name: FUN_0000375c
// address: 0x375c
// body: available
// range: 0x375c-0x3967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000375c(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  char local_1;
  
  local_1 = '\x01';
  if (param_2 == 0) {
    uVar1 = FUN_0000573c();
    local_1 = FUN_00001eb0(0,0,uVar1,1,0xf9,1,2,0,0,0);
  }
  if ((local_1 != '\0') && ((param_3 & 0x100) != 0)) {
    FUN_00005868(1);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00003dfc(param_1);
  }
  if (local_1 != '\0') {
    local_1 = FUN_000043a4(*(undefined8 *)(param_1 + 0x518),*(undefined4 *)(param_1 + 0x520));
  }
  if (local_1 != '\0') {
    local_1 = FUN_00004418(param_2);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00005318(param_2);
  }
  if (local_1 != '\0') {
    local_1 = FUN_0000318c(param_2);
  }
  local_8 = 0x1000;
  FUN_000035f8(&local_8);
  if ((local_1 != '\0') && ((param_3 & 8) == 0)) {
    local_1 = FUN_00003d00(param_2,local_8);
  }
  if ((local_1 != '\0') && ((param_3 & 2) == 0)) {
    local_1 = FUN_000032a0(param_2,(param_3 & 4) != 0,local_8);
  }
  if ((local_1 != '\0') && ((param_3 & 1) == 0)) {
    local_1 = FUN_00003b98(param_2);
  }
  FUN_00003dfc(0);
  FUN_000043a4(0,0);
  FUN_00004418(0);
  FUN_00005868(0);
  return local_1;
}

