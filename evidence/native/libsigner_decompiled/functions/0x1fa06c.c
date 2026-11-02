// rea decompile_all
// name: FUN_001fa06c
// address: 0x1fa06c
// body: available
// range: 0x1fa06c-0x1fa173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fa06c(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 2);
  lVar1 = 0x20737e34b7c0d799;
  if (__ptr != (void *)0x0) {
    lVar1 = 0x187cf29d06d6bd9e;
  }
  lVar2 = -0x30c47c559a45f485;
  while( true ) {
    while (0x187cf29d06d6bd9d < lVar2) {
      if (lVar2 == 0x187cf29d06d6bd9e) {
        free(__ptr);
        *(undefined8 *)(param_1 + 2) = 0;
        lVar2 = -0x7353f89f407630c4;
      }
      else if (lVar2 == 0x20737e34b7c0d799) {
        lVar2 = -0x7353f89f407630c4;
      }
    }
    if (lVar2 == -0x7353f89f407630c4) break;
    if (lVar2 == -0x30c47c559a45f485) {
      lVar2 = lVar1;
    }
  }
  *param_1 = 0;
  return;
}

