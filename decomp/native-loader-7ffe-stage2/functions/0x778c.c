// rea decompile_all
// name: FUN_0000778c
// address: 0x778c
// body: available
// range: 0x778c-0x786f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000778c(long param_1)

{
  char local_39;
  long local_38;
  undefined8 local_30;
  long local_28;
  char local_19;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_19 = '\x01';
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_39 = '\0';
  local_28 = *(long *)(param_1 + 0x20);
  local_30 = 0x6ffffffc;
  local_38 = FUN_000067ac(param_1,0x6ffffffc,&local_39,0);
  if (local_39 != '\0') {
    local_8 = local_28 + local_38;
    local_10 = FUN_000067ac(param_1,0x6ffffffd,0,0);
    local_18 = FUN_0000742c(local_8,local_10);
  }
  if (local_19 != '\0') {
    *(long *)(param_1 + 0xe0) = local_8;
    *(undefined8 *)(param_1 + 0xe8) = local_10;
    *(undefined8 *)(param_1 + 0xf0) = local_18;
  }
  return local_19;
}

