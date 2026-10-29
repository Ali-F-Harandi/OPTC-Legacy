// rea decompile_all
// name: FUN_00007144
// address: 0x7144
// body: available
// range: 0x7144-0x71f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00007144(long param_1)

{
  char local_21;
  undefined8 local_20;
  undefined4 local_18;
  char local_11;
  undefined8 local_10;
  undefined8 local_8;
  
  local_11 = '\x01';
  local_8 = 0;
  local_10 = 0;
  local_21 = '\0';
  local_18 = 5;
  local_20 = FUN_000067ac(param_1,5,&local_21,0);
  if (local_21 != '\0') {
    local_8 = FUN_00008278(param_1,local_20);
    local_10 = FUN_000067ac(param_1,10,0,0);
  }
  if (local_11 != '\0') {
    *(undefined8 *)(param_1 + 0xb8) = local_8;
    *(undefined8 *)(param_1 + 0xc0) = local_10;
  }
  return local_11;
}

