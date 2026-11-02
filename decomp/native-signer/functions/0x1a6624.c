// rea decompile_all
// name: FUN_001a6624
// address: 0x1a6624
// body: available
// range: 0x1a6624-0x1a742f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a742c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001a6624(long *param_1,int *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x25;
  long local_e0;
  uint local_d4;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  uint local_98;
  uint local_94;
  long local_90;
  uint local_84;
  long *local_80;
  long local_78;
  
  local_d0 = param_3;
  local_c8 = param_4;
  local_e0 = tpidr_el0;
  local_78 = *(long *)(local_e0 + 0x28);
  plVar3 = &local_e0;
  lVar1 = -0x3f0aedafd881a303;
LAB_001a6708:
  do {
    while (lVar6 = lVar1, plVar2 = local_80, plVar7 = local_c0, lVar1 = lVar6,
          -0x111819a4994f0fb < lVar6) {
      if (lVar6 < 0x34ee749c3dc3cf5c) {
        if (lVar6 < 0x27963d1423e000f6) {
          if (lVar6 < 0xfb13253120e52d5) {
            if (lVar6 == -0x111819a4994f0fa) {
              iVar4 = FUN_00212730(0,1,&DAT_0021fa50);
              lVar1 = -0x7447e788f4d32ac9;
              if (iVar4 != 0) {
                lVar1 = 0x3b16db62a3c2f4fb;
              }
            }
            else if (lVar6 == 0xc7bf249d1db72b2) {
LAB_001a6e60:
              local_94 = 0;
              lVar1 = -0x34ce59f19df9112f;
            }
          }
          else if (lVar6 == 0xfb13253120e52d5) {
            DAT_0021e720 = DAT_0021e720 ^ 0x75;
            DAT_0021e721 = DAT_0021e721 ^ 0x75;
            DAT_0021e722 = DAT_0021e722 ^ 0x75;
            DAT_0021e723 = DAT_0021e723 ^ 0x75;
            DAT_0021e724 = DAT_0021e724 ^ 0x75;
            DAT_0021e725 = DAT_0021e725 ^ 0x75;
            DAT_0021e718 = DAT_0021e718 ^ 0x7575757575757575;
            DAT_0021fa55 = '\x01';
            lVar1 = -0x25a3e9f6f44c50c;
          }
          else if (lVar6 == 0x1db468c64d6a7ed0) {
            local_a8 = *unaff_x24;
            lVar1 = 0x54c2b837d86711b8;
            if (*unaff_x24 == 0 || param_1 == (long *)0x0) {
              lVar1 = -0x3cc327df2eecc1c6;
            }
            local_d4 = local_84;
          }
          else if (lVar6 == 0x22f3f9cf91cbb9a6) {
            lVar1 = -0x2ef756f1c7496e5f;
          }
        }
        else if (lVar6 < 0x3007aa9d32d99be8) {
          lVar1 = -0x111819a4994f0fa;
          if ((lVar6 != 0x27963d1423e000f6) && (lVar1 = lVar6, lVar6 == 0x29ff0ff794febe2e)) {
            DAT_0021fa48 = 0;
            local_80 = plVar3 + -2;
            unaff_x25 = plVar3 + -4;
            local_a0 = plVar3 + -6;
            unaff_x24 = plVar3 + -8;
            plVar7 = plVar3 + -10;
            plVar3[-2] = 0;
            plVar3[-4] = 0;
            plVar3[-6] = 0;
            plVar3[-8] = 0;
            plVar3[-10] = 0;
            local_c0 = plVar7;
            FUN_0019153c(param_2,param_1,local_d0,&DAT_0021e708,0,unaff_x25);
            plVar3 = plVar7;
            lVar1 = -0x1b715090d60a355e;
            if (*param_2 != 0) {
              lVar1 = 0x22f3f9cf91cbb9a6;
            }
          }
        }
        else {
          lVar1 = -0x6bf42222db0ad31d;
          if (((lVar6 != 0x3007aa9d32d99be8) &&
              (lVar1 = -0x2ef756f1c7496e5f, lVar6 != 0x31b9d74c89a90fe3)) &&
             (lVar1 = lVar6, lVar6 == 0x32f4713bcaf93571)) {
            FUN_0016e8a4(param_2,param_1,*local_80,unaff_x24);
            lVar1 = 0x65536dc2a8308acd;
            if (*param_2 != 0) {
              lVar1 = -0x316a2fad8e5725cc;
            }
          }
        }
      }
      else if (lVar6 < 0x53e14c28908eeeeb) {
        if (lVar6 < 0x3b16db62a3c2f4fb) {
          if (lVar6 == 0x34ee749c3dc3cf5c) {
            DAT_0021e710 = DAT_0021e710 ^ 0xa5;
            DAT_0021e711 = DAT_0021e711 ^ 0xa5;
            DAT_0021e712 = DAT_0021e712 ^ 0xa5;
            DAT_0021e713 = DAT_0021e713 ^ 0xa5;
            DAT_0021e708 = DAT_0021e708 ^ 0xa5a5a5a5a5a5a5a5;
            DAT_0021fa54 = '\x01';
            lVar1 = 0x29ff0ff794febe2e;
          }
          else if (lVar6 == 0x3ace195dd3930386) {
            DAT_0021e728 = DAT_0021e728 ^ 0x41;
            DAT_0021e729 = DAT_0021e729 ^ 0x41;
            DAT_0021e72a = DAT_0021e72a ^ 0x41;
            DAT_0021e72b = DAT_0021e72b ^ 0x41;
            DAT_0021fa56 = '\x01';
            lVar1 = -0x12e0f8e15901e122;
          }
        }
        else {
          lVar1 = -0x111819a4994f0fa;
          if (((lVar6 != 0x3b16db62a3c2f4fb) &&
              (lVar1 = 0x29ff0ff794febe2e, lVar6 != 0x4101bf80446bdc20)) &&
             (lVar1 = lVar6, lVar6 == 0x483dcbc36ada42c4)) {
LAB_001a6b5c:
            local_84 = local_98;
            lVar1 = 0x1db468c64d6a7ed0;
          }
        }
      }
      else if (lVar6 < 0x55dcd19dee737a1a) {
        if (lVar6 == 0x53e14c28908eeeeb) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_b8);
          lVar1 = -0x428109008685f48;
        }
        else if (lVar6 == 0x54c2b837d86711b8) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_a8);
          lVar1 = -0x2eb8ff3123f5eabc;
        }
        else if (lVar6 == 0x54cc8c62117e2258) {
          lVar1 = -0x25a3e9f6f44c50c;
        }
      }
      else {
        lVar1 = -0x2e5d71d46d443370;
        if (lVar6 != 0x55dcd19dee737a1a) {
          if (lVar6 == 0x5eda44100212fa2c) {
            local_94 = 1;
            *local_c8 = *local_a0;
            lVar1 = -0x34ce59f19df9112f;
          }
          else {
            lVar1 = lVar6;
            if (lVar6 == 0x65536dc2a8308acd) {
              uVar5 = FUN_001a7b10(param_1,param_2,*unaff_x24,local_c0);
              local_90 = *plVar7;
              lVar1 = 0x27963d1423e000f6;
              if ((uVar5 & 1) == 0) {
                lVar1 = 0xc7bf249d1db72b2;
              }
            }
          }
        }
      }
    }
    if (lVar6 < -0x316a2fad8e5725cc) {
      if (lVar6 < -0x5412c5352f1dc37a) {
        if (lVar6 < -0x6bf42222db0ad31d) {
          lVar1 = -0x189dd9be034f6f3a;
          if ((lVar6 != -0x784e00d20971c752) && (lVar1 = lVar6, lVar6 == -0x7447e788f4d32ac9)) {
            lVar1 = -0x50e54cd80f265318;
            if (DAT_0021fa56 == '\0') {
              lVar1 = 0x3ace195dd3930386;
            }
          }
        }
        else if (lVar6 == -0x6bf42222db0ad31d) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fa4c);
          lVar1 = -0x59bab4f8732095e2;
          if (iVar4 != 0) {
            lVar1 = 0x3007aa9d32d99be8;
          }
        }
        else if (lVar6 == -0x59bab4f8732095e2) {
          lVar1 = 0x54cc8c62117e2258;
          if (DAT_0021fa55 == '\0') {
            lVar1 = 0xfb13253120e52d5;
          }
        }
        else if (lVar6 == -0x56ad058abb7434bf) {
          lVar1 = -0x428109008685f48;
        }
      }
      else if (lVar6 < -0x3f0aedafd881a303) {
        if (lVar6 == -0x5412c5352f1dc37a) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_b0);
          lVar1 = -0x2e5d71d46d443370;
        }
        else {
          lVar1 = -0x12e0f8e15901e122;
          if ((lVar6 != -0x50e54cd80f265318) && (lVar1 = lVar6, lVar6 == -0x405b680ffecd4131))
          goto LAB_001a6e60;
        }
      }
      else {
        lVar1 = -0x189dd9be034f6f3a;
        if (((lVar6 != -0x3f0aedafd881a303) &&
            (lVar1 = -0x2eb8ff3123f5eabc, lVar6 != -0x3cc327df2eecc1c6)) &&
           (lVar1 = lVar6, lVar6 == -0x34ce59f19df9112f)) {
          lVar1 = -0x29504ee3cf2d5633;
          if (local_90 == 0 || param_1 == (long *)0x0) {
            lVar1 = 0x483dcbc36ada42c4;
          }
          local_98 = local_94;
        }
      }
      goto LAB_001a6708;
    }
    if (lVar6 < -0x244c08061ede3ca6) {
      if (lVar6 < -0x2eb8ff3123f5eabc) {
        if (lVar6 == -0x316a2fad8e5725cc) {
          *param_2 = 0x19;
          lVar1 = -0x2ef756f1c7496e5f;
        }
        else if (lVar6 == -0x2ef756f1c7496e5f) {
          local_84 = 0;
          lVar1 = 0x1db468c64d6a7ed0;
        }
      }
      else if (lVar6 == -0x2eb8ff3123f5eabc) {
        lVar6 = *unaff_x25;
        *unaff_x24 = 0;
        local_b0 = lVar6;
        lVar1 = -0x5412c5352f1dc37a;
        if (lVar6 == 0 || param_1 == (long *)0x0) {
          lVar1 = 0x55dcd19dee737a1a;
        }
      }
      else if (lVar6 == -0x2e5d71d46d443370) {
        *unaff_x25 = 0;
        local_b8 = *plVar2;
        lVar1 = 0x53e14c28908eeeeb;
        if (*plVar2 == 0 || param_1 == (long *)0x0) {
          lVar1 = -0x56ad058abb7434bf;
        }
      }
      else if (lVar6 == -0x29504ee3cf2d5633) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_90);
        goto LAB_001a6b5c;
      }
    }
    else if (lVar6 < -0x12e0f8e15901e122) {
      if (lVar6 == -0x244c08061ede3ca6) {
        lVar1 = 0x4101bf80446bdc20;
        if (DAT_0021fa54 == '\0') {
          lVar1 = 0x34ee749c3dc3cf5c;
        }
      }
      else {
        lVar1 = -0x6bf42222db0ad31d;
        if ((lVar6 != -0x1b715090d60a355e) && (lVar1 = lVar6, lVar6 == -0x189dd9be034f6f3a)) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fa48);
          lVar1 = -0x244c08061ede3ca6;
          if (iVar4 != 0) {
            lVar1 = -0x784e00d20971c752;
          }
        }
      }
    }
    else if (lVar6 == -0x12e0f8e15901e122) {
      DAT_0021fa50 = 0;
      FUN_0019a04c(param_2,param_1,local_90,&DAT_0021e728,local_a0);
      lVar1 = 0x5eda44100212fa2c;
      if (*param_2 != 0) {
        lVar1 = -0x405b680ffecd4131;
      }
    }
    else if (lVar6 == -0x25a3e9f6f44c50c) {
      DAT_0021fa4c = 0;
      FUN_0019d29c(param_2,param_1,*unaff_x25,&DAT_0021e718,0,local_80);
      lVar1 = 0x32f4713bcaf93571;
      if (*param_2 != 0) {
        lVar1 = 0x31b9d74c89a90fe3;
      }
    }
    else if (lVar6 == -0x428109008685f48) {
      if (*(long *)(local_e0 + 0x28) == local_78) {
        return local_d4 & 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

