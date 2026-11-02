// rea decompile_all
// name: FUN_0011d148
// address: 0x11d148
// body: available
// range: 0x11d148-0x11daeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11dae8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011d148(int *param_1,long *param_2,undefined8 param_3,int param_4,char *param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x28;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_0018fe0c();
  lVar1 = -0x38b0832f7743f2b8;
  if (param_4 < 0x1c) {
    lVar1 = -0x56bb61885886ae54;
  }
  lVar2 = -0x22526e95d736601f;
  if (*param_1 != 0) {
    lVar2 = 0x2352f2d6b10786ab;
  }
  lVar4 = -0x73716f9563fa402;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar5 = lVar4, lVar4 = lVar5, lVar5 < 0x41a203875b031c3) {
            if (lVar5 < -0x220211bfb882d8f5) {
              if (lVar5 < -0x56bb61885886ae54) {
                if (lVar5 == -0x7f0dc9b3a3765301) {
                  (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
                  lVar4 = 0x5e955a53164f3d9f;
                }
                else {
                  lVar4 = 0x5c75d317cff2739f;
                  if ((lVar5 != -0x5bdd334f52bdd63b) &&
                     (lVar4 = lVar5, lVar5 == -0x59acc9f9846a69a9)) {
                    lVar4 = 0x205d1929c40a5522;
                  }
                }
              }
              else if (lVar5 < -0x2b0b93cebcb1988a) {
                if (lVar5 == -0x56bb61885886ae54) {
                  *param_5 = '\0';
                  FUN_0019714c(param_1,param_2,local_78,local_70,0x40,&local_80);
                  lVar4 = -0x220211bfb882d8f5;
                  if (*param_1 != 0) {
                    lVar4 = 0xdc8188db88ec11b;
                  }
                }
                else if (lVar5 == -0x38b0832f7743f2b8) {
                  FUN_0019714c(param_1,param_2,local_78,local_70,0x8000000,&local_80);
                  lVar4 = -0xf8d0ba03b2e0b85;
                  if (*param_1 != 0) {
                    lVar4 = 0x3c2595d6266c5998;
                  }
                }
              }
              else if (lVar5 == -0x2b0b93cebcb1988a) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
                lVar4 = 0x67be2c6e2af44868;
              }
              else if (lVar5 == -0x22526e95d736601f) {
                FUN_001909bc(param_1,param_2,param_3,&local_78);
                lVar4 = 0x5127e420c2beb41f;
                if (*param_1 != 0) {
                  lVar4 = 0xf8f9546f45fbb47;
                }
              }
            }
            else if (lVar5 < -0xd437930309f4927) {
              if (lVar5 < -0x1600a62692a3eebb) {
                if (lVar5 == -0x220211bfb882d8f5) {
                  FUN_00194f30(param_1,param_2,local_80,param_6);
                  lVar4 = 0x7ededfa0c0eeb47a;
                }
                else if (lVar5 == -0x1d6a050721dd3e21) {
                  FUN_0019fbc4(param_1,param_2,unaff_x28,param_6);
                  lVar4 = 0x7ededfa0c0eeb47a;
                }
              }
              else if (lVar5 == -0x1600a62692a3eebb) {
                lVar4 = -0x1d6a050721dd3e21;
                unaff_x28 = local_88;
                if (*param_5 != '\0') {
                  lVar4 = 0x41a203875b031c3;
                }
              }
              else if (lVar5 == -0xf8d0ba03b2e0b85) {
                FUN_00195a84(param_1,param_2,local_80,&local_88);
                lVar4 = 0x5f1d0a7f6212d984;
                if (*param_1 != 0) {
                  lVar4 = 0x719dbab015af25c6;
                }
              }
            }
            else if (lVar5 < -0x439fbf751afe062) {
              if (lVar5 == -0xd437930309f4927) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
                lVar4 = 0x205d1929c40a5522;
              }
              else if (lVar5 == -0x73716f9563fa402) {
                lVar4 = lVar2;
              }
            }
            else {
              lVar4 = 0x67be2c6e2af44868;
              if ((lVar5 != -0x439fbf751afe062) && (lVar4 = lVar5, lVar5 == 0x2ea5ec9aa4903e5)) {
                lVar4 = 0x7ededfa0c0eeb47a;
              }
            }
          }
          if (lVar5 < 0x5127e420c2beb41f) break;
          if (lVar5 < 0x5f1d0a7f6212d984) {
            lVar4 = lVar1;
            if (lVar5 != 0x5127e420c2beb41f) {
              if (lVar5 == 0x5c75d317cff2739f) {
                local_b0 = local_80;
                local_88 = 0;
                lVar4 = -0x7f0dc9b3a3765301;
                if (local_80 == 0 || param_2 == (long *)0x0) {
                  lVar4 = 0x242c94bb96617abb;
                }
              }
              else {
                lVar4 = lVar5;
                if (lVar5 == 0x5e955a53164f3d9f) {
                  local_b8 = local_78;
                  local_80 = 0;
                  lVar4 = -0x2b0b93cebcb1988a;
                  if (local_78 == 0 || param_2 == (long *)0x0) {
                    lVar4 = -0x439fbf751afe062;
                  }
                }
              }
            }
          }
          else if (lVar5 < 0x719dbab015af25c6) {
            if (lVar5 == 0x5f1d0a7f6212d984) {
              FUN_001a0748(param_1,param_2,local_88,param_5);
              lVar4 = -0x1600a62692a3eebb;
              if (*param_1 != 0) {
                lVar4 = 0x2ea5ec9aa4903e5;
              }
            }
            else if (lVar5 == 0x67be2c6e2af44868) {
              local_c0 = local_70;
              local_78 = 0;
              lVar4 = -0xd437930309f4927;
              if (local_70 == 0 || param_2 == (long *)0x0) {
                lVar4 = -0x59acc9f9846a69a9;
              }
            }
          }
          else {
            lVar4 = 0x7ededfa0c0eeb47a;
            if ((lVar5 != 0x719dbab015af25c6) && (lVar4 = lVar5, lVar5 == 0x7ededfa0c0eeb47a)) {
              local_a8 = local_88;
              lVar4 = 0x3132af798d39a4e3;
              if (local_88 == 0 || param_2 == (long *)0x0) {
                lVar4 = -0x5bdd334f52bdd63b;
              }
            }
          }
        }
        if (lVar5 < 0x2352f2d6b10786ab) break;
        if (lVar5 < 0x3132af798d39a4e3) {
          lVar4 = 0x7ededfa0c0eeb47a;
          if ((lVar5 != 0x2352f2d6b10786ab) && (lVar4 = lVar5, lVar5 == 0x242c94bb96617abb)) {
            lVar4 = 0x5e955a53164f3d9f;
          }
        }
        else if (lVar5 == 0x3132af798d39a4e3) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
          lVar4 = 0x5c75d317cff2739f;
        }
        else if (lVar5 == 0x3c2595d6266c5998) {
          lVar4 = 0x7ededfa0c0eeb47a;
        }
      }
      if (0xf8f9546f45fbb46 < lVar5) break;
      if (lVar5 == 0x41a203875b031c3) {
        FUN_0019f05c(param_1,param_2,unaff_x28,param_6);
        lVar4 = 0x7ededfa0c0eeb47a;
      }
      else if (lVar5 == 0xdc8188db88ec11b) {
        lVar4 = 0x7ededfa0c0eeb47a;
      }
    }
    lVar4 = 0x7ededfa0c0eeb47a;
  } while ((lVar5 == 0xf8f9546f45fbb47) || (lVar4 = lVar5, lVar5 != 0x205d1929c40a5522));
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

