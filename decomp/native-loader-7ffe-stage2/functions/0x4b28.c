// rea decompile_all
// name: FUN_00004b28
// address: 0x4b28
// body: available
// range: 0x4b28-0x4bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00004b28(long param_1)

{
  char local_19;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  undefined8 local_8;
  
  if ((DAT_00025950 == '\0') && (param_1 != 0)) {
    DAT_00025950 = '\x01';
    local_18 = 0xc4e494dc;
    local_14 = 0x64dc;
    local_8 = FUN_0000dafc(&local_18,8);
    local_19 = '\0';
    local_10 = 0;
    local_10 = FUN_00004970(param_1,local_8,&local_19);
    FUN_0000dbc0(local_8);
    if ((local_10 != 0) && (local_19 != '\0')) {
      DAT_00025948 = local_10;
    }
  }
  return 1;
}

