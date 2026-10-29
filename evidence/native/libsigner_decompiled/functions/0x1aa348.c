// rea decompile_all
// name: FUN_001aa348
// address: 0x1aa348
// body: available
// range: 0x1aa348-0x1ab99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ab99c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001aa348(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  void *__ptr;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar6;
  ulong unaff_x28;
  long local_128;
  long local_120;
  long local_118;
  ulong local_110;
  ulong local_108;
  undefined4 local_fc;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  undefined2 *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  long local_b0;
  uint local_a4;
  ulong local_a0;
  long local_98;
  ulong local_90;
  undefined1 *local_88;
  long local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __ptr = (void *)FUN_001e5154(param_2);
  puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
  if (__ptr != (void *)0x0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
  local_88 = puVar1;
  local_78 = __ptr;
LAB_001aa444:
  puVar5 = puVar4;
  puVar4 = puVar5;
  if ((long)puVar5 < 0x887e73b2c28c6a1) {
    uVar6 = local_a0;
    if ((long)puVar5 < -0x34ce59f19df9112f) {
      if ((long)puVar5 < -0x45704382c9dcec73) {
        if (-0x69f7a720f4f21bc0 < (long)puVar5) {
          if ((long)puVar5 < -0x56ad058abb7434bf) {
            if (puVar5 == (undefined1 *)0x960858df0b0de441) {
LAB_001ab3f4:
              unaff_x21 = 0;
              unaff_x26 = 0;
              unaff_x19 = 0;
              unaff_x27 = 0;
              unaff_x28 = local_90;
              goto LAB_001ab850;
            }
            if (puVar5 == (undefined1 *)0xa865ab623572e331) {
              puVar4 = (undefined1 *)0x5039187a35dab08d;
              goto LAB_001aa430;
            }
          }
          else if (puVar5 == (undefined1 *)0xa952fa75448bcb41) {
            puVar4 = (undefined1 *)0x53e14c28908eeeeb;
            if (DAT_0021fa82 == '\0') {
              puVar4 = (undefined1 *)0x22f3f9cf91cbb9a6;
            }
          }
          else if (puVar5 == (undefined1 *)0xaa46adf0a78af8c7) {
LAB_001ab3d0:
            local_a4 = 0;
            *param_1 = 2;
            puVar4 = (undefined1 *)0x3ace195dd3930386;
          }
          else if (puVar5 == (undefined1 *)0xabed3acad0e23c86) {
            puVar4 = (undefined1 *)0xd1a28e2b92bbcc90;
            if (DAT_0021fa82 == '\0') {
              puVar4 = (undefined1 *)0x8500be9b057d300e;
            }
          }
          goto LAB_001aa444;
        }
        if (-0x71c5c29ef27b8352 < (long)puVar5) {
          if (puVar5 == (undefined1 *)0x8e3a3d610d847caf) {
            DAT_0021fa6c = 0;
            local_90 = strtol(local_f0,(char **)0x0,0x10);
            local_80 = FUN_001e4578(&local_78,&DAT_0021e7a4);
            puVar4 = (undefined1 *)0x960858df0b0de441;
            if (local_80 != 0) {
              puVar4 = (undefined1 *)0x36f07785a64d7584;
            }
          }
          else if (puVar5 == (undefined1 *)0x940bdddd24f52ce3) {
            uVar6 = 0;
            goto LAB_001aafdc;
          }
          goto LAB_001aa444;
        }
        if (puVar5 != (undefined1 *)0x8500be9b057d300e) {
          if (puVar5 == (undefined1 *)0x87b1ff2df68e38ae) {
            puVar4 = (undefined1 *)0x34ee749c3dc3cf5c;
          }
          goto LAB_001aa444;
        }
        puVar4 = (undefined1 *)0xc0f51250277e5cfd;
      }
      else {
        if ((long)puVar5 < -0x3dc07bfa902cf42a) {
          if ((long)puVar5 < -0x405b680ffecd4131) {
            puVar4 = (undefined1 *)0x7d8bf94548220fb8;
            if ((puVar5 != (undefined1 *)0xba8fbc7d3623138d) &&
               (puVar4 = puVar5, puVar5 == (undefined1 *)0xbf711ec4fafe862e)) goto LAB_001aafdc;
          }
          else {
            puVar4 = (undefined1 *)0x2ce2edddaf334d81;
            if ((puVar5 != (undefined1 *)0xbfa497f00132becf) &&
               (puVar4 = puVar5, puVar5 == (undefined1 *)0xc0f51250277e5cfd)) {
              DAT_0021fa70 = 0;
              local_d8 = (char *)FUN_001e4578(&local_80,&DAT_0021e7a8);
              puVar4 = (undefined1 *)0xe7622641fcb090c6;
              if (local_d8 != (char *)0x0) {
                puVar4 = (undefined1 *)0x87b1ff2df68e38ae;
              }
            }
          }
          goto LAB_001aa444;
        }
        if ((long)puVar5 < -0x3bafc724edb51fea) {
          puVar4 = (undefined1 *)0xf54c5df74fcabc41;
          if ((puVar5 != (undefined1 *)0xc23f84056fd30bd6) &&
             (puVar4 = puVar5, puVar5 == (undefined1 *)0xc33cd820d1133e3a)) {
            puVar4 = (undefined1 *)0x54c2b837d86711b8;
            if (DAT_0021fa82 == '\0') {
              puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
            }
          }
          goto LAB_001aa444;
        }
        puVar4 = (undefined1 *)0xc879bc31bae5bb14;
        if (puVar5 == &DAT_c45038db124ae016) goto LAB_001aa444;
        if (puVar5 == (undefined1 *)0xc879bc31bae5bb14) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fa70);
          puVar4 = (undefined1 *)0xabed3acad0e23c86;
          if (iVar3 != 0) {
            puVar4 = &DAT_c45038db124ae016;
          }
          goto LAB_001aa444;
        }
        puVar4 = puVar5;
        if (puVar5 != (undefined1 *)0xc89737e2f8768a05) goto LAB_001aa444;
        puVar4 = (undefined1 *)0x52cde6c2dea1be4;
      }
LAB_001ab8ec:
      DAT_0021e7a9 = DAT_0021e7a9 ^ 0x94;
      DAT_0021e7a8 = DAT_0021e7a8 ^ 0x94;
      DAT_0021fa82 = '\x01';
      goto LAB_001aa444;
    }
    if ((long)puVar5 < -0x12e0f8e15901e122) {
      if (-0x2e5d71d46d443371 < (long)puVar5) {
        if ((long)puVar5 < -0x29504ee3cf2d5633) {
          puVar4 = (undefined1 *)0xc0f51250277e5cfd;
          if ((puVar5 != (undefined1 *)0xd1a28e2b92bbcc90) &&
             (puVar4 = puVar5, puVar5 == (undefined1 *)0xd222672a639a1d2e)) {
            unaff_x27 = 0;
            unaff_x21 = 0;
            unaff_x26 = 0;
            unaff_x19 = 0;
            unaff_x28 = 0;
            unaff_x22 = 0;
            puVar4 = (undefined1 *)0x65536dc2a8308acd;
          }
        }
        else if (puVar5 == (undefined1 *)0xd6afb11c30d2a9cd) {
          puVar4 = (undefined1 *)0x1db468c64d6a7ed0;
          if (DAT_0021fa81 == '\0') {
            puVar4 = (undefined1 *)0x31b9d74c89a90fe3;
          }
        }
        else if (puVar5 == (undefined1 *)0xe48eaf6f29f5caa2) {
          DAT_0021fa70 = 0;
          local_98 = strtol(local_d8,(char **)0x0,0x10);
          local_f8 = (char *)FUN_001e4578(&local_80,&DAT_0021e7a8);
          puVar4 = (undefined1 *)0x940bdddd24f52ce3;
          if (local_f8 != (char *)0x0) {
            puVar4 = (undefined1 *)0x3007aa9d32d99be8;
          }
        }
        else if (puVar5 == (undefined1 *)0xe7622641fcb090c6) goto LAB_001ab3f4;
        goto LAB_001aa444;
      }
      if (-0x2ef756f1c7496e60 < (long)puVar5) {
        puVar4 = (undefined1 *)0x5039187a35dab08d;
        if ((puVar5 != (undefined1 *)0xd108a90e38b691a1) &&
           (puVar4 = puVar5, puVar5 == (undefined1 *)0xd14700cedc0a1544)) {
          puVar4 = (undefined1 *)0x55dcd19dee737a1a;
          if (DAT_0021fa82 == '\0') {
            puVar4 = (undefined1 *)0xc89737e2f8768a05;
          }
        }
        goto LAB_001aa444;
      }
      if (puVar5 == (undefined1 *)0xcb31a60e6206eed1) {
        puVar4 = (undefined1 *)0x483dcbc36ada42c4;
        if (DAT_0021fa81 == '\0') {
          puVar4 = (undefined1 *)0x418b7d3c908df894;
        }
        goto LAB_001aa444;
      }
      if (puVar5 != (undefined1 *)0xce95d05271a8da34) goto LAB_001aa444;
LAB_001aafdc:
      unaff_x26 = 0;
      unaff_x19 = 0;
      unaff_x21 = local_98;
      unaff_x27 = uVar6;
      unaff_x28 = local_90;
    }
    else {
      if (-0x9c4c91856260991 < (long)puVar5) {
        if ((long)puVar5 < -0x25a3e9f6f44c50c) {
          puVar4 = (undefined1 *)0xf54c5df74fcabc41;
          if ((puVar5 != (undefined1 *)0xf63b36e7a9d9f670) &&
             (puVar4 = puVar5, puVar5 == (undefined1 *)0xf6c71d76f8b48eb9)) {
            puVar4 = (undefined1 *)0x6b5051bf1aed633d;
            goto LAB_001ab8ec;
          }
        }
        else {
          puVar4 = (undefined1 *)0xfb13253120e52d5;
          if (puVar5 != (undefined1 *)0xfda5c16090bb3af4) {
            if (puVar5 == (undefined1 *)0xfeee7e65b66b0f06) goto LAB_001ab3d0;
            puVar4 = puVar5;
            if (puVar5 == (undefined1 *)0x52cde6c2dea1be4) {
              DAT_0021fa70 = 0;
              local_b0 = strtol(local_d0,(char **)0x0,0x10);
              local_e8 = (char *)FUN_001e4578(&local_80,&DAT_0021e7a8);
              puVar4 = (undefined1 *)0x49b9b00eeff4c15a;
              if (local_e8 != (char *)0x0) {
                puVar4 = (undefined1 *)0x5ece82223eee3411;
              }
            }
          }
        }
        goto LAB_001aa444;
      }
      if (-0xab3a208b03543c0 < (long)puVar5) {
        if (puVar5 == (undefined1 *)0xf54c5df74fcabc41) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fa70);
          puVar4 = (undefined1 *)0xc33cd820d1133e3a;
          if (iVar3 != 0) {
            puVar4 = (undefined1 *)0xc23f84056fd30bd6;
          }
        }
        else if (puVar5 == &DAT_f615808441b1dafc) {
          puVar4 = (undefined1 *)0x125dd2cc844aecb4;
        }
        goto LAB_001aa444;
      }
      if (puVar5 == (undefined1 *)0xed1f071ea6fe1ede) {
        puVar4 = (undefined1 *)0xbfa497f00132becf;
        if (DAT_0021fa81 == '\0') {
          puVar4 = (undefined1 *)0x353e7cd16df664a2;
        }
        goto LAB_001aa444;
      }
      if (puVar5 != (undefined1 *)0xedbefc38c6cf9bfe) goto LAB_001aa444;
      unaff_x21 = 0;
      unaff_x26 = 0;
      unaff_x19 = 0;
      unaff_x28 = 0;
      unaff_x27 = 0;
    }
  }
  else {
    if ((long)puVar5 < 0x3b36a7a007b21166) {
      if ((long)puVar5 < 0x2ce2edddaf334d81) {
        if ((long)puVar5 < 0x1cba5f82f77e481f) {
          if ((long)puVar5 < 0xfb13253120e52d5) {
            puVar4 = puVar1;
            if ((puVar5 != (undefined1 *)0x887e73b2c28c6a1) &&
               (puVar4 = puVar5, puVar5 == (undefined1 *)0xc7bf249d1db72b2)) {
              local_a4 = 1;
              puVar4 = (undefined1 *)0x3ace195dd3930386;
            }
          }
          else if (puVar5 == (undefined1 *)0xfb13253120e52d5) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fa6c);
            puVar4 = (undefined1 *)0xd6afb11c30d2a9cd;
            if (iVar3 != 0) {
              puVar4 = (undefined1 *)0xfda5c16090bb3af4;
            }
          }
          else if (puVar5 == (undefined1 *)0x125dd2cc844aecb4) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fa6c);
            puVar4 = (undefined1 *)0xed1f071ea6fe1ede;
            if (iVar3 != 0) {
              puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
            }
          }
        }
        else if ((long)puVar5 < 0x22f3f9cf91cbb9a6) {
          puVar4 = (undefined1 *)0x3b36a7a007b21166;
          if ((puVar5 != (undefined1 *)0x1cba5f82f77e481f) &&
             (puVar4 = puVar5, puVar5 == (undefined1 *)0x1db468c64d6a7ed0)) {
            puVar4 = (undefined1 *)0x32f4713bcaf93571;
          }
        }
        else {
          if (puVar5 == (undefined1 *)0x22f3f9cf91cbb9a6) {
            puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
            goto LAB_001ab8ec;
          }
          if (puVar5 == (undefined1 *)0x27963d1423e000f6) {
            local_e0 = calloc(1,0x30);
            puVar4 = (undefined1 *)0xfeee7e65b66b0f06;
            if (local_e0 != (undefined2 *)0x0) {
              puVar4 = (undefined1 *)0x3b16db62a3c2f4fb;
            }
          }
          else if (puVar5 == (undefined1 *)0x29ff0ff794febe2e) {
            puVar4 = (undefined1 *)0x34ee749c3dc3cf5c;
          }
        }
      }
      else if ((long)puVar5 < 0x34ee749c3dc3cf5c) {
        if ((long)puVar5 < 0x312910f1547c7c77) {
          if (puVar5 == (undefined1 *)0x2ce2edddaf334d81) {
            DAT_0021fa6c = 0;
            local_c8 = (char *)FUN_001e4578(&local_78,&DAT_0021e7a4);
            puVar4 = (undefined1 *)0xd222672a639a1d2e;
            if (local_c8 != (char *)0x0) {
              puVar4 = (undefined1 *)0x58b842c6f86d5804;
            }
          }
          else if (puVar5 == (undefined1 *)0x3007aa9d32d99be8) {
            puVar4 = (undefined1 *)0xfb13253120e52d5;
          }
        }
        else {
          puVar4 = (undefined1 *)0x3b36a7a007b21166;
          if (puVar5 != (undefined1 *)0x312910f1547c7c77) {
            if (puVar5 == (undefined1 *)0x31b9d74c89a90fe3) {
              puVar4 = (undefined1 *)0x32f4713bcaf93571;
LAB_001aa430:
              DAT_0021e7a5 = DAT_0021e7a5 ^ 0x9b;
              DAT_0021e7a4 = DAT_0021e7a4 ^ 0x9b;
              DAT_0021fa81 = '\x01';
            }
            else {
              puVar4 = puVar5;
              if (puVar5 == (undefined1 *)0x32f4713bcaf93571) {
                DAT_0021fa6c = 0;
                local_a0 = strtol(local_f8,(char **)0x0,0x10);
                local_80 = FUN_001e4578(&local_78,&DAT_0021e7a4);
                puVar4 = (undefined1 *)0xce95d05271a8da34;
                if (local_80 != 0) {
                  puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
                }
              }
            }
          }
        }
      }
      else if ((long)puVar5 < 0x36f07785a64d7584) {
        if (puVar5 == (undefined1 *)0x34ee749c3dc3cf5c) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fa70);
          puVar4 = (undefined1 *)0xa952fa75448bcb41;
          if (iVar3 != 0) {
            puVar4 = (undefined1 *)0x29ff0ff794febe2e;
          }
        }
        else if (puVar5 == (undefined1 *)0x353e7cd16df664a2) {
          puVar4 = (undefined1 *)0x2ce2edddaf334d81;
          goto LAB_001aa430;
        }
      }
      else {
        puVar4 = (undefined1 *)0xc879bc31bae5bb14;
        if (puVar5 != (undefined1 *)0x36f07785a64d7584) {
          if (puVar5 == (undefined1 *)0x3b16db62a3c2f4fb) {
            *local_e0 = (short)local_fc;
            *(ulong *)(local_e0 + 4) = local_108;
            *(long *)(local_e0 + 8) = local_118;
            *(ulong *)(local_e0 + 0xc) = local_110;
            *(long *)(local_e0 + 0x10) = local_120;
            local_a4 = 1;
            *(long *)(local_e0 + 0x14) = local_128;
            *param_3 = local_e0;
            puVar4 = (undefined1 *)0x3ace195dd3930386;
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (undefined1 *)0x3ace195dd3930386) {
              if (*(long *)(lVar2 + 0x28) == local_70) {
                return local_a4 & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
      goto LAB_001aa444;
    }
    if ((long)puVar5 < 0x5ece82223eee3411) {
      if ((long)puVar5 < 0x5039187a35dab08d) {
        if ((long)puVar5 < 0x483dcbc36ada42c4) {
          if (puVar5 == (undefined1 *)0x3b36a7a007b21166) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fa70);
            puVar4 = (undefined1 *)0xd14700cedc0a1544;
            if (iVar3 != 0) {
              puVar4 = (undefined1 *)0x312910f1547c7c77;
            }
          }
          else if (puVar5 == (undefined1 *)0x418b7d3c908df894) {
            puVar4 = (undefined1 *)0x8e3a3d610d847caf;
            goto LAB_001aa430;
          }
        }
        else {
          puVar4 = (undefined1 *)0x8e3a3d610d847caf;
          if ((puVar5 != (undefined1 *)0x483dcbc36ada42c4) &&
             (puVar4 = puVar5, puVar5 == (undefined1 *)0x49b9b00eeff4c15a)) {
            unaff_x19 = 0;
            unaff_x21 = local_98;
            unaff_x26 = local_b0;
            unaff_x27 = local_a0;
            unaff_x28 = local_90;
            goto LAB_001ab850;
          }
        }
      }
      else if ((long)puVar5 < 0x54c2b837d86711b8) {
        if (puVar5 == (undefined1 *)0x5039187a35dab08d) {
          DAT_0021fa6c = 0;
          local_88 = (undefined1 *)strtol(local_c8,(char **)0x0,10);
          local_f0 = (char *)FUN_001e4578(&local_78,&DAT_0021e7a4);
          puVar4 = (undefined1 *)0xedbefc38c6cf9bfe;
          if (local_f0 != (char *)0x0) {
            puVar4 = (undefined1 *)0x77f0428eaa711148;
          }
        }
        else if (puVar5 == (undefined1 *)0x53e14c28908eeeeb) {
          puVar4 = (undefined1 *)0xe48eaf6f29f5caa2;
        }
      }
      else {
        puVar4 = (undefined1 *)0x6b5051bf1aed633d;
        if (((puVar5 != (undefined1 *)0x54c2b837d86711b8) &&
            (puVar4 = (undefined1 *)0x52cde6c2dea1be4, puVar5 != (undefined1 *)0x55dcd19dee737a1a))
           && (puVar4 = puVar5, puVar5 == (undefined1 *)0x58b842c6f86d5804)) {
          puVar4 = (undefined1 *)0x7e713fa43f38c582;
        }
      }
      goto LAB_001aa444;
    }
    if (0x6b5051bf1aed633c < (long)puVar5) {
      if ((long)puVar5 < 0x77f0428eaa711148) {
        if (puVar5 == (undefined1 *)0x6b5051bf1aed633d) {
          DAT_0021fa70 = 0;
          local_d0 = (char *)FUN_001e4578(&local_80,&DAT_0021e7a8);
          puVar4 = (undefined1 *)0xbf711ec4fafe862e;
          if (local_d0 != (char *)0x0) {
            puVar4 = (undefined1 *)0x1cba5f82f77e481f;
          }
        }
        else if (puVar5 == (undefined1 *)0x75df443d79079721) {
          puVar4 = (undefined1 *)0x7e713fa43f38c582;
        }
      }
      else {
        puVar4 = (undefined1 *)0x7d8bf94548220fb8;
        if (puVar5 != (undefined1 *)0x77f0428eaa711148) {
          if (puVar5 == (undefined1 *)0x7d8bf94548220fb8) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fa6c);
            puVar4 = (undefined1 *)0xcb31a60e6206eed1;
            if (iVar3 != 0) {
              puVar4 = (undefined1 *)0xba8fbc7d3623138d;
            }
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (undefined1 *)0x7e713fa43f38c582) {
              iVar3 = FUN_00212730(0,1,&DAT_0021fa6c);
              puVar4 = (undefined1 *)0x5eda44100212fa2c;
              if (iVar3 != 0) {
                puVar4 = (undefined1 *)0x75df443d79079721;
              }
            }
          }
        }
      }
      goto LAB_001aa444;
    }
    if (0x65536dc2a8308acc < (long)puVar5) {
      if (puVar5 == (undefined1 *)0x65536dc2a8308acd) {
        free(__ptr);
        local_fc = (undefined4)unaff_x22;
        puVar4 = (undefined1 *)0xc7bf249d1db72b2;
        local_128 = unaff_x19;
        local_120 = unaff_x26;
        local_118 = unaff_x21;
        local_110 = unaff_x27;
        local_108 = unaff_x28;
        if ((((unaff_x27 & 0xffffffff00000000) == 0 && (unaff_x28 & 0xffffffff00000000) == 0) &&
            unaff_x19 != 0) && unaff_x21 != 0) {
          puVar4 = (undefined1 *)0x27963d1423e000f6;
        }
      }
      else if (puVar5 == (undefined1 *)0x696b554ab6b2c8c5) {
        puVar4 = (undefined1 *)0x125dd2cc844aecb4;
      }
      goto LAB_001aa444;
    }
    if (puVar5 != (undefined1 *)0x5ece82223eee3411) {
      if (puVar5 == (undefined1 *)0x5eda44100212fa2c) {
        puVar4 = (undefined1 *)0xd108a90e38b691a1;
        if (DAT_0021fa81 == '\0') {
          puVar4 = (undefined1 *)0xa865ab623572e331;
        }
      }
      goto LAB_001aa444;
    }
    unaff_x19 = strtol(local_e8,(char **)0x0,0x10);
    unaff_x21 = local_98;
    unaff_x26 = local_b0;
    unaff_x27 = local_a0;
    unaff_x28 = local_90;
  }
LAB_001ab850:
  unaff_x22 = (ulong)local_88 & 0xffffffff;
  puVar4 = (undefined1 *)0x65536dc2a8308acd;
  goto LAB_001aa444;
}

