// rea decompile_all
// name: FUN_0019237c
// address: 0x19237c
// body: available
// range: 0x19237c-0x1936b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019237c(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  long local_b8;
  long local_a8;
  long local_a0;
  long local_90;
  long local_88;
  long local_78;
  byte local_68;
  int local_64;
  
  lVar1 = -0x6e47912b95736632;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x12213601559fb08b;
  }
  lVar3 = 0x496a3ea6e2286862;
LAB_001924b8:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (lVar4 < -0x4fb1f94f726abc) {
    if (-0x35e987b56477b112 < lVar4) {
      if (lVar4 < -0x154ab831b644ad87) {
        if (lVar4 < -0x1f9fab898c21c48b) {
          if (lVar4 < -0x2220c3c7617c4410) {
            lVar3 = -0x1f9fab898c21c48b;
            if ((lVar4 != -0x35e987b56477b111) && (lVar3 = lVar4, lVar4 == -0x26fb0fb700449341)) {
              lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_a0,local_88);
              *param_5 = lVar3;
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = -0x2220c3c7617c4410;
              if (lVar4 != 0) {
                lVar3 = 0x3c452808514839de;
              }
            }
          }
          else if (lVar4 == -0x2220c3c7617c4410) {
            lVar3 = -0x20ecbed6b92a5044;
            if (*param_5 != 0) {
              lVar3 = 0x150b39d1fb4a3c85;
            }
          }
          else if (lVar4 == -0x20ecbed6b92a5044) {
            lVar3 = -0x7b3db123be974a14;
          }
        }
        else if (lVar4 < -0x1b1c3c4c5eb72e1d) {
          if (lVar4 == -0x1f9fab898c21c48b) {
            DAT_0021f914 = 0;
            lVar3 = -0x47838cdcc7a93d22;
          }
          else if (lVar4 == -0x1eef3fe850c5c861) {
            return;
          }
        }
        else {
          lVar3 = -0xdbcbb04783be7b6;
          if ((lVar4 != -0x1b1c3c4c5eb72e1d) && (lVar3 = lVar4, lVar4 == -0x17a7eed3136c37ca)) {
            lVar3 = -0x3c99ad1c41165c93;
            if (local_a0 != 0) {
              lVar3 = 0x19e11c6f0bc9d0a7;
            }
          }
        }
      }
      else if (lVar4 < -0xfefb2b179491bfe) {
        lVar3 = -0xdbcbb04783be7b6;
        if (lVar4 != -0x154ab831b644ad87) {
          if (lVar4 == -0x136bfbed72f04248) {
            lVar3 = -0x6858af270aa78f83;
            if (DAT_0021fa0a == '\0') {
              lVar3 = -0x5b299dfa4e31d1f3;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == -0x12213601559fb08b) {
              local_78 = 0;
              local_64 = 3;
              lVar3 = 0x62d5a9b884722eb0;
            }
          }
        }
      }
      else if (lVar4 < -0xdbcbb04783be7b6) {
        if (lVar4 == -0xfefb2b179491bfe) {
          DAT_0021e1c0 = DAT_0021e1c0 ^ 0xdc;
          DAT_0021e1c1 = DAT_0021e1c1 ^ 0xdc;
          DAT_0021e1c2 = DAT_0021e1c2 ^ 0xdc;
          DAT_0021e1c4 = DAT_0021e1c4 ^ 0xdc;
          DAT_0021e1c5 = DAT_0021e1c5 ^ 0xdc;
          DAT_0021e1c6 = DAT_0021e1c6 ^ 0xdc;
          DAT_0021e1c3 = DAT_0021e1c3 ^ 0xdc;
          _DAT_0021e1a0 = _DAT_0021e1a0 ^ 0xdcdcdcdcdcdcdcdc;
          uRam000000000021e1a8 = uRam000000000021e1a8 ^ 0xdcdcdcdcdcdcdcdc;
          _DAT_0021e1b0 = _DAT_0021e1b0 ^ 0xdcdcdcdcdcdcdcdc;
          uRam000000000021e1b8 = uRam000000000021e1b8 ^ 0xdcdcdcdcdcdcdcdc;
          DAT_0021fa0c = '\x01';
          lVar3 = -0x1f9fab898c21c48b;
        }
        else if (lVar4 == -0xeb44e86d10b44c6) {
          lVar3 = -0x5de94bfaa943077f;
          if (DAT_0021fa0b == '\0') {
            lVar3 = 0x705c9d72623b0c92;
          }
        }
      }
      else {
        if (lVar4 == -0xdbcbb04783be7b6) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          goto LAB_0019249c;
        }
        if (lVar4 == -0x82f2f391ff20590) {
          DAT_0021e090 = DAT_0021e090 ^ 0xed;
          DAT_0021e092 = DAT_0021e092 ^ 0xed;
          DAT_0021e091 = DAT_0021e091 ^ 0xed;
          _DAT_0021e080 = _DAT_0021e080 ^ 0xedededededededed;
          uRam000000000021e088 = uRam000000000021e088 ^ 0xedededededededed;
          DAT_0021fa04 = '\x01';
          lVar3 = 0x65526979ebc09ea9;
        }
      }
      goto LAB_001924b8;
    }
    if (-0x5b299dfa4e31d1f4 < lVar4) {
      if (lVar4 < -0x4776c58602e23dab) {
        if (lVar4 < -0x486adeba556cc86b) {
          if (lVar4 == -0x5b299dfa4e31d1f3) {
            _DAT_0021e160 = _DAT_0021e160 ^ 0x3131313131313131;
            uRam000000000021e168 = uRam000000000021e168 ^ 0x3131313131313131;
            s_r__ETIE1_0021e170._0_8_ = s_r__ETIE1_0021e170._0_8_ ^ 0x3131313131313131;
            DAT_0021fa0a = '\x01';
            lVar3 = -0x486adeba556cc86b;
          }
          else if (lVar4 == -0x5985df81977688a6) {
            local_b8 = local_90;
            lVar3 = 0x7b4f39960d86d338;
            if ((local_68 & local_90 != 0) == 0) {
              lVar3 = 0x41dcfd85cbf991f9;
            }
          }
        }
        else if (lVar4 == -0x486adeba556cc86b) {
          DAT_0021f90c = 0;
          unaff_x26 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e160);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x5365a5fd8a2e2ee4;
          if (lVar4 != 0) {
            lVar3 = -0x1b1c3c4c5eb72e1d;
          }
        }
        else if (lVar4 == -0x47838cdcc7a93d22) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f910);
          lVar3 = -0xeb44e86d10b44c6;
          if (iVar2 != 0) {
            lVar3 = -0x6bcfa590dbde0f2b;
          }
        }
      }
      else if (lVar4 < -0x3c99ad1c41165c93) {
        if (lVar4 == -0x4776c58602e23dab) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f914);
          lVar3 = 0x7f53cdda607834ea;
          if (iVar2 != 0) {
            lVar3 = -0x73338243f4a6de27;
          }
        }
        else if (lVar4 == -0x3dadc886f5cb9c5c) {
          local_68 = 1;
          lVar3 = -0x5985df81977688a6;
          local_90 = unaff_x26;
          goto LAB_00193630;
        }
      }
      else {
        if (lVar4 == -0x3c99ad1c41165c93) goto LAB_0019249c;
        if (lVar4 == -0x39a12b1392ada23e) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f8f4);
          lVar3 = 0x14e2b8d7f8c89bcd;
          if (iVar2 != 0) {
            lVar3 = -0x4fb1f94f726abc;
          }
        }
      }
      goto LAB_001924b8;
    }
    if (-0x6e47912b95736633 < lVar4) {
      if (lVar4 < -0x6858af270aa78f83) {
        lVar3 = 0xec76097e7bcef2b;
        if ((lVar4 != -0x6e47912b95736632) && (lVar3 = lVar4, lVar4 == -0x6bcfa590dbde0f2b)) {
          lVar3 = -0x47838cdcc7a93d22;
        }
      }
      else {
        lVar3 = -0x486adeba556cc86b;
        if ((lVar4 != -0x6858af270aa78f83) && (lVar3 = lVar4, lVar4 == -0x5de94bfaa943077f)) {
          lVar3 = 0x4dfe1a533e92e773;
        }
      }
      goto LAB_001924b8;
    }
    if (lVar4 == -0x7dc4f714e3c18336) {
      (**(code **)(*param_2 + 0xb8))(param_2,local_88);
      goto LAB_00193454;
    }
    if (lVar4 != -0x7b3db123be974a14) {
      if (lVar4 == -0x73338243f4a6de27) {
        lVar3 = -0x4776c58602e23dab;
      }
      goto LAB_001924b8;
    }
    lVar3 = -0x7dc4f714e3c18336;
  }
  else {
    if (0x532419efbc2b5e6a < lVar4) {
      if (lVar4 < 0x6960fa7fb07fb425) {
        if (lVar4 < 0x65526979ebc09ea9) {
          lVar3 = -0x4776c58602e23dab;
          if (lVar4 != 0x532419efbc2b5e6b) {
            if (lVar4 == 0x5365a5fd8a2e2ee4) {
              lVar3 = 0x7d170bd3e7c27c4a;
              if (unaff_x26 != 0) {
                lVar3 = 0x532419efbc2b5e6b;
              }
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == 0x62d5a9b884722eb0) {
                local_90 = local_78;
                *param_1 = local_64;
                lVar3 = -0x5985df81977688a6;
                local_68 = param_2 != (long *)0x0;
              }
            }
          }
          goto LAB_001924b8;
        }
        if (lVar4 < 0x6814976072f88927) {
          if (lVar4 == 0x65526979ebc09ea9) {
            DAT_0021f8f4 = 0;
            local_a8 = (**(code **)(*param_2 + 0x480))(param_2,unaff_x26,param_4,&DAT_0021e080);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x6d5e1b9e887f615e;
            if (lVar4 != 0) {
              lVar3 = 0x4a9a908786cdba58;
            }
          }
          else if (lVar4 == 0x67217194a3e8b851) {
            local_88 = (**(code **)(*param_2 + 0x488))(param_2,unaff_x26,local_a8);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = 0x20cb3cffeb740807;
            if (lVar4 != 0) {
              lVar3 = 0x4c9328926827d19e;
            }
          }
          goto LAB_001924b8;
        }
        if (lVar4 != 0x6814976072f88927) {
          if (lVar4 == 0x68a3e880600b4d20) {
            lVar3 = 0x1bcb786c0ff7b235;
            if (*param_1 != 0) {
              lVar3 = 0x41451d08e6768803;
            }
          }
          goto LAB_001924b8;
        }
      }
      else {
        if (lVar4 < 0x7b4f39960d86d338) {
          if (lVar4 < 0x705c9d72623b0c92) {
            lVar3 = 0x65526979ebc09ea9;
            if ((lVar4 != 0x6960fa7fb07fb425) && (lVar3 = lVar4, lVar4 == 0x6d5e1b9e887f615e)) {
              lVar3 = 0x6814976072f88927;
              if (local_a8 != 0) {
                lVar3 = 0x67217194a3e8b851;
              }
            }
          }
          else if (lVar4 == 0x705c9d72623b0c92) {
            DAT_0021e190 = DAT_0021e190 ^ 9;
            _DAT_0021e180 = _DAT_0021e180 ^ 0x909090909090909;
            uRam000000000021e188 = uRam000000000021e188 ^ 0x909090909090909;
            DAT_0021fa0b = '\x01';
            lVar3 = 0x4dfe1a533e92e773;
          }
          else if (lVar4 == 0x709d70634cc07b96) {
LAB_00193454:
            lVar3 = -0x5985df81977688a6;
            local_90 = unaff_x26;
            local_68 = 1;
          }
          goto LAB_001924b8;
        }
        if (0x7f53cdda607834e9 < lVar4) {
          if (lVar4 == 0x7f53cdda607834ea) {
            lVar3 = -0x35e987b56477b111;
            if (DAT_0021fa0c == '\0') {
              lVar3 = -0xfefb2b179491bfe;
            }
          }
          else if (lVar4 == 0x7f86b75637625789) {
            lVar3 = 0xec76097e7bcef2b;
          }
          goto LAB_001924b8;
        }
        if (lVar4 == 0x7b4f39960d86d338) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
          lVar3 = 0x68a3e880600b4d20;
          goto LAB_001924b8;
        }
        if (lVar4 != 0x7d170bd3e7c27c4a) goto LAB_001924b8;
      }
LAB_0019249c:
      local_64 = 0x11;
      lVar3 = 0x62d5a9b884722eb0;
      local_78 = unaff_x26;
      goto LAB_001924b8;
    }
    if (lVar4 < 0x20cb3cffeb740807) {
      if (lVar4 < 0x150b39d1fb4a3c85) {
        lVar3 = -0x39a12b1392ada23e;
        if (lVar4 != -0x4fb1f94f726abc) {
          if (lVar4 == 0xec76097e7bcef2b) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f90c);
            lVar3 = -0x136bfbed72f04248;
            if (iVar2 != 0) {
              lVar3 = 0x7f86b75637625789;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x14e2b8d7f8c89bcd) {
              lVar3 = 0x6960fa7fb07fb425;
              if (DAT_0021fa04 == '\0') {
                lVar3 = -0x82f2f391ff20590;
              }
            }
          }
        }
      }
      else if (lVar4 < 0x1bcb786c0ff7b235) {
        lVar3 = -0x7dc4f714e3c18336;
        if ((lVar4 != 0x150b39d1fb4a3c85) && (lVar3 = lVar4, lVar4 == 0x19e11c6f0bc9d0a7)) {
          lVar3 = -0x39a12b1392ada23e;
        }
      }
      else {
        lVar3 = -0x1eef3fe850c5c861;
        if ((lVar4 != 0x1bcb786c0ff7b235) && (lVar3 = lVar4, lVar4 == 0x1ec979d5dca9f154)) {
          lVar3 = -0x7dc4f714e3c18336;
        }
      }
      goto LAB_001924b8;
    }
    if (lVar4 < 0x496a3ea6e2286862) {
      if (lVar4 < 0x41451d08e6768803) {
        if (lVar4 == 0x20cb3cffeb740807) {
          lVar3 = -0x3dadc886f5cb9c5c;
          if (local_88 != 0) {
            lVar3 = -0x26fb0fb700449341;
          }
        }
        else if (lVar4 == 0x3c452808514839de) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x7b3db123be974a14;
        }
      }
      else if (lVar4 == 0x41451d08e6768803) {
        *param_5 = 0;
        lVar3 = -0x1eef3fe850c5c861;
      }
      else if (lVar4 == 0x41dcfd85cbf991f9) {
        lVar3 = 0x68a3e880600b4d20;
      }
      goto LAB_001924b8;
    }
    if (lVar4 < 0x4c9328926827d19e) {
      lVar3 = lVar1;
      if ((lVar4 != 0x496a3ea6e2286862) && (lVar3 = lVar4, lVar4 == 0x4a9a908786cdba58)) {
        lVar3 = -0xdbcbb04783be7b6;
      }
      goto LAB_001924b8;
    }
    if (lVar4 != 0x4c9328926827d19e) {
      if (lVar4 == 0x4dfe1a533e92e773) {
        DAT_0021f910 = 0;
        local_a0 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x26,&DAT_0021e180,&DAT_0021e1a0);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x17a7eed3136c37ca;
        if (lVar4 != 0) {
          lVar3 = -0x154ab831b644ad87;
        }
      }
      goto LAB_001924b8;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    lVar3 = 0x709d70634cc07b96;
    if (local_88 != 0) {
      lVar3 = 0x1ec979d5dca9f154;
    }
  }
LAB_00193630:
  *param_1 = 0x1b;
  goto LAB_001924b8;
}

