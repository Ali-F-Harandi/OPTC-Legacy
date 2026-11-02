// rea decompile_all
// name: FUN_00210a94
// address: 0x210a94
// body: available
// range: 0x210a94-0x210bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00210a94(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *__ptr;
  long lVar3;
  undefined4 unaff_w21;
  
  iVar2 = *param_2;
  lVar1 = -0x408ee13b050179d2;
  if (iVar2 != 0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar3 = 0x6b5051bf1aed633d;
  while( true ) {
    while (lVar3 < 0x3b36a7a007b21166) {
      if (lVar3 == -0x408ee13b050179d2) {
        unaff_w21 = 0;
        *param_1 = 3;
        lVar3 = 0x3b36a7a007b21166;
      }
      else if (lVar3 == 0x1cba5f82f77e481f) {
        __ptr = *(undefined4 **)(param_2 + 2);
        *param_2 = iVar2 + -1;
        unaff_w21 = *__ptr;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = 0x3b36a7a007b21166;
      }
    }
    if (lVar3 == 0x3b36a7a007b21166) break;
    if (lVar3 == 0x6b5051bf1aed633d) {
      lVar3 = lVar1;
    }
  }
  return unaff_w21;
}

