// rea decompile_all
// name: FUN_00179e44
// address: 0x179e44
// body: available
// range: 0x179e44-0x17a9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00179e44(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_88;
  int local_80;
  int local_7c;
  int local_6c;
  
  lVar1 = 0x452d53eeea4fae6;
  if (param_3 != 0) {
    lVar1 = -0x719aeac5c2fa92bd;
  }
  lVar3 = -0xa26d27699b19f3e;
LAB_00179f58:
  do {
    lVar4 = lVar3;
    lVar3 = lVar4;
    if (lVar4 < -0x19f79d8417373b2a) {
      if (lVar4 < -0x3ffb44e85fa27eaf) {
        if (lVar4 < -0x578680e8d268dce5) {
          if (lVar4 < -0x719aeac5c2fa92bd) {
            lVar3 = 0x24e310e2985a3222;
            if ((lVar4 != -0x7e742c79edd0d15d) && (lVar3 = lVar4, lVar4 == -0x7a5f2b3cc1020462)) {
              lVar3 = -0x316debd89bccb892;
            }
            goto LAB_00179f58;
          }
          if (lVar4 == -0x719aeac5c2fa92bd) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x34d4ad3abedffff4;
            if (lVar4 != 0) {
              lVar3 = 0x26b62020b0aa121e;
            }
            goto LAB_00179f58;
          }
          if (lVar4 != -0x6de64a9f2615d4e5) goto LAB_00179f58;
          local_6c = 0x1b;
        }
        else {
          if (lVar4 < -0x4a8391dc248c7f4c) {
            lVar3 = -0x3ffb44e85fa27eaf;
            if ((lVar4 != -0x578680e8d268dce5) && (lVar3 = lVar4, lVar4 == -0x4e9c5a5e47d18ad6)) {
              lVar3 = -0x44281625c09c414c;
              if (local_88 != 0) {
                lVar3 = -0x231afa1b7f11a7da;
              }
            }
            goto LAB_00179f58;
          }
          if (lVar4 == -0x4a8391dc248c7f4c) {
            lVar3 = -0x7e742c79edd0d15d;
            if (DAT_0021f9dc == '\0') {
              lVar3 = 0x319faf94648beb71;
            }
            goto LAB_00179f58;
          }
          lVar3 = -0x11f4cf8d2c00c35b;
          if ((lVar4 == -0x4a4edde3b19d8a04) || (lVar3 = lVar4, lVar4 != -0x44281625c09c414c))
          goto LAB_00179f58;
          local_6c = 0x11;
        }
LAB_00179f44:
        lVar3 = 0x3d035c9aa1a74bc4;
        goto LAB_00179f58;
      }
      if (lVar4 < -0x2d58c8d04261592b) {
        if (lVar4 < -0x33b97250fb962322) {
          if (lVar4 == -0x3ffb44e85fa27eaf) {
            DAT_0021f848 = 0;
            local_88 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x27,&DAT_0021dae8,&DAT_0021daf0);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x4e9c5a5e47d18ad6;
            if (lVar4 != 0) {
              lVar3 = -0x231adb85a81a7f15;
            }
          }
          else if (lVar4 == -0x34d4ad3abedffff4) {
            lVar3 = 0x686abeca53c867f;
            if (unaff_x27 != 0) {
              lVar3 = 0x40b17a06f7ed6277;
            }
          }
        }
        else {
          lVar3 = 0x21f89fb6280e1198;
          if ((lVar4 != -0x33b97250fb962322) && (lVar3 = lVar4, lVar4 == -0x316debd89bccb892)) {
            *param_4 = 0;
            lVar3 = 0x42499f464d274604;
          }
        }
      }
      else if (lVar4 < -0x231afa1b7f11a7da) {
        lVar3 = -0x316debd89bccb892;
        if ((lVar4 != -0x2d58c8d04261592b) && (lVar3 = lVar4, lVar4 == -0x25b220ee67c01f8c)) {
          lVar3 = 0x42499f464d274604;
        }
      }
      else if (lVar4 == -0x231afa1b7f11a7da) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_88);
        *param_4 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x2c812424ce32f415;
        if (lVar4 != 0) {
          lVar3 = -0x95c7fb9615b298a;
        }
      }
      else if (lVar4 == -0x231adb85a81a7f15) {
        local_80 = 0x11;
LAB_0017a854:
        lVar3 = -0x19f79d8417373b2a;
      }
      else if (lVar4 == -0x212ad74160accdfe) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar3 = -0x25b220ee67c01f8c;
        if (*param_1 != 0) {
          lVar3 = -0x7a5f2b3cc1020462;
        }
      }
      goto LAB_00179f58;
    }
    if (lVar4 < 0x299a25d16e47a356) {
      if (lVar4 < 0x452d53eeea4fae6) {
        if (lVar4 < -0xa26d27699b19f3e) {
          if (lVar4 == -0x19f79d8417373b2a) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_6c = local_80;
            goto LAB_00179f44;
          }
          if (lVar4 == -0x11f4cf8d2c00c35b) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f848);
            lVar3 = 0x2eeb9df6a9c9b9ed;
            if (iVar2 != 0) {
              lVar3 = -0x4a4edde3b19d8a04;
            }
          }
        }
        else {
          lVar3 = lVar1;
          if ((lVar4 != -0xa26d27699b19f3e) && (lVar3 = lVar4, lVar4 == -0x95c7fb9615b298a)) {
            local_80 = 0x1b;
            goto LAB_0017a854;
          }
        }
        goto LAB_00179f58;
      }
      if (lVar4 < 0x21f89fb6280e1198) {
        if (lVar4 == 0x452d53eeea4fae6) {
          local_7c = 3;
        }
        else {
          if (lVar4 != 0x686abeca53c867f) goto LAB_00179f58;
          local_7c = 0x11;
        }
        lVar3 = 0x299a25d16e47a356;
        goto LAB_00179f58;
      }
      if (lVar4 == 0x21f89fb6280e1198) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f84c);
        lVar3 = -0x4a8391dc248c7f4c;
        if (iVar2 != 0) {
          lVar3 = -0x33b97250fb962322;
        }
      }
      else if (lVar4 == 0x24e310e2985a3222) {
        DAT_0021f84c = 0;
        lVar3 = -0x11f4cf8d2c00c35b;
      }
      else if (lVar4 == 0x26b62020b0aa121e) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x2d58c8d04261592b;
        if (unaff_x27 != 0) {
          lVar3 = 0x4cb25ba0d623a5cf;
        }
        *param_1 = 0x11;
      }
      goto LAB_00179f58;
    }
    if (lVar4 < 0x3d035c9aa1a74bc4) {
      if (lVar4 < 0x2c812424ce32f415) {
        if (lVar4 == 0x299a25d16e47a356) {
          *param_1 = local_7c;
          lVar3 = -0x316debd89bccb892;
        }
        else if (lVar4 == 0x2ac8f962b85f1348) {
          DAT_0021dae8 = DAT_0021dae8 ^ 0x55;
          DAT_0021dae9 = DAT_0021dae9 ^ 0x55;
          DAT_0021daea = DAT_0021daea ^ 0x55;
          DAT_0021daeb = DAT_0021daeb ^ 0x55;
          DAT_0021daec = DAT_0021daec ^ 0x55;
          DAT_0021daed = DAT_0021daed ^ 0x55;
          DAT_0021f9db = '\x01';
          lVar3 = -0x3ffb44e85fa27eaf;
        }
      }
      else if (lVar4 == 0x2c812424ce32f415) {
        lVar3 = -0x6de64a9f2615d4e5;
        if (*param_4 != 0) {
          lVar3 = 0x4834b9277651b0ab;
        }
      }
      else if (lVar4 == 0x2eeb9df6a9c9b9ed) {
        lVar3 = -0x578680e8d268dce5;
        if (DAT_0021f9db == '\0') {
          lVar3 = 0x2ac8f962b85f1348;
        }
      }
      else if (lVar4 == 0x319faf94648beb71) {
        DAT_0021db20 = DAT_0021db20 ^ 0x55;
        DAT_0021db21 = DAT_0021db21 ^ 0x55;
        _DAT_0021daf0 = _DAT_0021daf0 ^ 0x5555555555555555;
        uRam000000000021daf8 = uRam000000000021daf8 ^ 0x5555555555555555;
        _DAT_0021db00 = _DAT_0021db00 ^ 0x5555555555555555;
        uRam000000000021db08 = uRam000000000021db08 ^ 0x5555555555555555;
        _DAT_0021db10 = _DAT_0021db10 ^ 0x5555555555555555;
        uRam000000000021db18 = uRam000000000021db18 ^ 0x5555555555555555;
        DAT_0021f9dc = '\x01';
        lVar3 = 0x24e310e2985a3222;
      }
    }
    else if (lVar4 < 0x42499f464d274604) {
      if (lVar4 == 0x3d035c9aa1a74bc4) {
        *param_1 = local_6c;
        lVar3 = -0x212ad74160accdfe;
      }
      else if (lVar4 == 0x40b17a06f7ed6277) {
        lVar3 = 0x21f89fb6280e1198;
      }
    }
    else {
      lVar3 = -0x212ad74160accdfe;
      if (((lVar4 != 0x4834b9277651b0ab) && (lVar4 != 0x4cb25ba0d623a5cf)) &&
         (lVar3 = lVar4, lVar4 == 0x42499f464d274604)) {
        return;
      }
    }
  } while( true );
}

