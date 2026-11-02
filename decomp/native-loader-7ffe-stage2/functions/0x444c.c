// rea decompile_all
// name: FUN_0000444c
// address: 0x444c
// body: available
// range: 0x444c-0x455b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0000444c(undefined8 param_1,char *param_2)

{
  char cVar1;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_29 = '\0';
  cVar1 = FUN_000058a0();
  if (cVar1 != '\0') {
    local_10 = FUN_00003e20();
    local_18 = FUN_00008c00(local_10,param_1);
    if ((local_18 != 0) && (*(long *)(local_18 + 8) != 0)) {
      local_29 = '\x01';
      local_8 = FUN_00008b30(local_10,*(undefined8 *)(local_18 + 8));
    }
  }
  if (local_29 != '\x01') {
    local_20 = FUN_0000443c();
    local_8 = FUN_000046c8(local_20,param_1,&local_29);
  }
  if (local_29 != '\x01') {
    local_28 = FUN_00003e20();
    local_8 = FUN_00004970(local_28,param_1,&local_29);
  }
  if (param_2 != (char *)0x0) {
    *param_2 = local_29;
  }
  return local_8;
}

