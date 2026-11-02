// rea decompile_all
// name: FUN_0016a9c0
// address: 0x16a9c0
// body: available
// range: 0x16a9c0-0x16acc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0016a9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x24;
  undefined4 unaff_w25;
  void *unaff_x26;
  
  lVar2 = -0x5f23d1f0ed901c55;
  if (*(ulong *)(param_1 + 0x870) < 0x7f) {
    lVar2 = 0x1bc4b4c8265964f4;
  }
  lVar1 = -0x265968046dc63abc;
LAB_0016aab0:
  do {
    while (lVar3 = lVar1, lVar1 = lVar3, -0x21fcd74d80c23404 < lVar3) {
      if (lVar3 < 0x18b9008125bf3517) {
        if (lVar3 == -0x21fcd74d80c23403) {
          free(unaff_x26);
LAB_0016aa9c:
          unaff_w25 = 2;
          lVar1 = -0x49beaa0b5360d5a8;
        }
        else if (lVar3 == 0xbbaf1cc3210962a) {
          free(unaff_x24);
          lVar1 = -0x65932140ef64459c;
        }
      }
      else {
        lVar1 = -0x65932140ef64459c;
        if (lVar3 != 0x18b9008125bf3517) {
          if (lVar3 == 0x1bc4b4c8265964f4) {
            unaff_x24 = (void *)FUN_001e53f4(param_2,param_3);
            unaff_x26 = (void *)FUN_001e53f4(param_4,param_5);
            lVar1 = -0x49647fc1ac58d378;
            if (unaff_x26 == (void *)0x0 || unaff_x24 == (void *)0x0) {
              lVar1 = 0x44ddb3e419b81b29;
            }
          }
          else {
            lVar1 = lVar3;
            if ((lVar3 == 0x44ddb3e419b81b29) &&
               (lVar1 = 0x18b9008125bf3517, unaff_x24 != (void *)0x0)) {
              lVar1 = 0xbbaf1cc3210962a;
            }
          }
        }
      }
    }
    if (lVar3 < -0x49beaa0b5360d5a8) {
      if (lVar3 == -0x65932140ef64459c) {
        lVar1 = -0x556ca67b74e6399d;
        if (unaff_x26 != (void *)0x0) {
          lVar1 = -0x21fcd74d80c23403;
        }
      }
      else if (lVar3 == -0x5f23d1f0ed901c55) {
        unaff_w25 = 0x25;
        lVar1 = -0x49beaa0b5360d5a8;
      }
      else if (lVar3 == -0x556ca67b74e6399d) goto LAB_0016aa9c;
      goto LAB_0016aab0;
    }
    if (lVar3 == -0x49647fc1ac58d378) {
      lVar3 = *(long *)(param_1 + 0x870);
      unaff_w25 = 0;
      lVar1 = param_1 + lVar3 * 0x10;
      *(void **)(lVar1 + 0x70) = unaff_x24;
      *(void **)(lVar1 + 0x78) = unaff_x26;
      *(long *)(param_1 + 0x870) = lVar3 + 1;
      lVar1 = -0x49beaa0b5360d5a8;
    }
    else {
      lVar1 = lVar2;
      if ((lVar3 != -0x265968046dc63abc) && (lVar1 = lVar3, lVar3 == -0x49beaa0b5360d5a8)) {
        return unaff_w25;
      }
    }
  } while( true );
}

