// rea decompile_all
// name: FUN_001afb4c
// address: 0x1afb4c
// body: available
// range: 0x1afb4c-0x1afc4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001afb4c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_001ad6cc();
  lVar1 = 0x242c94bb96617abb;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x7f0dc9b3a3765301;
  }
  lVar2 = 0x5c75d317cff2739f;
  do {
    while (lVar3 = lVar2, lVar3 < 0x5c75d317cff2739f) {
      if (lVar3 == -0x7f0dc9b3a3765301) {
        free(param_1);
        lVar2 = 0x5e955a53164f3d9f;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == 0x242c94bb96617abb) {
          lVar2 = 0x5e955a53164f3d9f;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == 0x5c75d317cff2739f) || (lVar2 = lVar3, lVar3 != 0x5e955a53164f3d9f));
  return;
}

