// rea decompile_all
// name: FUN_0019bb80
// address: 0x19bb80
// body: available
// range: 0x19bb80-0x19c6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019bb80(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0xef4ecf2355856c1;
  if (param_3 != 0) {
    lVar1 = -0x26b7aa46f058818e;
  }
  lVar3 = -0x78dde4b15f68a78f;
LAB_0019bc84:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0x10ffda6f409a7277) {
      if (lVar4 < -0x4fb2612493a4dfb4) {
        if (lVar4 < -0x723c9840b10f1bc0) {
          if (lVar4 < -0x78dde4b15f68a78f) {
            if (lVar4 == -0x7fe67905f346fbfb) {
              lVar3 = 0x3873d4157b1e028;
              if (*param_4 != 0) {
                lVar3 = 0x4ec78c8c2497ab98;
              }
            }
            else if (lVar4 == -0x7c97ee83877a38f9) {
              lVar3 = 0x18528e7287c6c44d;
              if (local_90 != 0) {
                lVar3 = 0x764d1aa6a849ae9d;
              }
            }
          }
          else {
            lVar3 = lVar1;
            if ((lVar4 != -0x78dde4b15f68a78f) && (lVar3 = lVar4, lVar4 == -0x72caa1f7965e5517)) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              local_74 = local_88;
              goto LAB_0019bc70;
            }
          }
        }
        else if (lVar4 < -0x63314a0f03d3e1fd) {
          if (lVar4 == -0x723c9840b10f1bc0) {
            lVar3 = -0x4fb2612493a4dfb4;
            if (DAT_0021f9d7 == '\0') {
              lVar3 = 0x6b0fcbfadcaa4d23;
            }
          }
          else if (lVar4 == -0x6f9de9da1eb30443) {
            lVar3 = 0x7bdb7d9ca9cd508b;
          }
        }
        else if (lVar4 == -0x63314a0f03d3e1fd) {
          DAT_0021f970 = 0;
          lVar3 = 0x5aaadd33a505f2fa;
        }
        else {
          lVar3 = 0x7bdb7d9ca9cd508b;
          if ((lVar4 != -0x5aa6270e31dc3068) && (lVar3 = lVar4, lVar4 == -0x59c75e716609c136)) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar3 = -0x4c6b693cae2d817e;
            if (*param_1 != 0) {
              lVar3 = -0x170811264074a33e;
            }
          }
        }
      }
      else if (lVar4 < -0x26b7aa46f058818e) {
        if (lVar4 < -0x4308634030dadfc6) {
          lVar3 = 0x68767f8ed1bcac3a;
          if ((lVar4 != -0x4fb2612493a4dfb4) && (lVar3 = lVar4, lVar4 == -0x4c6b693cae2d817e)) {
            lVar3 = -0x38a93e0289669b16;
          }
        }
        else if (lVar4 == -0x4308634030dadfc6) {
          local_88 = 0x1b;
LAB_0019c4d8:
          lVar3 = -0x72caa1f7965e5517;
        }
        else {
          if (lVar4 == -0x3d320decd9ddcb5e) {
            local_84 = 0x11;
            goto LAB_0019c16c;
          }
          if (lVar4 == -0x38a93e0289669b16) {
            return;
          }
        }
      }
      else if (lVar4 < -0x17e3cf1fceb3f39f) {
        if (lVar4 == -0x26b7aa46f058818e) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x2ad142c74481dc00;
          if (lVar4 != 0) {
            lVar3 = -0x10ffda6f409a7277;
          }
        }
        else if (lVar4 == -0x20f0bb65759b1f53) {
          lVar3 = -0x59c75e716609c136;
        }
      }
      else {
        lVar3 = -0x63314a0f03d3e1fd;
        if (lVar4 != -0x17e3cf1fceb3f39f) {
          if (lVar4 == -0x17d66c71fcff144c) {
            *param_1 = local_84;
            lVar3 = 0x7340613049dd68b8;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == -0x170811264074a33e) {
              lVar3 = 0x7340613049dd68b8;
            }
          }
        }
      }
    }
    if (lVar4 < 0x4ec78c8c2497ab98) {
      if (lVar4 < 0x5c4c7d2dbe47334) {
        if (lVar4 < -0x10c76017554eb93) {
          if (lVar4 == -0x10ffda6f409a7277) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar3 = 0x5c4c7d2dbe47334;
            if (unaff_x27 != 0) {
              lVar3 = -0x20f0bb65759b1f53;
            }
            *param_1 = 0x11;
          }
          else if (lVar4 == -0x41676e674455260) {
            lVar3 = -0x17e3cf1fceb3f39f;
            if (DAT_0021fa23 == '\0') {
              lVar3 = 0x6069f0d1c72197f2;
            }
          }
          goto LAB_0019bc84;
        }
        lVar3 = 0x5aaadd33a505f2fa;
        if ((lVar4 == -0x10c76017554eb93) || (lVar3 = lVar4, lVar4 != 0x3873d4157b1e028))
        goto LAB_0019bc84;
        local_74 = 0x1b;
      }
      else {
        if (lVar4 < 0x18528e7287c6c44d) {
          lVar3 = 0x7340613049dd68b8;
          if ((lVar4 != 0x5c4c7d2dbe47334) && (lVar3 = lVar4, lVar4 == 0xef4ecf2355856c1)) {
            local_84 = 3;
LAB_0019c16c:
            lVar3 = -0x17d66c71fcff144c;
          }
          goto LAB_0019bc84;
        }
        if (lVar4 != 0x18528e7287c6c44d) {
          if (lVar4 == 0x2ad142c74481dc00) {
            lVar3 = -0x3d320decd9ddcb5e;
            if (unaff_x27 != 0) {
              lVar3 = -0x5aa6270e31dc3068;
            }
          }
          else if (lVar4 == 0x2c67f66a4467d88a) {
            local_88 = 0x11;
            goto LAB_0019c4d8;
          }
          goto LAB_0019bc84;
        }
        local_74 = 0x11;
      }
LAB_0019bc70:
      lVar3 = 0x598d5359013bf1ba;
      goto LAB_0019bc84;
    }
    if (lVar4 < 0x68767f8ed1bcac3a) {
      if (lVar4 < 0x5aaadd33a505f2fa) {
        lVar3 = -0x59c75e716609c136;
        if ((lVar4 != 0x4ec78c8c2497ab98) && (lVar3 = lVar4, lVar4 == 0x598d5359013bf1ba)) {
          *param_1 = local_74;
          lVar3 = -0x59c75e716609c136;
        }
      }
      else if (lVar4 == 0x5aaadd33a505f2fa) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f838);
        lVar3 = -0x723c9840b10f1bc0;
        if (iVar2 != 0) {
          lVar3 = -0x10c76017554eb93;
        }
      }
      else if (lVar4 == 0x6069f0d1c72197f2) {
        DAT_0021e488 = DAT_0021e488 ^ 0xf9;
        DAT_0021e489 = DAT_0021e489 ^ 0xf9;
        DAT_0021e480 = DAT_0021e480 ^ 0xf9f9f9f9f9f9f9f9;
        DAT_0021fa23 = '\x01';
        lVar3 = -0x63314a0f03d3e1fd;
      }
    }
    else if (lVar4 < 0x7340613049dd68b8) {
      if (lVar4 == 0x68767f8ed1bcac3a) {
        DAT_0021f838 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e480,&DAT_0021da60);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x7c97ee83877a38f9;
        if (lVar4 != 0) {
          lVar3 = 0x2c67f66a4467d88a;
        }
      }
      else if (lVar4 == 0x6b0fcbfadcaa4d23) {
        DAT_0021da70 = DAT_0021da70 ^ 0x38;
        DAT_0021da71 = DAT_0021da71 ^ 0x38;
        DAT_0021da72 = DAT_0021da72 ^ 0x38;
        DAT_0021da73 = DAT_0021da73 ^ 0x38;
        DAT_0021da74 = DAT_0021da74 ^ 0x38;
        _DAT_0021da60 = _DAT_0021da60 ^ 0x3838383838383838;
        uRam000000000021da68 = uRam000000000021da68 ^ 0x3838383838383838;
        DAT_0021f9d7 = '\x01';
        lVar3 = 0x68767f8ed1bcac3a;
      }
    }
    else if (lVar4 == 0x7340613049dd68b8) {
      *param_4 = 0;
      lVar3 = -0x38a93e0289669b16;
    }
    else if (lVar4 == 0x764d1aa6a849ae9d) {
      lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
      *param_4 = lVar3;
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = -0x7fe67905f346fbfb;
      if (lVar4 != 0) {
        lVar3 = -0x4308634030dadfc6;
      }
    }
    else if (lVar4 == 0x7bdb7d9ca9cd508b) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f970);
      lVar3 = -0x41676e674455260;
      if (iVar2 != 0) {
        lVar3 = -0x6f9de9da1eb30443;
      }
    }
  } while( true );
}

