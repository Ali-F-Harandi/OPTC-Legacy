// rea decompile_all
// name: FUN_001b1710
// address: 0x1b1710
// body: available
// range: 0x1b1710-0x1b19ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_001b1710(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte unaff_w21;
  int unaff_w22;
  long unaff_x23;
  byte unaff_w26;
  
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (param_3 == 0 || param_1 == 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001b17f0:
  do {
    while (puVar3 = puVar2, puVar2 = puVar3, 0x125dd2cc844aecb3 < (long)puVar3) {
      if ((long)puVar3 < 0x353e7cd16df664a2) {
        if (puVar3 == (undefined1 *)0x125dd2cc844aecb4) {
          unaff_w22 = FUN_001f351c(param_1,0);
          puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
          if (unaff_w22 != -1) {
            puVar2 = (undefined1 *)0x353e7cd16df664a2;
          }
        }
        else if (puVar3 == (undefined1 *)0x2ce2edddaf334d81) {
          puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
        }
      }
      else if (puVar3 == (undefined1 *)0x353e7cd16df664a2) {
        unaff_x23 = FUN_001f3a88(unaff_w22,param_3,param_2);
        unaff_w21 = unaff_x23 != -1;
        puVar2 = (undefined1 *)0xd222672a639a1d2e;
        if (!(bool)unaff_w21) {
          puVar2 = (undefined1 *)0x2ce2edddaf334d81;
        }
      }
      else if (puVar3 == (undefined1 *)0x696b554ab6b2c8c5) {
LAB_001b17dc:
        puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
        unaff_w26 = 0;
      }
    }
    if (-0x9ea7f7bbe4e2505 < (long)puVar3) {
      if (puVar3 == &DAT_f615808441b1dafc) goto LAB_001b17dc;
      puVar2 = puVar1;
      if ((puVar3 != (undefined1 *)0x887e73b2c28c6a1) &&
         (puVar2 = puVar3, puVar3 == (undefined1 *)0xf63b36e7a9d9f670)) {
        return unaff_w26 & 1;
      }
      goto LAB_001b17f0;
    }
    if (puVar3 == (undefined1 *)0xaa46adf0a78af8c7) {
      FUN_001f3aa0(unaff_w22);
      puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
      unaff_w26 = unaff_w21;
    }
    else if (puVar3 == (undefined1 *)0xd222672a639a1d2e) {
      *(undefined1 *)(unaff_x23 + param_3 + -1) = 0;
      puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
    }
  } while( true );
}

