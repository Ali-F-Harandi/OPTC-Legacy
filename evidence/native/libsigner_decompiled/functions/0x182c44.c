// rea decompile_all
// name: FUN_00182c44
// address: 0x182c44
// body: available
// range: 0x182c44-0x183abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00182c44(int *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long local_d0;
  long local_b8;
  int local_ac;
  long local_a0;
  int local_94;
  int local_84;
  long local_80;
  long local_78;
  
  lVar1 = -0x627a3f591b358cec;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x673ef0a5a79b4d28;
  }
  lVar3 = lVar1;
  lVar6 = 0x24eedfed5dd6a94c;
LAB_00182d5c:
  while (lVar8 = lVar6, lVar7 = lVar3, lVar6 = lVar8, lVar3 = lVar7, lVar8 < 0x42ce619d6122ad9) {
    if (lVar8 < -0x415f7ef565a27a0e) {
      if (lVar8 < -0x627a3f591b358cec) {
        if (lVar8 < -0x6a4959fcb8b4c2d8) {
          lVar6 = -0x20aa75f4364a88ff;
          if ((lVar8 != -0x77155227c6519bec) && (lVar6 = lVar8, lVar8 == -0x6f9fda3975f3d903)) {
            *param_1 = local_84;
            lVar3 = local_80;
            lVar6 = -0x415a678fa8d7e72f;
          }
        }
        else {
          lVar6 = 0x3d41561d37e7646c;
          if (lVar8 != -0x6a4959fcb8b4c2d8) {
            if (lVar8 == -0x670b0e9ad2dc905b) {
              lVar3 = 0;
              lVar6 = -0x415a678fa8d7e72f;
            }
            else {
              lVar6 = lVar8;
              if (lVar8 == -0x63f1b003a0bb72ee) {
                DAT_0021de48 = DAT_0021de48 ^ 0x24;
                DAT_0021de40 = DAT_0021de40 ^ 0x2424242424242424;
                DAT_0021f9f0 = '\x01';
                lVar6 = 0x6290766201bb019a;
              }
            }
          }
        }
      }
      else if (lVar8 < -0x4daedf960cb0556c) {
        if (lVar8 == -0x627a3f591b358cec) {
          local_78 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = 0x26edcd1f6fff8715;
          if (lVar7 != 0) {
            lVar6 = -0x415f7ef565a27a0e;
          }
        }
        else if (lVar8 == -0x5b78005c8ed5b86a) {
          local_94 = 0x12;
LAB_001837b4:
          lVar6 = -0xdf58548c4283e8b;
          local_a0 = unaff_x21;
        }
        else if (lVar8 == -0x4e99759cdcbeb179) {
          lVar6 = 0x4fb67da29d99498;
          lVar7 = -0x63f1b003a0bb72ee;
          cVar2 = DAT_0021f9f0;
          goto LAB_00183994;
        }
      }
      else if (lVar8 == -0x4daedf960cb0556c) {
        lVar8 = 0x351c7b17b170e7c4;
        lVar6 = 0x2300c3606cbb46b0;
        lVar7 = unaff_x21;
LAB_00183938:
        if (lVar7 != 0) {
          lVar6 = lVar8;
        }
      }
      else if (lVar8 == -0x477d0e89efc4e7a7) {
        DAT_0021f8a0 = 0;
        lVar6 = -0x2bb8e79082b089f3;
      }
      else if (lVar8 == -0x43dcc99072c58151) {
        *param_1 = local_ac;
        lVar6 = 0x52f7f5a6e940dd69;
      }
    }
    else if (lVar8 < -0x2bb8e79082b089f3) {
      if (lVar8 < -0x387382a71ceb0689) {
        if (lVar8 == -0x415f7ef565a27a0e) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar6 = 0x3de593aa00af5ee6;
          if (local_78 != 0) {
            lVar6 = -0x670b0e9ad2dc905b;
          }
          *param_1 = 0x11;
        }
        else if (lVar8 == -0x415a678fa8d7e72f) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_78);
          lVar6 = -0x6a4959fcb8b4c2d8;
          local_d0 = lVar7;
          if (lVar7 != 0) {
            lVar6 = 0x1b95a2df10099eeb;
          }
        }
      }
      else if (lVar8 == -0x387382a71ceb0689) {
        local_80 = 0;
        local_84 = 0x11;
LAB_001838d0:
        lVar6 = -0x6f9fda3975f3d903;
      }
      else {
        lVar6 = -0x33e83a6509a2b06b;
        if ((lVar8 != -0x3548597888a00189) && (lVar6 = lVar8, lVar8 == -0x33e83a6509a2b06b)) {
          iVar5 = FUN_00212730(0,1,&DAT_0021f8a0);
          lVar6 = 0x6f854725e3e828a1;
          if (iVar5 != 0) {
            lVar6 = 0x1aa368795a7677d0;
          }
        }
      }
    }
    else if (lVar8 < -0xdf58548c4283e8b) {
      if (lVar8 == -0x2bb8e79082b089f3) {
        iVar5 = FUN_00212730(0,1,&DAT_0021f89c);
        lVar6 = -0x4e99759cdcbeb179;
        if (iVar5 != 0) {
          lVar6 = 0x2603f539d2f00865;
        }
      }
      else {
        lVar6 = 0x52f7f5a6e940dd69;
        if ((lVar8 != -0x244ece57301c7926) && (lVar6 = lVar8, lVar8 == -0x20aa75f4364a88ff)) {
          return;
        }
      }
    }
    else if (lVar8 == -0xdf58548c4283e8b) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_80 = local_a0;
      local_84 = local_94;
      lVar6 = -0x6f9fda3975f3d903;
    }
    else {
      if (lVar8 == -0x14e1167afa24735) {
        local_84 = 0x12;
        local_80 = unaff_x21;
        goto LAB_001838d0;
      }
      if (lVar8 == 0x397ad2c3ff0f0bf) {
        local_ac = 0x11;
        goto LAB_0018373c;
      }
    }
  }
  if (lVar8 < 0x3d41561d37e7646c) {
    if (lVar8 < 0x2300c3606cbb46b0) {
      if (lVar8 < 0x13de041e2ed3ab88) {
        lVar3 = unaff_x21;
        lVar6 = -0x415a678fa8d7e72f;
        if ((lVar8 != 0x42ce619d6122ad9) &&
           (lVar3 = lVar7, lVar6 = lVar8, lVar8 == 0x4fb67da29d99498)) {
          lVar6 = 0x6290766201bb019a;
        }
      }
      else {
        if (lVar8 == 0x13de041e2ed3ab88) {
          local_94 = 0x21;
          goto LAB_001837b4;
        }
        lVar6 = -0x33e83a6509a2b06b;
        if ((lVar8 != 0x1aa368795a7677d0) && (lVar6 = lVar8, lVar8 == 0x1b95a2df10099eeb)) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_d0);
          lVar6 = 0x3d41561d37e7646c;
        }
      }
      goto LAB_00182d5c;
    }
    if (lVar8 < 0x26edcd1f6fff8715) {
      if (lVar8 == 0x2300c3606cbb46b0) {
        local_84 = 0x21;
        local_80 = unaff_x21;
        goto LAB_001838d0;
      }
      lVar6 = lVar1;
      if ((lVar8 != 0x24eedfed5dd6a94c) && (lVar6 = lVar8, lVar8 == 0x2603f539d2f00865)) {
        lVar6 = -0x2bb8e79082b089f3;
      }
      goto LAB_00182d5c;
    }
    if (lVar8 == 0x26edcd1f6fff8715) {
      lVar6 = 0x397ad2c3ff0f0bf;
      lVar8 = -0x3548597888a00189;
      lVar7 = local_78;
      goto LAB_00183938;
    }
    if (lVar8 != 0x32ad496de0f70aeb) {
      if (lVar8 == 0x351c7b17b170e7c4) {
        lVar6 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_b8,unaff_x21,param_5);
        *param_6 = lVar6;
        lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = 0x5f6e8304fb56eb37;
        if (lVar7 != 0) {
          lVar6 = -0x5b78005c8ed5b86a;
        }
      }
      goto LAB_00182d5c;
    }
    bVar4 = local_b8 == 0;
    lVar7 = 0x6f14cee41c8c1fb6;
    lVar6 = -0x387382a71ceb0689;
  }
  else {
    if (0x6290766201bb0199 < lVar8) {
      if (lVar8 < 0x6f854725e3e828a1) {
        if (lVar8 == 0x6290766201bb019a) {
          DAT_0021f89c = 0;
          local_b8 = (**(code **)(*param_2 + 0x108))(param_2,local_78,&DAT_0021de40,&DAT_0021de50);
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = 0x32ad496de0f70aeb;
          if (lVar7 != 0) {
            lVar6 = 0x73a37513af9b111a;
          }
        }
        else if (lVar8 == 0x673ef0a5a79b4d28) {
          local_ac = 3;
LAB_0018373c:
          lVar6 = -0x43dcc99072c58151;
        }
        else if (lVar8 == 0x6f14cee41c8c1fb6) {
          unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = -0x4daedf960cb0556c;
          if (lVar7 != 0) {
            lVar6 = 0x13de041e2ed3ab88;
          }
        }
      }
      else if (lVar8 == 0x6f854725e3e828a1) {
        lVar6 = 0x7545218b697b4602;
        lVar7 = 0x447b529094ff9c42;
        cVar2 = DAT_0021f9f1;
LAB_00183994:
        if (cVar2 == '\0') {
          lVar6 = lVar7;
        }
      }
      else if (lVar8 == 0x73a37513af9b111a) {
        local_a0 = 0;
        local_94 = 0x11;
        lVar6 = -0xdf58548c4283e8b;
      }
      else if (lVar8 == 0x7545218b697b4602) {
        lVar6 = -0x477d0e89efc4e7a7;
      }
      goto LAB_00182d5c;
    }
    if (lVar8 < 0x447b529094ff9c42) {
      if (lVar8 != 0x3d41561d37e7646c) {
        if (lVar8 == 0x3de593aa00af5ee6) {
          lVar6 = 0x52f7f5a6e940dd69;
        }
        goto LAB_00182d5c;
      }
      lVar7 = -0x244ece57301c7926;
      bVar4 = *param_1 == 0;
      lVar6 = -0x77155227c6519bec;
    }
    else {
      if (lVar8 == 0x447b529094ff9c42) {
        DAT_0021dea8 = DAT_0021dea8 ^ 0x95;
        _DAT_0021de50 = _DAT_0021de50 ^ 0x9595959595959595;
        uRam000000000021de58 = uRam000000000021de58 ^ 0x9595959595959595;
        _DAT_0021de60 = _DAT_0021de60 ^ 0x9595959595959595;
        uRam000000000021de68 = uRam000000000021de68 ^ 0x9595959595959595;
        _DAT_0021de70 = _DAT_0021de70 ^ 0x9595959595959595;
        uRam000000000021de78 = uRam000000000021de78 ^ 0x9595959595959595;
        DAT_0021dea9 = DAT_0021dea9 ^ 0x95;
        DAT_0021deaa = DAT_0021deaa ^ 0x95;
        _DAT_0021de80 = _DAT_0021de80 ^ 0x9595959595959595;
        uRam000000000021de88 = uRam000000000021de88 ^ 0x9595959595959595;
        DAT_0021deab = DAT_0021deab ^ 0x95;
        DAT_0021deac = DAT_0021deac ^ 0x95;
        DAT_0021dead = DAT_0021dead ^ 0x95;
        _DAT_0021de90 = _DAT_0021de90 ^ 0x9595959595959595;
        uRam000000000021de98 = uRam000000000021de98 ^ 0x9595959595959595;
        DAT_0021deae = DAT_0021deae ^ 0x95;
        DAT_0021dea0 = DAT_0021dea0 ^ 0x9595959595959595;
        DAT_0021f9f1 = '\x01';
        lVar6 = -0x477d0e89efc4e7a7;
        goto LAB_00182d5c;
      }
      if (lVar8 == 0x52f7f5a6e940dd69) {
        *param_6 = 0;
        lVar6 = -0x20aa75f4364a88ff;
        goto LAB_00182d5c;
      }
      if (lVar8 != 0x5f6e8304fb56eb37) goto LAB_00182d5c;
      lVar7 = 0x42ce619d6122ad9;
      bVar4 = *param_6 == 0;
      lVar6 = -0x14e1167afa24735;
    }
  }
  if (!bVar4) {
    lVar6 = lVar7;
  }
  goto LAB_00182d5c;
}

