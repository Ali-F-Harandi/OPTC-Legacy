// rea decompile_all
// name: FUN_0018f460
// address: 0x18f460
// body: available
// range: 0x18f460-0x18fe0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018f460(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  int unaff_w27;
  long local_78;
  int local_70;
  int local_6c;
  
  lVar1 = 0x22c1d03ea2215c1b;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x77ee05b53276736d;
  }
  lVar3 = -0x42695403fb73e624;
LAB_0018f544:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (0x7c82ed2cd7a0f64 < lVar4) {
    if (0x3691e14c7b5f300c < lVar4) {
      if (lVar4 < 0x6e62470ec0feca97) {
        if (0x50923b350bfc725f < lVar4) {
          lVar3 = -0x60f65f094cc6291f;
          if ((lVar4 != 0x50923b350bfc7260) && (lVar3 = lVar4, lVar4 == 0x58e7f66dfaef3500)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar3 = 0x6e62470ec0feca97;
            if (unaff_x26 != 0) {
              lVar3 = 0x5229545849c5537;
            }
            *param_1 = 0x11;
          }
          goto LAB_0018f544;
        }
        lVar3 = 0x2d8dc40e3b9363cb;
        if ((lVar4 == 0x3691e14c7b5f300d) || (lVar3 = lVar4, lVar4 != 0x371c25c9b3273489))
        goto LAB_0018f544;
        local_6c = 0x11;
      }
      else {
        if (lVar4 < 0x77ee05b53276736d) {
          lVar3 = -0x60f65f094cc6291f;
          if ((lVar4 != 0x6e62470ec0feca97) && (lVar3 = lVar4, lVar4 == 0x759631fc397f19ac)) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
            lVar3 = 0x3691e14c7b5f300d;
            if (*param_1 != 0) {
              lVar3 = 0x50923b350bfc7260;
            }
          }
          goto LAB_0018f544;
        }
        if (lVar4 != 0x77ee05b53276736d) {
          if (lVar4 == 0x7fb0665afadbc55b) {
            lVar3 = -0x6c68d7b5c811f6f6;
          }
          goto LAB_0018f544;
        }
        local_6c = 3;
      }
      lVar3 = -0x3bc5ffbfea79ddb1;
      goto LAB_0018f544;
    }
    if (lVar4 < 0x1d0e0c756a222057) {
      if (lVar4 < 0x13348ff9bd4fd530) {
        lVar3 = 0x240d6305955b6afa;
        if ((lVar4 != 0x7c82ed2cd7a0f65) && (lVar3 = lVar4, lVar4 == 0x10526fec106cf6a4)) {
          lVar3 = 0x240d6305955b6afa;
        }
      }
      else if (lVar4 == 0x13348ff9bd4fd530) {
        lVar3 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_78);
        *param_5 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x1d0e0c756a222057;
        if (lVar4 != 0) {
          lVar3 = -0x1603da059d267032;
        }
      }
      else if (lVar4 == 0x17588ade02a1c161) {
        lVar3 = 0x7fb0665afadbc55b;
        if (DAT_0021fa04 == '\0') {
          lVar3 = -0x4903589a62bbfd5a;
        }
      }
    }
    else if (lVar4 < 0x240d6305955b6afa) {
      if (lVar4 == 0x1d0e0c756a222057) {
        lVar3 = -0x1f292cceed87d947;
        if (*param_5 != 0) {
          lVar3 = -0x6fc07f9320fe5299;
        }
      }
      else if (lVar4 == 0x22c1d03ea2215c1b) {
        unaff_x26 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x507c44fec7c2c7b;
        if (lVar4 != 0) {
          lVar3 = 0x58e7f66dfaef3500;
        }
      }
    }
    else if (lVar4 == 0x240d6305955b6afa) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f8f4);
      lVar3 = 0x17588ade02a1c161;
      if (iVar2 != 0) {
        lVar3 = 0x7c82ed2cd7a0f65;
      }
    }
    else if (lVar4 == 0x2d8dc40e3b9363cb) {
      return;
    }
    goto LAB_0018f544;
  }
  if (lVar4 < -0x3ea8e1ae14da9ce7) {
    if (lVar4 < -0x60f65f094cc6291f) {
      if (lVar4 == -0x7fe4f8dd07f1f940) {
        *param_1 = unaff_w27;
        lVar3 = 0x759631fc397f19ac;
      }
      else {
        lVar3 = 0x759631fc397f19ac;
        if ((lVar4 != -0x6fc07f9320fe5299) && (lVar3 = lVar4, lVar4 == -0x6c68d7b5c811f6f6)) {
          DAT_0021f8f4 = 0;
          local_78 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x26,param_4,&DAT_0021e080);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x34a50991224a726;
          if (lVar4 != 0) {
            lVar3 = -0x3ea8e1ae14da9ce7;
          }
        }
      }
    }
    else if (lVar4 < -0x43a4643bd96ea240) {
      if (lVar4 == -0x60f65f094cc6291f) {
        *param_5 = 0;
        lVar3 = 0x2d8dc40e3b9363cb;
      }
      else if (lVar4 == -0x4903589a62bbfd5a) {
        DAT_0021e090 = DAT_0021e090 ^ 0xed;
        DAT_0021e092 = DAT_0021e092 ^ 0xed;
        DAT_0021e091 = DAT_0021e091 ^ 0xed;
        _DAT_0021e080 = _DAT_0021e080 ^ 0xedededededededed;
        uRam000000000021e088 = uRam000000000021e088 ^ 0xedededededededed;
        DAT_0021fa04 = '\x01';
        lVar3 = -0x6c68d7b5c811f6f6;
      }
    }
    else if (lVar4 == -0x43a4643bd96ea240) {
      unaff_w27 = 0x11;
      lVar3 = -0x7fe4f8dd07f1f940;
    }
    else if (lVar4 == -0x42695403fb73e624) {
      lVar3 = lVar1;
    }
    goto LAB_0018f544;
  }
  if (lVar4 < -0x1603da059d267032) {
    if (-0x207015b202abe8e9 < lVar4) {
      if (lVar4 == -0x207015b202abe8e8) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x7fe4f8dd07f1f940;
        unaff_w27 = local_70;
      }
      else if (lVar4 == -0x1f292cceed87d947) {
        unaff_w27 = 0x1b;
        lVar3 = -0x7fe4f8dd07f1f940;
      }
      goto LAB_0018f544;
    }
    if (lVar4 != -0x3ea8e1ae14da9ce7) {
      if (lVar4 == -0x3bc5ffbfea79ddb1) {
        *param_1 = local_6c;
        lVar3 = -0x60f65f094cc6291f;
      }
      goto LAB_0018f544;
    }
    local_70 = 0x11;
  }
  else {
    if (-0x34a50991224a727 < lVar4) {
      if (lVar4 == -0x34a50991224a726) {
        lVar3 = -0x43a4643bd96ea240;
        if (local_78 != 0) {
          lVar3 = 0x13348ff9bd4fd530;
        }
      }
      else if (lVar4 == 0x5229545849c5537) {
        lVar3 = 0x759631fc397f19ac;
      }
      goto LAB_0018f544;
    }
    if (lVar4 != -0x1603da059d267032) {
      if (lVar4 == -0x507c44fec7c2c7b) {
        lVar3 = 0x371c25c9b3273489;
        if (unaff_x26 != 0) {
          lVar3 = 0x10526fec106cf6a4;
        }
      }
      goto LAB_0018f544;
    }
    local_70 = 0x1b;
  }
  lVar3 = -0x207015b202abe8e8;
  goto LAB_0018f544;
}

