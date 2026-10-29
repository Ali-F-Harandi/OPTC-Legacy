// rea decompile_all
// name: FUN_002105f4
// address: 0x2105f4
// body: available
// range: 0x2105f4-0x210873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002105f4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x20;
  void *unaff_x21;
  
  lVar1 = -0x29504ee3cf2d5633;
  if (param_1 != (void *)0x0) {
    lVar1 = 0x1db468c64d6a7ed0;
  }
  lVar2 = 0x483dcbc36ada42c4;
  do {
    while( true ) {
      while( true ) {
        while (lVar3 = lVar2, -0x29504ee3cf2d5634 < lVar3) {
          if (lVar3 < 0x483dcbc36ada42c4) {
            lVar2 = -0x56ad058abb7434bf;
            if (((lVar3 != -0x29504ee3cf2d5633) && (lVar2 = lVar3, lVar3 == 0x1db468c64d6a7ed0)) &&
               (unaff_x20 = *(void **)((long)param_1 + 8), lVar2 = -0x3cc327df2eecc1c6,
               unaff_x20 != (void *)0x0)) {
              lVar2 = 0x54c2b837d86711b8;
            }
          }
          else {
            lVar2 = -0x2e5d71d46d443370;
            if (lVar3 != 0x55dcd19dee737a1a) {
              if (lVar3 == 0x54c2b837d86711b8) {
                free(unaff_x20);
                *(undefined8 *)((long)param_1 + 8) = 0;
                lVar2 = -0x2eb8ff3123f5eabc;
              }
              else {
                lVar2 = lVar3;
                if (lVar3 == 0x483dcbc36ada42c4) {
                  lVar2 = lVar1;
                }
              }
            }
          }
        }
        if (lVar3 < -0x2eb8ff3123f5eabc) break;
        if (lVar3 == -0x2eb8ff3123f5eabc) {
          unaff_x21 = *(void **)((long)param_1 + 0x18);
          lVar2 = 0x55dcd19dee737a1a;
          if (unaff_x21 != (void *)0x0) {
            lVar2 = -0x5412c5352f1dc37a;
          }
        }
        else {
          lVar2 = lVar3;
          if (lVar3 == -0x2e5d71d46d443370) {
            free(param_1);
            lVar2 = -0x56ad058abb7434bf;
          }
        }
      }
      if (lVar3 != -0x5412c5352f1dc37a) break;
      free(unaff_x21);
      lVar2 = -0x2e5d71d46d443370;
    }
    lVar2 = -0x2eb8ff3123f5eabc;
  } while ((lVar3 == -0x3cc327df2eecc1c6) || (lVar2 = lVar3, lVar3 != -0x56ad058abb7434bf));
  return;
}

