// rea decompile_all
// name: FUN_00200efc
// address: 0x200efc
// body: available
// range: 0x200efc-0x201cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x201cf4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00200efc(long param_1,long param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long in_x10;
  long lVar11;
  byte unaff_w28;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
  int *local_b8;
  byte local_ac;
  byte local_94;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
  if (param_2 != 0) {
    puVar1 = (undefined1 *)0x353e7cd16df664a2;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if (param_3 == (undefined4 *)0x0 || param_1 == 0) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  lVar8 = param_2;
  puVar9 = (undefined1 *)0x887e73b2c28c6a1;
LAB_00201044:
  lVar11 = in_x10;
  puVar10 = puVar9;
  lVar7 = lVar8;
  lVar8 = lVar7;
  puVar9 = puVar10;
  in_x10 = lVar11;
  if (0x887e73b2c28c6a0 < (long)puVar10) {
    if ((long)puVar10 < 0x418b7d3c908df894) {
      if ((long)puVar10 < 0x2ce2edddaf334d81) {
        if ((long)puVar10 < 0x1cba5f82f77e481f) {
          puVar9 = puVar2;
          if ((puVar10 != (undefined1 *)0x887e73b2c28c6a1) &&
             (puVar9 = puVar10, puVar10 == (undefined1 *)0x125dd2cc844aecb4)) {
            puVar9 = puVar1;
          }
        }
        else {
          puVar9 = (undefined1 *)0xbf711ec4fafe862e;
          if (puVar10 != (undefined1 *)0x1cba5f82f77e481f) {
            if (puVar10 == (undefined1 *)0x22f3f9cf91cbb9a6) {
              puVar9 = (undefined1 *)0xe48eaf6f29f5caa2;
              if (DAT_0021fb15 == '\0') {
                puVar9 = (undefined1 *)0x8e3a3d610d847caf;
              }
            }
            else {
              puVar9 = puVar10;
              if (puVar10 == (undefined1 *)0x29ff0ff794febe2e) {
                puVar9 = (undefined1 *)0xa865ab623572e331;
              }
            }
          }
        }
        goto LAB_00201044;
      }
      if ((long)puVar10 < 0x353e7cd16df664a2) {
        lVar8 = param_1;
        puVar9 = (undefined1 *)0x6b5051bf1aed633d;
        if (puVar10 != (undefined1 *)0x2ce2edddaf334d81) {
          if (puVar10 == (undefined1 *)0x312910f1547c7c77) {
            DAT_0021fb14 = 0;
            local_70 = 0;
            local_d8 = (char *)FUN_001e5520(local_d0,&DAT_0021ef20,&local_70);
            bVar5 = local_d8 == (char *)0x0;
            puVar9 = (undefined1 *)0xc89737e2f8768a05;
            puVar10 = (undefined1 *)0x52cde6c2dea1be4;
LAB_00201c10:
            lVar8 = lVar7;
            if (!bVar5) {
              puVar9 = puVar10;
            }
          }
          else {
            lVar8 = lVar7;
            puVar9 = puVar10;
            if (puVar10 == (undefined1 *)0x34ee749c3dc3cf5c) {
              puVar9 = (undefined1 *)0x29ff0ff794febe2e;
              if (DAT_0021fb15 == '\0') {
                puVar9 = (undefined1 *)0x75df443d79079721;
              }
            }
          }
        }
        goto LAB_00201044;
      }
      if (puVar10 == (undefined1 *)0x353e7cd16df664a2) {
        local_c8 = FUN_001e16c4(param_2);
        bVar5 = local_c8 == 0;
        puVar10 = (undefined1 *)0xd222672a639a1d2e;
        puVar9 = (undefined1 *)0x2ce2edddaf334d81;
        goto LAB_0020103c;
      }
      if (puVar10 != (undefined1 *)0x36f07785a64d7584) {
        if (puVar10 == (undefined1 *)0x3b36a7a007b21166) {
          puVar9 = (undefined1 *)0x312910f1547c7c77;
          goto LAB_00201c7c;
        }
        goto LAB_00201044;
      }
    }
    else if ((long)puVar10 < 0x696b554ab6b2c8c5) {
      if ((long)puVar10 < 0x5039187a35dab08d) {
        puVar9 = (undefined1 *)0xba8fbc7d3623138d;
        if ((puVar10 == (undefined1 *)0x418b7d3c908df894) ||
           (puVar9 = puVar10, puVar10 != (undefined1 *)0x49b9b00eeff4c15a)) goto LAB_00201044;
      }
      else if (puVar10 != (undefined1 *)0x5039187a35dab08d) {
        if (puVar10 == (undefined1 *)0x58b842c6f86d5804) {
          iVar6 = FUN_00212730(0,1,&DAT_0021fb14);
          puVar9 = (undefined1 *)0x34ee749c3dc3cf5c;
          puVar10 = (undefined1 *)0x7e713fa43f38c582;
          bVar5 = iVar6 == 0;
          goto LAB_00201c10;
        }
        if (puVar10 == (undefined1 *)0x5ece82223eee3411) goto LAB_00201794;
        goto LAB_00201044;
      }
    }
    else {
      if ((long)puVar10 < 0x77f0428eaa711148) {
        lVar8 = param_1;
        puVar9 = (undefined1 *)0x6b5051bf1aed633d;
        if (puVar10 != (undefined1 *)0x696b554ab6b2c8c5) {
          if (puVar10 == (undefined1 *)0x6b5051bf1aed633d) {
            lVar8 = lVar7;
            puVar9 = (undefined1 *)0xbf711ec4fafe862e;
            local_d0 = lVar7;
          }
          else {
            lVar8 = lVar7;
            puVar9 = puVar10;
            if (puVar10 == (undefined1 *)0x75df443d79079721) {
              puVar9 = (undefined1 *)0xa865ab623572e331;
LAB_00201c7c:
              DAT_0021ef20 = DAT_0021ef20 ^ 0xf0;
              DAT_0021ef21 = DAT_0021ef21 ^ 0xf0;
              DAT_0021fb15 = '\x01';
              lVar8 = lVar7;
            }
          }
        }
        goto LAB_00201044;
      }
      if (puVar10 != (undefined1 *)0x77f0428eaa711148) {
        puVar9 = (undefined1 *)0xba8fbc7d3623138d;
        if ((puVar10 != (undefined1 *)0x7d8bf94548220fb8) &&
           (puVar9 = puVar10, puVar10 == (undefined1 *)0x7e713fa43f38c582)) {
LAB_00201794:
          puVar9 = (undefined1 *)0x58b842c6f86d5804;
        }
        goto LAB_00201044;
      }
    }
    unaff_w28 = false;
LAB_002019a0:
    puVar9 = &DAT_c45038db124ae016;
    goto LAB_00201044;
  }
  if (-0x378643ce451a44ed < (long)puVar10) {
    if (-0x124103c739306403 < (long)puVar10) {
      if ((long)puVar10 < -0x9c4c91856260990) {
        if (puVar10 == (undefined1 *)0xedbefc38c6cf9bfe) {
          lVar8 = strtol(local_e0,&local_78,10);
          param_3[1] = (int)lVar8;
          bVar5 = local_78 == local_e0 || *local_b8 == 0x22;
          puVar10 = (undefined1 *)0x7d8bf94548220fb8;
          puVar9 = (undefined1 *)0x77f0428eaa711148;
LAB_00201a74:
          lVar8 = lVar7;
          if (!bVar5) {
            puVar9 = puVar10;
          }
          goto LAB_00201044;
        }
        if (puVar10 == (undefined1 *)0xf54c5df74fcabc41) {
          local_90 = lVar11 + local_c8;
          local_88 = FUN_001e238c(local_90,param_2);
          bVar5 = local_88 == 0;
          puVar10 = (undefined1 *)0xc23f84056fd30bd6;
          puVar9 = (undefined1 *)0xf6c71d76f8b48eb9;
          goto LAB_0020103c;
        }
        if (puVar10 != &DAT_f615808441b1dafc) goto LAB_00201044;
      }
      else if (puVar10 != (undefined1 *)0xf63b36e7a9d9f670) {
        lVar8 = local_90;
        puVar9 = (undefined1 *)0x6b5051bf1aed633d;
        if ((puVar10 != (undefined1 *)0xf6c71d76f8b48eb9) &&
           (lVar8 = lVar7, puVar9 = puVar10, puVar10 == (undefined1 *)0x52cde6c2dea1be4)) {
          local_78 = (char *)0x0;
          local_b8 = (int *)__errno();
          *local_b8 = 0;
          lVar8 = strtol(local_d8,&local_78,10);
          *param_3 = (int)lVar8;
          bVar5 = local_78 == local_d8 || *local_b8 == 0x22;
          puVar10 = (undefined1 *)0x5ece82223eee3411;
          puVar9 = (undefined1 *)0x49b9b00eeff4c15a;
          goto LAB_00201a74;
        }
        goto LAB_00201044;
      }
      bVar4 = 0;
LAB_00201ac0:
      puVar9 = (undefined1 *)0xc0f51250277e5cfd;
      local_94 = bVar4;
      goto LAB_00201044;
    }
    if ((long)puVar10 < -0x2ddd98d59c65e2d2) {
      if (puVar10 == (undefined1 *)0xc879bc31bae5bb14) {
        lVar7 = strtol(local_e8,&local_78,10);
        param_3[2] = (int)lVar7;
        unaff_w28 = *local_b8 != 0x22 && local_78 != local_e8;
        goto LAB_002019a0;
      }
      if (puVar10 == (undefined1 *)0xc89737e2f8768a05) {
        bVar4 = 0;
LAB_0020183c:
        puVar9 = (undefined1 *)0x8500be9b057d300e;
        in_x10 = lVar11;
        local_ac = bVar4;
      }
    }
    else {
      if (puVar10 == (undefined1 *)0xd222672a639a1d2e) {
        local_80 = FUN_001e238c(param_1,param_2);
        bVar5 = local_80 == 0;
        puVar10 = (undefined1 *)0xaa46adf0a78af8c7;
        puVar9 = (undefined1 *)0xf63b36e7a9d9f670;
        goto LAB_0020103c;
      }
      puVar9 = (undefined1 *)0x960858df0b0de441;
      if ((puVar10 != (undefined1 *)0xe48eaf6f29f5caa2) &&
         (puVar9 = puVar10, puVar10 == (undefined1 *)0xe7622641fcb090c6)) {
        puVar9 = (undefined1 *)0x87b1ff2df68e38ae;
        if (DAT_0021fb15 == '\0') {
          puVar9 = (undefined1 *)0x3b36a7a007b21166;
        }
      }
    }
    goto LAB_00201044;
  }
  if ((long)puVar10 < -0x55b9520f58750739) {
    if ((long)puVar10 < -0x71c5c29ef27b8351) {
      bVar4 = local_ac;
      if (puVar10 == (undefined1 *)0x8500be9b057d300e) goto LAB_00201ac0;
      if (puVar10 == (undefined1 *)0x87b1ff2df68e38ae) {
        puVar9 = (undefined1 *)0x312910f1547c7c77;
      }
      goto LAB_00201044;
    }
    if (puVar10 == (undefined1 *)0x8e3a3d610d847caf) {
      puVar9 = (undefined1 *)0x960858df0b0de441;
      goto LAB_00201c7c;
    }
    if (puVar10 == (undefined1 *)0x960858df0b0de441) {
      DAT_0021fb14 = 0;
      local_e8 = (char *)FUN_001e5520(0,&DAT_0021ef20,&local_70);
      bVar5 = local_e8 == (char *)0x0;
      puVar10 = (undefined1 *)0xc879bc31bae5bb14;
      puVar9 = (undefined1 *)0x36f07785a64d7584;
    }
    else {
      if (puVar10 != (undefined1 *)0xa865ab623572e331) goto LAB_00201044;
      DAT_0021fb14 = 0;
      local_e0 = (char *)FUN_001e5520(0,&DAT_0021ef20,&local_70);
      bVar5 = local_e0 == (char *)0x0;
      puVar10 = (undefined1 *)0xedbefc38c6cf9bfe;
      puVar9 = (undefined1 *)0x5039187a35dab08d;
    }
  }
  else {
    if (-0x3f0aedafd881a304 < (long)puVar10) {
      puVar9 = (undefined1 *)0xf54c5df74fcabc41;
      in_x10 = local_88;
      if (puVar10 != (undefined1 *)0xc23f84056fd30bd6) {
        bVar4 = unaff_w28;
        if (puVar10 == &DAT_c45038db124ae016) goto LAB_0020183c;
        puVar9 = puVar10;
        in_x10 = lVar11;
        if (puVar10 == (undefined1 *)0xc0f51250277e5cfd) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return local_94 & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      goto LAB_00201044;
    }
    puVar9 = (undefined1 *)0xf54c5df74fcabc41;
    in_x10 = local_80;
    if (puVar10 == (undefined1 *)0xaa46adf0a78af8c7) goto LAB_00201044;
    if (puVar10 != (undefined1 *)0xba8fbc7d3623138d) {
      puVar9 = puVar10;
      in_x10 = lVar11;
      if (puVar10 == (undefined1 *)0xbf711ec4fafe862e) {
        iVar6 = FUN_00212730(0,1,&DAT_0021fb14);
        puVar10 = (undefined1 *)0x1cba5f82f77e481f;
        puVar9 = (undefined1 *)0xe7622641fcb090c6;
        bVar5 = iVar6 == 0;
        goto LAB_0020103c;
      }
      goto LAB_00201044;
    }
    iVar6 = FUN_00212730(0,1,&DAT_0021fb14);
    bVar5 = iVar6 == 0;
    puVar10 = (undefined1 *)0x418b7d3c908df894;
    puVar9 = (undefined1 *)0x22f3f9cf91cbb9a6;
  }
LAB_0020103c:
  in_x10 = lVar11;
  if (!bVar5) {
    puVar9 = puVar10;
  }
  goto LAB_00201044;
}

