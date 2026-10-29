// rea decompile_all
// name: FUN_001821f0
// address: 0x1821f0
// body: available
// range: 0x1821f0-0x182c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001821f0(undefined4 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  undefined4 local_84;
  long local_80;
  undefined4 local_74;
  
  lVar1 = -0x72c3888b87c8758a;
  if (param_3 != 0) {
    lVar1 = 0x260dc1bce5e4c97f;
  }
  lVar4 = 0x6d2d02c6f6f96199;
LAB_00182304:
  while (lVar3 = lVar4, lVar4 = lVar3, 0x238f37a8b427e8d < lVar3) {
    if (lVar3 < 0x50e1c3d9bff64f31) {
      if (lVar3 < 0x260dc1bce5e4c97f) {
        if (lVar3 < 0x2420de8c91afbcd7) {
          lVar4 = -0x67a37e469c840bd7;
          if ((lVar3 != 0x238f37a8b427e8e) && (lVar4 = lVar3, lVar3 == 0x2e09cdf6c402c53)) {
            local_74 = 0x11;
            goto LAB_00182bec;
          }
        }
        else {
          lVar4 = -0x7f2486022ae05162;
          if ((lVar3 != 0x2420de8c91afbcd7) && (lVar4 = lVar3, lVar3 == 0x24a50899c1ddce34)) {
            lVar4 = 0x2b20e60565895e22;
          }
        }
      }
      else if (lVar3 < 0x2b65c233f1ca04ee) {
        if (lVar3 == 0x260dc1bce5e4c97f) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0xe0bc73c99a6bea6;
          if (lVar3 != 0) {
            lVar4 = -0x3af1ab24feb2133a;
          }
        }
        else if (lVar3 == 0x2b20e60565895e22) {
          return;
        }
      }
      else if (lVar3 == 0x2b65c233f1ca04ee) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x2b20e60565895e22;
      }
      else if (lVar3 == 0x38a0342f2452203f) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_84 = local_74;
        goto LAB_00182ab0;
      }
    }
    else if (lVar3 < 0x7456b4e08246b4be) {
      if (lVar3 < 0x6d2d02c6f6f96199) {
        if (lVar3 == 0x50e1c3d9bff64f31) {
          DAT_0021f898 = 0;
          lVar4 = -0x7f2486022ae05162;
        }
        else if (lVar3 == 0x68e68fd2e8f90651) {
          DAT_0021de38 = DAT_0021de38 ^ 0x8a;
          DAT_0021de39 = DAT_0021de39 ^ 0x8a;
          DAT_0021de3a = DAT_0021de3a ^ 0x8a;
          DAT_0021de3b = DAT_0021de3b ^ 0x8a;
          DAT_0021de3c = DAT_0021de3c ^ 0x8a;
          DAT_0021de3d = DAT_0021de3d ^ 0x8a;
          DAT_0021de3e = DAT_0021de3e ^ 0x8a;
          _DAT_0021de10 = _DAT_0021de10 ^ 0x8a8a8a8a8a8a8a8a;
          uRam000000000021de18 = uRam000000000021de18 ^ 0x8a8a8a8a8a8a8a8a;
          _DAT_0021de20 = _DAT_0021de20 ^ 0x8a8a8a8a8a8a8a8a;
          uRam000000000021de28 = uRam000000000021de28 ^ 0x8a8a8a8a8a8a8a8a;
          DAT_0021de30 = DAT_0021de30 ^ 0x8a8a8a8a8a8a8a8a;
          DAT_0021f9ef = '\x01';
          lVar4 = 0x50e1c3d9bff64f31;
        }
      }
      else {
        lVar4 = lVar1;
        if ((lVar3 != 0x6d2d02c6f6f96199) && (lVar4 = lVar3, lVar3 == 0x742a33def67e8c41)) {
          lVar4 = 0x7bf88f1aaf92759e;
          if (DAT_0021f9ee == '\0') {
            lVar4 = -0x7a1ec83f99c8d67f;
          }
        }
      }
    }
    else if (lVar3 < 0x7fbe7ed0b2220834) {
      if (lVar3 == 0x7456b4e08246b4be) {
        local_84 = 0x11;
LAB_00182ab0:
        lVar4 = -0x5a86496479c514ee;
      }
      else if (lVar3 == 0x7bf88f1aaf92759e) {
        lVar4 = 0x7fd09332e2d07371;
      }
    }
    else {
      lVar4 = -0x67a37e469c840bd7;
      if ((lVar3 != 0x7fbe7ed0b2220834) && (lVar4 = lVar3, lVar3 == 0x7fd09332e2d07371)) {
        DAT_0021f894 = 0;
        local_80 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021de00,&DAT_0021de10);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x6fe1488765930f2c;
        if (lVar3 != 0) {
          lVar4 = 0x2e09cdf6c402c53;
        }
      }
    }
  }
  if (lVar3 < -0x5af27be32d8cb758) {
    if (lVar3 < -0x6fe1488765930f2c) {
      if (lVar3 == -0x7f2486022ae05162) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f894);
        lVar4 = 0x742a33def67e8c41;
        if (iVar2 != 0) {
          lVar4 = 0x2420de8c91afbcd7;
        }
      }
      else if (lVar3 == -0x7a1ec83f99c8d67f) {
        DAT_0021de00 = DAT_0021de00 ^ 0x1d;
        DAT_0021de01 = DAT_0021de01 ^ 0x1d;
        DAT_0021de02 = DAT_0021de02 ^ 0x1d;
        DAT_0021de03 = DAT_0021de03 ^ 0x1d;
        DAT_0021de04 = DAT_0021de04 ^ 0x1d;
        DAT_0021f9ee = '\x01';
        lVar4 = 0x7fd09332e2d07371;
      }
      else if (lVar3 == -0x72c3888b87c8758a) {
        *param_1 = 3;
        lVar4 = 0x2b20e60565895e22;
      }
      goto LAB_00182304;
    }
    if (lVar3 < -0x6405e0626941147d) {
      if (lVar3 == -0x6fe1488765930f2c) {
        lVar4 = 0x7456b4e08246b4be;
        if (local_80 != 0) {
          lVar4 = -0x3af1e26935450716;
        }
      }
      else if (lVar3 == -0x67a37e469c840bd7) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f898);
        lVar4 = -0x1d249770f6c543e6;
        if (iVar2 != 0) {
          lVar4 = 0x7fbe7ed0b2220834;
        }
      }
      goto LAB_00182304;
    }
    lVar4 = 0x2b65c233f1ca04ee;
    if ((lVar3 == -0x6405e0626941147d) || (lVar4 = lVar3, lVar3 != -0x60d25ac82ad98865))
    goto LAB_00182304;
    lVar4 = 0x2b20e60565895e22;
  }
  else {
    if (lVar3 < -0x3af1ab24feb2133a) {
      if (lVar3 < -0x45a8ebae877bf4a9) {
        lVar4 = 0x2b65c233f1ca04ee;
        if ((lVar3 != -0x5af27be32d8cb758) && (lVar4 = lVar3, lVar3 == -0x5a86496479c514ee)) {
          *param_1 = local_84;
          lVar4 = 0x2b65c233f1ca04ee;
        }
      }
      else if (lVar3 == -0x45a8ebae877bf4a9) {
        local_74 = 0x16;
LAB_00182bec:
        lVar4 = 0x38a0342f2452203f;
      }
      else if (lVar3 == -0x3af1e26935450716) {
        (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_80,param_4);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x5af27be32d8cb758;
        if (lVar3 != 0) {
          lVar4 = -0x45a8ebae877bf4a9;
        }
      }
      goto LAB_00182304;
    }
    if (-0x1d249770f6c543e7 < lVar3) {
      if (lVar3 == -0x1d249770f6c543e6) {
        lVar4 = -0x3835ab6d39fb68c0;
        if (DAT_0021f9ef == '\0') {
          lVar4 = 0x68e68fd2e8f90651;
        }
      }
      else if (lVar3 == -0xe0bc73c99a6bea6) {
        lVar4 = -0x60d25ac82ad98865;
        if (unaff_x27 != 0) {
          lVar4 = 0x238f37a8b427e8e;
        }
      }
      goto LAB_00182304;
    }
    if (lVar3 != -0x3af1ab24feb2133a) {
      if (lVar3 == -0x3835ab6d39fb68c0) {
        lVar4 = 0x50e1c3d9bff64f31;
      }
      goto LAB_00182304;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    lVar4 = 0x24a50899c1ddce34;
    if (unaff_x27 != 0) {
      lVar4 = -0x6405e0626941147d;
    }
  }
  *param_1 = 0x11;
  goto LAB_00182304;
}

