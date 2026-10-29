// rea decompile_all
// name: FUN_0018a758
// address: 0x18a758
// body: available
// range: 0x18a758-0x18b50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018a758(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x28;
  long local_a8;
  long local_90;
  long local_80;
  int local_78;
  byte local_74;
  long local_70;
  
  lVar1 = 0x739eda5c23529b93;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x627f78b8cbd30357;
  }
  lVar3 = -0x75e6ce9d443c131e;
LAB_0018a87c:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, -0x2584dec680601262 < lVar4) {
      if (lVar4 < 0x55c1a9b2fdeee252) {
        if (lVar4 < 0x245a9e19c14354b1) {
          if (lVar4 < -0x1e81e43b0dc38416) {
            lVar3 = -0x75f60d4f4f1ece6d;
            if ((lVar4 != -0x2584dec680601261) && (lVar3 = lVar4, lVar4 == -0x2433de9d9459e086)) {
              lVar3 = 0x47dcb3a9e761af62;
              if (*param_5 != 0) {
                lVar3 = -0x7c818c7b8a123434;
              }
            }
          }
          else if (lVar4 == -0x1e81e43b0dc38416) {
            local_74 = 1;
            lVar3 = -0x2ef323ec5b63f416;
            unaff_x20 = unaff_x28;
LAB_0018b2e4:
            *param_1 = 0x21;
          }
          else {
            lVar3 = -0x48cc972e0affcf05;
            if ((lVar4 != -0x1375256aacb16b1c) && (lVar3 = lVar4, lVar4 == 0x227633c85a010475)) {
              lVar3 = 0x69a3fb3fb834cb4d;
            }
          }
        }
        else if (lVar4 < 0x367bc87fbb798031) {
          if (lVar4 == 0x245a9e19c14354b1) {
            *param_1 = local_78;
            lVar3 = -0x2ef323ec5b63f416;
            unaff_x20 = local_80;
            local_74 = param_2 != (long *)0x0;
          }
          else if (lVar4 == 0x2f9c83e308b2120b) {
            lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,local_70);
            *param_5 = lVar3;
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x2433de9d9459e086;
            if (lVar4 != 0) {
              lVar3 = -0x794a0dcb32dfba6d;
            }
          }
          else if (lVar4 == 0x302ad501d969e85a) {
            lVar3 = 0x5eba8fa9b8bf3d3f;
          }
        }
        else {
          lVar3 = 0x5eba8fa9b8bf3d3f;
          if (((lVar4 != 0x367bc87fbb798031) &&
              (lVar3 = -0x732c76896e171f03, lVar4 != 0x401c3d77c2d8a6ba)) &&
             (lVar3 = lVar4, lVar4 == 0x47dcb3a9e761af62)) {
            lVar3 = -0x5568d2d10870cd16;
          }
        }
      }
      else if (lVar4 < 0x69a3fb3fb834cb4d) {
        if (lVar4 < 0x5b71dabc82c958b8) {
          if (lVar4 == 0x55c1a9b2fdeee252) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f830);
            lVar3 = 0x593120ea5b9c453c;
            if (iVar2 != 0) {
              lVar3 = -0x4f01b5b26079cb73;
            }
          }
          else if (lVar4 == 0x593120ea5b9c453c) {
            lVar3 = -0x382004ae3a779619;
            if (DAT_0021f9d5 == '\0') {
              lVar3 = 0x69aa946d14c3999b;
            }
          }
        }
        else {
          lVar3 = -0x7c33fee57db6e3de;
          if (lVar4 != 0x5b71dabc82c958b8) {
            if (lVar4 == 0x5eba8fa9b8bf3d3f) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f8bc);
              lVar3 = -0x7320e8c862582bbd;
              if (iVar2 != 0) {
                lVar3 = 0x367bc87fbb798031;
              }
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == 0x685bf3f83f8318e8) {
                DAT_0021f830 = 0;
                local_90 = (**(code **)(*param_2 + 0x108))
                                     (param_2,unaff_x28,&DAT_0021df2c,&DAT_0021da20);
                lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
                lVar3 = -0x489e92765aa06d85;
                if (lVar4 != 0) {
                  lVar3 = -0x395c05d374146914;
                }
              }
            }
          }
        }
      }
      else if (lVar4 < 0x739eda5c23529b93) {
        if (lVar4 == 0x69a3fb3fb834cb4d) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          goto LAB_0018a860;
        }
        if (lVar4 == 0x69aa946d14c3999b) {
          DAT_0021da40 = DAT_0021da40 ^ 0x75;
          DAT_0021da41 = DAT_0021da41 ^ 0x75;
          DAT_0021da42 = DAT_0021da42 ^ 0x75;
          DAT_0021da44 = DAT_0021da44 ^ 0x75;
          DAT_0021da45 = DAT_0021da45 ^ 0x75;
          DAT_0021da46 = DAT_0021da46 ^ 0x75;
          DAT_0021da43 = DAT_0021da43 ^ 0x75;
          _DAT_0021da20 = _DAT_0021da20 ^ 0x7575757575757575;
          uRam000000000021da28 = uRam000000000021da28 ^ 0x7575757575757575;
          _DAT_0021da30 = _DAT_0021da30 ^ 0x7575757575757575;
          uRam000000000021da38 = uRam000000000021da38 ^ 0x7575757575757575;
          DAT_0021f9d5 = '\x01';
          lVar3 = 0x685bf3f83f8318e8;
        }
        else if (lVar4 == 0x6b3ee9fb586513dc) {
          local_70 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x7f45a06d341c309c;
          if (lVar4 != 0) {
            lVar3 = -0x599279007049402e;
          }
        }
      }
      else if (lVar4 == 0x739eda5c23529b93) {
        unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x2a0b63f9bdabb29a;
        if (lVar4 != 0) {
          lVar3 = 0x227633c85a010475;
        }
      }
      else if (lVar4 == 0x7f0211edad7abf7c) {
        DAT_0021df2c = DAT_0021df2c ^ 0x97;
        DAT_0021df2d = DAT_0021df2d ^ 0x97;
        DAT_0021df2e = DAT_0021df2e ^ 0x97;
        DAT_0021df2f = DAT_0021df2f ^ 0x97;
        DAT_0021f9f8 = '\x01';
        lVar3 = -0x48cc972e0affcf05;
      }
      else if (lVar4 == 0x7f45a06d341c309c) {
        lVar3 = -0x1e81e43b0dc38416;
        if (local_70 != 0) {
          lVar3 = 0x2f9c83e308b2120b;
        }
      }
    }
    if (lVar4 < -0x627f78b8cbd30357) {
      if (lVar4 < -0x75f60d4f4f1ece6d) {
        if (lVar4 < -0x794a0dcb32dfba6d) {
          lVar3 = -0x732c76896e171f03;
          if ((lVar4 != -0x7c818c7b8a123434) && (lVar3 = lVar4, lVar4 == -0x7c33fee57db6e3de)) {
            lVar3 = -0x2584dec680601261;
            if (*param_1 != 0) {
              lVar3 = -0x76db28d5517706d2;
            }
          }
        }
        else if (lVar4 == -0x794a0dcb32dfba6d) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x5568d2d10870cd16;
        }
        else if (lVar4 == -0x7759a3c6bb93bbd3) {
LAB_0018a860:
          local_78 = 0x11;
          lVar3 = 0x245a9e19c14354b1;
          local_80 = unaff_x28;
        }
        else if (lVar4 == -0x76db28d5517706d2) {
          *param_5 = 0;
          lVar3 = -0x75f60d4f4f1ece6d;
        }
      }
      else if (lVar4 < -0x7320e8c862582bbd) {
        lVar3 = lVar1;
        if (lVar4 != -0x75e6ce9d443c131e) {
          if (lVar4 == -0x732c76896e171f03) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_70);
            goto LAB_0018afb4;
          }
          lVar3 = lVar4;
          if (lVar4 == -0x75f60d4f4f1ece6d) {
            return;
          }
        }
      }
      else if (lVar4 == -0x7320e8c862582bbd) {
        lVar3 = -0x1375256aacb16b1c;
        if (DAT_0021f9f8 == '\0') {
          lVar3 = 0x7f0211edad7abf7c;
        }
      }
      else if (lVar4 == -0x6e83584ff66aa582) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
        lVar3 = -0x7c33fee57db6e3de;
      }
      else if (lVar4 == -0x63fdafecacd67af6) goto LAB_0018a860;
      goto LAB_0018a87c;
    }
    if (lVar4 < -0x48cc972e0affcf05) {
      if (lVar4 < -0x599279007049402e) {
        if (lVar4 == -0x627f78b8cbd30357) {
          local_80 = 0;
          local_78 = 3;
          lVar3 = 0x245a9e19c14354b1;
        }
        else if (lVar4 == -0x5c85b46279d15ea3) {
LAB_0018afb4:
          local_74 = 1;
          lVar3 = -0x2ef323ec5b63f416;
          unaff_x20 = unaff_x28;
        }
      }
      else {
        if (lVar4 == -0x599279007049402e) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x5c85b46279d15ea3;
          if (local_70 != 0) {
            lVar3 = 0x401c3d77c2d8a6ba;
          }
          goto LAB_0018b2e4;
        }
        if (lVar4 == -0x5568d2d10870cd16) {
          *param_1 = 0x1b;
          lVar3 = -0x732c76896e171f03;
        }
        else if (lVar4 == -0x4f01b5b26079cb73) {
          lVar3 = 0x55c1a9b2fdeee252;
        }
      }
    }
    else if (lVar4 < -0x382004ae3a779619) {
      if (lVar4 == -0x48cc972e0affcf05) {
        DAT_0021f8bc = 0;
        lVar3 = 0x55c1a9b2fdeee252;
      }
      else if (lVar4 == -0x489e92765aa06d85) {
        lVar3 = -0x63fdafecacd67af6;
        if (local_90 != 0) {
          lVar3 = 0x6b3ee9fb586513dc;
        }
      }
      else if (lVar4 == -0x395c05d374146914) {
        lVar3 = 0x69a3fb3fb834cb4d;
      }
    }
    else {
      lVar3 = 0x685bf3f83f8318e8;
      if (lVar4 != -0x382004ae3a779619) {
        if (lVar4 == -0x2ef323ec5b63f416) {
          lVar3 = -0x6e83584ff66aa582;
          local_a8 = unaff_x20;
          if ((local_74 & unaff_x20 != 0) == 0) {
            lVar3 = 0x5b71dabc82c958b8;
          }
        }
        else {
          lVar3 = lVar4;
          if (lVar4 == -0x2a0b63f9bdabb29a) {
            lVar3 = -0x7759a3c6bb93bbd3;
            if (unaff_x28 != 0) {
              lVar3 = 0x302ad501d969e85a;
            }
          }
        }
      }
    }
  } while( true );
}

