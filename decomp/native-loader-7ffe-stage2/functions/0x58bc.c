// rea decompile_all
// name: FUN_000058bc
// address: 0x58bc
// body: available
// range: 0x58bc-0x5a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_000058bc(long param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_8;
  
  local_8 = *(ulong *)(param_1 + 8) >> 0x20;
  if (((local_8 != 0) && (param_3 != 0)) && (cVar3 = FUN_000058a0(), cVar3 == '\x01')) {
    iVar1 = *DAT_00025698;
    uVar4 = (ulong)((iVar1 * iVar1 << (ulong)(param_2 & 3)) + 0x2048U |
                   ((uint)(iVar1 * iVar1) >> (ulong)(param_2 & 0x1b)) + 0x1bc5);
    uVar5 = (ulong)(param_3 - 1);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar4 / uVar5;
    }
    local_8 = ((local_8 - 1) + (ulong)(param_3 - 1)) - (uVar4 - uVar2 * uVar5);
    if (param_3 - 1 <= local_8) {
      local_8 = local_8 - (param_3 - 1);
    }
    local_8 = local_8 + 1;
  }
  return local_8;
}

