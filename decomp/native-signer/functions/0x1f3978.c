// rea decompile_all
// name: FUN_001f3978
// address: 0x1f3978
// body: available
// range: 0x1f3978-0x1f3a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


FILE * FUN_001f3978(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  FILE *pFVar4;
  long lVar5;
  
  uVar3 = access(param_1,4);
  pFVar4 = (FILE *)(ulong)uVar3;
  lVar1 = 0x3b36a7a007b21166;
  if (uVar3 != 0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar2 = -0x408ee13b050179d2;
  while( true ) {
    while (lVar5 = lVar2, lVar5 < 0x312910f1547c7c77) {
      lVar2 = lVar1;
      if ((lVar5 != -0x408ee13b050179d2) && (lVar2 = lVar5, lVar5 == 0x1cba5f82f77e481f)) {
        pFVar4 = (FILE *)0x0;
        lVar2 = 0x312910f1547c7c77;
      }
    }
    if (lVar5 == 0x312910f1547c7c77) break;
    lVar2 = lVar5;
    if (lVar5 == 0x3b36a7a007b21166) {
      pFVar4 = fopen(param_1,param_2);
      lVar2 = 0x312910f1547c7c77;
    }
  }
  return pFVar4;
}

