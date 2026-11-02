// rea decompile_all
// name: FUN_001f4848
// address: 0x1f4848
// body: available
// range: 0x1f4848-0x1f4873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f4848(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x1032547698badcfe;
  *(undefined8 *)(param_1 + 0x50) = 0xefcdab8967452301;
  *(undefined8 *)(param_1 + 0x68) = 0x8f1bbcdc6ed9eba1;
  *(undefined8 *)(param_1 + 0x60) = 0x5a827999c3d2e1f0;
  *(undefined4 *)(param_1 + 0x70) = 0xca62c1d6;
  return;
}

