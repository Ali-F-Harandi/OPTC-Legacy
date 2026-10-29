// rea decompile_all
// name: FUN_00200830
// address: 0x200830
// body: available
// range: 0x200830-0x2009b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00200830(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte unaff_w19;
  ulong unaff_x21;
  
  lVar1 = 0x7d8bf94548220fb8;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0x77f0428eaa711148;
  }
  uVar3 = param_1;
  lVar4 = -0x124103c739306402;
  do {
LAB_002008f0:
    do {
      while (lVar4 < 0x418b7d3c908df894) {
        if (lVar4 == -0x71c5c29ef27b8351) {
          return unaff_w19 & 1;
        }
        if (lVar4 == -0x45704382c9dcec73) {
LAB_00200934:
          unaff_w19 = 0;
          lVar4 = -0x71c5c29ef27b8351;
        }
        else if (lVar4 == -0x124103c739306402) {
          lVar4 = lVar1;
        }
      }
      if (lVar4 == 0x418b7d3c908df894) {
        iVar2 = FUN_001e2ed0(param_1 + (unaff_x21 - uVar3),param_2);
        unaff_w19 = iVar2 == 0;
        lVar4 = -0x71c5c29ef27b8351;
        goto LAB_002008f0;
      }
      if (lVar4 == 0x77f0428eaa711148) goto LAB_00200934;
    } while (lVar4 != 0x7d8bf94548220fb8);
    unaff_x21 = FUN_001e16c4(param_1);
    uVar3 = FUN_001e16c4(param_2);
    lVar4 = -0x45704382c9dcec73;
    if (uVar3 <= unaff_x21) {
      lVar4 = 0x418b7d3c908df894;
    }
  } while( true );
}

