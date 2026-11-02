// rea decompile_all
// name: FUN_00178dc8
// address: 0x178dc8
// body: available
// range: 0x178dc8-0x179e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00178dc8(int *param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long local_b0;
  long local_a8;
  int local_9c;
  long local_90;
  int local_84;
  int local_74;
  long local_70;
  long local_68;
  
  lVar1 = -0x5305364773019bd4;
  if (param_3 != 0) {
    lVar1 = 0x140fe0ec13d3d2b3;
  }
  lVar2 = lVar1;
  lVar6 = 0x4603874f2af04d2f;
LAB_00178ec4:
  lVar7 = lVar6;
  lVar5 = lVar2;
  lVar6 = lVar7;
  lVar2 = lVar5;
  if (0xf2bcc3a1629dbd6 < lVar7) {
    if (lVar7 < 0x4bed40b469a391e0) {
      if (lVar7 < 0x2735a1034df1e2aa) {
        if (lVar7 < 0x1cfddd916887bb1f) {
          lVar6 = 0x4388cfd16e8487d3;
          if (((lVar7 != 0xf2bcc3a1629dbd7) &&
              (lVar2 = unaff_x21, lVar6 = -0x5bfbcea41543e9e6, lVar7 != 0x12a8597d4c4f2a3c)) &&
             (lVar2 = lVar5, lVar6 = lVar7, lVar7 == 0x140fe0ec13d3d2b3)) {
            lVar6 = 0x64be4ab1a22798fa;
          }
        }
        else {
          lVar6 = 0x64be4ab1a22798fa;
          if (lVar7 != 0x1cfddd916887bb1f) {
            if (lVar7 == 0x1d5b05dc06c7f45a) {
              local_84 = 0x21;
              goto LAB_00179c18;
            }
            lVar6 = lVar7;
            if (lVar7 == 0x1f278b27356b5c38) {
              lVar6 = (**(code **)(*param_2 + 0xe0))(param_2,local_68,local_a8,unaff_x21,param_4);
              *param_5 = lVar6;
              lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar6 = 0x2735a1034df1e2aa;
              if (lVar5 != 0) {
                lVar6 = -0x3e3b6f89215bfb1a;
              }
            }
          }
        }
        goto LAB_00178ec4;
      }
      if (0x4388cfd16e8487d2 < lVar7) {
        if (lVar7 == 0x4388cfd16e8487d3) {
          *param_5 = 0;
          lVar6 = -0x58d16c9175b1fafb;
        }
        else if (lVar7 == 0x454369ab9017066f) {
          DAT_0021dac1 = DAT_0021dac1 ^ 0xfd;
          DAT_0021dac2 = DAT_0021dac2 ^ 0xfd;
          DAT_0021dac0 = DAT_0021dac0 ^ 0xfd;
          DAT_0021dac4 = DAT_0021dac4 ^ 0xfd;
          DAT_0021dac5 = DAT_0021dac5 ^ 0xfd;
          _DAT_0021da90 = _DAT_0021da90 ^ 0xfdfdfdfdfdfdfdfd;
          uRam000000000021da98 = uRam000000000021da98 ^ 0xfdfdfdfdfdfdfdfd;
          DAT_0021dac3 = DAT_0021dac3 ^ 0xfd;
          _DAT_0021daa0 = _DAT_0021daa0 ^ 0xfdfdfdfdfdfdfdfd;
          uRam000000000021daa8 = uRam000000000021daa8 ^ 0xfdfdfdfdfdfdfdfd;
          _DAT_0021dab0 = _DAT_0021dab0 ^ 0xfdfdfdfdfdfdfdfd;
          uRam000000000021dab8 = uRam000000000021dab8 ^ 0xfdfdfdfdfdfdfdfd;
          DAT_0021f9d9 = '\x01';
          lVar6 = 0x6dd297abc4210391;
        }
        else if (lVar7 == 0x4603874f2af04d2f) {
          lVar6 = lVar1;
        }
        goto LAB_00178ec4;
      }
      if (lVar7 != 0x2735a1034df1e2aa) {
        if (lVar7 == 0x3734b5ad4a2f797c) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f844);
          lVar6 = -0x2f8f3be11752b7ff;
          if (iVar4 != 0) {
            lVar6 = 0x664b7490a4469cb9;
          }
        }
        else if (lVar7 == 0x3fb5bae899a03e2e) {
          lVar6 = -0x30447ca73e52f593;
        }
        goto LAB_00178ec4;
      }
      lVar6 = 0x56d393c933e6b230;
      bVar3 = *param_5 == 0;
      lVar5 = 0x12a8597d4c4f2a3c;
    }
    else {
      if (lVar7 < 0x587041dc0308cf99) {
        if (lVar7 < 0x5232562426c21d68) {
          if (lVar7 == 0x4bed40b469a391e0) {
            DAT_0021dae1 = DAT_0021dae1 ^ 0x84;
            DAT_0021dae0 = DAT_0021dae0 ^ 0x84;
            DAT_0021dae2 = DAT_0021dae2 ^ 0x84;
            DAT_0021dae3 = DAT_0021dae3 ^ 0x84;
            DAT_0021dae4 = DAT_0021dae4 ^ 0x84;
            DAT_0021dae6 = DAT_0021dae6 ^ 0x84;
            DAT_0021dae5 = DAT_0021dae5 ^ 0x84;
            _DAT_0021dad0 = _DAT_0021dad0 ^ 0x8484848484848484;
            uRam000000000021dad8 = uRam000000000021dad8 ^ 0x8484848484848484;
            DAT_0021f9da = '\x01';
            lVar6 = -0x30447ca73e52f593;
          }
          else if (lVar7 == 0x4f39e04f3a179cf5) {
            iVar4 = FUN_00212730(0,1,&DAT_0021f81c);
            lVar6 = -0x42194fe07526bcdf;
            if (iVar4 != 0) {
              lVar6 = -0x636c1be6177fa368;
            }
          }
          else if (lVar7 == 0x51ce20b34b7abdee) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar6 = -0x3c29f5948aa9434e;
            if (local_68 != 0) {
              lVar6 = -0x21afe59ded067851;
            }
            *param_1 = 0x11;
          }
        }
        else if (lVar7 == 0x5232562426c21d68) {
          DAT_0021d9b5 = DAT_0021d9b5 ^ 0x4e;
          DAT_0021d9b4 = DAT_0021d9b4 ^ 0x4e;
          DAT_0021d9b6 = DAT_0021d9b6 ^ 0x4e;
          DAT_0021d9b7 = DAT_0021d9b7 ^ 0x4e;
          DAT_0021d9b8 = DAT_0021d9b8 ^ 0x4e;
          DAT_0021d9ba = DAT_0021d9ba ^ 0x4e;
          DAT_0021d9b9 = DAT_0021d9b9 ^ 0x4e;
          DAT_0021f9d0 = '\x01';
          lVar6 = 0xccdca2ce4327473;
        }
        else {
          lVar6 = 0x3734b5ad4a2f797c;
          if ((lVar7 != 0x54c769c3021ec19f) && (lVar6 = lVar7, lVar7 == 0x56d393c933e6b230)) {
            local_74 = 0x1b;
            local_70 = unaff_x21;
            goto LAB_00179cc0;
          }
        }
        goto LAB_00178ec4;
      }
      if (0x664b7490a4469cb8 < lVar7) {
        if (lVar7 < 0x6a5fbd9c4dfcc1fc) {
          lVar6 = 0x3734b5ad4a2f797c;
          if ((lVar7 != 0x664b7490a4469cb9) && (lVar6 = lVar7, lVar7 == 0x67a7fbb53e947bbf)) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
            goto LAB_001793fc;
          }
        }
        else if (lVar7 == 0x6a5fbd9c4dfcc1fc) {
          lVar6 = -0x442c90d68db38e46;
          lVar7 = 0x1f278b27356b5c38;
          lVar5 = unaff_x21;
LAB_00179df8:
          if (lVar5 != 0) {
            lVar6 = lVar7;
          }
        }
        else if (lVar7 == 0x6dd297abc4210391) {
          DAT_0021f840 = 0;
          local_68 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021da90);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = -0x42cec7778c4a105e;
          if (lVar5 != 0) {
            lVar6 = 0x51ce20b34b7abdee;
          }
        }
        goto LAB_00178ec4;
      }
      if (lVar7 != 0x587041dc0308cf99) {
        lVar6 = 0x6dd297abc4210391;
        if ((lVar7 != 0x5c0253c9f9f874fe) && (lVar6 = lVar7, lVar7 == 0x64be4ab1a22798fa)) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f840);
          lVar6 = -0x5e13c9a0bdf0627e;
          if (iVar4 != 0) {
            lVar6 = 0x1cfddd916887bb1f;
          }
        }
        goto LAB_00178ec4;
      }
      bVar3 = local_a8 == 0;
      lVar6 = -0x502b917cfb8bdd0e;
      lVar5 = -0x6c184413883859ad;
    }
LAB_00179c08:
    if (!bVar3) {
      lVar6 = lVar5;
    }
    goto LAB_00178ec4;
  }
  if (-0x3e3b6f89215bfb1b < lVar7) {
    if (lVar7 < -0x21afe59ded067851) {
      if (lVar7 < -0x2f8f3be11752b7ff) {
        if (lVar7 == -0x3e3b6f89215bfb1a) {
          local_84 = 0x1b;
LAB_00179c18:
          lVar6 = -0x22a9db933262e38f;
          local_90 = unaff_x21;
        }
        else {
          lVar6 = 0x4388cfd16e8487d3;
          if ((lVar7 != -0x3c29f5948aa9434e) && (lVar6 = lVar7, lVar7 == -0x30447ca73e52f593)) {
            DAT_0021f844 = 0;
            lVar6 = 0x4f39e04f3a179cf5;
          }
        }
      }
      else {
        if (lVar7 == -0x2f8f3be11752b7ff) {
          lVar6 = 0x3fb5bae899a03e2e;
          bVar3 = DAT_0021f9da == '\0';
          lVar5 = 0x4bed40b469a391e0;
          goto LAB_00178ebc;
        }
        lVar6 = 0xccdca2ce4327473;
        if ((lVar7 != -0x285e499da0ebd697) && (lVar6 = lVar7, lVar7 == -0x22a9db933262e38f)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_70 = local_90;
          local_74 = local_84;
          lVar6 = -0x171829d359934317;
        }
      }
    }
    else if (lVar7 < -0x171829d359934317) {
      if (lVar7 == -0x21afe59ded067851) {
        lVar2 = 0;
        lVar6 = -0x5bfbcea41543e9e6;
      }
      else if (lVar7 == -0x2165f5aa3719cdf2) {
        *param_1 = local_9c;
        lVar6 = 0x4388cfd16e8487d3;
      }
      else if (lVar7 == -0x1bc27c10c575317b) {
LAB_001793fc:
        lVar6 = -0x64cf3593ed5d151f;
      }
    }
    else if (lVar7 == -0x171829d359934317) {
      *param_1 = local_74;
      lVar2 = local_70;
      lVar6 = -0x5bfbcea41543e9e6;
    }
    else {
      lVar6 = -0x58d16c9175b1fafb;
      if ((lVar7 != 0xcc72698eab9b425) && (lVar6 = lVar7, lVar7 == 0xccdca2ce4327473)) {
        DAT_0021f81c = 0;
        local_a8 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_0021d9b4,&DAT_0021dad0);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = 0x587041dc0308cf99;
        if (lVar5 != 0) {
          lVar6 = -0x4c4e0e5be1376e05;
        }
      }
    }
    goto LAB_00178ec4;
  }
  if (lVar7 < -0x502b917cfb8bdd0e) {
    if (lVar7 < -0x5e13c9a0bdf0627e) {
      if (lVar7 == -0x6c184413883859ad) {
        unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = 0x6a5fbd9c4dfcc1fc;
        if (lVar5 != 0) {
          lVar6 = 0x1d5b05dc06c7f45a;
        }
      }
      else {
        if (lVar7 == -0x64cf3593ed5d151f) {
          lVar6 = 0xcc72698eab9b425;
          bVar3 = *param_1 == 0;
          lVar5 = 0xf2bcc3a1629dbd7;
          goto LAB_00179c08;
        }
        if (lVar7 == -0x636c1be6177fa368) {
          lVar6 = 0x4f39e04f3a179cf5;
        }
      }
    }
    else if (lVar7 < -0x58d16c9175b1fafb) {
      if (lVar7 == -0x5e13c9a0bdf0627e) {
        lVar6 = 0x5c0253c9f9f874fe;
        bVar3 = DAT_0021f9d9 == '\0';
        lVar5 = 0x454369ab9017066f;
LAB_00178ebc:
        if (bVar3) {
          lVar6 = lVar5;
        }
      }
      else if (lVar7 == -0x5bfbcea41543e9e6) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_68);
        lVar6 = -0x1bc27c10c575317b;
        local_b0 = lVar5;
        if (lVar5 != 0) {
          lVar6 = 0x67a7fbb53e947bbf;
        }
      }
    }
    else {
      if (lVar7 == -0x5305364773019bd4) {
        local_9c = 3;
        goto LAB_00179a8c;
      }
      if (lVar7 == -0x58d16c9175b1fafb) {
        return;
      }
    }
    goto LAB_00178ec4;
  }
  if (lVar7 < -0x442c90d68db38e46) {
    if (lVar7 != -0x502b917cfb8bdd0e) {
      if (lVar7 == -0x4d760381a195eff7) {
        local_9c = 0x11;
LAB_00179a8c:
        lVar6 = -0x2165f5aa3719cdf2;
      }
      else if (lVar7 == -0x4c4e0e5be1376e05) {
        local_90 = 0;
        local_84 = 0x11;
        lVar6 = -0x22a9db933262e38f;
      }
      goto LAB_00178ec4;
    }
    local_70 = 0;
    local_74 = 0x11;
  }
  else {
    if (lVar7 != -0x442c90d68db38e46) {
      if (lVar7 == -0x42cec7778c4a105e) {
        lVar7 = 0x54c769c3021ec19f;
        lVar6 = -0x4d760381a195eff7;
        lVar5 = local_68;
        goto LAB_00179df8;
      }
      if (lVar7 == -0x42194fe07526bcdf) {
        lVar6 = -0x285e499da0ebd697;
        bVar3 = DAT_0021f9d0 == '\0';
        lVar5 = 0x5232562426c21d68;
        goto LAB_00178ebc;
      }
      goto LAB_00178ec4;
    }
    local_74 = 0x21;
    local_70 = unaff_x21;
  }
LAB_00179cc0:
  lVar6 = -0x171829d359934317;
  goto LAB_00178ec4;
}

