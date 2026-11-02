// rea decompile_all
// name: FUN_001fde30
// address: 0x1fde30
// body: available
// range: 0x1fde30-0x1fe013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fde30(long *param_1)

{
  long lVar1;
  long lVar2;
  FILE *local_88;
  
  lVar1 = -0x408ee13b050179d2;
  if (param_1 != (long *)0x0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar2 = 0x6b5051bf1aed633d;
  do {
    while( true ) {
      while( true ) {
        while (0x1cba5f82f77e481e < lVar2) {
          if (lVar2 < 0x3b36a7a007b21166) {
            if (lVar2 == 0x1cba5f82f77e481f) {
              local_88 = (FILE *)*param_1;
              lVar2 = 0x3b36a7a007b21166;
              if (local_88 != (FILE *)0x0) {
                lVar2 = 0x312910f1547c7c77;
              }
            }
            else if (lVar2 == 0x312910f1547c7c77) {
              fclose(local_88);
              *param_1 = 0;
              lVar2 = -0x3768c81d078975fb;
            }
          }
          else if (lVar2 == 0x3b36a7a007b21166) {
            lVar2 = -0x3768c81d078975fb;
          }
          else if (lVar2 == 0x6b5051bf1aed633d) {
            lVar2 = lVar1;
          }
        }
        if (lVar2 != -0x408ee13b050179d2) break;
        lVar2 = 0x52cde6c2dea1be4;
      }
      if (lVar2 != -0x3768c81d078975fb) break;
      thunk_FUN_001fad90(param_1 + 3);
      thunk_FUN_001fd070(param_1 + 5);
      thunk_FUN_001fd070(param_1 + 7);
      free(param_1);
      lVar2 = 0x52cde6c2dea1be4;
    }
  } while (lVar2 != 0x52cde6c2dea1be4);
  return;
}

