// rea decompile_all
// name: FUN_002114f4
// address: 0x2114f4
// body: available
// range: 0x2114f4-0x2115f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002114f4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x3007aa9d32d99be8;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x25a3e9f6f44c50c;
  }
  lVar2 = -0x6bf42222db0ad31d;
  while( true ) {
    while (lVar3 = lVar2, lVar3 < 0xfb13253120e52d5) {
      lVar2 = lVar1;
      if ((lVar3 != -0x6bf42222db0ad31d) && (lVar2 = lVar3, lVar3 == -0x25a3e9f6f44c50c)) {
        FUN_002114f4(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = 0xfb13253120e52d5;
      }
    }
    if (lVar3 == 0xfb13253120e52d5) break;
    lVar2 = lVar3;
    if (lVar3 == 0x3007aa9d32d99be8) {
      lVar2 = 0xfb13253120e52d5;
    }
  }
  return;
}

