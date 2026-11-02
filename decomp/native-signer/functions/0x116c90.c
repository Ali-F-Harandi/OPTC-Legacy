// rea decompile_all
// name: FUN_00116c90
// address: 0x116c90
// body: available
// range: 0x116c90-0x116cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00116c90(long param_1)

{
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 0x1181c000010e;
  FUN_00162e08();
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 0x202001000;
  return;
}

