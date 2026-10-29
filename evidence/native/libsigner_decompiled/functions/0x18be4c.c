// rea decompile_all
// name: FUN_0018be4c
// address: 0x18be4c
// body: available
// range: 0x18be4c-0x18ce63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018be4c(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x24;
  long local_c0;
  long local_b0;
  int local_a4;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  
  lVar1 = 0x5f469bbce37b4e46;
  if (param_3 != 0) {
    lVar1 = -0x10e82560a42dc9a5;
  }
  lVar3 = lVar1;
  lVar8 = -0x4022e60db29d08bd;
LAB_0018bf4c:
  while (lVar7 = lVar8, lVar6 = lVar3, lVar8 = lVar7, lVar3 = lVar6, -0x18659eecb992d0aa < lVar7) {
    if (lVar7 < 0x1a66e6eb9abbd794) {
      if (lVar7 < 0x598be0cfe2805d) {
        if (lVar7 < -0xd6a2fcfd9a2562e) {
          if (lVar7 == -0x18659eecb992d0a9) {
            local_78 = 0;
            local_7c = 0x11;
            goto LAB_0018ca70;
          }
          if (lVar7 == -0x1198fae64556e472) {
            lVar3 = 0;
            lVar8 = 0x14763241a05b69cc;
          }
          else if (lVar7 == -0x10e82560a42dc9a5) {
LAB_0018c340:
            lVar8 = 0x7a95b11d6cd70979;
          }
        }
        else if (lVar7 == -0xd6a2fcfd9a2562e) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_78 = local_98;
          local_7c = local_8c;
          lVar8 = -0x1a2edeb8faa25962;
        }
        else {
          lVar8 = -0x1d8beabf42c2b1ac;
          if ((lVar7 != -0xcf6788a5020c598) && (lVar8 = lVar7, lVar7 == -0x810973e9bf8a8fb)) {
            local_a4 = 0x11;
LAB_0018c61c:
            lVar8 = 0x3d10e1b8cc520d17;
          }
        }
      }
      else if (lVar7 < 0xc9021a26c4b3849) {
        if (lVar7 == 0x598be0cfe2805d) {
          lVar8 = -0x7b2cb4980176d2bf;
          if (DAT_0021f9ca == '\0') {
            lVar8 = -0x777da7dc21d9e886;
          }
        }
        else {
          lVar8 = 0x2cfdc6d466d500b;
          if ((lVar7 != 0xd8b7472d7b4044) && (lVar8 = lVar7, lVar7 == 0x2cfdc6d466d500b)) {
            DAT_0021f8e0 = 0;
            unaff_x24 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e000);
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = 0x7972999f9795f813;
            if (lVar6 != 0) {
              lVar8 = -0x7bfc44a9e4472ff7;
            }
          }
        }
      }
      else if (lVar7 == 0xc9021a26c4b3849) {
        bVar4 = local_b0 == 0;
        lVar8 = -0x18659eecb992d0a9;
        lVar6 = -0x21262d829d67c536;
LAB_0018bf44:
        if (!bVar4) {
          lVar8 = lVar6;
        }
      }
      else if (lVar7 == 0xdbe81e303359102) {
        lVar8 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x24,local_b0,unaff_x20);
        *param_4 = lVar8;
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = 0x3906d1aeb0ba19d9;
        if (lVar6 != 0) {
          lVar8 = -0x7916592214a9d94f;
        }
      }
      else if (lVar7 == 0x14763241a05b69cc) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x24);
        lVar8 = -0x7394b466da4b7ad7;
        local_c0 = lVar6;
        if (lVar6 != 0) {
          lVar8 = -0x55b7bb762bb7e4d5;
        }
      }
    }
    else if (lVar7 < 0x5fc3b46b3312d8fa) {
      if (lVar7 < 0x3d10e1b8cc520d17) {
        lVar8 = 0x21281ee096a3242c;
        if (lVar7 != 0x1a66e6eb9abbd794) {
          if (lVar7 == 0x21281ee096a3242c) {
            DAT_0021f8e4 = 0;
            lVar8 = -0x728dcac4fe7c4feb;
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == 0x3906d1aeb0ba19d9) {
              lVar8 = -0x1cebfd226cf095b9;
              bVar4 = *param_4 == 0;
              lVar6 = -0x59f4ca36a0a38da8;
              goto LAB_0018bf44;
            }
          }
        }
      }
      else if (lVar7 < 0x5528f56aeed253f8) {
        if (lVar7 == 0x3d10e1b8cc520d17) {
          *param_1 = local_a4;
          lVar8 = 0x610faed26f32a93a;
        }
        else if (lVar7 == 0x4cefb809a3e7d9f3) {
          return;
        }
      }
      else {
        if (lVar7 == 0x5528f56aeed253f8) {
          lVar8 = 0x1a66e6eb9abbd794;
          lVar7 = -0x2e40bfc4c931b35b;
          cVar2 = DAT_0021fa02;
          goto LAB_0018c914;
        }
        if (lVar7 == 0x5f469bbce37b4e46) {
          local_a4 = 3;
          goto LAB_0018c61c;
        }
      }
    }
    else if (lVar7 < 0x7972999f9795f813) {
      if (lVar7 == 0x5fc3b46b3312d8fa) {
        local_98 = 0;
        local_8c = 0x11;
        lVar8 = -0xd6a2fcfd9a2562e;
      }
      else if (lVar7 == 0x610faed26f32a93a) {
        *param_4 = 0;
        lVar8 = 0x4cefb809a3e7d9f3;
      }
      else if (lVar7 == 0x6fb48459fbb1f88b) {
        lVar8 = -0x728dcac4fe7c4feb;
      }
    }
    else {
      if (lVar7 == 0x7972999f9795f813) {
        lVar6 = -0x2f45515bbf3c6763;
        lVar8 = -0x810973e9bf8a8fb;
        bVar4 = unaff_x24 == 0;
        goto LAB_0018bf44;
      }
      if (lVar7 == 0x7a95b11d6cd70979) {
        iVar5 = FUN_00212730(0,1,&DAT_0021f8e0);
        lVar8 = -0x4aa1198e7308fed2;
        if (iVar5 != 0) {
          lVar8 = -0x5d4f5f4ae909129f;
        }
      }
      else if (lVar7 == 0x7fb28ed9417ae248) {
LAB_0018c704:
        lVar8 = 0x610faed26f32a93a;
      }
    }
  }
  if (-0x472a3cb215a6b930 < lVar7) {
    if (lVar7 < -0x21262d829d67c536) {
      if (lVar7 < -0x2f45515bbf3c6763) {
        if (lVar7 == -0x472a3cb215a6b92f) {
          local_8c = 0x1b;
LAB_0018cbb4:
          lVar8 = -0xd6a2fcfd9a2562e;
          local_98 = unaff_x20;
        }
        else {
          lVar8 = lVar1;
          if ((lVar7 != -0x4022e60db29d08bd) && (lVar8 = lVar7, lVar7 == -0x30f19d77ed6a57d0)) {
            DAT_0021f804 = 0;
            local_b0 = (**(code **)(*param_2 + 0x388))
                                 (param_2,unaff_x24,&DAT_0021d918,&DAT_0021e020);
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = 0xc9021a26c4b3849;
            if (lVar6 != 0) {
              lVar8 = 0x5fc3b46b3312d8fa;
            }
          }
        }
      }
      else {
        lVar8 = -0x1d8beabf42c2b1ac;
        if (lVar7 != -0x2f45515bbf3c6763) {
          if (lVar7 == -0x2e40bfc4c931b35b) {
            _DAT_0021e020 = _DAT_0021e020 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e028 = uRam000000000021e028 ^ 0x9e9e9e9e9e9e9e9e;
            DAT_0021e050 = DAT_0021e050 ^ 0x9e;
            DAT_0021e051 = DAT_0021e051 ^ 0x9e;
            _DAT_0021e030 = _DAT_0021e030 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e038 = uRam000000000021e038 ^ 0x9e9e9e9e9e9e9e9e;
            _DAT_0021e040 = _DAT_0021e040 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e048 = uRam000000000021e048 ^ 0x9e9e9e9e9e9e9e9e;
            DAT_0021fa02 = '\x01';
            lVar8 = 0x21281ee096a3242c;
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == -0x2ae297a736a21c2d) {
              lVar8 = 0x4cefb809a3e7d9f3;
            }
          }
        }
      }
    }
    else if (lVar7 < -0x1cebfd226cf095b9) {
      if (lVar7 == -0x21262d829d67c536) {
        unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
        lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = -0x1adc740f98df9e78;
        if (lVar6 != 0) {
          lVar8 = -0x472a3cb215a6b92f;
        }
      }
      else if (lVar7 == -0x2111cc06df94c18b) {
        DAT_0021e018 = DAT_0021e018 ^ 0x27;
        DAT_0021e019 = DAT_0021e019 ^ 0x27;
        DAT_0021e01a = DAT_0021e01a ^ 0x27;
        _DAT_0021e000 = _DAT_0021e000 ^ 0x2727272727272727;
        uRam000000000021e008 = uRam000000000021e008 ^ 0x2727272727272727;
        DAT_0021e01b = DAT_0021e01b ^ 0x27;
        DAT_0021e010 = DAT_0021e010 ^ 0x2727272727272727;
        DAT_0021fa01 = '\x01';
        lVar8 = 0x2cfdc6d466d500b;
      }
      else if (lVar7 == -0x1d8beabf42c2b1ac) {
        iVar5 = FUN_00212730(0,1,&DAT_0021f8e4);
        lVar8 = 0x5528f56aeed253f8;
        if (iVar5 != 0) {
          lVar8 = -0xcf6788a5020c598;
        }
      }
    }
    else if (lVar7 < -0x1adc740f98df9e78) {
      if (lVar7 == -0x1cebfd226cf095b9) {
        local_7c = 0x1a;
        local_78 = unaff_x20;
LAB_0018ca70:
        lVar8 = -0x1a2edeb8faa25962;
      }
      else if (lVar7 == -0x1c3f6e39f065974b) goto LAB_0018c704;
    }
    else if (lVar7 == -0x1adc740f98df9e78) {
      lVar8 = -0x6c08bfbe3085a5cd;
      if (unaff_x20 != 0) {
        lVar8 = 0xdbe81e303359102;
      }
    }
    else if (lVar7 == -0x1a2edeb8faa25962) {
      *param_1 = local_7c;
      lVar3 = local_78;
      lVar8 = 0x14763241a05b69cc;
    }
    goto LAB_0018bf4c;
  }
  if (lVar7 < -0x728dcac4fe7c4feb) {
    if (lVar7 < -0x7916592214a9d94f) {
      if (lVar7 == -0x7cd5c7039766471e) {
        lVar8 = -0x2ae297a736a21c2d;
        bVar4 = *param_1 == 0;
        lVar6 = 0x7fb28ed9417ae248;
        goto LAB_0018bf44;
      }
      if (lVar7 == -0x7bfc44a9e4472ff7) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar8 = -0x1c3f6e39f065974b;
        if (unaff_x24 != 0) {
          lVar8 = -0x1198fae64556e472;
        }
        *param_1 = 0x11;
      }
      else if (lVar7 == -0x7b2cb4980176d2bf) {
        lVar8 = -0x30f19d77ed6a57d0;
      }
      goto LAB_0018bf4c;
    }
    if (lVar7 == -0x7916592214a9d94f) {
      local_8c = 0x1a;
      goto LAB_0018cbb4;
    }
    if (lVar7 == -0x777da7dc21d9e886) {
      DAT_0021d920 = DAT_0021d920 ^ 0x53;
      DAT_0021d921 = DAT_0021d921 ^ 0x53;
      DAT_0021d922 = DAT_0021d922 ^ 0x53;
      DAT_0021d923 = DAT_0021d923 ^ 0x53;
      DAT_0021d918 = DAT_0021d918 ^ 0x5353535353535353;
      DAT_0021f9ca = '\x01';
      lVar8 = -0x30f19d77ed6a57d0;
      goto LAB_0018bf4c;
    }
    if (lVar7 != -0x7394b466da4b7ad7) goto LAB_0018bf4c;
  }
  else {
    if (lVar7 < -0x59f4ca36a0a38da8) {
      if (lVar7 == -0x728dcac4fe7c4feb) {
        iVar5 = FUN_00212730(0,1,&DAT_0021f804);
        lVar8 = 0x598be0cfe2805d;
        if (iVar5 != 0) {
          lVar8 = 0x6fb48459fbb1f88b;
        }
      }
      else {
        if (lVar7 == -0x6c08bfbe3085a5cd) {
          local_7c = 0x1b;
          local_78 = unaff_x20;
          goto LAB_0018ca70;
        }
        if (lVar7 == -0x5d4f5f4ae909129f) goto LAB_0018c340;
      }
      goto LAB_0018bf4c;
    }
    lVar3 = unaff_x20;
    lVar8 = 0x14763241a05b69cc;
    if (lVar7 == -0x59f4ca36a0a38da8) goto LAB_0018bf4c;
    if (lVar7 != -0x55b7bb762bb7e4d5) {
      lVar3 = lVar6;
      lVar8 = lVar7;
      if (lVar7 == -0x4aa1198e7308fed2) {
        lVar8 = 0xd8b7472d7b4044;
        lVar7 = -0x2111cc06df94c18b;
        cVar2 = DAT_0021fa01;
LAB_0018c914:
        lVar3 = lVar6;
        if (cVar2 == '\0') {
          lVar8 = lVar7;
        }
      }
      goto LAB_0018bf4c;
    }
    (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
  }
  lVar3 = lVar6;
  lVar8 = -0x7cd5c7039766471e;
  goto LAB_0018bf4c;
}

