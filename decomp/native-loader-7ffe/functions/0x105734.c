// rea decompile_all
// name: FUN_00105734
// address: 0x105734
// body: available
// range: 0x105734-0x1057db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00105734(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char *local_18;
  
  bVar2 = false;
  local_18 = param_1;
  while( true ) {
    if (*local_18 == '\0') {
      return (char *)0x0;
    }
    if ((*local_18 == '\t') || (*local_18 == ' ')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar2 = true;
    }
    if (bVar2) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}

