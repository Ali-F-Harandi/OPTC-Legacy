// rea decompile_all
// name: FUN_00183abc
// address: 0x183abc
// body: available
// range: 0x183abc-0x1848fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00183abc(int *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x25;
  long local_c0;
  long local_b0;
  int local_a4;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  long local_68;
  
  lVar1 = 0x5b3f986b41bda326;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x765806476486e594;
  }
  lVar2 = lVar1;
  lVar7 = -0x18b8a9cbc3cd974b;
LAB_00183bd0:
  while (lVar6 = lVar7, lVar5 = lVar2, lVar7 = lVar6, lVar2 = lVar5, 0x2b1b641f467d8266 < lVar6) {
    if (lVar6 < 0x58eb107533ee1fff) {
      if (lVar6 < 0x3fdc5df7fe0401e3) {
        if (lVar6 < 0x2dbf6a57261a6094) {
          if (lVar6 == 0x2b1b641f467d8267) {
            DAT_0021f8a4 = 0;
            local_b0 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_0021deb0,&DAT_0021dec0)
            ;
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar7 = 0x150a4407391476c9;
            if (lVar5 != 0) {
              lVar7 = -0x60bd5b7d3ae1364a;
            }
          }
          else if (lVar6 == 0x2be22635bfed5631) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_68);
            lVar7 = -0x35380c7bf1e1ed41;
            local_c0 = lVar5;
            if (lVar5 != 0) {
              lVar7 = 0x2af3230df703dacc;
            }
          }
        }
        else if (lVar6 == 0x2dbf6a57261a6094) {
          lVar7 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_b0,unaff_x25,param_5);
          *param_6 = lVar7;
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar7 = -0x46c40784048341fd;
          if (lVar5 != 0) {
            lVar7 = -0x7ad18e343577d80f;
          }
        }
        else {
          if (lVar6 == 0x31006c95f99e94c8) {
            local_7c = 0x12;
            local_78 = unaff_x25;
            goto LAB_00184668;
          }
          if (lVar6 == 0x3c0c64a76fc823b0) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_78 = local_98;
            local_7c = local_8c;
            lVar7 = 0x4e9708d9b1211181;
          }
        }
      }
      else if (lVar6 < 0x4a852f77d34b64cc) {
        if (lVar6 == 0x3fdc5df7fe0401e3) {
          lVar7 = 0x44ed524dbdd15363;
          if (DAT_0021f9f2 == '\0') {
            lVar7 = 0x722a1a4f76db9025;
          }
        }
        else {
          lVar7 = 0x2b1b641f467d8267;
          if ((lVar6 != 0x44ed524dbdd15363) && (lVar7 = lVar6, lVar6 == 0x48c00295fb226477)) {
            *param_6 = 0;
            lVar7 = 0x5711a8be885f4d21;
          }
        }
      }
      else if (lVar6 == 0x4a852f77d34b64cc) {
        unaff_x25 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = -0x598331bf06e0ad66;
        if (lVar5 != 0) {
          lVar7 = 0x5c598656993fb56c;
        }
      }
      else if (lVar6 == 0x4e9708d9b1211181) {
        *param_1 = local_7c;
        lVar2 = local_78;
        lVar7 = 0x2be22635bfed5631;
      }
      else if (lVar6 == 0x5711a8be885f4d21) {
        return;
      }
    }
    else if (lVar6 < 0x6e3b3f84a866f0c0) {
      if (lVar6 < 0x5c598656993fb56c) {
        if (lVar6 == 0x58eb107533ee1fff) {
          DAT_0021f8a8 = 0;
          lVar7 = 0x7af17e6e9e5cafd7;
        }
        else if (lVar6 == 0x5b3f986b41bda326) {
          local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar7 = -0xdee245aaa4df7cc;
          if (lVar5 != 0) {
            lVar7 = -0x5705b1dfd4b0e91;
          }
        }
      }
      else {
        if (lVar6 == 0x5c598656993fb56c) {
          local_8c = 0x21;
          goto LAB_001847d0;
        }
        lVar7 = 0x5711a8be885f4d21;
        if ((lVar6 != 0x5e53549747c29df6) && (lVar7 = lVar6, lVar6 == 0x6167bbbd335f77c5)) {
          local_7c = 0x21;
          local_78 = unaff_x25;
LAB_00184668:
          lVar7 = 0x4e9708d9b1211181;
        }
      }
    }
    else if (lVar6 < 0x765806476486e594) {
      if (lVar6 == 0x6e3b3f84a866f0c0) {
        *param_1 = local_a4;
        lVar7 = 0x48c00295fb226477;
      }
      else if (lVar6 == 0x722a1a4f76db9025) {
        DAT_0021deb1 = DAT_0021deb1 ^ 0xb7;
        DAT_0021deb0 = DAT_0021deb0 ^ 0xb7;
        DAT_0021deb2 = DAT_0021deb2 ^ 0xb7;
        DAT_0021deb3 = DAT_0021deb3 ^ 0xb7;
        DAT_0021deb4 = DAT_0021deb4 ^ 0xb7;
        DAT_0021deb6 = DAT_0021deb6 ^ 0xb7;
        DAT_0021deb5 = DAT_0021deb5 ^ 0xb7;
        DAT_0021f9f2 = '\x01';
        lVar7 = 0x2b1b641f467d8267;
      }
      else if (lVar6 == 0x7637e52127f19ce7) {
        lVar7 = -0x711dbf3c1c45e064;
      }
    }
    else if (lVar6 == 0x765806476486e594) {
      local_a4 = 3;
LAB_00184684:
      lVar7 = 0x6e3b3f84a866f0c0;
    }
    else if (lVar6 == 0x7af17e6e9e5cafd7) {
      iVar4 = FUN_00212730(0,1,&DAT_0021f8a4);
      lVar7 = 0x3fdc5df7fe0401e3;
      if (iVar4 != 0) {
        lVar7 = 0x7d40df864304d79f;
      }
    }
    else if (lVar6 == 0x7d40df864304d79f) {
      lVar7 = 0x7af17e6e9e5cafd7;
    }
  }
  if (lVar6 < -0x1ffba508328a2b79) {
    if (lVar6 < -0x502da4f328fa2600) {
      if (lVar6 < -0x6f1859aed5d5db79) {
        if (lVar6 == -0x7ad18e343577d80f) {
          local_8c = 0x12;
LAB_001847d0:
          lVar7 = 0x3c0c64a76fc823b0;
          local_98 = unaff_x25;
        }
        else if (lVar6 == -0x711dbf3c1c45e064) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f8a8);
          lVar7 = -0x1ffba508328a2b79;
          if (iVar4 != 0) {
            lVar7 = -0x44c8cf93a480b850;
          }
        }
        goto LAB_00183bd0;
      }
      if (lVar6 == -0x6f1859aed5d5db79) {
        lVar7 = 0x5e53549747c29df6;
        bVar3 = *param_1 == 0;
        lVar5 = -0x44e70c81378142a3;
      }
      else {
        if (lVar6 == -0x60bd5b7d3ae1364a) {
          local_98 = 0;
          local_8c = 0x11;
          lVar7 = 0x3c0c64a76fc823b0;
          goto LAB_00183bd0;
        }
        if (lVar6 != -0x598331bf06e0ad66) goto LAB_00183bd0;
        lVar5 = 0x2dbf6a57261a6094;
        lVar7 = 0x6167bbbd335f77c5;
        bVar3 = unaff_x25 == 0;
      }
    }
    else {
      if (-0x44e70c81378142a4 < lVar6) {
        lVar7 = 0x48c00295fb226477;
        if (((lVar6 != -0x44e70c81378142a3) &&
            (lVar7 = -0x711dbf3c1c45e064, lVar6 != -0x44c8cf93a480b850)) &&
           (lVar7 = lVar6, lVar6 == -0x35380c7bf1e1ed41)) {
LAB_001841fc:
          lVar7 = -0x6f1859aed5d5db79;
        }
        goto LAB_00183bd0;
      }
      lVar7 = 0x58eb107533ee1fff;
      if (lVar6 == -0x502da4f328fa2600) goto LAB_00183bd0;
      if (lVar6 != -0x46c40784048341fd) {
        lVar7 = lVar6;
        if (lVar6 == -0x457d79423d7639dd) {
          local_a4 = 0x11;
          goto LAB_00184684;
        }
        goto LAB_00183bd0;
      }
      lVar7 = 0x31006c95f99e94c8;
      bVar3 = *param_6 == 0;
      lVar5 = -0x12304b603010a5f9;
    }
    if (!bVar3) {
      lVar7 = lVar5;
    }
    goto LAB_00183bd0;
  }
  if (lVar6 < -0x5705b1dfd4b0e91) {
    if (lVar6 < -0x12304b603010a5f9) {
      if (lVar6 == -0x1ffba508328a2b79) {
        lVar7 = -0x502da4f328fa2600;
        if (DAT_0021f9f3 == '\0') {
          lVar7 = 0x1869af6c47890a69;
        }
      }
      else if (lVar6 == -0x18b8a9cbc3cd974b) {
        lVar7 = lVar1;
      }
      goto LAB_00183bd0;
    }
    lVar2 = unaff_x25;
    lVar7 = 0x2be22635bfed5631;
    if (lVar6 == -0x12304b603010a5f9) goto LAB_00183bd0;
    if (lVar6 != -0xdee245aaa4df7cc) {
      lVar2 = lVar5;
      lVar7 = lVar6;
      if (lVar6 == -0x8aacdcc030e8d47) {
        lVar2 = 0;
        lVar7 = 0x2be22635bfed5631;
      }
      goto LAB_00183bd0;
    }
    lVar8 = 0x7637e52127f19ce7;
    lVar7 = -0x457d79423d7639dd;
    lVar6 = local_68;
  }
  else {
    if (lVar6 < 0x150a4407391476c9) {
      if (lVar6 == -0x5705b1dfd4b0e91) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar7 = -0x3f7e7518b1205;
        if (local_68 != 0) {
          lVar7 = -0x8aacdcc030e8d47;
        }
        *param_1 = 0x11;
      }
      else {
        lVar7 = 0x48c00295fb226477;
        if ((lVar6 != -0x3f7e7518b1205) && (lVar7 = lVar6, lVar6 == 0x3b618bd89901766)) {
          local_78 = 0;
          local_7c = 0x11;
          goto LAB_00184668;
        }
      }
      goto LAB_00183bd0;
    }
    if (lVar6 != 0x150a4407391476c9) {
      if (lVar6 == 0x1869af6c47890a69) {
        _DAT_0021dec0 = _DAT_0021dec0 ^ 0xe0e0e0e0e0e0e0e;
        uRam000000000021dec8 = uRam000000000021dec8 ^ 0xe0e0e0e0e0e0e0e;
        _DAT_0021ded0 = _DAT_0021ded0 ^ 0xe0e0e0e0e0e0e0e;
        uRam000000000021ded8 = uRam000000000021ded8 ^ 0xe0e0e0e0e0e0e0e;
        DAT_0021dee9 = DAT_0021dee9 ^ 0xe;
        DAT_0021dee8 = DAT_0021dee8 ^ 0xe;
        DAT_0021dee0 = DAT_0021dee0 ^ 0xe0e0e0e0e0e0e0e;
        DAT_0021f9f3 = '\x01';
        lVar7 = 0x58eb107533ee1fff;
      }
      else if (lVar6 == 0x2af3230df703dacc) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
        goto LAB_001841fc;
      }
      goto LAB_00183bd0;
    }
    lVar8 = 0x4a852f77d34b64cc;
    lVar7 = 0x3b618bd89901766;
    lVar6 = local_b0;
  }
  lVar2 = lVar5;
  if (lVar6 != 0) {
    lVar7 = lVar8;
  }
  goto LAB_00183bd0;
}

