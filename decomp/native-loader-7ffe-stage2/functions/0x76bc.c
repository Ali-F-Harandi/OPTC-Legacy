// rea decompile_all
// name: FUN_000076bc
// address: 0x76bc
// body: available
// range: 0x76bc-0x778b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000076bc(long param_1)

{
  long lVar1;
  char local_39 [9];
  undefined8 local_30;
  long local_28;
  char local_19;
  long local_18;
  long local_10;
  long local_8;
  
  local_19 = '\x01';
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_39[0] = '\0';
  local_28 = *(long *)(param_1 + 0x20);
  local_30 = 0x6ffffff0;
  lVar1 = FUN_000067ac(param_1,0x6ffffff0,local_39,0);
  if (local_39[0] != '\0') {
    local_8 = local_28 + lVar1;
    local_10 = *(long *)(param_1 + 0xb0);
    local_18 = local_10 << 1;
  }
  if (local_19 != '\0') {
    *(long *)(param_1 + 200) = local_8;
    *(long *)(param_1 + 0xd0) = local_10;
    *(long *)(param_1 + 0xd8) = local_18;
  }
  return local_19;
}

