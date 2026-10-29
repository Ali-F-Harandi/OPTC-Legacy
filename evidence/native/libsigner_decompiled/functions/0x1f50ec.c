// rea decompile_all
// name: FUN_001f50ec
// address: 0x1f50ec
// body: available
// range: 0x1f50ec-0x1f51e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_001f50ec(undefined4 *param_1,FILE *param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = fseek(param_2,param_3,param_4);
  lVar1 = 0x2ce2edddaf334d81;
  if (iVar3 != 0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar2 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar4 = lVar2, 0x2ce2edddaf334d80 < lVar4) {
      lVar2 = lVar1;
      if ((lVar4 != 0x353e7cd16df664a2) && (lVar2 = lVar4, lVar4 == 0x2ce2edddaf334d81)) {
        lVar2 = -0x55b9520f58750739;
      }
    }
    if (lVar4 == -0x55b9520f58750739) break;
    lVar2 = lVar4;
    if (lVar4 == -0x2ddd98d59c65e2d2) {
      *param_1 = 2;
      lVar2 = -0x55b9520f58750739;
    }
  }
  return iVar3 == 0;
}

