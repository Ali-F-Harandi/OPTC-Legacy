// rea decompile_all
// name: FUN_00185fac
// address: 0x185fac
// body: available
// range: 0x185fac-0x186b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00185fac(int *param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x28;
  long local_88;
  int local_80;
  int local_7c;
  int local_6c;
  
  lVar1 = -0x31b7fdae55ea9ca;
  if (param_3 != 0) {
    lVar1 = 0x1d736f34de4f5975;
  }
  lVar3 = -0x28de8d5a5397b305;
LAB_001860a8:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (lVar4 < 0x7af0f1fab2cb9bc) {
    if (-0x330e471128b3b733 < lVar4) {
      if (lVar4 < -0x13817eb3f325d285) {
        if (-0x1f80c7998a1f467a < lVar4) {
          if (lVar4 == -0x1f80c7998a1f4679) {
            *param_5 = 0;
            lVar3 = 0x593c712d6ed2cdc1;
          }
          else if (lVar4 == -0x15bfe279fa90eafe) {
            lVar3 = 0x455df301ced06cb6;
            if (local_88 != 0) {
              lVar3 = 0x626b6c2a054da67e;
            }
          }
          goto LAB_001860a8;
        }
        if (lVar4 != -0x330e471128b3b732) {
          if (lVar4 == -0x28de8d5a5397b305) {
            lVar3 = lVar1;
          }
          goto LAB_001860a8;
        }
        local_7c = 0x11;
      }
      else {
        if (lVar4 < -0xbbd141c4547c454) {
          if (lVar4 == -0x13817eb3f325d285) {
            lVar3 = -0x7428cea90a3236d5;
            if (*param_5 != 0) {
              lVar3 = -0x79aedc7e8afe1ef9;
            }
          }
          else if (lVar4 == -0xfc25a1dde3c785c) {
            lVar3 = -0x45fa588128210ec4;
          }
          goto LAB_001860a8;
        }
        if (lVar4 == -0xbbd141c4547c454) {
          lVar3 = 0x40f7dc0715a95ea7;
          if (DAT_0021f9f8 == '\0') {
            lVar3 = -0xab20af63b321c9d;
          }
          goto LAB_001860a8;
        }
        if (lVar4 == -0xab20af63b321c9d) {
          DAT_0021df2c = DAT_0021df2c ^ 0x97;
          DAT_0021df2d = DAT_0021df2d ^ 0x97;
          DAT_0021df2e = DAT_0021df2e ^ 0x97;
          DAT_0021df2f = DAT_0021df2f ^ 0x97;
          DAT_0021f9f8 = '\x01';
          lVar3 = 0x1386810cf6d4d9cd;
          goto LAB_001860a8;
        }
        if (lVar4 != -0x31b7fdae55ea9ca) goto LAB_001860a8;
        local_7c = 3;
      }
      lVar3 = -0x640e9afcd9d59424;
      goto LAB_001860a8;
    }
    if (lVar4 < -0x7428cea90a3236d5) {
      if (lVar4 < -0x79622e24e8b414e8) {
        lVar3 = -0x1f80c7998a1f4679;
        if ((lVar4 != -0x7b0531c8e02998cb) && (lVar3 = lVar4, lVar4 == -0x79aedc7e8afe1ef9)) {
          lVar3 = -0x79622e24e8b414e8;
        }
      }
      else if (lVar4 == -0x79622e24e8b414e8) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
        lVar3 = -0x74b80c1d40f5a6dc;
        if (*param_1 != 0) {
          lVar3 = 0x4cc37e94ed8488f0;
        }
      }
      else if (lVar4 == -0x74b80c1d40f5a6dc) {
        lVar3 = 0x593c712d6ed2cdc1;
      }
      goto LAB_001860a8;
    }
    if (-0x640e9afcd9d59425 < lVar4) {
      if (lVar4 == -0x640e9afcd9d59424) {
        *param_1 = local_7c;
        lVar3 = -0x1f80c7998a1f4679;
      }
      else {
        lVar3 = 0x64eb8df776a0a097;
        if ((lVar4 != -0x551292a9ff739055) && (lVar3 = lVar4, lVar4 == -0x45fa588128210ec4)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f8bc);
          lVar3 = -0xbbd141c4547c454;
          if (iVar2 != 0) {
            lVar3 = -0xfc25a1dde3c785c;
          }
        }
      }
      goto LAB_001860a8;
    }
    if (lVar4 != -0x7428cea90a3236d5) {
      if (lVar4 == -0x74239bebd0569f12) {
        DAT_0021f8c0 = 0;
        lVar3 = -0x45fa588128210ec4;
      }
      goto LAB_001860a8;
    }
    local_6c = 0x1b;
  }
  else {
    if (0x4cc37e94ed8488ef < lVar4) {
      if (lVar4 < 0x605a32b7e00a0508) {
        if (lVar4 < 0x56cf395fa7e225f9) {
          lVar3 = -0x1f80c7998a1f4679;
          if ((lVar4 != 0x4cc37e94ed8488f0) && (lVar3 = lVar4, lVar4 == 0x4ecf333fdf08b478)) {
            lVar3 = 0x570598bb43671b46;
            if (DAT_0021f9f9 == '\0') {
              lVar3 = 0x7af0f1fab2cb9bc;
            }
          }
        }
        else {
          lVar3 = -0x79622e24e8b414e8;
          if (((lVar4 != 0x56cf395fa7e225f9) &&
              (lVar3 = -0x74239bebd0569f12, lVar4 != 0x570598bb43671b46)) &&
             (lVar3 = lVar4, lVar4 == 0x593c712d6ed2cdc1)) {
            return;
          }
        }
      }
      else if (lVar4 < 0x64eb8df776a0a097) {
        lVar3 = 0x64eb8df776a0a097;
        if ((lVar4 != 0x605a32b7e00a0508) && (lVar3 = lVar4, lVar4 == 0x626b6c2a054da67e)) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_88,param_4);
          *param_5 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x13817eb3f325d285;
          if (lVar4 != 0) {
            lVar3 = 0x7b6cd8a78218bd24;
          }
        }
      }
      else if (lVar4 == 0x64eb8df776a0a097) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f8c0);
        lVar3 = 0x4ecf333fdf08b478;
        if (iVar2 != 0) {
          lVar3 = -0x551292a9ff739055;
        }
      }
      else if (lVar4 == 0x789d755abe031216) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x7b0531c8e02998cb;
        if (unaff_x28 != 0) {
          lVar3 = 0x56cf395fa7e225f9;
        }
        *param_1 = 0x11;
      }
      else if (lVar4 == 0x7b6cd8a78218bd24) {
        local_80 = 0x1b;
        goto LAB_00186ae8;
      }
      goto LAB_001860a8;
    }
    if (lVar4 < 0x1d736f34de4f5975) {
      if (lVar4 < 0x10558ba40e9c2820) {
        if (lVar4 == 0x7af0f1fab2cb9bc) {
          DAT_0021df40 = DAT_0021df40 ^ 0x69;
          DAT_0021df41 = DAT_0021df41 ^ 0x69;
          DAT_0021df42 = DAT_0021df42 ^ 0x69;
          DAT_0021df44 = DAT_0021df44 ^ 0x69;
          DAT_0021df43 = DAT_0021df43 ^ 0x69;
          DAT_0021df45 = DAT_0021df45 ^ 0x69;
          _DAT_0021df30 = _DAT_0021df30 ^ 0x6969696969696969;
          uRam000000000021df38 = uRam000000000021df38 ^ 0x6969696969696969;
          DAT_0021f9f9 = '\x01';
          lVar3 = -0x74239bebd0569f12;
        }
        else if (lVar4 == 0xc1e123e9dd6abb7) {
          *param_1 = local_6c;
          lVar3 = -0x79622e24e8b414e8;
        }
      }
      else if (lVar4 == 0x10558ba40e9c2820) {
        local_80 = 0x11;
LAB_00186ae8:
        lVar3 = 0x4743ed1ddb003bc3;
      }
      else if (lVar4 == 0x1386810cf6d4d9cd) {
        DAT_0021f8bc = 0;
        local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021df2c,&DAT_0021df30);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x15bfe279fa90eafe;
        if (lVar4 != 0) {
          lVar3 = 0x10558ba40e9c2820;
        }
      }
      goto LAB_001860a8;
    }
    if (lVar4 < 0x44fd100218a9bacb) {
      if (lVar4 == 0x1d736f34de4f5975) {
        unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x44fd100218a9bacb;
        if (lVar4 != 0) {
          lVar3 = 0x789d755abe031216;
        }
      }
      else if (lVar4 == 0x40f7dc0715a95ea7) {
        lVar3 = 0x1386810cf6d4d9cd;
      }
      goto LAB_001860a8;
    }
    if (lVar4 == 0x44fd100218a9bacb) {
      lVar3 = -0x330e471128b3b732;
      if (unaff_x28 != 0) {
        lVar3 = 0x605a32b7e00a0508;
      }
      goto LAB_001860a8;
    }
    if (lVar4 == 0x455df301ced06cb6) {
      local_6c = 0x11;
      goto LAB_00186094;
    }
    if (lVar4 != 0x4743ed1ddb003bc3) goto LAB_001860a8;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_6c = local_80;
  }
LAB_00186094:
  lVar3 = 0xc1e123e9dd6abb7;
  goto LAB_001860a8;
}

