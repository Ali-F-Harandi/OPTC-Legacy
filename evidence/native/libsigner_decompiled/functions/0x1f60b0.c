// rea decompile_all
// name: FUN_001f60b0
// address: 0x1f60b0
// body: available
// range: 0x1f60b0-0x1f6453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f60b0(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *unaff_x20;
  void *unaff_x27;
  void *unaff_x28;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = (void *)0x27963d1423e000f6;
  if (pvVar5 != (void *)0x0) {
    pvVar1 = (void *)0xfeee7e65b66b0f06;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)0xc7bf249d1db72b2;
LAB_001f617c:
  do {
    while (pvVar6 = pvVar2, pvVar4 = pvVar3, pvVar3 = pvVar4, (long)pvVar6 < 0xc7bf249d1db72b2) {
      if ((long)pvVar6 < -0x29504ee3cf2d5633) {
        if (pvVar6 == (void *)0xbfa497f00132becf) {
          unaff_x20 = *(void **)((long)unaff_x28 + 8);
          pvVar2 = (void *)0x5eda44100212fa2c;
          if (unaff_x20 != (void *)0x0) {
            pvVar2 = (void *)0xd108a90e38b691a1;
          }
        }
        else if (pvVar6 == (void *)0xcb31a60e6206eed1) {
          free(unaff_x28);
          unaff_x27 = (void *)*param_1;
          pvVar2 = (void *)0xd6afb11c30d2a9cd;
          if (unaff_x27 != (void *)0x0) {
            pvVar2 = (void *)0x483dcbc36ada42c4;
          }
        }
        else {
          pvVar2 = pvVar6;
          if (pvVar6 == (void *)0xd108a90e38b691a1) {
            free(unaff_x20);
LAB_001f6168:
            pvVar3 = pvVar4;
            pvVar2 = (void *)0xcb31a60e6206eed1;
          }
        }
      }
      else {
        pvVar2 = (void *)0x1db468c64d6a7ed0;
        if (pvVar6 != (void *)0xd6afb11c30d2a9cd) {
          if (pvVar6 == (void *)0xed1f071ea6fe1ede) {
            param_1[1] = (long)param_1;
            pvVar2 = (void *)0xbfa497f00132becf;
          }
          else {
            pvVar2 = pvVar6;
            if (pvVar6 == (void *)0xfeee7e65b66b0f06) {
              pvVar3 = pvVar5;
              pvVar2 = (void *)0x3b16db62a3c2f4fb;
            }
          }
        }
      }
    }
    if (0x3b16db62a3c2f4fa < (long)pvVar6) {
      if (pvVar6 == (void *)0x3b16db62a3c2f4fb) {
        pvVar2 = (void *)0xed1f071ea6fe1ede;
        if (*(long *)((long)pvVar4 + 0x10) != 0) {
          pvVar2 = (void *)0x3ace195dd3930386;
        }
        *param_1 = *(long *)((long)pvVar4 + 0x10);
        unaff_x28 = pvVar4;
      }
      else {
        pvVar3 = unaff_x27;
        pvVar2 = (void *)0x3b16db62a3c2f4fb;
        if ((pvVar6 != (void *)0x483dcbc36ada42c4) &&
           (pvVar3 = pvVar4, pvVar2 = pvVar6, pvVar6 == (void *)0x5eda44100212fa2c))
        goto LAB_001f6168;
      }
      goto LAB_001f617c;
    }
    if ((long)pvVar6 < 0x27963d1423e000f6) {
      pvVar2 = pvVar1;
      if ((pvVar6 != (void *)0xc7bf249d1db72b2) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x1db468c64d6a7ed0)) {
        *param_1 = 0;
        param_1[1] = (long)param_1;
        return;
      }
    }
    else {
      pvVar2 = (void *)0x1db468c64d6a7ed0;
      if ((pvVar6 != (void *)0x27963d1423e000f6) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x3ace195dd3930386)) {
        pvVar2 = (void *)0xbfa497f00132becf;
      }
    }
  } while( true );
}

