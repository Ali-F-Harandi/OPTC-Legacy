// rea decompile_all
// name: FUN_001e5154
// address: 0x1e5154
// body: available
// range: 0x1e5154-0x1e53f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_001e5154(char *param_1,void *param_2)

{
  long lVar1;
  char *pcVar2;
  char *unaff_x21;
  size_t sVar3;
  void *local_80;
  size_t sStack_78;
  char *local_70;
  
  lVar1 = -0x3d195e45a87c496a;
  pcVar2 = param_1;
LAB_001e521c:
LAB_001e5224:
  do {
    sVar3 = (long)unaff_x21 - (long)param_1;
    do {
      while( true ) {
        while (lVar1 < -0x3494da7ac01903fa) {
          if (lVar1 == -0x5efdaaaa05774414) {
            param_2 = (void *)0x0;
            lVar1 = 0x13c4fd347c136e7f;
            goto LAB_001e5224;
          }
          if (lVar1 == -0x4d54a68c57c6c7d7) {
            local_80 = malloc(sVar3 + 1);
            lVar1 = -0x5efdaaaa05774414;
            sStack_78 = sVar3;
            if (local_80 != (void *)0x0) {
              lVar1 = -0x3494da7ac01903fa;
            }
          }
          else if (lVar1 == -0x3d195e45a87c496a) {
            lVar1 = 0x616167e75f9c95a2;
          }
        }
        if (0x14437797ebdb3d1b < lVar1) break;
        if (lVar1 == -0x3494da7ac01903fa) {
          *(undefined1 *)((long)local_80 + sStack_78) = 0;
          memcpy(local_80,param_1,sStack_78);
          param_2 = local_80;
          lVar1 = 0x13c4fd347c136e7f;
          goto LAB_001e5224;
        }
        if (lVar1 == 0x13c4fd347c136e7f) {
          return param_2;
        }
      }
      if (lVar1 == 0x14437797ebdb3d1c) {
        lVar1 = 0x616167e75f9c95a2;
        pcVar2 = local_70;
        goto LAB_001e521c;
      }
    } while (lVar1 != 0x616167e75f9c95a2);
    lVar1 = -0x4d54a68c57c6c7d7;
    unaff_x21 = pcVar2;
    local_70 = pcVar2 + 1;
    if (*pcVar2 != '\0') {
      lVar1 = 0x14437797ebdb3d1c;
    }
  } while( true );
}

