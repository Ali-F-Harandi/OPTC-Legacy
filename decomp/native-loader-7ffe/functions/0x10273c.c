// rea decompile_all
// name: FUN_0010273c
// address: 0x10273c
// body: available
// range: 0x10273c-0x1027db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0010273c(long param_1,long param_2)

{
  long unaff_x29;
  
  *(long *)(unaff_x29 + 0x10c0) = param_2 + param_1;
  *(ulong *)(unaff_x29 + 0x10b8) =
       *(long *)(unaff_x29 + 0x10b8) - (ulong)*(uint *)(unaff_x29 + 0x1074);
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    **(undefined8 **)(unaff_x29 + 0x38) = *(undefined8 *)(unaff_x29 + 0x10c0);
    **(undefined8 **)(unaff_x29 + 0x30) = *(undefined8 *)(unaff_x29 + 0x10b8);
    **(undefined8 **)(unaff_x29 + 0x28) = *(undefined8 *)(unaff_x29 + 0x1068);
    **(undefined8 **)(unaff_x29 + 0x20) = *(undefined8 *)(unaff_x29 + 0x1060);
  }
  return *(undefined1 *)(unaff_x29 + 0x10ff);
}

