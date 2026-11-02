// rea decompile_all
// name: FUN_001f7a0c
// address: 0x1f7a0c
// body: available
// range: 0x1f7a0c-0x1f7dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f7a0c(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  void *unaff_x20;
  undefined1 *unaff_x22;
  undefined1 *unaff_x26;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)0x939eea0b05eec05c;
  if (puVar6 != (undefined1 *)0x0) {
    puVar1 = &DAT_c4c956bc7e2b1c5a;
  }
  puVar3 = puVar1;
  puVar2 = (undefined1 *)0xfd0967b6e414afde;
LAB_001f7ad0:
  do {
    while (puVar5 = puVar2, puVar4 = puVar3, puVar3 = puVar4, (long)puVar5 < -0xa857d4da3ca01d6) {
      if ((long)puVar5 < -0x3cc2b3d163fe4027) {
        if (puVar5 == (undefined1 *)0x8d9cde8a92cc3625) {
          puVar2 = (undefined1 *)0x1f2c3b62b1679b;
          if (*(long *)(puVar4 + 0x10) != 0) {
            puVar2 = (undefined1 *)0xf7b3adcf918810f6;
          }
          *param_1 = *(long *)(puVar4 + 0x10);
          unaff_x22 = puVar4;
        }
        else {
          puVar2 = (undefined1 *)0x332dfd522f05c93c;
          if ((puVar5 != (undefined1 *)0x939eea0b05eec05c) &&
             (puVar2 = puVar5, puVar5 == (undefined1 *)0xb5973310192f9ea8)) {
            puVar2 = (undefined1 *)0x332dfd522f05c93c;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0xc33d4c2e9c01bfd9) {
        free(unaff_x20);
LAB_001f7abc:
        puVar3 = puVar4;
        puVar2 = (undefined1 *)0xe1040badb9b8aca8;
      }
      else {
        puVar3 = puVar6;
        puVar2 = (undefined1 *)0x8d9cde8a92cc3625;
        if ((puVar5 != &DAT_c4c956bc7e2b1c5a) &&
           (puVar3 = puVar4, puVar2 = puVar5, puVar5 == (undefined1 *)0xe1040badb9b8aca8)) {
          free(unaff_x22);
          unaff_x26 = (undefined1 *)*param_1;
          puVar2 = (undefined1 *)0xb5973310192f9ea8;
          if (unaff_x26 != (undefined1 *)0x0) {
            puVar2 = (undefined1 *)0x5f3fddf8e2fc9ebc;
          }
        }
      }
    }
    if ((long)puVar5 < 0x1f2c3b62b1679b) {
      if (puVar5 == (undefined1 *)0xf57a82b25c35fe2a) {
        unaff_x20 = *(void **)(unaff_x22 + 8);
        puVar2 = (undefined1 *)0x70aaef16e8748d67;
        if (unaff_x20 != (void *)0x0) {
          puVar2 = (undefined1 *)0xc33d4c2e9c01bfd9;
        }
      }
      else {
        puVar2 = (undefined1 *)0xf57a82b25c35fe2a;
        if ((puVar5 != (undefined1 *)0xf7b3adcf918810f6) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0xfd0967b6e414afde)) {
          puVar2 = puVar1;
        }
      }
      goto LAB_001f7ad0;
    }
    if ((long)puVar5 < 0x5f3fddf8e2fc9ebc) {
      if (puVar5 == (undefined1 *)0x1f2c3b62b1679b) {
        param_1[1] = (long)param_1;
        puVar2 = (undefined1 *)0xf57a82b25c35fe2a;
      }
      else {
        puVar2 = puVar5;
        if (puVar5 == (undefined1 *)0x332dfd522f05c93c) {
          *param_1 = 0;
          param_1[1] = (long)param_1;
          return;
        }
      }
    }
    else {
      puVar3 = unaff_x26;
      puVar2 = (undefined1 *)0x8d9cde8a92cc3625;
      if ((puVar5 != (undefined1 *)0x5f3fddf8e2fc9ebc) &&
         (puVar3 = puVar4, puVar2 = puVar5, puVar5 == (undefined1 *)0x70aaef16e8748d67))
      goto LAB_001f7abc;
    }
  } while( true );
}

