// rea decompile_all
// name: FUN_0019c6f0
// address: 0x19c6f0
// body: available
// range: 0x19c6f0-0x19d29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019c6f0(int *param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x28;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0x1e2ac18295de71ca;
  if (param_3 != 0) {
    lVar1 = -0x7fde11595d30b2a4;
  }
  lVar3 = -0x4d1add0c8ce16b9;
LAB_0019c828:
  while (lVar4 = lVar3, lVar3 = lVar4, 0x1e2ac18295de71c9 < lVar4) {
    if (lVar4 < 0x56b61d7befbb4276) {
      if (lVar4 < 0x339b816749bbabae) {
        if (lVar4 < 0x1f070b39977eec97) {
          if (lVar4 == 0x1e2ac18295de71ca) {
            local_84 = 3;
            goto LAB_0019d1b0;
          }
          if (lVar4 == 0x1ec5d44aeecbdb89) {
            local_74 = 0x1d;
            goto LAB_0019c814;
          }
        }
        else if (lVar4 == 0x1f070b39977eec97) {
          lVar3 = 0x3a8994928addba7d;
          if (local_90 != 0) {
            lVar3 = -0x5b35d7a439489480;
          }
        }
        else if (lVar4 == 0x2c73ee228b994b16) {
          DAT_0021f978 = 0;
          lVar3 = -0x6c0e8f09bc789a5c;
        }
        else if (lVar4 == 0x2d789229014778fb) {
          return;
        }
      }
      else if (lVar4 < 0x41a63a6e69305a09) {
        if (lVar4 == 0x339b816749bbabae) {
          *param_5 = 0;
          lVar3 = 0x2d789229014778fb;
        }
        else if (lVar4 == 0x3a8994928addba7d) {
          local_74 = 0x11;
          goto LAB_0019c814;
        }
      }
      else if (lVar4 == 0x41a63a6e69305a09) {
        local_84 = 0x11;
LAB_0019d1b0:
        lVar3 = -0x3a74ab4e50c2183a;
      }
      else if (lVar4 == 0x46b39d706f3d90dc) {
        lVar3 = 0x41a63a6e69305a09;
        if (unaff_x28 != 0) {
          lVar3 = -0x532cdeef776fc327;
        }
      }
      else if (lVar4 == 0x4d30f27cf971405b) {
        lVar3 = 0x2d789229014778fb;
      }
    }
    else if (lVar4 < 0x5ed24a91fdbeaf08) {
      if (lVar4 < 0x5b5325483a048e8f) {
        if (lVar4 == 0x56b61d7befbb4276) {
          DAT_0021f974 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021e490,&DAT_0021e4a0);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x1f070b39977eec97;
          if (lVar4 != 0) {
            lVar3 = -0x5e82c6dc9be364b7;
          }
        }
        else if (lVar4 == 0x5a0af51beedf739e) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
LAB_0019c814:
          lVar3 = 0xb727b5bf6f5eb51;
        }
      }
      else if (lVar4 == 0x5b5325483a048e8f) {
        lVar3 = -0x901a1a58d8c8e2;
        if (DAT_0021fa25 == '\0') {
          lVar3 = -0x5525cd3368227be7;
        }
      }
      else if (lVar4 == 0x5e631727676e357f) {
        lVar3 = -0x2c7cf632482bdbfd;
      }
    }
    else if (lVar4 < 0x6be480eb46dfe305) {
      lVar3 = 0x339b816749bbabae;
      if ((lVar4 != 0x5ed24a91fdbeaf08) && (lVar3 = lVar4, lVar4 == 0x61152b7a09e0691f)) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x5ed24a91fdbeaf08;
        if (unaff_x28 != 0) {
          lVar3 = 0x5e631727676e357f;
        }
        *param_1 = 0x11;
      }
    }
    else if (lVar4 == 0x6be480eb46dfe305) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f978);
      lVar3 = 0x5b5325483a048e8f;
      if (iVar2 != 0) {
        lVar3 = 0x1682af0300b33bde;
      }
    }
    else {
      lVar3 = -0x2c7cf632482bdbfd;
      if ((lVar4 != 0x6e1c39d50b0a951c) && (lVar3 = lVar4, lVar4 == 0x7b7caf96eded0aa0)) {
        lVar3 = 0x1ec5d44aeecbdb89;
        if (*param_5 != 0) {
          lVar3 = 0x6e1c39d50b0a951c;
        }
      }
    }
  }
  if (lVar4 < -0x3de3ec445ed7c619) {
    if (lVar4 < -0x5e82c6dc9be364b7) {
      if (lVar4 < -0x6c0e8f09bc789a5c) {
        if (lVar4 == -0x7fde11595d30b2a4) {
          unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x46b39d706f3d90dc;
          if (lVar4 != 0) {
            lVar3 = 0x61152b7a09e0691f;
          }
        }
        else if (lVar4 == -0x6d340dcb7ae57d8e) {
          lVar3 = -0x634a7fef6b77ebe7;
          if (DAT_0021fa24 == '\0') {
            lVar3 = -0x3de3ec445ed7c619;
          }
        }
      }
      else if (lVar4 == -0x6c0e8f09bc789a5c) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f974);
        lVar3 = -0x6d340dcb7ae57d8e;
        if (iVar2 != 0) {
          lVar3 = -0x3b3572ff5ecc858a;
        }
      }
      else if (lVar4 == -0x634a7fef6b77ebe7) {
        lVar3 = 0x56b61d7befbb4276;
      }
      goto LAB_0019c828;
    }
    if (-0x5901c19217cca217 < lVar4) {
      lVar3 = 0x339b816749bbabae;
      if (lVar4 != -0x5901c19217cca216) {
        if (lVar4 == -0x5525cd3368227be7) {
          DAT_0021e4b0 = DAT_0021e4b0 ^ 0xf4;
          DAT_0021e4b1 = DAT_0021e4b1 ^ 0xf4;
          DAT_0021e4b2 = DAT_0021e4b2 ^ 0xf4;
          DAT_0021e4b3 = DAT_0021e4b3 ^ 0xf4;
          _DAT_0021e4a0 = _DAT_0021e4a0 ^ 0xf4f4f4f4f4f4f4f4;
          uRam000000000021e4a8 = uRam000000000021e4a8 ^ 0xf4f4f4f4f4f4f4f4;
          DAT_0021fa25 = '\x01';
          lVar3 = 0x2c73ee228b994b16;
        }
        else {
          lVar3 = lVar4;
          if (lVar4 == -0x532cdeef776fc327) {
            lVar3 = 0x6be480eb46dfe305;
          }
        }
      }
      goto LAB_0019c828;
    }
    if (lVar4 != -0x5e82c6dc9be364b7) {
      if (lVar4 == -0x5b35d7a439489480) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4);
        *param_5 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x7b7caf96eded0aa0;
        if (lVar4 != 0) {
          lVar3 = -0x31af3d6298c4bda3;
        }
      }
      goto LAB_0019c828;
    }
    local_88 = 0x11;
  }
  else {
    if (-0x2c7cf632482bdbfe < lVar4) {
      if (lVar4 < -0x901a1a58d8c8e2) {
        if (lVar4 == -0x2c7cf632482bdbfd) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
          lVar3 = 0x4d30f27cf971405b;
          if (*param_1 != 0) {
            lVar3 = -0x5901c19217cca216;
          }
        }
        else if (lVar4 == -0x4d1add0c8ce16b9) {
          lVar3 = lVar1;
        }
      }
      else {
        lVar3 = 0x2c73ee228b994b16;
        if (lVar4 != -0x901a1a58d8c8e2) {
          if (lVar4 == 0xb727b5bf6f5eb51) {
            *param_1 = local_74;
            lVar3 = -0x2c7cf632482bdbfd;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x1682af0300b33bde) {
              lVar3 = 0x6be480eb46dfe305;
            }
          }
        }
      }
      goto LAB_0019c828;
    }
    if (lVar4 < -0x3a74ab4e50c2183a) {
      if (lVar4 == -0x3de3ec445ed7c619) {
        DAT_0021e498 = DAT_0021e498 ^ 0x67;
        DAT_0021e499 = DAT_0021e499 ^ 0x67;
        DAT_0021e49a = DAT_0021e49a ^ 0x67;
        DAT_0021e49b = DAT_0021e49b ^ 0x67;
        DAT_0021e49c = DAT_0021e49c ^ 0x67;
        DAT_0021e49d = DAT_0021e49d ^ 0x67;
        DAT_0021e490 = DAT_0021e490 ^ 0x6767676767676767;
        DAT_0021fa24 = '\x01';
        lVar3 = 0x56b61d7befbb4276;
      }
      else if (lVar4 == -0x3b3572ff5ecc858a) {
        lVar3 = -0x6c0e8f09bc789a5c;
      }
      goto LAB_0019c828;
    }
    if (lVar4 == -0x3a74ab4e50c2183a) {
      *param_1 = local_84;
      lVar3 = 0x339b816749bbabae;
      goto LAB_0019c828;
    }
    if (lVar4 != -0x31af3d6298c4bda3) goto LAB_0019c828;
    local_88 = 0x1d;
  }
  lVar3 = 0x5a0af51beedf739e;
  goto LAB_0019c828;
}

