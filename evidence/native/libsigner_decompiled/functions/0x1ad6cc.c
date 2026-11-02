// rea decompile_all
// name: FUN_001ad6cc
// address: 0x1ad6cc
// body: available
// range: 0x1ad6cc-0x1adf1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ad6cc(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  void *local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  
  puVar1 = (undefined1 *)0x36f07785a64d7584;
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined1 *)0xc879bc31bae5bb14;
  }
  puVar2 = puVar1;
  puVar3 = (undefined1 *)0x36f07785a64d7584;
  puVar6 = (undefined1 *)0x960858df0b0de441;
LAB_001ad7b4:
  while( true ) {
    while (puVar8 = puVar6, puVar7 = puVar3, puVar5 = puVar2, puVar2 = puVar5, puVar3 = puVar7,
          puVar6 = puVar8, (long)puVar8 < 0xc7bf249d1db72b2) {
      if ((long)puVar8 < -0x378643ce451a44ec) {
        if ((long)puVar8 < -0x69f7a720f4f21bbf) {
          if (puVar8 == (undefined1 *)0x8500be9b057d300e) {
            puVar2 = (undefined1 *)0x0;
            puVar6 = (undefined1 *)0xc0f51250277e5cfd;
          }
          else {
            puVar2 = unaff_x21;
            puVar6 = (undefined1 *)0xc0f51250277e5cfd;
            if ((puVar8 != (undefined1 *)0x87b1ff2df68e38ae) &&
               (puVar2 = puVar5, puVar6 = puVar8, puVar8 == (undefined1 *)0x940bdddd24f52ce3)) {
              puVar6 = (undefined1 *)0x32f4713bcaf93571;
            }
          }
        }
        else if ((long)puVar8 < -0x3f0aedafd881a303) {
          puVar6 = puVar1;
          if ((puVar8 != (undefined1 *)0x960858df0b0de441) &&
             (puVar6 = puVar8, puVar8 == (undefined1 *)0xbfa497f00132becf)) {
            return;
          }
        }
        else if (puVar8 == (undefined1 *)0xc0f51250277e5cfd) {
          FUN_001ad6cc(param_1[3] + (long)puVar5 * 0x30);
          unaff_x21 = puVar5 + 1;
          puVar6 = (undefined1 *)0x87b1ff2df68e38ae;
          if ((undefined1 *)(ulong)*(uint *)(param_1 + 2) <= unaff_x21) {
            puVar6 = (undefined1 *)0xe7622641fcb090c6;
          }
        }
        else if (puVar8 == &DAT_c45038db124ae016) {
          puVar6 = (undefined1 *)0x34ee749c3dc3cf5c;
        }
      }
      else if ((long)puVar8 < -0x189dd9be034f6f3a) {
        if (puVar8 == (undefined1 *)0xc879bc31bae5bb14) {
          bVar4 = (int)param_1[2] == 0;
          puVar6 = &DAT_c45038db124ae016;
          puVar5 = (undefined1 *)0x8500be9b057d300e;
          goto LAB_001ad7a8;
        }
        puVar6 = (undefined1 *)0xc7bf249d1db72b2;
        if ((puVar8 != (undefined1 *)0xce95d05271a8da34) &&
           (puVar6 = puVar8, puVar8 == (undefined1 *)0xe48eaf6f29f5caa2)) {
          *(undefined4 *)(param_1 + 2) = 0;
          puVar6 = (undefined1 *)0x940bdddd24f52ce3;
          if ((int)param_1[4] != 0) {
            puVar6 = (undefined1 *)0x3007aa9d32d99be8;
          }
        }
      }
      else if ((long)puVar8 < -0x25a3e9f6f44c50c) {
        puVar6 = (undefined1 *)0x34ee749c3dc3cf5c;
        if ((puVar8 != (undefined1 *)0xe7622641fcb090c6) &&
           (puVar6 = puVar8, puVar8 == (undefined1 *)0xed1f071ea6fe1ede)) {
          free(local_78);
          param_1[1] = 0;
          puVar6 = (undefined1 *)0xbfa497f00132becf;
        }
      }
      else {
        puVar6 = (undefined1 *)0x32f4713bcaf93571;
        if ((puVar8 != (undefined1 *)0xfda5c16090bb3af4) &&
           (puVar6 = puVar8, puVar8 == (undefined1 *)0xfeee7e65b66b0f06)) {
          free(local_80);
          *param_1 = 0;
          puVar6 = (undefined1 *)0x3b16db62a3c2f4fb;
        }
      }
    }
    if (0x31b9d74c89a90fe2 < (long)puVar8) break;
    if ((long)puVar8 < 0x27963d1423e000f6) {
      if (puVar8 == (undefined1 *)0xc7bf249d1db72b2) {
        local_80 = (void *)*param_1;
        *(undefined4 *)(param_1 + 4) = 0;
        puVar6 = (undefined1 *)0x27963d1423e000f6;
        if (local_80 != (void *)0x0) {
          puVar6 = (undefined1 *)0xfeee7e65b66b0f06;
        }
      }
      else if (puVar8 == (undefined1 *)0xfb13253120e52d5) {
        FUN_001ad6cc(param_1[5] + (long)puVar7 * 0x30);
        unaff_x22 = puVar7 + 1;
        puVar6 = (undefined1 *)0x31b9d74c89a90fe3;
        if ((undefined1 *)(ulong)*(uint *)(param_1 + 4) <= unaff_x22) {
          puVar6 = (undefined1 *)0xfda5c16090bb3af4;
        }
      }
      else if (puVar8 == (undefined1 *)0x22f3f9cf91cbb9a6) {
        free(local_68);
        param_1[3] = 0;
        puVar6 = (undefined1 *)0xe48eaf6f29f5caa2;
      }
    }
    else {
      puVar6 = (undefined1 *)0x3b16db62a3c2f4fb;
      if (((puVar8 != (undefined1 *)0x27963d1423e000f6) &&
          (puVar6 = (undefined1 *)0xe48eaf6f29f5caa2, puVar8 != (undefined1 *)0x29ff0ff794febe2e))
         && (puVar6 = puVar8, puVar8 == (undefined1 *)0x3007aa9d32d99be8)) {
        puVar3 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0xfb13253120e52d5;
      }
    }
  }
  if ((long)puVar8 < 0x36f07785a64d7584) {
    puVar3 = unaff_x22;
    puVar6 = (undefined1 *)0xfb13253120e52d5;
    if (puVar8 == (undefined1 *)0x31b9d74c89a90fe3) goto LAB_001ad7b4;
    if (puVar8 == (undefined1 *)0x32f4713bcaf93571) {
      local_70 = (void *)param_1[5];
      puVar3 = puVar7;
      puVar6 = (undefined1 *)0xce95d05271a8da34;
      if (local_70 != (void *)0x0) {
        puVar6 = (undefined1 *)0x65536dc2a8308acd;
      }
      goto LAB_001ad7b4;
    }
    puVar3 = puVar7;
    puVar6 = puVar8;
    if (puVar8 != (undefined1 *)0x34ee749c3dc3cf5c) goto LAB_001ad7b4;
    local_68 = (void *)param_1[3];
    bVar4 = local_68 == (void *)0x0;
    puVar6 = (undefined1 *)0x29ff0ff794febe2e;
    puVar5 = (undefined1 *)0x22f3f9cf91cbb9a6;
  }
  else {
    if ((long)puVar8 < 0x3b16db62a3c2f4fb) {
      puVar6 = (undefined1 *)0xbfa497f00132becf;
      if ((puVar8 != (undefined1 *)0x36f07785a64d7584) &&
         (puVar6 = puVar8, puVar8 == (undefined1 *)0x3ace195dd3930386)) {
        puVar6 = (undefined1 *)0xbfa497f00132becf;
      }
      goto LAB_001ad7b4;
    }
    if (puVar8 != (undefined1 *)0x3b16db62a3c2f4fb) {
      if (puVar8 == (undefined1 *)0x65536dc2a8308acd) {
        free(local_70);
        param_1[5] = 0;
        puVar6 = (undefined1 *)0xc7bf249d1db72b2;
      }
      goto LAB_001ad7b4;
    }
    local_78 = (void *)param_1[1];
    bVar4 = local_78 == (void *)0x0;
    puVar6 = (undefined1 *)0x3ace195dd3930386;
    puVar5 = (undefined1 *)0xed1f071ea6fe1ede;
  }
LAB_001ad7a8:
  puVar3 = puVar7;
  if (!bVar4) {
    puVar6 = puVar5;
  }
  goto LAB_001ad7b4;
}

