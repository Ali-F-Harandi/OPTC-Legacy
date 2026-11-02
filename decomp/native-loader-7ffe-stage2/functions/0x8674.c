// rea decompile_all
// name: FUN_00008674
// address: 0x8674
// body: available
// range: 0x8674-0x877f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00008674(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long *param_5,
            char *param_6)

{
  long lVar1;
  char local_29 [9];
  long local_20;
  undefined1 local_11;
  long local_10;
  long local_8;
  
  local_11 = 1;
  local_8 = 0;
  local_10 = 0;
  local_29[0] = '\x01';
  local_20 = FUN_0000667c(param_1,param_2,local_29,0);
  if (local_29[0] != '\0') {
    local_8 = *(long *)(local_20 + 8);
    lVar1 = FUN_0000667c(param_1,param_3,local_29,0);
    if (local_29[0] != '\0') {
      local_10 = *(long *)(lVar1 + 8) + local_8;
    }
  }
  if (param_4 != (long *)0x0) {
    *param_4 = local_8;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = local_10;
  }
  if (param_6 != (char *)0x0) {
    *param_6 = local_29[0];
  }
  return local_11;
}

