// rea decompile_all
// name: FUN_002027c4
// address: 0x2027c4
// body: available
// range: 0x2027c4-0x202857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_002027c4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x75bd924;
  if (*param_1 != 0) {
    uVar1 = *param_1;
  }
  uVar2 = uVar1 * 0x41a7 + (uVar1 / 0x1f31d) * -0x7fffffff;
  uVar1 = uVar2 + 0x7fffffff;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 0x75bd924;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  uVar3 = uVar2 * 0x41a7 + (uVar2 / 0x1f31d) * -0x7fffffff;
  uVar2 = uVar3 + 0x7fffffff;
  if (-1 < (long)uVar3) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  return uVar2 & 0x7fffffff | (uVar1 & 0x7fffffff) << 0x20;
}

