// rea decompile_all
// name: FUN_0018ce64
// address: 0x18ce64
// body: available
// range: 0x18ce64-0x18d893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018ce64(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  undefined4 local_74;
  long local_70;
  undefined4 local_64;
  
  lVar1 = -0x45df3d6d9e01d42f;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x126fdcbddaaa89c1;
  }
  lVar4 = -0x27a6ecafdb214d20;
LAB_0018cf64:
  while (lVar3 = lVar4, lVar4 = lVar3, 0xbcdbf79823a62d4 < lVar3) {
    if (lVar3 < 0x320dc3f95e3981ef) {
      if (lVar3 < 0x2b3aca66c2adb052) {
        if (lVar3 < 0x1ff1445dd06d10bf) {
          if (lVar3 == 0xbcdbf79823a62d5) {
            DAT_0021dfc0 = DAT_0021dfc0 ^ 0x1e;
            DAT_0021dfc1 = DAT_0021dfc1 ^ 0x1e;
            DAT_0021dfc2 = DAT_0021dfc2 ^ 0x1e;
            DAT_0021dfc3 = DAT_0021dfc3 ^ 0x1e;
            DAT_0021dfc4 = DAT_0021dfc4 ^ 0x1e;
            DAT_0021dfc5 = DAT_0021dfc5 ^ 0x1e;
            DAT_0021f9fe = '\x01';
            lVar4 = -0x726a1b4e727ced10;
          }
          else if (lVar3 == 0x1369debc8df28a00) {
            lVar4 = 0x4c74fff5806c6c1c;
          }
        }
        else if (lVar3 == 0x1ff1445dd06d10bf) {
          lVar4 = 0x26c9c0d43754aced;
          if (DAT_0021f9fe == '\0') {
            lVar4 = 0xbcdbf79823a62d5;
          }
        }
        else if (lVar3 == 0x26c9c0d43754aced) {
          lVar4 = -0x726a1b4e727ced10;
        }
      }
      else if (lVar3 < 0x2fc946685a6eb2a9) {
        if (lVar3 == 0x2e32b43e5a944883) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_64;
          goto LAB_0018d65c;
        }
        if (lVar3 == 0x2b3aca66c2adb052) {
          return;
        }
      }
      else {
        lVar4 = 0x682a093298f73402;
        if ((lVar3 != 0x2fc946685a6eb2a9) && (lVar4 = lVar3, lVar3 == 0x309be47c902efe01)) {
          local_64 = 0x1b;
          goto LAB_0018d824;
        }
      }
    }
    else if (lVar3 < 0x63be2b258d25bfb5) {
      if (lVar3 < 0x3a8c282b046ae894) {
        if (lVar3 == 0x320dc3f95e3981ef) {
          lVar4 = -0x625b19841a34718f;
          if (local_70 != 0) {
            lVar4 = 0x3a8c282b046ae894;
          }
        }
        else if (lVar3 == 0x3780312734d49f35) {
          lVar4 = 0x682a093298f73402;
        }
      }
      else if (lVar3 == 0x3a8c282b046ae894) {
        (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_70,param_4);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x63be2b258d25bfb5;
        if (lVar3 != 0) {
          lVar4 = 0x309be47c902efe01;
        }
      }
      else if (lVar3 == 0x4c74fff5806c6c1c) {
        DAT_0021f8d0 = 0;
        local_70 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021dfb8,&DAT_0021dfc0);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x320dc3f95e3981ef;
        if (lVar3 != 0) {
          lVar4 = 0x78ee802b8aa2b01a;
        }
      }
    }
    else if (lVar3 < 0x78ee802b8aa2b01a) {
      lVar4 = -0x78308f54c29df569;
      if ((lVar3 != 0x63be2b258d25bfb5) && (lVar4 = lVar3, lVar3 == 0x682a093298f73402)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f8d4);
        lVar4 = 0x1ff1445dd06d10bf;
        if (iVar2 != 0) {
          lVar4 = 0x2fc946685a6eb2a9;
        }
      }
    }
    else if (lVar3 == 0x78ee802b8aa2b01a) {
      local_64 = 0x11;
LAB_0018d824:
      lVar4 = 0x2e32b43e5a944883;
    }
    else if (lVar3 == 0x7a4aeef9bb8028cb) {
      DAT_0021dfb8 = DAT_0021dfb8 ^ 100;
      DAT_0021dfb9 = DAT_0021dfb9 ^ 100;
      DAT_0021dfba = DAT_0021dfba ^ 100;
      DAT_0021dfbc = DAT_0021dfbc ^ 100;
      DAT_0021dfbd = DAT_0021dfbd ^ 100;
      DAT_0021dfbe = DAT_0021dfbe ^ 100;
      DAT_0021dfbb = DAT_0021dfbb ^ 100;
      DAT_0021f9fd = '\x01';
      lVar4 = 0x4c74fff5806c6c1c;
    }
  }
  if (lVar3 < -0x2fde4a2e0e7ee9b1) {
    if (lVar3 < -0x525ce671aa84376c) {
      if (lVar3 == -0x78308f54c29df569) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x2b3aca66c2adb052;
      }
      else if (lVar3 == -0x726a1b4e727ced10) {
        DAT_0021f8d4 = 0;
        lVar4 = -0x2fde4a2e0e7ee9b1;
      }
      else if (lVar3 == -0x625b19841a34718f) {
        local_74 = 0x11;
LAB_0018d65c:
        lVar4 = -0x525ce671aa84376c;
      }
      goto LAB_0018cf64;
    }
    if (lVar3 < -0x497fe4234525e96c) {
      if (lVar3 == -0x525ce671aa84376c) {
        *param_1 = local_74;
        lVar4 = -0x78308f54c29df569;
      }
      else if (lVar3 == -0x4e68f673c8eae86a) {
        lVar4 = -0x78308f54c29df569;
      }
      goto LAB_0018cf64;
    }
    if (lVar3 != -0x497fe4234525e96c) {
      if (lVar3 == -0x45df3d6d9e01d42f) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x2357dad5578612c6;
        if (lVar3 != 0) {
          lVar4 = -0x2828e7703f56ea5a;
        }
      }
      goto LAB_0018cf64;
    }
    lVar4 = 0x2b3aca66c2adb052;
  }
  else {
    if (-0x1e45cb9e2390601c < lVar3) {
      if (lVar3 < -0x126fdcbddaaa89c1) {
        lVar4 = 0x2b3aca66c2adb052;
        if ((lVar3 != -0x1e45cb9e2390601b) && (lVar4 = lVar3, lVar3 == -0x19096ecec9e363f5)) {
          lVar4 = 0x1369debc8df28a00;
          if (DAT_0021f9fd == '\0') {
            lVar4 = 0x7a4aeef9bb8028cb;
          }
        }
      }
      else if (lVar3 == -0x126fdcbddaaa89c1) {
        *param_1 = 3;
        lVar4 = 0x2b3aca66c2adb052;
      }
      else if (lVar3 == -0x122be623403bb9bf) {
        lVar4 = -0x2fde4a2e0e7ee9b1;
      }
      goto LAB_0018cf64;
    }
    if (-0x27a6ecafdb214d21 < lVar3) {
      lVar4 = lVar1;
      if ((lVar3 != -0x27a6ecafdb214d20) && (lVar4 = lVar3, lVar3 == -0x2357dad5578612c6)) {
        lVar4 = -0x497fe4234525e96c;
        if (unaff_x27 != 0) {
          lVar4 = 0x3780312734d49f35;
        }
      }
      goto LAB_0018cf64;
    }
    if (lVar3 == -0x2fde4a2e0e7ee9b1) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f8d0);
      lVar4 = -0x19096ecec9e363f5;
      if (iVar2 != 0) {
        lVar4 = -0x122be623403bb9bf;
      }
      goto LAB_0018cf64;
    }
    if (lVar3 != -0x2828e7703f56ea5a) goto LAB_0018cf64;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    lVar4 = -0x1e45cb9e2390601b;
    if (unaff_x27 != 0) {
      lVar4 = -0x4e68f673c8eae86a;
    }
  }
  *param_1 = 0x11;
  goto LAB_0018cf64;
}

