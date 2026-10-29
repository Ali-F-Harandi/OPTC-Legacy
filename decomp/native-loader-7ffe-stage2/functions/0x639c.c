// rea decompile_all
// name: FUN_0000639c
// address: 0x639c
// body: available
// range: 0x639c-0x645b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0000639c(undefined8 param_1,char *param_2)

{
  char local_2d;
  int local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  int local_10;
  char local_9;
  undefined8 local_8;
  
  local_2c = 0;
  local_18 = FUN_000043dc(&local_2c);
  local_8 = 0;
  local_9 = '\0';
  local_10 = 0;
  do {
    if (local_2c <= local_10) {
LAB_00006438:
      if (param_2 != (char *)0x0) {
        *param_2 = local_9;
      }
      return local_8;
    }
    local_20 = local_18 + (long)local_10 * 0x518;
    local_2d = '\0';
    local_28 = FUN_0000645c(local_20,param_1,&local_2d);
    if (local_2d != '\0') {
      local_9 = local_2d;
      local_8 = local_28;
      goto LAB_00006438;
    }
    local_10 = local_10 + 1;
  } while( true );
}

