// rea decompile_all
// name: FUN_002115f8
// address: 0x2115f8
// body: available
// range: 0x2115f8-0x2116fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002115f8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x32f4713bcaf93571;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x316a2fad8e5725cc;
  }
  lVar2 = 0x31b9d74c89a90fe3;
  while( true ) {
    while (lVar2 < 0x32f4713bcaf93571) {
      if (lVar2 == -0x316a2fad8e5725cc) {
        FUN_002114f4(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = 0x65536dc2a8308acd;
      }
      else if (lVar2 == 0x31b9d74c89a90fe3) {
        lVar2 = lVar1;
      }
    }
    if (lVar2 == 0x65536dc2a8308acd) break;
    if (lVar2 == 0x32f4713bcaf93571) {
      lVar2 = 0x65536dc2a8308acd;
    }
  }
  return;
}

