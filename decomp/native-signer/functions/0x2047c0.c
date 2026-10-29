// rea decompile_all
// name: FUN_002047c0
// address: 0x2047c0
// body: available
// range: 0x2047c0-0x20540b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x205408 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_002047c0(uint param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  void *unaff_x23;
  void *unaff_x24;
  undefined *unaff_x26;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  size_t local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  plVar4 = &local_e0;
  local_e0 = tpidr_el0;
  local_78 = *(long *)(local_e0 + 0x28);
  local_c8 = (long)(int)param_1;
  local_d0 = 0x3b16db62a3c2f4fb;
  if (3 < param_1) {
    local_d0 = -0x111819a4994f0fa;
  }
  bVar2 = param_3 != 0;
  local_90 = &DAT_0021efe8;
  if (bVar2) {
    local_90 = (undefined8 *)&DAT_0021efd0;
  }
  local_b8 = -0x56ad058abb7434bf;
  if (bVar2) {
    local_b8 = -0x2e5d71d46d443370;
  }
  local_d8 = 0x1db468c64d6a7ed0;
  if (bVar2) {
    local_d8 = -0x29504ee3cf2d5633;
  }
  lVar1 = 0x3007aa9d32d99be8;
  local_c0 = param_3;
  local_88 = param_2;
  local_80 = param_4;
LAB_00204910:
  lVar5 = lVar1;
  lVar1 = lVar5;
  if (-0x25a3e9f6f44c50d < lVar5) {
    if (lVar5 < 0x3ace195dd3930386) {
      if (0x1db468c64d6a7ecf < lVar5) {
        if (lVar5 < 0x3007aa9d32d99be8) {
          if (lVar5 == 0x1db468c64d6a7ed0) {
            local_ac = FUN_001e0fd8(local_98,1,local_90,local_88,unaff_x26,local_80);
LAB_0020523c:
            lVar1 = -0x3cc327df2eecc1c6;
          }
          else if (lVar5 == 0x27963d1423e000f6) {
            DAT_0021fb40 = 0;
            plVar4 = (long *)((long)plVar4 + -0x10);
            lVar1 = local_d0;
            local_98 = (undefined1 *)plVar4;
          }
        }
        else {
          lVar1 = 0xfb13253120e52d5;
          if (lVar5 != 0x3007aa9d32d99be8) {
            if (lVar5 == 0x31b9d74c89a90fe3) {
              DAT_0021eff0 = DAT_0021eff0 ^ 0xf7;
              DAT_0021eff1 = DAT_0021eff1 ^ 0xf7;
              DAT_0021eff2 = DAT_0021eff2 ^ 0xf7;
              DAT_0021eff3 = DAT_0021eff3 ^ 0xf7;
              DAT_0021eff4 = DAT_0021eff4 ^ 0xf7;
              DAT_0021eff5 = DAT_0021eff5 ^ 0xf7;
              DAT_0021efe8 = DAT_0021efe8 ^ 0xf7f7f7f7f7f7f7f7;
              DAT_0021fb49 = '\x01';
              lVar1 = 0x32f4713bcaf93571;
            }
            else {
              lVar1 = lVar5;
              if (lVar5 == 0x32f4713bcaf93571) {
                DAT_0021fb44 = 0;
                lVar1 = -0x316a2fad8e5725cc;
              }
            }
          }
        }
        goto LAB_00204910;
      }
      if (0xc7bf249d1db72b1 < lVar5) {
        if (lVar5 == 0xc7bf249d1db72b2) {
          DAT_0021efe0 = DAT_0021efe0 ^ 0xe4;
          _DAT_0021efd0 = _DAT_0021efd0 ^ 0xe4e4e4e4e4e4e4e4;
          uRam000000000021efd8 = uRam000000000021efd8 ^ 0xe4e4e4e4e4e4e4e4;
          DAT_0021fb48 = '\x01';
          lVar1 = 0x27963d1423e000f6;
        }
        else if (lVar5 == 0xfb13253120e52d5) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fb44);
          lVar1 = -0x359d4e10b3bbbc3c;
          if (iVar3 != 0) {
            lVar1 = -0x25a3e9f6f44c50c;
          }
        }
        goto LAB_00204910;
      }
      lVar1 = 0xfb13253120e52d5;
      if ((lVar5 == -0x25a3e9f6f44c50c) || (lVar1 = lVar5, lVar5 != -0x111819a4994f0fa))
      goto LAB_00204910;
    }
    else {
      if (lVar5 < 0x54c2b837d86711b8) {
        if (lVar5 < 0x4101bf80446bdc20) {
          if (lVar5 == 0x3ace195dd3930386) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fb3c);
            lVar1 = -0x59bab4f8732095e2;
            if (iVar3 != 0) {
              lVar1 = -0x12e0f8e15901e122;
            }
          }
          else if (lVar5 == 0x3b16db62a3c2f4fb) {
            lVar1 = 0x3ace195dd3930386;
          }
        }
        else if (lVar5 == 0x483dcbc36ada42c4) {
          DAT_0021fb3c = 0;
          unaff_x26 = (&PTR_DAT_00217960)[local_c8];
          lVar1 = local_d8;
        }
        else if (lVar5 == 0x53e14c28908eeeeb) {
          lVar1 = -0x428109008685f48;
          if (local_a4 != local_a8 || (int)local_a8 < 1) {
            lVar1 = -0x244c08061ede3ca6;
          }
        }
        else if (lVar5 == 0x4101bf80446bdc20) {
          if (*(long *)(local_e0 + 0x28) == local_78) {
            return unaff_x24;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        goto LAB_00204910;
      }
      if (0x55dcd19dee737a19 < lVar5) {
        if (lVar5 == 0x55dcd19dee737a1a) goto LAB_002048fc;
        if (lVar5 == 0x5eda44100212fa2c) {
          DAT_0021efb4 = DAT_0021efb4 ^ 0x78;
          DAT_0021efb5 = DAT_0021efb5 ^ 0x78;
          DAT_0021efb6 = DAT_0021efb6 ^ 0x78;
          DAT_0021efb7 = DAT_0021efb7 ^ 0x78;
          DAT_0021efb8 = DAT_0021efb8 ^ 0x78;
          lVar1 = -0x2ef756f1c7496e5f;
        }
        else if (lVar5 == 0x65536dc2a8308acd) {
          lVar1 = -0x316a2fad8e5725cc;
        }
        goto LAB_00204910;
      }
      if (lVar5 != 0x54c2b837d86711b8) {
        if (lVar5 == 0x54cc8c62117e2258) {
          lVar1 = 0x483dcbc36ada42c4;
        }
        goto LAB_00204910;
      }
    }
LAB_002048fc:
    lVar1 = 0x4101bf80446bdc20;
    unaff_x24 = (void *)0x0;
    goto LAB_00204910;
  }
  if (lVar5 < -0x34ce59f19df9112f) {
    if (-0x5412c5352f1dc37b < lVar5) {
      if (lVar5 < -0x405b680ffecd4131) {
        lVar1 = local_b8;
        if ((lVar5 != -0x5412c5352f1dc37a) && (lVar1 = lVar5, lVar5 == -0x50e54cd80f265318)) {
          lVar1 = 0x27963d1423e000f6;
        }
      }
      else if (lVar5 == -0x405b680ffecd4131) {
        DAT_0021efac = DAT_0021efac ^ 0x78;
        DAT_0021efad = DAT_0021efad ^ 0x78;
        DAT_0021efae = DAT_0021efae ^ 0x78;
        DAT_0021efaf = DAT_0021efaf ^ 0x78;
        DAT_0021efb0 = DAT_0021efb0 ^ 0x78;
        DAT_0021fb47 = '\x01';
        lVar1 = 0x5eda44100212fa2c;
      }
      else if (lVar5 == -0x3cc327df2eecc1c6) {
        local_a4 = local_ac;
        lVar1 = 0x54c2b837d86711b8;
        if (0 < (int)local_ac) {
          lVar1 = -0x2eb8ff3123f5eabc;
        }
      }
      else if (lVar5 == -0x359d4e10b3bbbc3c) {
        lVar1 = -0x7dbc322ed98e3afb;
        if (DAT_0021fb49 == '\0') {
          lVar1 = 0x31b9d74c89a90fe3;
        }
      }
      goto LAB_00204910;
    }
    if (lVar5 < -0x59bab4f8732095e2) {
      lVar1 = 0x32f4713bcaf93571;
      if ((lVar5 != -0x7dbc322ed98e3afb) && (lVar1 = lVar5, lVar5 == -0x7447e788f4d32ac9)) {
        lVar1 = -0x50e54cd80f265318;
        if (DAT_0021fb48 == '\0') {
          lVar1 = 0xc7bf249d1db72b2;
        }
      }
      goto LAB_00204910;
    }
    if (lVar5 == -0x59bab4f8732095e2) {
      lVar1 = 0x54cc8c62117e2258;
      if (DAT_0021fb47 == '\0') {
        lVar1 = -0x405b680ffecd4131;
      }
      goto LAB_00204910;
    }
    if (lVar5 != -0x56ad058abb7434bf) goto LAB_00204910;
    local_a8 = FUN_001e0fd8(unaff_x23,local_a0,local_90,local_88,unaff_x26,local_80);
  }
  else {
    if (lVar5 < -0x2e5d71d46d443370) {
      if (lVar5 < -0x2ef756f1c7496e5f) {
        if (lVar5 == -0x34ce59f19df9112f) {
          DAT_0021efc4 = DAT_0021efc4 ^ 0x78;
          DAT_0021efc5 = DAT_0021efc5 ^ 0x78;
          DAT_0021efc6 = DAT_0021efc6 ^ 0x78;
          DAT_0021efc7 = DAT_0021efc7 ^ 0x78;
          DAT_0021efc8 = DAT_0021efc8 ^ 0x78;
          lVar1 = 0x483dcbc36ada42c4;
        }
        else if (lVar5 == -0x316a2fad8e5725cc) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fb40);
          lVar1 = -0x7447e788f4d32ac9;
          if (iVar3 != 0) {
            lVar1 = 0x65536dc2a8308acd;
          }
        }
      }
      else if (lVar5 == -0x2ef756f1c7496e5f) {
        DAT_0021efbc = DAT_0021efbc ^ 0x78;
        DAT_0021efbd = DAT_0021efbd ^ 0x78;
        DAT_0021efbe = DAT_0021efbe ^ 0x78;
        DAT_0021efbf = DAT_0021efbf ^ 0x78;
        DAT_0021efc0 = DAT_0021efc0 ^ 0x78;
        lVar1 = -0x34ce59f19df9112f;
      }
      else if (lVar5 == -0x2eb8ff3123f5eabc) {
        local_a0 = (ulong)local_a4 + 1;
        unaff_x23 = calloc(local_a0,1);
        lVar1 = 0x55dcd19dee737a1a;
        if (unaff_x23 != (void *)0x0) {
          lVar1 = -0x5412c5352f1dc37a;
        }
      }
      goto LAB_00204910;
    }
    if (-0x244c08061ede3ca7 < lVar5) {
      if (lVar5 == -0x244c08061ede3ca6) {
        free(unaff_x23);
        goto LAB_002048fc;
      }
      lVar1 = 0x3ace195dd3930386;
      if ((lVar5 != -0x12e0f8e15901e122) && (lVar1 = lVar5, lVar5 == -0x428109008685f48)) {
        lVar1 = 0x4101bf80446bdc20;
        unaff_x24 = unaff_x23;
      }
      goto LAB_00204910;
    }
    if (lVar5 != -0x2e5d71d46d443370) {
      if (lVar5 == -0x29504ee3cf2d5633) {
        local_ac = FUN_001e0fd8(local_98,1,local_90,local_88,unaff_x26,local_c0,local_80);
        goto LAB_0020523c;
      }
      goto LAB_00204910;
    }
    local_a8 = FUN_001e0fd8(unaff_x23,local_a0,local_90,local_88,unaff_x26,local_c0,local_80);
  }
  lVar1 = 0x53e14c28908eeeeb;
  goto LAB_00204910;
}

