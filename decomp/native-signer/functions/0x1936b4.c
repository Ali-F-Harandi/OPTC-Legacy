// rea decompile_all
// name: FUN_001936b4
// address: 0x1936b4
// body: available
// range: 0x1936b4-0x19428b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001936b4(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x23;
  undefined4 local_84;
  long local_80;
  undefined4 local_74;
  
  lVar1 = -0x2c57d3fd7c7f029;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x775da26457bb4de9;
  }
  lVar4 = 0x4f48a1ad939cd285;
LAB_001937d4:
  while (lVar3 = lVar4, lVar4 = lVar3, -0x2c57d3fd7c7f02a < lVar3) {
    if (lVar3 < 0x4f48a1ad939cd285) {
      if (lVar3 < 0x282d9b2cc5bf92db) {
        if (lVar3 < 0x16e1c46dbf070820) {
          lVar4 = -0x7cab24dad8e1e20d;
          if ((lVar3 != -0x2c57d3fd7c7f029) && (lVar4 = lVar3, lVar3 == 0x2970253a2678be6)) {
            lVar4 = -0x394dba9bbcfacc3d;
          }
        }
        else {
          lVar4 = -0x24e34cade03597c9;
          if (lVar3 != 0x16e1c46dbf070820) {
            if (lVar3 == 0x1b5e95948bbfc890) {
              lVar4 = 0x282d9b2cc5bf92db;
LAB_00194188:
              *param_1 = 0x11;
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == 0x1cb159f56a524295) {
                lVar4 = -0x19ce936cdcdab155;
                if (DAT_0021fa0d == '\0') {
                  lVar4 = 0x5ef38a028a5a44f7;
                }
              }
            }
          }
        }
      }
      else if (lVar3 < 0x3d28b875fdc922b9) {
        if (lVar3 == 0x2ee85e18e022263f) {
          lVar4 = -0x7968f06893108d8d;
          if (DAT_0021fa0e == '\0') {
            lVar4 = -0x72adfa11a6c8f77e;
          }
        }
        else if (lVar3 == 0x3cc09a4be449f2b2) {
          DAT_0021f91c = 0;
          local_80 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x23,&DAT_0021e1e8,&DAT_0021e200);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x21100d68e90649ef;
          if (lVar3 != 0) {
            lVar4 = 0x7e6b30276ce9c74c;
          }
        }
        else if (lVar3 == 0x282d9b2cc5bf92db) {
          return;
        }
      }
      else if (lVar3 == 0x3d28b875fdc922b9) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f91c);
        lVar4 = 0x2ee85e18e022263f;
        if (iVar2 != 0) {
          lVar4 = -0x429f8ae05a25b1a4;
        }
      }
      else if (lVar3 == 0x417e39f85c387739) {
        local_74 = 0x1c;
        goto LAB_00193df8;
      }
    }
    else if (lVar3 < 0x5ff679bcf5dd63ff) {
      if (lVar3 < 0x5078209c718abc4a) {
        lVar4 = lVar1;
        if ((lVar3 != 0x4f48a1ad939cd285) && (lVar4 = lVar3, lVar3 == 0x50581feb9eec644c)) {
          lVar4 = 0x282d9b2cc5bf92db;
        }
      }
      else {
        lVar4 = -0x7cab24dad8e1e20d;
        if ((lVar3 != 0x5078209c718abc4a) && (lVar4 = lVar3, lVar3 == 0x5ef38a028a5a44f7)) {
          DAT_0021e1e0 = DAT_0021e1e0 ^ 0x7d;
          DAT_0021e1e1 = DAT_0021e1e1 ^ 0x7d;
          DAT_0021e1e2 = DAT_0021e1e2 ^ 0x7d;
          DAT_0021e1e3 = DAT_0021e1e3 ^ 0x7d;
          DAT_0021e1e4 = DAT_0021e1e4 ^ 0x7d;
          _DAT_0021e1d0 = _DAT_0021e1d0 ^ 0x7d7d7d7d7d7d7d7d;
          uRam000000000021e1d8 = uRam000000000021e1d8 ^ 0x7d7d7d7d7d7d7d7d;
          DAT_0021fa0d = '\x01';
          lVar4 = 0x69e91245661809ae;
        }
      }
    }
    else if (lVar3 < 0x6e0a62d94a25f4ca) {
      lVar4 = -0x24e34cade03597c9;
      if ((lVar3 != 0x5ff679bcf5dd63ff) && (lVar4 = lVar3, lVar3 == 0x69e91245661809ae)) {
        DAT_0021f918 = 0;
        unaff_x23 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e1d0);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x626cc2766857ffa1;
        if (lVar3 != 0) {
          lVar4 = -0x3c3a57cb1f548fc0;
        }
      }
    }
    else if (lVar3 == 0x6e0a62d94a25f4ca) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f920);
      lVar4 = -0x1cb64f1f4afe4ade;
      if (iVar2 != 0) {
        lVar4 = -0x38e8c0137f228ba6;
      }
    }
    else if (lVar3 == 0x77bf7cc752b5ba32) {
      (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_80,param_4);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = 0x16e1c46dbf070820;
      if (lVar3 != 0) {
        lVar4 = 0x417e39f85c387739;
      }
    }
    else if (lVar3 == 0x7e6b30276ce9c74c) {
      local_74 = 0x11;
LAB_00193df8:
      lVar4 = -0x26244e9901bd4184;
    }
  }
  if (lVar3 < -0x3c3a57cb1f548fc0) {
    if (lVar3 < -0x626cc2766857ffa1) {
      if (lVar3 < -0x775da26457bb4de9) {
        if (lVar3 == -0x7cab24dad8e1e20d) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f918);
          lVar4 = 0x1cb159f56a524295;
          if (iVar2 != 0) {
            lVar4 = 0x5078209c718abc4a;
          }
        }
        else if (lVar3 == -0x7968f06893108d8d) {
          lVar4 = 0x3cc09a4be449f2b2;
        }
      }
      else if (lVar3 == -0x775da26457bb4de9) {
        *param_1 = 3;
        lVar4 = 0x282d9b2cc5bf92db;
      }
      else if (lVar3 == -0x72adfa11a6c8f77e) {
        DAT_0021e1f0 = DAT_0021e1f0 ^ 0x44;
        DAT_0021e1f2 = DAT_0021e1f2 ^ 0x44;
        DAT_0021e1f1 = DAT_0021e1f1 ^ 0x44;
        DAT_0021e1e8 = DAT_0021e1e8 ^ 0x4444444444444444;
        DAT_0021fa0e = '\x01';
        lVar4 = 0x3cc09a4be449f2b2;
      }
      goto LAB_001937d4;
    }
    if (lVar3 < -0x5010a6c4d0460052) {
      if (lVar3 == -0x626cc2766857ffa1) {
        lVar4 = 0x1b5e95948bbfc890;
        if (unaff_x23 != 0) {
          lVar4 = -0x1323c9ce2076db1f;
        }
      }
      else if (lVar3 == -0x5269e71b6d6b1fd4) {
        *param_1 = local_84;
        lVar4 = -0x24e34cade03597c9;
      }
      goto LAB_001937d4;
    }
    if (lVar3 == -0x5010a6c4d0460052) {
      _DAT_0021e200 = _DAT_0021e200 ^ 0x4646464646464646;
      uRam000000000021e208 = uRam000000000021e208 ^ 0x4646464646464646;
      _DAT_0021e210 = _DAT_0021e210 ^ 0x4646464646464646;
      uRam000000000021e218 = uRam000000000021e218 ^ 0x4646464646464646;
      DAT_0021e220 = DAT_0021e220 ^ 0x46;
      DAT_0021fa0f = '\x01';
      lVar4 = -0x394dba9bbcfacc3d;
      goto LAB_001937d4;
    }
    if (lVar3 != -0x4361d679494ff337) {
      if (lVar3 == -0x429f8ae05a25b1a4) {
        lVar4 = 0x3d28b875fdc922b9;
      }
      goto LAB_001937d4;
    }
    local_84 = 0x11;
  }
  else {
    if (-0x24e34cade03597ca < lVar3) {
      if (lVar3 < -0x1cb64f1f4afe4ade) {
        if (lVar3 == -0x24e34cade03597c9) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x23);
          lVar4 = 0x282d9b2cc5bf92db;
        }
        else if (lVar3 == -0x21100d68e90649ef) {
          lVar4 = -0x4361d679494ff337;
          if (local_80 != 0) {
            lVar4 = 0x77bf7cc752b5ba32;
          }
        }
      }
      else if (lVar3 == -0x1cb64f1f4afe4ade) {
        lVar4 = 0x2970253a2678be6;
        if (DAT_0021fa0f == '\0') {
          lVar4 = -0x5010a6c4d0460052;
        }
      }
      else {
        lVar4 = 0x69e91245661809ae;
        if ((lVar3 != -0x19ce936cdcdab155) && (lVar4 = lVar3, lVar3 == -0x1323c9ce2076db1f)) {
          lVar4 = 0x6e0a62d94a25f4ca;
        }
      }
      goto LAB_001937d4;
    }
    if (lVar3 < -0x38e8c0137f228ba6) {
      if (lVar3 == -0x3c3a57cb1f548fc0) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = 0x50581feb9eec644c;
        if (unaff_x23 != 0) {
          lVar4 = 0x5ff679bcf5dd63ff;
        }
        goto LAB_00194188;
      }
      if (lVar3 == -0x394dba9bbcfacc3d) {
        DAT_0021f920 = 0;
        lVar4 = 0x3d28b875fdc922b9;
      }
      goto LAB_001937d4;
    }
    lVar4 = 0x6e0a62d94a25f4ca;
    if ((lVar3 == -0x38e8c0137f228ba6) || (lVar4 = lVar3, lVar3 != -0x26244e9901bd4184))
    goto LAB_001937d4;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_84 = local_74;
  }
  lVar4 = -0x5269e71b6d6b1fd4;
  goto LAB_001937d4;
}

