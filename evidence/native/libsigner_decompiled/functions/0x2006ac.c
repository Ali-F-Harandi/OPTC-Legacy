// rea decompile_all
// name: FUN_002006ac
// address: 0x2006ac
// body: available
// range: 0x2006ac-0x20082f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_002006ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x22;
  
  lVar1 = 0x7e713fa43f38c582;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0x58b842c6f86d5804;
  }
  lVar2 = 0x5ece82223eee3411;
  do {
    do {
      while (lVar5 = lVar2, lVar5 < 0x5ece82223eee3411) {
        if (lVar5 == -0x579a549dca8d1ccf) {
          iVar3 = FUN_001e30ac(param_1,param_2,unaff_x22);
          unaff_w19 = iVar3 == 0;
          lVar2 = 0x5039187a35dab08d;
        }
        else {
          if (lVar5 == 0x5039187a35dab08d) {
            return unaff_w19 & 1;
          }
          lVar2 = lVar5;
          if (lVar5 == 0x58b842c6f86d5804) goto LAB_00200764;
        }
      }
      lVar2 = lVar1;
    } while (lVar5 == 0x5ece82223eee3411);
    if (lVar5 == 0x75df443d79079721) {
LAB_00200764:
      unaff_w19 = 0;
      lVar2 = 0x5039187a35dab08d;
    }
    else {
      lVar2 = lVar5;
      if (lVar5 == 0x7e713fa43f38c582) {
        uVar4 = FUN_001e16c4(param_1);
        unaff_x22 = FUN_001e16c4(param_2);
        lVar2 = 0x75df443d79079721;
        if (unaff_x22 <= uVar4) {
          lVar2 = -0x579a549dca8d1ccf;
        }
      }
    }
  } while( true );
}

