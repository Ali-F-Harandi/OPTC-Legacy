// rea decompile_all
// name: FUN_00002d28
// address: 0x2d28
// body: available
// range: 0x2d28-0x2e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00002d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 char *param_5,undefined1 param_6)

{
  undefined1 auStack_848 [1024];
  undefined1 auStack_448 [1079];
  char local_11;
  undefined1 *local_10;
  char local_1;
  
  local_1 = '\x01';
  local_11 = '\0';
  do {
    do {
      if ((local_1 == '\0') ||
         ((local_1 != '\0' &&
          (local_1 = FUN_00002814(param_1,param_3,auStack_848,&local_11), local_11 != '\x01'))))
      goto LAB_00002e50;
    } while (local_1 == '\0');
    local_10 = auStack_448;
    local_1 = FUN_000029a0(auStack_848,param_2,local_10,&local_11,param_6);
  } while (local_11 != '\x01');
  if (param_4 != 0) {
    FUN_0000c338(param_4,local_10,0x430);
  }
LAB_00002e50:
  if (param_5 != (char *)0x0) {
    *param_5 = local_11;
  }
  return local_1;
}

