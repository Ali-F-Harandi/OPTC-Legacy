// rea decompile_all
// name: FUN_00211808
// address: 0x211808
// body: available
// range: 0x211808-0x211903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00211808(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x2ce2edddaf334d81;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar2 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar3 = lVar2, 0x2ce2edddaf334d80 < lVar3) {
      lVar2 = lVar1;
      if ((lVar3 != 0x353e7cd16df664a2) && (lVar2 = lVar3, lVar3 == 0x2ce2edddaf334d81)) {
        lVar2 = -0x55b9520f58750739;
      }
    }
    if (lVar3 == -0x55b9520f58750739) break;
    lVar2 = lVar3;
    if (lVar3 == -0x2ddd98d59c65e2d2) {
      free(param_1);
      lVar2 = -0x55b9520f58750739;
    }
  }
  return;
}

