// rea decompile_all
// name: FUN_00171f80
// address: 0x171f80
// body: available
// range: 0x171f80-0x172ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00171f80(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x23;
  long local_c0;
  long local_b8;
  int local_ac;
  long local_a0;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  
  lVar1 = 0x25b6416ea5aab4b6;
  if (param_3 != 0) {
    lVar1 = -0x2ad17e01cf2bd6a8;
  }
  lVar3 = 0x7f50ebff22c297c5;
LAB_00172098:
  while( true ) {
    while( true ) {
      while (lVar4 = lVar3, lVar3 = lVar4, 0x952495cae57ae97 < lVar4) {
        if (lVar4 < 0x42e31b9b931691d4) {
          if (lVar4 < 0x18950f5f9acbc40c) {
            if (lVar4 < 0xc18376c52d7997c) {
              if (lVar4 == 0x952495cae57ae98) {
                local_7c = 0x17;
                goto LAB_00172cbc;
              }
              if (lVar4 == 0xa93d39c1f756203) {
                *param_1 = local_ac;
                lVar3 = -0x16f1e5fa5f3754a5;
              }
              else if (lVar4 == 0xbacab81abb31f89) {
                lVar3 = -0x75c6b439bc357e24;
                if (local_b8 != 0) {
                  lVar3 = 0x5e1d9776c3346af9;
                }
              }
            }
            else {
              lVar3 = -0x2941a20700173ffc;
              if (lVar4 != 0xc18376c52d7997c) {
                if (lVar4 == 0xd1ed160c559152c) {
                  local_8c = 0x21;
                  goto LAB_00172dcc;
                }
                lVar3 = lVar4;
                if (lVar4 == 0x14996c4a2edcd7b8) {
                  lVar3 = -0x24a6c1aed81e45b8;
                  if (DAT_0021f9c4 == '\0') {
                    lVar3 = 0x7a9bcd40c6c39be5;
                  }
                }
              }
            }
          }
          else if (lVar4 < 0x27a5ffe384dbadcc) {
            if (lVar4 == 0x18950f5f9acbc40c) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar3 = -0x38d34c0beb76f4aa;
              if (unaff_x23 != 0) {
                lVar3 = 0x51f9122c645eb44b;
              }
              *param_1 = 0x11;
            }
            else {
              lVar3 = -0x16f1e5fa5f3754a5;
              if ((lVar4 != 0x1c039adc9c242f08) && (lVar3 = lVar4, lVar4 == 0x25b6416ea5aab4b6)) {
                local_ac = 3;
                goto LAB_00172be0;
              }
            }
          }
          else if (lVar4 < 0x38dcd2690fefd83c) {
            if (lVar4 == 0x27a5ffe384dbadcc) {
              DAT_0021d910 = DAT_0021d910 ^ 0xf6;
              DAT_0021d911 = DAT_0021d911 ^ 0xf6;
              DAT_0021d912 = DAT_0021d912 ^ 0xf6;
              DAT_0021d913 = DAT_0021d913 ^ 0xf6;
              _DAT_0021d900 = _DAT_0021d900 ^ 0xf6f6f6f6f6f6f6f6;
              uRam000000000021d908 = uRam000000000021d908 ^ 0xf6f6f6f6f6f6f6f6;
              DAT_0021f9c9 = '\x01';
              lVar3 = 0x7fd4f688afe2e0bc;
            }
            else if (lVar4 == 0x33953cc7b3e45706) {
              lVar3 = -0x760fdc1afc98096c;
              local_98 = unaff_x20;
            }
          }
          else if (lVar4 == 0x39af1ae683ec7d89) {
            DAT_0021d920 = DAT_0021d920 ^ 0x53;
            DAT_0021d921 = DAT_0021d921 ^ 0x53;
            DAT_0021d922 = DAT_0021d922 ^ 0x53;
            DAT_0021d923 = DAT_0021d923 ^ 0x53;
            DAT_0021d918 = DAT_0021d918 ^ 0x5353535353535353;
            DAT_0021f9ca = '\x01';
            lVar3 = 0x71a1b60c2d3020c3;
          }
          else if (lVar4 == 0x38dcd2690fefd83c) {
            return;
          }
        }
        else if (lVar4 < 0x675e05399f995d8e) {
          if (lVar4 < 0x553ff0e638d8b04c) {
            if (lVar4 == 0x42e31b9b931691d4) {
              DAT_0021f7ec = 0;
              local_b8 = (**(code **)(*param_2 + 0x388))
                                   (param_2,unaff_x23,&DAT_0021d918,&DAT_0021d930);
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = 0xbacab81abb31f89;
              if (lVar4 != 0) {
                lVar3 = -0x52bf327ff4ce5fc6;
              }
            }
            else if (lVar4 == 0x51f9122c645eb44b) {
              local_98 = 0;
              lVar3 = -0x760fdc1afc98096c;
            }
            else if (lVar4 == 0x5408d3bc6061f1d1) {
              local_98 = local_78;
              *param_1 = local_7c;
              lVar3 = -0x760fdc1afc98096c;
            }
          }
          else if (lVar4 == 0x553ff0e638d8b04c) {
            lVar3 = -0x5c0b05f8eb36e4c6;
            if (DAT_0021f9c9 == '\0') {
              lVar3 = 0x27a5ffe384dbadcc;
            }
          }
          else {
            lVar3 = -0x2941a20700173ffc;
            if ((lVar4 != 0x5cda4d8cdcc78c0e) && (lVar3 = lVar4, lVar4 == 0x5e1d9776c3346af9)) {
              unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = -0xb9715b8979f7d33;
              if (lVar4 != 0) {
                lVar3 = 0xd1ed160c559152c;
              }
            }
          }
        }
        else if (lVar4 < 0x7b12ba36dfe3331c) {
          if (lVar4 == 0x675e05399f995d8e) {
            lVar3 = -0x3cf562eeeb01cc12;
            if (DAT_0021f9ca == '\0') {
              lVar3 = 0x39af1ae683ec7d89;
            }
          }
          else if (lVar4 == 0x71a1b60c2d3020c3) {
            DAT_0021f804 = 0;
            lVar3 = -0x3827f0da3b71cf9b;
          }
          else if (lVar4 == 0x7a9bcd40c6c39be5) {
            _DAT_0021d930 = _DAT_0021d930 ^ 0x7676767676767676;
            uRam000000000021d938 = uRam000000000021d938 ^ 0x7676767676767676;
            _DAT_0021d940 = _DAT_0021d940 ^ 0x7676767676767676;
            uRam000000000021d948 = uRam000000000021d948 ^ 0x7676767676767676;
            DAT_0021d958 = DAT_0021d958 ^ 0x76;
            DAT_0021d959 = DAT_0021d959 ^ 0x76;
            DAT_0021d950 = DAT_0021d950 ^ 0x7676767676767676;
            DAT_0021f9c4 = '\x01';
            lVar3 = 0x42e31b9b931691d4;
          }
        }
        else {
          lVar3 = -0x7e466004dbd092fa;
          if (lVar4 != 0x7b12ba36dfe3331c) {
            if (lVar4 == 0x7fd4f688afe2e0bc) {
              DAT_0021f800 = 0;
              unaff_x23 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021d900);
              lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar3 = -0x68f444208277a4db;
              if (lVar4 != 0) {
                lVar3 = 0x18950f5f9acbc40c;
              }
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == 0x7f50ebff22c297c5) {
                lVar3 = lVar1;
              }
            }
          }
        }
      }
      if (lVar4 < -0x456589fe466012e2) break;
      if (lVar4 < -0x2941a20700173ffc) {
        if (lVar4 < -0x3827f0da3b71cf9b) {
          if (lVar4 == -0x456589fe466012e2) {
            lVar3 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x23,local_b8,unaff_x20);
            *param_4 = lVar3;
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x3107dc1fe97c932f;
            if (lVar4 != 0) {
              lVar3 = -0x6bccf2492602d436;
            }
          }
          else {
            lVar3 = 0x71a1b60c2d3020c3;
            if ((lVar4 != -0x3cf562eeeb01cc12) && (lVar3 = lVar4, lVar4 == -0x38d34c0beb76f4aa)) {
              lVar3 = -0x16f1e5fa5f3754a5;
            }
          }
        }
        else if (lVar4 == -0x3827f0da3b71cf9b) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f7ec);
          lVar3 = 0x14996c4a2edcd7b8;
          if (iVar2 != 0) {
            lVar3 = -0x23a331cb12cbc9d0;
          }
        }
        else if (lVar4 == -0x3107dc1fe97c932f) {
          lVar3 = 0x952495cae57ae98;
          if (*param_4 != 0) {
            lVar3 = 0x33953cc7b3e45706;
          }
        }
        else if (lVar4 == -0x2ad17e01cf2bd6a8) {
          lVar3 = 0x1908e88881fd4b8;
        }
      }
      else if (lVar4 < -0x16f1e5fa5f3754a5) {
        if (lVar4 == -0x2941a20700173ffc) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f804);
          lVar3 = 0x675e05399f995d8e;
          if (iVar2 != 0) {
            lVar3 = 0x5cda4d8cdcc78c0e;
          }
        }
        else {
          lVar3 = 0x42e31b9b931691d4;
          if ((lVar4 != -0x24a6c1aed81e45b8) && (lVar3 = lVar4, lVar4 == -0x23a331cb12cbc9d0)) {
            lVar3 = -0x3827f0da3b71cf9b;
          }
        }
      }
      else if (lVar4 < 0x1908e88881fd4b8) {
        if (lVar4 == -0x16f1e5fa5f3754a5) {
          *param_4 = 0;
          lVar3 = 0x38dcd2690fefd83c;
        }
        else if (lVar4 == -0xb9715b8979f7d33) {
          lVar3 = -0x7afb448e7eb8b5a7;
          if (unaff_x20 != 0) {
            lVar3 = -0x456589fe466012e2;
          }
        }
      }
      else if (lVar4 == 0x1908e88881fd4b8) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f800);
        lVar3 = 0x553ff0e638d8b04c;
        if (iVar2 != 0) {
          lVar3 = 0x83143bad6ce781d;
        }
      }
      else if (lVar4 == 0x83143bad6ce781d) {
        lVar3 = 0x1908e88881fd4b8;
      }
    }
    if (lVar4 < -0x72e7d823e5b593c3) break;
    if (lVar4 < -0x5e1fdf78776f0eed) {
      if (lVar4 == -0x72e7d823e5b593c3) {
        local_ac = 0x11;
LAB_00172be0:
        lVar3 = 0xa93d39c1f756203;
      }
      else if (lVar4 == -0x6bccf2492602d436) {
        local_8c = 0x17;
LAB_00172dcc:
        lVar3 = -0x7d9f7b6bb89f1cd3;
        local_a0 = unaff_x20;
      }
      else if (lVar4 == -0x68f444208277a4db) {
        lVar3 = -0x72e7d823e5b593c3;
        if (unaff_x23 != 0) {
          lVar3 = 0xc18376c52d7997c;
        }
      }
    }
    else if (lVar4 == -0x5e1fdf78776f0eed) {
      (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
      lVar3 = -0x7e466004dbd092fa;
    }
    else {
      lVar3 = 0x7fd4f688afe2e0bc;
      if ((lVar4 != -0x5c0b05f8eb36e4c6) && (lVar3 = lVar4, lVar4 == -0x52bf327ff4ce5fc6)) {
        local_a0 = 0;
        local_8c = 0x11;
        lVar3 = -0x7d9f7b6bb89f1cd3;
      }
    }
  }
  if (lVar4 < -0x7afb448e7eb8b5a7) {
    if (lVar4 == -0x7e466004dbd092fa) {
      lVar3 = -0x7b309891b0cee327;
      if (*param_1 != 0) {
        lVar3 = 0x1c039adc9c242f08;
      }
      goto LAB_00172098;
    }
    if (lVar4 != -0x7d9f7b6bb89f1cd3) {
      if (lVar4 == -0x7b309891b0cee327) {
        lVar3 = 0x38dcd2690fefd83c;
      }
      goto LAB_00172098;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_78 = local_a0;
    local_7c = local_8c;
  }
  else {
    if (lVar4 == -0x7afb448e7eb8b5a7) {
      local_7c = 0x21;
LAB_00172cbc:
      lVar3 = 0x5408d3bc6061f1d1;
      local_78 = unaff_x20;
      goto LAB_00172098;
    }
    if (lVar4 == -0x760fdc1afc98096c) {
      (**(code **)(*param_2 + 0xb8))(param_2,unaff_x23);
      local_c0 = local_98;
      lVar3 = 0x7b12ba36dfe3331c;
      if (local_98 != 0) {
        lVar3 = -0x5e1fdf78776f0eed;
      }
      goto LAB_00172098;
    }
    if (lVar4 != -0x75c6b439bc357e24) goto LAB_00172098;
    local_7c = 0x11;
    local_78 = 0;
  }
  lVar3 = 0x5408d3bc6061f1d1;
  goto LAB_00172098;
}

