// rea decompile_all
// name: FUN_00211a18
// address: 0x211a18
// body: available
// range: 0x211a18-0x212727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00211a18(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *extraout_x1;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  puVar5 = calloc(1,0xa0);
  puVar1 = &DAT_f615808441b1dafc;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar3 = extraout_x1;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
LAB_00211b18:
  puVar8 = puVar4;
  puVar7 = puVar3;
  puVar3 = puVar7;
  puVar4 = puVar8;
  if ((long)puVar8 < 0x887e73b2c28c6a1) {
    if (-0x378643ce451a44ed < (long)puVar8) {
      if ((long)puVar8 < -0x124103c739306402) {
        if ((long)puVar8 < -0x2ddd98d59c65e2d2) {
          if (puVar8 == (undefined1 *)0xc879bc31bae5bb14) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[0x10] = uVar6;
            puVar4 = (undefined1 *)0x8500be9b057d300e;
            if (iVar2 != 0) {
              puVar4 = &DAT_c45038db124ae016;
            }
          }
          else if (puVar8 == (undefined1 *)0xc89737e2f8768a05) goto LAB_00212360;
          goto LAB_00211b18;
        }
        if (puVar8 == (undefined1 *)0xd222672a639a1d2e) {
          uVar6 = FUN_0020eaec(param_1);
          iVar2 = *param_1;
          puVar5[2] = uVar6;
          puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0xaa46adf0a78af8c7;
          }
          goto LAB_00211b18;
        }
        if (puVar8 != (undefined1 *)0xe48eaf6f29f5caa2) {
          if (puVar8 == (undefined1 *)0xe7622641fcb090c6) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[0x12] = uVar6;
            puVar4 = (undefined1 *)0x34ee749c3dc3cf5c;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0x87b1ff2df68e38ae;
            }
          }
          goto LAB_00211b18;
        }
      }
      else {
        if ((long)puVar8 < -0x9c4c91856260990) {
          if (puVar8 == (undefined1 *)0xedbefc38c6cf9bfe) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[0xc] = uVar6;
            puVar4 = (undefined1 *)0x7d8bf94548220fb8;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0x77f0428eaa711148;
            }
          }
          else if (puVar8 == (undefined1 *)0xf54c5df74fcabc41) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[4] = uVar6;
            puVar4 = (undefined1 *)0x6b5051bf1aed633d;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0xc23f84056fd30bd6;
            }
          }
          else if (puVar8 == &DAT_f615808441b1dafc) {
            *param_1 = 2;
            puVar3 = (undefined8 *)0x0;
            puVar4 = (undefined1 *)0x940bdddd24f52ce3;
          }
          goto LAB_00211b18;
        }
        if (puVar8 == (undefined1 *)0xf63b36e7a9d9f670) {
          uVar6 = thunk_FUN_00210874(param_1);
          iVar2 = *param_1;
          puVar5[3] = uVar6;
          puVar4 = (undefined1 *)0xf54c5df74fcabc41;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
          }
          goto LAB_00211b18;
        }
        if (puVar8 != (undefined1 *)0xf6c71d76f8b48eb9) {
          if (puVar8 == (undefined1 *)0x52cde6c2dea1be4) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[8] = uVar6;
            puVar4 = (undefined1 *)0x5ece82223eee3411;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0x49b9b00eeff4c15a;
            }
          }
          goto LAB_00211b18;
        }
      }
LAB_00211afc:
      FUN_00211958(puVar5);
      puVar3 = (undefined8 *)0x0;
      puVar4 = (undefined1 *)0x940bdddd24f52ce3;
      goto LAB_00211b18;
    }
    if ((long)puVar8 < -0x55b9520f58750739) {
      if ((long)puVar8 < -0x6bf42222db0ad31d) {
        if (puVar8 == (undefined1 *)0x8500be9b057d300e) {
          uVar6 = FUN_0020f020(param_1,0x100);
          iVar2 = *param_1;
          puVar5[0x11] = uVar6;
          puVar4 = (undefined1 *)0xe7622641fcb090c6;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0xc0f51250277e5cfd;
          }
        }
        else {
          puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
          if ((puVar8 != (undefined1 *)0x87b1ff2df68e38ae) &&
             (puVar4 = puVar8, puVar8 == (undefined1 *)0x8e3a3d610d847caf)) goto LAB_00212360;
        }
      }
      else if (puVar8 == (undefined1 *)0x960858df0b0de441) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[0xf] = uVar6;
        puVar4 = (undefined1 *)0xc879bc31bae5bb14;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x36f07785a64d7584;
        }
      }
      else if (puVar8 == (undefined1 *)0xa865ab623572e331) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[0xb] = uVar6;
        puVar4 = (undefined1 *)0xedbefc38c6cf9bfe;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x5039187a35dab08d;
        }
      }
      else if (puVar8 == (undefined1 *)0x940bdddd24f52ce3) {
        return puVar7;
      }
      goto LAB_00211b18;
    }
    if ((long)puVar8 < -0x3f0aedafd881a303) {
      if (puVar8 == (undefined1 *)0xaa46adf0a78af8c7) goto LAB_00211afc;
      puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
      if ((puVar8 == (undefined1 *)0xba8fbc7d3623138d) ||
         (puVar4 = puVar8, puVar8 != (undefined1 *)0xbf711ec4fafe862e)) goto LAB_00211b18;
    }
    else {
      puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
      if (((puVar8 == (undefined1 *)0xc0f51250277e5cfd) ||
          (puVar8 == (undefined1 *)0xc23f84056fd30bd6)) ||
         (puVar4 = puVar8, puVar8 != &DAT_c45038db124ae016)) goto LAB_00211b18;
    }
  }
  else if ((long)puVar8 < 0x418b7d3c908df894) {
    if ((long)puVar8 < 0x2ce2edddaf334d81) {
      if ((long)puVar8 < 0x1cba5f82f77e481f) {
        puVar4 = puVar1;
        if ((puVar8 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar4 = puVar8, puVar8 == (undefined1 *)0x125dd2cc844aecb4)) {
          uVar6 = FUN_00210874(param_1);
          iVar2 = *param_1;
          *puVar5 = uVar6;
          puVar4 = (undefined1 *)0x353e7cd16df664a2;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
          }
        }
      }
      else if (puVar8 == (undefined1 *)0x1cba5f82f77e481f) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[6] = uVar6;
        puVar4 = (undefined1 *)0x312910f1547c7c77;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x3b36a7a007b21166;
        }
      }
      else {
        puVar3 = puVar5;
        puVar4 = (undefined1 *)0x940bdddd24f52ce3;
        if ((puVar8 != (undefined1 *)0x22f3f9cf91cbb9a6) &&
           (puVar3 = puVar7, puVar4 = puVar8, puVar8 == (undefined1 *)0x29ff0ff794febe2e))
        goto LAB_00212360;
      }
      goto LAB_00211b18;
    }
    if ((long)puVar8 < 0x353e7cd16df664a2) {
      if (puVar8 == (undefined1 *)0x2ce2edddaf334d81) goto LAB_00211afc;
      if (puVar8 == (undefined1 *)0x312910f1547c7c77) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[7] = uVar6;
        puVar4 = (undefined1 *)0x52cde6c2dea1be4;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0xc89737e2f8768a05;
        }
      }
      else if (puVar8 == (undefined1 *)0x34ee749c3dc3cf5c) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[0x13] = uVar6;
        puVar4 = (undefined1 *)0x22f3f9cf91cbb9a6;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x29ff0ff794febe2e;
        }
      }
      goto LAB_00211b18;
    }
    if (puVar8 == (undefined1 *)0x353e7cd16df664a2) {
      uVar6 = FUN_0020f020(param_1,0x100);
      iVar2 = *param_1;
      puVar5[1] = uVar6;
      puVar4 = (undefined1 *)0xd222672a639a1d2e;
      if (iVar2 != 0) {
        puVar4 = (undefined1 *)0x2ce2edddaf334d81;
      }
      goto LAB_00211b18;
    }
    puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
    if ((puVar8 == (undefined1 *)0x36f07785a64d7584) ||
       (puVar4 = puVar8, puVar8 != (undefined1 *)0x3b36a7a007b21166)) goto LAB_00211b18;
  }
  else if ((long)puVar8 < 0x696b554ab6b2c8c5) {
    if (0x5039187a35dab08c < (long)puVar8) {
      puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
      if (((puVar8 != (undefined1 *)0x5039187a35dab08d) &&
          (puVar8 != (undefined1 *)0x58b842c6f86d5804)) &&
         (puVar4 = puVar8, puVar8 == (undefined1 *)0x5ece82223eee3411)) {
        uVar6 = FUN_0020f020(param_1,0x100);
        iVar2 = *param_1;
        puVar5[9] = uVar6;
        puVar4 = (undefined1 *)0x7e713fa43f38c582;
        if (iVar2 != 0) {
          puVar4 = (undefined1 *)0x58b842c6f86d5804;
        }
      }
      goto LAB_00211b18;
    }
    if (puVar8 == (undefined1 *)0x418b7d3c908df894) {
      uVar6 = FUN_0020f020(param_1,0x100);
      iVar2 = *param_1;
      puVar5[0xe] = uVar6;
      puVar4 = (undefined1 *)0x960858df0b0de441;
      if (iVar2 != 0) {
        puVar4 = (undefined1 *)0x8e3a3d610d847caf;
      }
      goto LAB_00211b18;
    }
    if (puVar8 != (undefined1 *)0x49b9b00eeff4c15a) goto LAB_00211b18;
  }
  else {
    if (0x77f0428eaa711147 < (long)puVar8) {
      puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
      if (puVar8 != (undefined1 *)0x77f0428eaa711148) {
        if (puVar8 == (undefined1 *)0x7d8bf94548220fb8) {
          uVar6 = FUN_0020f020(param_1,0x100);
          iVar2 = *param_1;
          puVar5[0xd] = uVar6;
          puVar4 = (undefined1 *)0x418b7d3c908df894;
          if (iVar2 != 0) {
            puVar4 = (undefined1 *)0xba8fbc7d3623138d;
          }
        }
        else {
          puVar4 = puVar8;
          if (puVar8 == (undefined1 *)0x7e713fa43f38c582) {
            uVar6 = FUN_0020f020(param_1,0x100);
            iVar2 = *param_1;
            puVar5[10] = uVar6;
            puVar4 = (undefined1 *)0xa865ab623572e331;
            if (iVar2 != 0) {
              puVar4 = (undefined1 *)0x75df443d79079721;
            }
          }
        }
      }
      goto LAB_00211b18;
    }
    if (puVar8 == (undefined1 *)0x696b554ab6b2c8c5) goto LAB_00211afc;
    if (puVar8 == (undefined1 *)0x6b5051bf1aed633d) {
      uVar6 = FUN_0020f020(param_1,0x100);
      iVar2 = *param_1;
      puVar5[5] = uVar6;
      puVar4 = (undefined1 *)0x1cba5f82f77e481f;
      if (iVar2 != 0) {
        puVar4 = (undefined1 *)0xbf711ec4fafe862e;
      }
      goto LAB_00211b18;
    }
    if (puVar8 != (undefined1 *)0x75df443d79079721) goto LAB_00211b18;
  }
LAB_00212360:
  puVar3 = puVar7;
  puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
  goto LAB_00211b18;
}

