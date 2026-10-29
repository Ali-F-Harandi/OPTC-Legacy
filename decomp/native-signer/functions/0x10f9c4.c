// rea decompile_all
// name: FUN_0010f9c4
// address: 0x10f9c4
// body: available
// range: 0x10f9c4-0x110a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x110a78 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0010f9c4(double param_1,long *param_2,int *param_3,double *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double unaff_d8;
  double unaff_d9;
  uint local_15c;
  long local_140;
  long local_138;
  long local_130;
  void *local_128;
  long local_120;
  long local_118;
  void *local_110;
  double local_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  long local_e8;
  long local_e0;
  void *local_d8;
  void *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x39af1ae683ec7d89;
  if (*(char *)(param_4 + 1) != '\0') {
    lVar1 = 0x5cda4d8cdcc78c0e;
  }
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_e8 = 0;
  piVar6 = param_3;
  lVar9 = -0x2941a20700173ffc;
LAB_0010faf8:
  lVar7 = lVar9;
  piVar10 = (int *)((ulong)piVar6 & 0xffffffff);
  lVar9 = lVar7;
  if (-0xbbaf2345e37dd61 < lVar7) {
    if (lVar7 < 0x38dcd2690fefd83c) {
      if (0xd1ed160c559152b < lVar7) {
        if (lVar7 < 0x18950f5f9acbc40c) {
          if (lVar7 == 0xd1ed160c559152c) {
            uVar5 = FUN_001a7430(param_2,param_3,local_138,local_b8,&local_d8,&local_c8);
            piVar6 = piVar10;
            lVar9 = -0x7afb448e7eb8b5a7;
            param_1 = extraout_d0_03;
            if ((uVar5 & 1) == 0) {
              lVar9 = -0xb9715b8979f7d33;
            }
          }
          else if (lVar7 == 0x14996c4a2edcd7b8) {
            free(local_128);
            local_d0 = (void *)0x0;
            piVar6 = piVar10;
            lVar9 = -0x24a6c1aed81e45b8;
            param_1 = extraout_d0_00;
          }
          else {
            piVar6 = piVar10;
            if (lVar7 == 0x15af5640957b8c3e) {
              param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_120);
LAB_00110330:
              piVar6 = piVar10;
              lVar9 = -0x689f306bde299b82;
            }
          }
        }
        else if (lVar7 == 0x18950f5f9acbc40c) {
          param_1 = (double)FUN_0017014c(param_3,param_2,param_6,&local_d0,&local_c0);
          piVar6 = piVar10;
          lVar9 = -0x38d34c0beb76f4aa;
          if (*param_3 != 0) {
            lVar9 = 0x51f9122c645eb44b;
          }
        }
        else {
          piVar6 = (int *)(ulong)local_f0;
          lVar9 = 0xa93d39c1f756203;
          if ((lVar7 != 0x1c039adc9c242f08) &&
             (piVar6 = piVar10, lVar9 = lVar7, lVar7 == 0x33953cc7b3e45706)) {
            lVar9 = 0x952495cae57ae98;
LAB_001109bc:
            *(undefined1 *)(param_4 + 1) = 1;
            piVar6 = piVar10;
          }
        }
        goto LAB_0010faf8;
      }
      if (lVar7 < 0x952495cae57ae98) {
        if (lVar7 == -0xbbaf2345e37dd60) {
          param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_118);
LAB_001108c4:
          piVar6 = piVar10;
          lVar9 = 0x6beeef139d94bec;
          goto LAB_0010faf8;
        }
        if (lVar7 != -0xb9715b8979f7d33) {
          piVar6 = piVar10;
          if (lVar7 == 0x6beeef139d94bec) {
            local_120 = local_e0;
            local_e8 = 0;
            lVar9 = 0x15af5640957b8c3e;
            if (local_e0 == 0 || param_2 == (long *)0x0) {
              lVar9 = -0x32f7034afe95e1a8;
            }
          }
          goto LAB_0010faf8;
        }
      }
      else {
        if (lVar7 == 0x952495cae57ae98) {
          *param_4 = unaff_d9;
          piVar6 = piVar10;
          lVar9 = 0x18950f5f9acbc40c;
          goto LAB_0010faf8;
        }
        if (lVar7 == 0xa93d39c1f756203) {
          param_1 = (double)FUN_002083ac(param_4 + 4,0x33);
          local_100 = (double)((ulong)param_4[0x47] | 1);
          local_f4 = (uint)piVar6;
          goto LAB_00110620;
        }
        piVar6 = piVar10;
        if (lVar7 != 0xbacab81abb31f89) goto LAB_0010faf8;
      }
LAB_00110174:
      local_ec = 0;
    }
    else {
      if (lVar7 < 0x5cda4d8cdcc78c0e) {
        if (lVar7 < 0x51f9122c645eb44b) {
          piVar6 = piVar10;
          lVar9 = -0x24a6c1aed81e45b8;
          if (lVar7 != 0x38dcd2690fefd83c) {
            if (lVar7 == 0x39af1ae683ec7d89) {
              local_b0 = 0;
              local_a8 = 0;
              FUN_001f3abc(0,&local_b0);
              unaff_d8 = (double)local_a8 / 1000000.0 + (double)local_b0 * 1000.0;
              param_1 = unaff_d8 - *param_4;
              lVar9 = -0x3827f0da3b71cf9b;
              if (param_1 <= 15000.0) {
                lVar9 = 0x71a1b60c2d3020c3;
              }
            }
            else {
              lVar9 = lVar7;
              if (lVar7 == 0x42e31b9b931691d4) goto LAB_00110174;
            }
          }
        }
        else if (lVar7 == 0x51f9122c645eb44b) {
          piVar6 = (int *)0x0;
          lVar9 = 0xa93d39c1f756203;
        }
        else if (lVar7 == 0x5408d3bc6061f1d1) {
          lVar9 = 0x635f31928f91aac5;
          if (*(char *)(param_4 + 1) != '\0') {
            lVar9 = 0x4dc5ede807dc3016;
          }
          lVar7 = 0x5aba0b6a880053f8;
          do {
            while( true ) {
              while( true ) {
                while (lVar8 = lVar7, lVar7 = lVar8, 0x236d10b4e1dc5a1d < lVar8) {
                  if (lVar8 < 0x5aba0b6a880053f8) {
                    if (lVar8 == 0x236d10b4e1dc5a1e) {
                      *param_4 = param_1;
                      lVar7 = -0x2f698491beb5022;
                    }
                    else if (lVar8 == 0x4dc5ede807dc3016) {
                      lVar7 = -0x2f698491beb5022;
                    }
                  }
                  else {
                    lVar7 = lVar9;
                    if ((lVar8 != 0x5aba0b6a880053f8) &&
                       (lVar7 = lVar8, lVar8 == 0x635f31928f91aac5)) {
                      local_90 = 0;
                      local_88 = 0;
                      FUN_001f3abc(0,&local_90);
                      param_1 = (double)local_88 / 1000000.0 + (double)local_90 * 1000.0;
                      lVar7 = -0x13f6cef773005e97;
                      if (param_1 - *param_4 <= 15000.0) {
                        lVar7 = -0x51d504ef14920bb2;
                      }
                    }
                  }
                }
                if (lVar8 != -0x51d504ef14920bb2) break;
                lVar7 = 0x236d10b4e1dc5a1e;
              }
              if (lVar8 != -0x13f6cef773005e97) break;
              *(undefined1 *)(param_4 + 1) = 1;
              lVar7 = 0x236d10b4e1dc5a1e;
            }
          } while (lVar8 != -0x2f698491beb5022);
          iVar4 = FUN_001e3668(local_d0,local_d8,local_c8);
          piVar6 = piVar10;
          lVar9 = 0x7b12ba36dfe3331c;
          param_1 = extraout_d0_02;
          if (iVar4 != 0) {
            lVar9 = -0x760fdc1afc98096c;
          }
        }
        else {
          piVar6 = piVar10;
          if (lVar7 == 0x553ff0e638d8b04c) {
            lVar9 = 0x675e05399f995d8e;
          }
        }
        goto LAB_0010faf8;
      }
      if (lVar7 < 0x71a1b60c2d3020c3) {
        piVar6 = piVar10;
        lVar9 = 0x7a9bcd40c6c39be5;
        if (lVar7 != 0x5cda4d8cdcc78c0e) {
          if (lVar7 == 0x5e1d9776c3346af9) goto LAB_00110174;
          lVar9 = lVar7;
          if (lVar7 == 0x675e05399f995d8e) {
            local_118 = local_e8;
            lVar9 = -0xbbaf2345e37dd60;
            if (local_e8 == 0 || param_2 == (long *)0x0) {
              lVar9 = -0x3cf562eeeb01cc12;
            }
          }
        }
        goto LAB_0010faf8;
      }
      piVar6 = piVar10;
      lVar9 = -0x23a331cb12cbc9d0;
      if (lVar7 == 0x71a1b60c2d3020c3) goto LAB_0010faf8;
      if (lVar7 == 0x7a9bcd40c6c39be5) {
        uVar5 = FUN_001a5ab0(param_2,param_3,param_4,param_5,&local_b8);
        lVar9 = -0x52bf327ff4ce5fc6;
        param_1 = extraout_d0_01;
        if ((uVar5 & 1) == 0) {
          lVar9 = 0x42e31b9b931691d4;
        }
        goto LAB_0010faf8;
      }
      lVar9 = lVar7;
      if (lVar7 != 0x7b12ba36dfe3331c) goto LAB_0010faf8;
      local_ec = 1;
    }
    piVar6 = piVar10;
    lVar9 = -0x7e466004dbd092fa;
    goto LAB_0010faf8;
  }
  if (lVar7 < -0x52bf327ff4ce5fc6) {
    if (-0x6bccf2492602d437 < lVar7) {
      if (lVar7 < -0x5e1fdf78776f0eed) {
        if (lVar7 == -0x6bccf2492602d436) {
          local_a0 = 0;
          local_98 = 0;
          FUN_001f3abc(0,&local_a0);
          unaff_d9 = (double)local_98 / 1000000.0 + (double)local_a0 * 1000.0;
          param_1 = unaff_d9 - *param_4;
          piVar6 = piVar10;
          lVar9 = 0x33953cc7b3e45706;
          if (param_1 <= 15000.0) {
            lVar9 = -0x3107dc1fe97c932f;
          }
          goto LAB_0010faf8;
        }
        if (lVar7 == -0x689f306bde299b82) {
          local_130 = local_b8;
          local_e0 = 0;
          piVar6 = piVar10;
          lVar9 = -0x61a21996f647e3aa;
          if (local_b8 == 0 || param_2 == (long *)0x0) {
            lVar9 = -0x554301dbdde0ca2c;
          }
          goto LAB_0010faf8;
        }
        piVar6 = piVar10;
        if (lVar7 != -0x61a21996f647e3aa) goto LAB_0010faf8;
        param_1 = (double)(**(code **)(*param_2 + 0xb8))(param_2,local_130);
      }
      else {
        if (lVar7 == -0x5e1fdf78776f0eed) {
          param_1 = (double)FUN_002083ac(param_4 + 4,7);
          local_ec = 1;
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          piVar6 = piVar10;
          lVar9 = -0x7e466004dbd092fa;
          goto LAB_0010faf8;
        }
        if (lVar7 == -0x5c0b05f8eb36e4c6) {
          free(local_110);
          local_d8 = (void *)0x0;
          piVar6 = piVar10;
          lVar9 = 0x675e05399f995d8e;
          param_1 = extraout_d0;
          goto LAB_0010faf8;
        }
        piVar6 = piVar10;
        if (lVar7 != -0x554301dbdde0ca2c) goto LAB_0010faf8;
      }
      piVar6 = piVar10;
      lVar9 = -0x29d5f6a10f86b08c;
      goto LAB_0010faf8;
    }
    if (lVar7 < -0x7afb448e7eb8b5a7) {
      if (lVar7 == -0x7e466004dbd092fa) {
        lVar9 = -0x7b309891b0cee327;
        if (*param_3 != 0) {
          lVar9 = 0x1c039adc9c242f08;
        }
        local_f0 = local_ec;
        piVar6 = piVar10;
      }
      else {
        piVar6 = piVar10;
        lVar9 = -0x5e1fdf78776f0eed;
        if ((lVar7 != -0x7d9f7b6bb89f1cd3) && (lVar9 = lVar7, lVar7 == -0x7b309891b0cee327)) {
          local_100 = param_4[0x47];
          local_f4 = local_f0;
LAB_00110620:
          piVar6 = piVar10;
          lVar9 = -0x16f1e5fa5f3754a5;
        }
      }
      goto LAB_0010faf8;
    }
    if (lVar7 == -0x7afb448e7eb8b5a7) {
      bVar3 = *(char *)(param_4 + 1) == '\0';
      lVar9 = -0x6bccf2492602d436;
      lVar7 = -0x456589fe466012e2;
    }
    else {
      piVar6 = piVar10;
      lVar9 = -0x5e1fdf78776f0eed;
      if ((lVar7 == -0x760fdc1afc98096c) || (lVar9 = lVar7, lVar7 != -0x75c6b439bc357e24))
      goto LAB_0010faf8;
      param_1 = (double)FUN_00178270(param_3,param_2,local_140,&local_e8);
      local_138 = local_e8;
      bVar3 = local_e8 == 0;
      lVar9 = 0x5e1d9776c3346af9;
      lVar7 = 0xd1ed160c559152c;
    }
  }
  else {
    if (-0x3107dc1fe97c9330 < lVar7) {
      if (lVar7 < -0x24a6c1aed81e45b8) {
        piVar6 = piVar10;
        lVar9 = 0x952495cae57ae98;
        if (((lVar7 != -0x3107dc1fe97c932f) && (lVar9 = lVar1, lVar7 != -0x2941a20700173ffc)) &&
           (lVar9 = lVar7, lVar7 == -0x29d5f6a10f86b08c)) {
          if (*(long *)(lVar2 + 0x28) == local_80) {
            return local_15c & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        if (lVar7 == -0x24a6c1aed81e45b8) {
          local_110 = local_d8;
          bVar3 = local_d8 == (void *)0x0;
          lVar9 = 0x553ff0e638d8b04c;
          lVar7 = -0x5c0b05f8eb36e4c6;
          goto LAB_0010faf0;
        }
        if (lVar7 == -0x23a331cb12cbc9d0) {
          *param_4 = unaff_d8;
          piVar6 = piVar10;
          lVar9 = 0x7a9bcd40c6c39be5;
        }
        else {
          piVar6 = piVar10;
          if (lVar7 == -0x16f1e5fa5f3754a5) {
            local_128 = local_d0;
            param_4[0x47] = (double)((ulong)local_100 | 0x8000000000080);
            lVar9 = 0x38dcd2690fefd83c;
            if (local_d0 != (void *)0x0) {
              lVar9 = 0x14996c4a2edcd7b8;
            }
            local_15c = local_f4;
          }
        }
      }
      goto LAB_0010faf8;
    }
    if (lVar7 < -0x38d34c0beb76f4aa) {
      if (lVar7 == -0x52bf327ff4ce5fc6) {
        param_1 = (double)FUN_001776fc(param_3,param_2,param_4[2],&local_e0);
        local_140 = local_e0;
        bVar3 = local_e0 == 0;
        lVar9 = 0xbacab81abb31f89;
        lVar7 = -0x75c6b439bc357e24;
        goto LAB_0010faf0;
      }
      piVar6 = piVar10;
      lVar9 = 0x18950f5f9acbc40c;
      if ((lVar7 != -0x456589fe466012e2) && (lVar9 = lVar7, lVar7 == -0x3cf562eeeb01cc12))
      goto LAB_001108c4;
      goto LAB_0010faf8;
    }
    if (lVar7 != -0x38d34c0beb76f4aa) {
      if (lVar7 == -0x3827f0da3b71cf9b) {
        lVar9 = -0x23a331cb12cbc9d0;
        goto LAB_001109bc;
      }
      piVar6 = piVar10;
      if (lVar7 == -0x32f7034afe95e1a8) goto LAB_00110330;
      goto LAB_0010faf8;
    }
    bVar3 = local_c8 == local_c0;
    lVar7 = -0x7d9f7b6bb89f1cd3;
    lVar9 = 0x5408d3bc6061f1d1;
  }
LAB_0010faf0:
  piVar6 = piVar10;
  if (!bVar3) {
    lVar9 = lVar7;
  }
  goto LAB_0010faf8;
}

