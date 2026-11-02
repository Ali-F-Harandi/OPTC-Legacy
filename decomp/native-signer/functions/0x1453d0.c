// rea decompile_all
// name: FUN_001453d0
// address: 0x1453d0
// body: available
// range: 0x1453d0-0x14555b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001453d0(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  lVar1 = -0x7ef388dba0dcec1f;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0x3b131567841c69de;
  }
  lVar2 = -0x5a2405f8da1725a0;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < -0x3b131567841c69de) {
      if (lVar4 == -0x7ef388dba0dcec1f) {
        uVar3 = FUN_0013a038(param_1);
        lVar2 = -0x48037b8f5dd08a99;
        if ((uVar3 & 1) == 0) {
          lVar2 = 0x2cf80519e31e1425;
        }
      }
      else {
        lVar2 = lVar1;
        if ((lVar4 != -0x5a2405f8da1725a0) && (lVar2 = lVar4, lVar4 == -0x48037b8f5dd08a99)) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x80000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar2 = 0x7cc37bc84589a0a4;
        }
      }
    }
    if (lVar4 == 0x7cc37bc84589a0a4) break;
    if (lVar4 == 0x2cf80519e31e1425) {
      lVar2 = 0x7cc37bc84589a0a4;
    }
    else {
      lVar2 = lVar4;
      if (lVar4 == -0x3b131567841c69de) {
        lVar2 = 0x7cc37bc84589a0a4;
      }
    }
  }
  return;
}

