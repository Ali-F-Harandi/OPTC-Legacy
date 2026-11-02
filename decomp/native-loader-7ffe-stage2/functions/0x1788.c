// rea decompile_all
// name: FUN_00001788
// address: 0x1788
// body: available
// range: 0x1788-0x19c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00001788(uint *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  FUN_0000c214(param_3,0,0x518);
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    *(uint *)(param_3 + 0x114) = param_1[0xe];
    if (param_1[1] != 0) {
      *(ulong *)(param_3 + 0x30) = (long)param_1 + (ulong)*param_1;
      *(ulong *)(param_3 + 0x38) = (ulong)param_1[1];
    }
    if (param_1[3] != 0) {
      *(ulong *)(param_3 + 0x58) = (long)param_1 + (ulong)param_1[2];
      *(ulong *)(param_3 + 0x60) = (ulong)param_1[3];
    }
    if (param_1[5] != 0) {
      *(ulong *)(param_3 + 0xb8) = (long)param_1 + (ulong)param_1[4];
      *(ulong *)(param_3 + 0xc0) = (ulong)param_1[5];
    }
    if (param_1[7] != 0) {
      *(ulong *)(param_3 + 0xa8) = (long)param_1 + (ulong)param_1[6];
      *(ulong *)(param_3 + 0xb0) = (ulong)param_1[7];
    }
    if (param_1[9] != 0) {
      *(ulong *)(param_3 + 0x88) = (long)param_1 + (ulong)param_1[8];
      *(ulong *)(param_3 + 0x90) = (ulong)param_1[9];
    }
    if (param_1[0xb] != 0) {
      *(ulong *)(param_3 + 0x98) = (long)param_1 + (ulong)param_1[10];
      *(ulong *)(param_3 + 0xa0) = (ulong)param_1[0xb];
    }
    *(undefined8 *)(param_3 + 0x20) = param_4;
    *(undefined8 *)(param_3 + 0x10) = param_4;
    *(undefined8 *)(param_3 + 0x18) = param_5;
  }
  return 1;
}

