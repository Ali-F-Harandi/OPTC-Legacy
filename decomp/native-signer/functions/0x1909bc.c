// rea decompile_all
// name: FUN_001909bc
// address: 0x1909bc
// body: available
// range: 0x1909bc-0x19153b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001909bc(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_80;
  int local_74;
  
  lVar1 = -0x3639ada08d62d512;
  if (param_3 != 0) {
    lVar1 = 0x75d81be8b451f40e;
  }
  lVar4 = 0x332b11cab2aebb36;
LAB_00190acc:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0xcdeabf9e2ee78dd) {
      if (lVar3 < -0x2b015dc3d521c345) {
        if (lVar3 < -0x530c9e53e1452dd4) {
          if (lVar3 < -0x5b85010f12975fd6) {
            if (lVar3 == -0x6ce61e5184704df8) {
              lVar4 = 0x3507dd7b542d27ab;
              if (local_80 != 0) {
                lVar4 = 0xcdeabf9e2ee78dd;
              }
            }
            else if (lVar3 == -0x619d376abf4efef1) {
              lVar4 = 0x2511acddc55df9f5;
            }
          }
          else if (lVar3 == -0x5b85010f12975fd6) {
            DAT_0021e0f0 = DAT_0021e0f0 ^ 0x19;
            DAT_0021e0f1 = DAT_0021e0f1 ^ 0x19;
            DAT_0021e0f2 = DAT_0021e0f2 ^ 0x19;
            DAT_0021e0f3 = DAT_0021e0f3 ^ 0x19;
            DAT_0021e0f4 = DAT_0021e0f4 ^ 0x19;
            DAT_0021e0f5 = DAT_0021e0f5 ^ 0x19;
            _DAT_0021e0d0 = _DAT_0021e0d0 ^ 0x1919191919191919;
            uRam000000000021e0d8 = uRam000000000021e0d8 ^ 0x1919191919191919;
            _DAT_0021e0e0 = _DAT_0021e0e0 ^ 0x1919191919191919;
            uRam000000000021e0e8 = uRam000000000021e0e8 ^ 0x1919191919191919;
            DAT_0021fa07 = '\x01';
            lVar4 = -0x2d5b1ad0a297e947;
          }
          else if (lVar3 == -0x573bd37249d20b95) {
            lVar4 = -0x19fa3f0660e43ea7;
          }
        }
        else if (lVar3 < -0x380d23c280fd62a7) {
          if (lVar3 == -0x530c9e53e1452dd4) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar4 = -0x380d23c280fd62a7;
            if (unaff_x27 != 0) {
              lVar4 = 0x3489314e2c777a76;
            }
LAB_001913b4:
            *param_1 = 0x11;
          }
          else if (lVar3 == -0x472e8396327813bd) {
            lVar4 = 0x2511acddc55df9f5;
          }
        }
        else {
          lVar4 = 0x78ddb835653f250f;
          if (lVar3 != -0x380d23c280fd62a7) {
            if (lVar3 == -0x3639ada08d62d512) {
              local_74 = 3;
              goto LAB_00191268;
            }
            lVar4 = lVar3;
            if (lVar3 == -0x2d5b1ad0a297e947) {
              DAT_0021f900 = 0;
              lVar4 = 0x20bb1b664a63ded6;
            }
          }
        }
      }
      else if (lVar3 < -0x197501ae5265b971) {
        if (lVar3 < -0x2558b6d1ab136160) {
          if (lVar3 == -0x2b015dc3d521c345) {
            DAT_0021e0c0 = DAT_0021e0c0 ^ 0x9f;
            DAT_0021e0c1 = DAT_0021e0c1 ^ 0x9f;
            _DAT_0021e0b0 = _DAT_0021e0b0 ^ 0x9f9f9f9f9f9f9f9f;
            uRam000000000021e0b8 = uRam000000000021e0b8 ^ 0x9f9f9f9f9f9f9f9f;
            DAT_0021fa06 = '\x01';
            lVar4 = 0x5ce8a703dc923429;
          }
          else if (lVar3 == -0x2ab2143e82064a4f) {
            lVar4 = 0x428e8ad73f077264;
          }
        }
        else if (lVar3 == -0x2558b6d1ab136160) {
          lVar4 = -0x9358c58688dfc3d;
          if (DAT_0021fa06 == '\0') {
            lVar4 = -0x2b015dc3d521c345;
          }
        }
        else if (lVar3 == -0x19fa3f0660e43ea7) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f900);
          lVar4 = 0x177698e10201e161;
          if (iVar2 != 0) {
            lVar4 = -0x573bd37249d20b95;
          }
        }
      }
      else if (lVar3 < -0x9358c58688dfc3d) {
        lVar4 = -0x19fa3f0660e43ea7;
        if ((lVar3 != -0x197501ae5265b971) && (lVar4 = lVar3, lVar3 == -0xc4b1111d82acd28)) {
          lVar4 = 0x5475d0ee08e33ded;
        }
      }
      else {
        lVar4 = 0x5ce8a703dc923429;
        if (((lVar3 != -0x9358c58688dfc3d) &&
            (lVar4 = 0x20bb1b664a63ded6, lVar3 != -0x3c4447f43ecd21a)) &&
           (lVar4 = lVar3, lVar3 == -0x306994ed04e5f2)) {
          lVar4 = 0x65a91f4f9884b239;
          if (unaff_x27 != 0) {
            lVar4 = -0x197501ae5265b971;
          }
        }
      }
    }
    if (lVar3 < 0x428e8ad73f077264) {
      if (lVar3 < 0x2511acddc55df9f5) {
        if (lVar3 < 0x177698e10201e161) {
          if (lVar3 == 0xcdeabf9e2ee78dd) {
            lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_80);
            *param_4 = lVar4;
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x5e8dff8b992d81b7;
            if (lVar3 != 0) {
              lVar4 = -0x619d376abf4efef1;
            }
          }
          else if (lVar3 == 0xcfb05277a4b5408) {
            lVar4 = -0x2d5b1ad0a297e947;
          }
        }
        else if (lVar3 == 0x177698e10201e161) {
          lVar4 = 0xcfb05277a4b5408;
          if (DAT_0021fa07 == '\0') {
            lVar4 = -0x5b85010f12975fd6;
          }
        }
        else if (lVar3 == 0x20bb1b664a63ded6) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f8fc);
          lVar4 = -0x2558b6d1ab136160;
          if (iVar2 != 0) {
            lVar4 = -0x3c4447f43ecd21a;
          }
        }
      }
      else if (lVar3 < 0x3489314e2c777a76) {
        if (lVar3 == 0x2511acddc55df9f5) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x428e8ad73f077264;
        }
        else if (lVar3 == 0x332b11cab2aebb36) {
          lVar4 = lVar1;
        }
      }
      else {
        lVar4 = 0x5475d0ee08e33ded;
        if (((lVar3 != 0x3489314e2c777a76) &&
            (lVar4 = 0x428e8ad73f077264, lVar3 != 0x3507dd7b542d27ab)) &&
           (lVar4 = lVar3, lVar3 == 0x384325d99b045662)) {
          lVar4 = 0x78ddb835653f250f;
        }
      }
      goto LAB_00190acc;
    }
    if (lVar3 < 0x62216f5bab7e7ee3) {
      if (lVar3 < 0x5475d0ee08e33ded) {
        if (lVar3 == 0x428e8ad73f077264) {
          lVar4 = 0x5475d0ee08e33ded;
          goto LAB_001913b4;
        }
        if (lVar3 == 0x4a70ea33fd05aa2e) {
          lVar4 = 0x62216f5bab7e7ee3;
        }
      }
      else if (lVar3 == 0x5475d0ee08e33ded) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x4a70ea33fd05aa2e;
        if (*param_1 != 0) {
          lVar4 = 0x384325d99b045662;
        }
      }
      else if (lVar3 == 0x5ce8a703dc923429) {
        DAT_0021f8fc = 0;
        local_80 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e0b0,&DAT_0021e0d0);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x6ce61e5184704df8;
        if (lVar3 != 0) {
          lVar4 = -0x472e8396327813bd;
        }
      }
      else if (lVar3 == 0x5e8dff8b992d81b7) {
        lVar4 = -0x2ab2143e82064a4f;
        if (*param_4 != 0) {
          lVar4 = -0xc4b1111d82acd28;
        }
      }
    }
    else if (lVar3 < 0x75d81be8b451f40e) {
      if (lVar3 == 0x65a91f4f9884b239) {
        local_74 = 0x11;
LAB_00191268:
        lVar4 = 0x6692425cbae8a6a7;
      }
      else if (lVar3 == 0x6692425cbae8a6a7) {
        *param_1 = local_74;
        lVar4 = 0x78ddb835653f250f;
      }
      else if (lVar3 == 0x62216f5bab7e7ee3) {
        return;
      }
    }
    else if (lVar3 == 0x75d81be8b451f40e) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x306994ed04e5f2;
      if (lVar3 != 0) {
        lVar4 = -0x530c9e53e1452dd4;
      }
    }
    else if (lVar3 == 0x78ddb835653f250f) {
      *param_4 = 0;
      lVar4 = 0x62216f5bab7e7ee3;
    }
  } while( true );
}

