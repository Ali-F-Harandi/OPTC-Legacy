// rea decompile_all
// name: FUN_001f52f0
// address: 0x1f52f0
// body: available
// range: 0x1f52f0-0x1f56af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f52f0(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *unaff_x20;
  undefined1 *unaff_x26;
  undefined1 *unaff_x28;
  
  puVar5 = (undefined1 *)*param_1;
  puVar1 = &DAT_f615808441b1dafc;
  if (puVar5 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar3 = (undefined1 *)0x125dd2cc844aecb4;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar2, puVar4 = puVar3, puVar2 = puVar6, puVar3 = puVar4,
                (long)puVar6 < -0x938e289074b7147) {
            if ((long)puVar6 < -0xab3a208b03543bf) {
              puVar2 = (undefined1 *)0xf54c5df74fcabc41;
              if (((puVar6 != (undefined1 *)0xaa46adf0a78af8c7) &&
                  (puVar3 = unaff_x28, puVar2 = (undefined1 *)0x696b554ab6b2c8c5,
                  puVar6 != (undefined1 *)0xc23f84056fd30bd6)) &&
                 (puVar3 = puVar4, puVar2 = puVar6, puVar6 == (undefined1 *)0xd222672a639a1d2e)) {
                unaff_x20 = *(void **)(unaff_x26 + 8);
                puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
                if (unaff_x20 != (void *)0x0) {
                  puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0xf54c5df74fcabc41) {
              free(unaff_x26);
              unaff_x28 = (undefined1 *)*param_1;
              puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
              if (unaff_x28 != (undefined1 *)0x0) {
                puVar2 = (undefined1 *)0xc23f84056fd30bd6;
              }
            }
            else {
              puVar2 = (undefined1 *)0x6b5051bf1aed633d;
              if ((puVar6 != &DAT_f615808441b1dafc) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0xf63b36e7a9d9f670)) {
                free(unaff_x20);
                puVar2 = (undefined1 *)0xf54c5df74fcabc41;
              }
            }
          }
          if (0x2ce2edddaf334d80 < (long)puVar6) break;
          puVar2 = (undefined1 *)0x6b5051bf1aed633d;
          if (((puVar6 != (undefined1 *)0xf6c71d76f8b48eb9) &&
              (puVar2 = puVar1, puVar6 != (undefined1 *)0x887e73b2c28c6a1)) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
            puVar3 = puVar5;
            puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
          }
        }
        if (0x696b554ab6b2c8c4 < (long)puVar6) break;
        if (puVar6 == (undefined1 *)0x2ce2edddaf334d81) {
          param_1[1] = (long)param_1;
          puVar2 = (undefined1 *)0xd222672a639a1d2e;
        }
        else if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
          puVar2 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
      if (puVar6 != (undefined1 *)0x696b554ab6b2c8c5) break;
      puVar2 = (undefined1 *)0x2ce2edddaf334d81;
      if (*(long *)(puVar4 + 0x10) != 0) {
        puVar2 = (undefined1 *)0x353e7cd16df664a2;
      }
      *param_1 = *(long *)(puVar4 + 0x10);
      unaff_x26 = puVar4;
    }
  } while (puVar6 != (undefined1 *)0x6b5051bf1aed633d);
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}

