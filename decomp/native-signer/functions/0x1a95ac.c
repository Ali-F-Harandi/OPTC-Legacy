// rea decompile_all
// name: Java_com_adjust_sdk_sig_NativeLibHelper_nSign
// address: 0x1a95ac
// body: available
// range: 0x1a95ac-0x1aa33f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aa33c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Java_com_adjust_sdk_sig_NativeLibHelper_nSign
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  timespec *__tp;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *unaff_x28;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_94;
  timespec *local_90;
  uint local_84;
  timespec *local_80;
  long local_78;
  
  local_cc = param_6;
  local_e0 = param_4;
  local_d8 = param_5;
  local_f0 = param_1;
  local_e8 = param_3;
  local_100 = tpidr_el0;
  local_78 = *(long *)(local_100 + 0x28);
  plVar4 = &local_100;
  lVar3 = -0x3f0aedafd881a303;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar6 = lVar3, uVar2 = local_e0, lVar3 = lVar6, lVar6 < -0x111819a4994f0fa) {
            if (lVar6 < -0x2ef756f1c7496e5f) {
              if (lVar6 < -0x405b680ffecd4131) {
                if (lVar6 < -0x56ad058abb7434bf) {
                  lVar3 = -0x189dd9be034f6f3a;
                  if ((lVar6 != -0x784e00d20971c752) &&
                     (lVar3 = lVar6, lVar6 == -0x6bf42222db0ad31d)) {
                    iVar5 = FUN_00212730(0,1,&DAT_0021fa5c);
                    lVar3 = -0x5412c5352f1dc37a;
                    if (iVar5 != 0) {
                      lVar3 = 0x3007aa9d32d99be8;
                    }
                  }
                }
                else if (lVar6 == -0x56ad058abb7434bf) {
                  lVar3 = 0x53e14c28908eeeeb;
                  if (DAT_0021fa67 == '\0') {
                    lVar3 = 0x3b16db62a3c2f4fb;
                  }
                }
                else if (lVar6 == -0x5412c5352f1dc37a) {
                  lVar3 = -0x2e5d71d46d443370;
                  if (DAT_0021fa66 == '\0') {
                    lVar3 = 0xfb13253120e52d5;
                  }
                }
              }
              else if (lVar6 < -0x3cc327df2eecc1c6) {
                lVar3 = 0x54c2b837d86711b8;
                if ((lVar6 != -0x405b680ffecd4131) && (lVar3 = lVar6, lVar6 == -0x3f0aedafd881a303))
                {
                  lVar3 = -0x189dd9be034f6f3a;
                }
              }
              else if (lVar6 == -0x3cc327df2eecc1c6) {
                DAT_0021fa64 = 0;
                FUN_00202050((double)local_b8 / 1000000.0 + (double)local_b0 * 1000.0,&DAT_0021e780)
                ;
                lVar3 = 0x54c2b837d86711b8;
              }
              else {
                lVar3 = 0x483dcbc36ada42c4;
                if ((lVar6 != -0x34ce59f19df9112f) && (lVar3 = lVar6, lVar6 == -0x316a2fad8e5725cc))
                {
                  local_a8 = local_90->tv_nsec;
                  local_a0 = local_90->tv_sec;
                  lVar3 = 0x65536dc2a8308acd;
                  if (*unaff_x28 == 0 && (local_84 & 1) == 0) {
                    lVar3 = 0xc7bf249d1db72b2;
                  }
                }
              }
            }
            else if (lVar6 < -0x1b715090d60a355e) {
              if (lVar6 < -0x2e5d71d46d443370) {
                lVar3 = 0x54c2b837d86711b8;
                if ((lVar6 != -0x2ef756f1c7496e5f) && (lVar3 = lVar6, lVar6 == -0x2eb8ff3123f5eabc))
                {
                  lVar3 = 0x55dcd19dee737a1a;
                  if (DAT_0021fa65 == '\0') {
                    lVar3 = 0x34ee749c3dc3cf5c;
                  }
                }
              }
              else {
                lVar3 = -0x25a3e9f6f44c50c;
                if (((lVar6 != -0x2e5d71d46d443370) &&
                    (lVar3 = 0x483dcbc36ada42c4, lVar6 != -0x29504ee3cf2d5633)) &&
                   (lVar3 = lVar6, lVar6 == -0x244c08061ede3ca6)) {
                  lVar3 = -0x3cc327df2eecc1c6;
                }
              }
            }
            else if (lVar6 < -0x12e0f8e15901e122) {
              lVar3 = -0x6bf42222db0ad31d;
              if ((lVar6 != -0x1b715090d60a355e) && (lVar3 = lVar6, lVar6 == -0x189dd9be034f6f3a)) {
                iVar5 = FUN_00212730(0,1,&DAT_0021fa58);
                lVar3 = -0x2eb8ff3123f5eabc;
                if (iVar5 != 0) {
                  lVar3 = -0x784e00d20971c752;
                }
              }
            }
            else if (lVar6 == -0x12e0f8e15901e122) {
              local_f8 = FUN_001a8dec(local_c0);
              __tp = local_80;
              *unaff_x28 = 0;
              iVar5 = clock_gettime(0,__tp);
              lVar3 = 0x5eda44100212fa2c;
              if (iVar5 != 0) {
                lVar3 = -0x405b680ffecd4131;
              }
            }
            else if (lVar6 == -0x428109008685f48) {
              lVar3 = -0x244c08061ede3ca6;
              if (DAT_0021fa68 == '\0') {
                lVar3 = 0x1db468c64d6a7ed0;
              }
            }
            else if (lVar6 == -0x25a3e9f6f44c50c) {
              DAT_0021fa5c = 0;
              iVar5 = FUN_001e2ed0(*local_c8,&DAT_0021e740);
              local_94 = (uint)(iVar5 != 0);
              lVar3 = 0x31b9d74c89a90fe3;
            }
          }
          if (0x32f4713bcaf93570 < lVar6) break;
          if (lVar6 < 0x22f3f9cf91cbb9a6) {
            if (lVar6 < 0xfb13253120e52d5) {
              lVar3 = 0x27963d1423e000f6;
              if ((lVar6 != -0x111819a4994f0fa) && (lVar3 = lVar6, lVar6 == 0xc7bf249d1db72b2)) {
                lVar3 = 0x27963d1423e000f6;
              }
            }
            else if (lVar6 == 0xfb13253120e52d5) {
              DAT_0021e740 = DAT_0021e740 ^ 0x7575757575757575;
              DAT_0021fa66 = '\x01';
              lVar3 = -0x25a3e9f6f44c50c;
            }
            else if (lVar6 == 0x1db468c64d6a7ed0) {
              _DAT_0021e780 = _DAT_0021e780 ^ 0x3c3c3c3c3c3c3c3c;
              uRam000000000021e788 = uRam000000000021e788 ^ 0x3c3c3c3c3c3c3c3c;
              _DAT_0021e790 = _DAT_0021e790 ^ 0x3c3c3c3c3c3c3c3c;
              uRam000000000021e798 = uRam000000000021e798 ^ 0x3c3c3c3c3c3c3c3c;
              DAT_0021e7a0 = DAT_0021e7a0 ^ 0x3c;
              DAT_0021fa68 = '\x01';
              lVar3 = -0x3cc327df2eecc1c6;
            }
          }
          else if (lVar6 < 0x29ff0ff794febe2e) {
            if (lVar6 == 0x22f3f9cf91cbb9a6) {
              local_94 = 1;
              lVar3 = 0x31b9d74c89a90fe3;
            }
            else if (lVar6 == 0x27963d1423e000f6) {
              iVar5 = FUN_00212730(0,1,&DAT_0021fa60);
              lVar3 = -0x56ad058abb7434bf;
              if (iVar5 != 0) {
                lVar3 = -0x111819a4994f0fa;
              }
            }
          }
          else if (lVar6 == 0x29ff0ff794febe2e) {
            DAT_0021fa58 = 0;
            local_80 = (timespec *)(plVar4 + -2);
            local_90 = (timespec *)(plVar4 + -4);
            unaff_x28 = (int *)(plVar4 + -0xe);
            local_c0 = plVar4 + -0x14;
            puVar7 = plVar4 + -0x16;
            *(undefined4 *)(plVar4 + -0xe) = 0;
            plVar4[-6] = local_e8;
            plVar4[-8] = local_e0;
            plVar4[-10] = local_d8;
            *(undefined4 *)(plVar4 + -0xc) = local_cc;
            FUN_001b0a48();
            plVar4[-0x12] = (long)(plVar4 + -8);
            plVar4[-0x11] = (long)(plVar4 + -10);
            plVar4[-0x10] = (long)(plVar4 + -0xc);
            plVar4[-0x16] = 0;
            plVar4[-0x14] = local_f0;
            plVar4[-0x13] = (long)(plVar4 + -6);
            local_c8 = puVar7;
            FUN_0018b510(unaff_x28,local_f0,uVar2,&DAT_0021e730,puVar7);
            piVar1 = (int *)(plVar4 + -0xe);
            plVar4 = puVar7;
            lVar3 = -0x1b715090d60a355e;
            if (*piVar1 != 0) {
              lVar3 = 0x22f3f9cf91cbb9a6;
            }
          }
          else {
            lVar3 = -0x6bf42222db0ad31d;
            if ((lVar6 != 0x3007aa9d32d99be8) && (lVar3 = lVar6, lVar6 == 0x31b9d74c89a90fe3)) {
              iVar5 = clock_gettime(0,local_90);
              local_84 = local_94;
              lVar3 = -0x316a2fad8e5725cc;
              if (iVar5 != 0) {
                lVar3 = 0x32f4713bcaf93571;
              }
            }
          }
        }
        if (0x53e14c28908eeeea < lVar6) break;
        if (lVar6 < 0x3ace195dd3930386) {
          if (lVar6 == 0x32f4713bcaf93571) {
            *unaff_x28 = 0xe;
            lVar3 = -0x12e0f8e15901e122;
          }
          else if (lVar6 == 0x34ee749c3dc3cf5c) {
            DAT_0021e738 = DAT_0021e738 ^ 0x16;
            DAT_0021e739 = DAT_0021e739 ^ 0x16;
            DAT_0021e73a = DAT_0021e73a ^ 0x16;
            DAT_0021e73b = DAT_0021e73b ^ 0x16;
            DAT_0021e730 = DAT_0021e730 ^ 0x1616161616161616;
            DAT_0021fa65 = '\x01';
            lVar3 = 0x29ff0ff794febe2e;
          }
        }
        else if (lVar6 == 0x3ace195dd3930386) {
          DAT_0021fa60 = 0;
          FUN_00202050((double)local_a8 / 1000000.0 + (double)local_a0 * 1000.0,&DAT_0021e750);
          lVar3 = -0x12e0f8e15901e122;
        }
        else if (lVar6 == 0x3b16db62a3c2f4fb) {
          _DAT_0021e750 = _DAT_0021e750 ^ 0x1010101010101010;
          uRam000000000021e758 = uRam000000000021e758 ^ 0x1010101010101010;
          _DAT_0021e760 = _DAT_0021e760 ^ 0x1010101010101010;
          uRam000000000021e768 = uRam000000000021e768 ^ 0x1010101010101010;
          DAT_0021e770 = DAT_0021e770 ^ 0x10;
          DAT_0021fa67 = '\x01';
          lVar3 = 0x3ace195dd3930386;
        }
        else if (lVar6 == 0x483dcbc36ada42c4) {
          iVar5 = FUN_00212730(0,1,&DAT_0021fa64);
          lVar3 = -0x428109008685f48;
          if (iVar5 != 0) {
            lVar3 = -0x29504ee3cf2d5633;
          }
        }
      }
      if (lVar6 < 0x5eda44100212fa2c) break;
      if (lVar6 == 0x5eda44100212fa2c) {
        local_b8 = local_80->tv_nsec;
        local_b0 = local_80->tv_sec;
        lVar3 = -0x2ef756f1c7496e5f;
        if (*unaff_x28 == 0 && (local_84 & 1) == 0) {
          lVar3 = -0x34ce59f19df9112f;
        }
      }
      else if (lVar6 == 0x65536dc2a8308acd) {
        lVar3 = -0x12e0f8e15901e122;
      }
    }
    lVar3 = 0x3ace195dd3930386;
  } while (((lVar6 == 0x53e14c28908eeeeb) ||
           (lVar3 = 0x29ff0ff794febe2e, lVar6 == 0x55dcd19dee737a1a)) ||
          (lVar3 = lVar6, lVar6 != 0x54c2b837d86711b8));
  if (*(long *)(local_100 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f8;
}

