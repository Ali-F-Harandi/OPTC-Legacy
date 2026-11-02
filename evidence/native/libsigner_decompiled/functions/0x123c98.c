// rea decompile_all
// name: FUN_00123c98
// address: 0x123c98
// body: available
// range: 0x123c98-0x124d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x124d60 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00123c98(long param_1,ulong param_2,short *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x22;
  int unaff_w25;
  ulong local_8b8;
  ulong local_8b0;
  ulong local_8a8;
  ulong *local_8a0;
  ulong local_890;
  ulong local_880;
  undefined1 auStack_874 [2052];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  memset(auStack_874,0,0x801);
  lVar2 = -0x387c63e2c119ecd0;
  if (param_2 != 0) {
    lVar2 = -0x17d49f96ba8f222c;
  }
  lVar1 = 0x52c814419a3e3185;
  uVar7 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar5 = lVar1, lVar1 = lVar5, lVar5 < -0x3e1b758c85bc171) {
              if (lVar5 < -0x428a0360f09cf896) {
                if (lVar5 < -0x688f0c6a303d33c9) {
                  if (lVar5 < -0x78b1e6d77f15432a) {
                    if (lVar5 == -0x7fd1a15b5060645a) {
                      uVar7 = 0;
                      lVar1 = -0x187ef1717a6bec1a;
                    }
                    else if (lVar5 == -0x7cc507180b3b4de2) {
                      lVar1 = 0x3d9a23bfc527f297;
                      if (0 < unaff_w25) {
                        lVar1 = -0x1a8475fc33e49a53;
                      }
                    }
                    else if (lVar5 == -0x7af53ec599aae46c) {
                      lVar1 = -0x3e1b758c85bc171;
                      if (7 < unaff_w25) {
                        lVar1 = -0x2f47a56bc1eb9a76;
                      }
                    }
                  }
                  else if (lVar5 < -0x6eedfdb6a6123349) {
                    lVar1 = 0x4226403d663a6810;
                    if ((lVar5 != -0x78b1e6d77f15432a) &&
                       (lVar1 = lVar5, lVar5 == -0x73e8f5c018ea657d)) {
                      lVar1 = 0x4226403d663a6810;
                    }
                  }
                  else if (lVar5 == -0x6eedfdb6a6123349) {
                    local_8a0 = (ulong *)(param_1 + local_880 * 0x100 + 0xf8);
                    lVar1 = 0x34d64510914e178a;
                    if (*local_8a0 != 0) {
                      lVar1 = -0x7fd1a15b5060645a;
                    }
                  }
                  else if (lVar5 == -0x6d88891aa2376f3c) {
                    lVar1 = 0x4226403d663a6810;
                  }
                }
                else if (lVar5 < -0x51299b355fbf8ed8) {
                  if (lVar5 == -0x688f0c6a303d33c9) {
                    lVar5 = FUN_001e16c4(auStack_874);
                    lVar1 = -0x51299b355fbf8ed8;
                    if (lVar5 != 0) {
                      lVar1 = -0x1aae3d37372759c8;
                    }
                  }
                  else if (lVar5 == -0x5f8afb0e1bcf47ac) {
                    lVar1 = 0x9db9300eb2a7174;
                  }
                  else if (lVar5 == -0x584a77e86318ca40) {
                    lVar1 = 0x2d2505df37d70c06;
                  }
                }
                else if (lVar5 < -0x4bcf27f8b1692c9f) {
                  lVar1 = 0x2d2505df37d70c06;
                  if ((lVar5 != -0x51299b355fbf8ed8) &&
                     (lVar1 = lVar5, lVar5 == -0x4fb630b9d3e5e263)) {
                    uVar6 = FUN_00200de0(auStack_874,unaff_x22);
                    lVar1 = 0x10b777a2e53bf464;
                    if ((uVar6 & 1) == 0) {
                      lVar1 = -0x584a77e86318ca40;
                    }
                  }
                }
                else {
                  lVar1 = 0x4226403d663a6810;
                  if ((lVar5 != -0x4bcf27f8b1692c9f) &&
                     (lVar1 = lVar5, lVar5 == -0x49aaab148acb89d3)) {
                    uVar6 = FUN_002006ac(auStack_874,unaff_x22);
                    lVar1 = -0x4bcf27f8b1692c9f;
                    if ((uVar6 & 1) == 0) {
                      lVar1 = 0x6972f83ab6de3be2;
                    }
                  }
                }
              }
              else if (lVar5 < -0x250717f80b2e0d24) {
                if (lVar5 < -0x3112e6c842caa298) {
                  lVar1 = 0x2d2505df37d70c06;
                  if (((lVar5 != -0x428a0360f09cf896) &&
                      (lVar1 = 0x659bc0912b2dc829, lVar5 != -0x387c63e2c119ecd0)) &&
                     (lVar1 = lVar5, lVar5 == -0x345385a5acf579a7)) {
                    lVar1 = -0x7cc507180b3b4de2;
                    if (1 < unaff_w25) {
                      lVar1 = 0x53b3370187e80d89;
                    }
                  }
                }
                else if (lVar5 < -0x29c67e336c47e1dc) {
                  lVar1 = 0x2d2505df37d70c06;
                  if ((lVar5 != -0x3112e6c842caa298) &&
                     (lVar1 = lVar5, lVar5 == -0x2f47a56bc1eb9a76)) {
                    lVar1 = -0x688f0c6a303d33c9;
                    if (unaff_w25 != 8) {
                      lVar1 = 0x28f3b4fe78a29dfd;
                    }
                  }
                }
                else if (lVar5 == -0x29c67e336c47e1dc) {
                  iVar4 = FUN_001e2ed0(auStack_874,unaff_x22);
                  lVar1 = -0x78b1e6d77f15432a;
                  if (iVar4 != 0) {
                    lVar1 = 0xb3b33d71d8d6f20;
                  }
                }
                else if (lVar5 == -0x29b395e2de609121) {
                  iVar4 = FUN_001e17a8(auStack_874,unaff_x22);
                  lVar1 = 0x458dd5089ea47cbf;
                  if (iVar4 != 0) {
                    lVar1 = -0x3112e6c842caa298;
                  }
                }
              }
              else if (lVar5 < -0x1a8475fc33e49a53) {
                if (lVar5 < -0x1fb42f4afc2a4561) {
                  if (lVar5 == -0x250717f80b2e0d24) {
                    uVar6 = FUN_00200830(auStack_874,unaff_x22);
                    lVar1 = -0x1fb42f4afc2a4561;
                    if ((uVar6 & 1) == 0) {
                      lVar1 = 0x127621f9d64210bf;
                    }
                  }
                  else if (lVar5 == -0x23d4600e691b72ff) {
                    local_8a8 = local_880 + 1;
                    lVar1 = 0x1c1c310a228ac2a9;
                    if (local_8a8 != param_2) {
                      lVar1 = 0x2b4cb855a4e2ca81;
                    }
                  }
                }
                else {
                  lVar1 = 0x4226403d663a6810;
                  if ((lVar5 != -0x1fb42f4afc2a4561) &&
                     (lVar1 = lVar5, lVar5 == -0x1aae3d37372759c8)) {
                    lVar1 = 0x4226403d663a6810;
                  }
                }
              }
              else if (lVar5 < -0x187ef1717a6bec1a) {
                if (lVar5 == -0x1a8475fc33e49a53) {
                  uVar6 = FUN_00200ad4(auStack_874,unaff_x22);
                  lVar1 = 0x6948821d17121736;
                  if ((uVar6 & 1) == 0) {
                    lVar1 = -0x428a0360f09cf896;
                  }
                }
                else if (lVar5 == -0x18b4a505155ad4de) {
                  lVar1 = -0x23d4600e691b72ff;
                }
              }
              else if (lVar5 == -0x187ef1717a6bec1a) {
                lVar1 = param_1 + local_880 * 0x100;
                unaff_w25 = *(int *)(lVar1 + uVar7 * 4 + 0xa8);
                unaff_x22 = *(long *)(lVar1 + uVar7 * 8 + 8);
                lVar1 = -0x5f8afb0e1bcf47ac;
                local_8b8 = uVar7;
                if (unaff_w25 != 8 && unaff_x22 == 0) {
                  lVar1 = 0x65731e0d60addaaa;
                }
              }
              else if (lVar5 == -0x17d49f96ba8f222c) {
                local_890 = 0;
                lVar1 = 0x722c2ae06bb40e9c;
              }
            }
            if (0x42d35ffe0640f9e6 < lVar5) break;
            if (lVar5 < 0x1c1c310a228ac2a9) {
              if (lVar5 < 0x9db9300eb2a7174) {
                if (lVar5 == -0x3e1b758c85bc171) {
                  uVar6 = FUN_002009b8(auStack_874,unaff_x22);
                  lVar1 = 0x63bbcc091317fb15;
                  if ((uVar6 & 1) == 0) {
                    lVar1 = -0x3d74c5be586ed41;
                  }
                }
                else {
                  lVar1 = 0x2d2505df37d70c06;
                  if ((lVar5 != -0x3d74c5be586ed41) && (lVar1 = lVar5, lVar5 == 0x3bb1d6c9375a841))
                  {
                    lVar1 = 0x6b1c8496500da436;
                    if (5 < unaff_w25) {
                      lVar1 = 0x5f09e106069dc7a6;
                    }
                  }
                }
              }
              else if (lVar5 < 0x10b777a2e53bf464) {
                if (lVar5 == 0x9db9300eb2a7174) {
                  lVar1 = -0x345385a5acf579a7;
                  if (3 < unaff_w25) {
                    lVar1 = 0x3bb1d6c9375a841;
                  }
                }
                else if (lVar5 == 0xb3b33d71d8d6f20) {
                  lVar1 = 0x2d2505df37d70c06;
                }
              }
              else {
                lVar1 = 0x4226403d663a6810;
                if ((lVar5 != 0x10b777a2e53bf464) && (lVar1 = lVar5, lVar5 == 0x127621f9d64210bf)) {
                  lVar1 = 0x2d2505df37d70c06;
                }
              }
            }
            else if (lVar5 < 0x2d2505df37d70c06) {
              if (lVar5 < 0x2a8e14484c7eb6ff) {
                lVar1 = 0x659bc0912b2dc829;
                if ((lVar5 != 0x1c1c310a228ac2a9) && (lVar1 = lVar5, lVar5 == 0x28f3b4fe78a29dfd)) {
                  lVar1 = 0x4226403d663a6810;
                }
              }
              else {
                lVar1 = 0x5d226faf8da10c63;
                if ((lVar5 != 0x2a8e14484c7eb6ff) && (lVar1 = lVar5, lVar5 == 0x2b4cb855a4e2ca81)) {
                  local_890 = local_8a8;
                  lVar1 = 0x722c2ae06bb40e9c;
                }
              }
            }
            else if (lVar5 < 0x3d9a23bfc527f297) {
              if (lVar5 == 0x2d2505df37d70c06) {
                local_8b0 = local_8b8 + 1;
                lVar1 = 0x791c5ebca78797be;
                if (*local_8a0 <= local_8b0) {
                  lVar1 = 0x2a8e14484c7eb6ff;
                }
              }
              else if (lVar5 == 0x34d64510914e178a) {
                lVar1 = 0x5d226faf8da10c63;
              }
            }
            else if (lVar5 == 0x3d9a23bfc527f297) {
              lVar1 = -0x29b395e2de609121;
              if (unaff_w25 != 0) {
                lVar1 = -0x73e8f5c018ea657d;
              }
            }
            else if (lVar5 == 0x4226403d663a6810) {
              *param_3 = *param_3 + 1;
              lVar1 = 0x2d2505df37d70c06;
            }
          }
          if (0x63bbcc091317fb14 < lVar5) break;
          if (lVar5 < 0x52c814419a3e3185) {
            lVar1 = 0x2d2505df37d70c06;
            if (((lVar5 != 0x42d35ffe0640f9e7) &&
                (lVar1 = 0x4226403d663a6810, lVar5 != 0x458dd5089ea47cbf)) &&
               (lVar1 = lVar5, lVar5 == 0x475137ed6151bf62)) {
              uVar6 = FUN_00200c58(auStack_874,unaff_x22);
              lVar1 = -0x6d88891aa2376f3c;
              if ((uVar6 & 1) == 0) {
                lVar1 = 0x42d35ffe0640f9e7;
              }
            }
          }
          else if (lVar5 < 0x5d226faf8da10c63) {
            lVar1 = lVar2;
            if ((lVar5 != 0x52c814419a3e3185) && (lVar1 = lVar5, lVar5 == 0x53b3370187e80d89)) {
              lVar1 = 0x475137ed6151bf62;
              if (2 < unaff_w25) {
                lVar1 = -0x4fb630b9d3e5e263;
              }
            }
          }
          else if (lVar5 == 0x5d226faf8da10c63) {
            FUN_001e38f8(auStack_874,0,0x801);
            lVar1 = -0x23d4600e691b72ff;
          }
          else if (lVar5 == 0x5f09e106069dc7a6) {
            lVar1 = -0x250717f80b2e0d24;
            if (6 < unaff_w25) {
              lVar1 = -0x7af53ec599aae46c;
            }
          }
        }
        if (lVar5 < 0x6972f83ab6de3be2) break;
        if (lVar5 < 0x722c2ae06bb40e9c) {
          lVar1 = 0x2d2505df37d70c06;
          if ((lVar5 != 0x6972f83ab6de3be2) && (lVar1 = lVar5, lVar5 == 0x6b1c8496500da436)) {
            lVar1 = -0x29c67e336c47e1dc;
            if (4 < unaff_w25) {
              lVar1 = -0x49aaab148acb89d3;
            }
          }
        }
        else if (lVar5 == 0x722c2ae06bb40e9c) {
          local_880 = local_890;
          uVar6 = FUN_001b1710(*(undefined8 *)(param_1 + local_890 * 0x100),0x801,auStack_874);
          lVar1 = -0x6eedfdb6a6123349;
          if ((uVar6 & 1) == 0) {
            lVar1 = -0x18b4a505155ad4de;
          }
        }
        else if (lVar5 == 0x791c5ebca78797be) {
          lVar1 = -0x187ef1717a6bec1a;
          uVar7 = local_8b0;
        }
      }
      if (0x659bc0912b2dc828 < lVar5) break;
      lVar1 = 0x4226403d663a6810;
      if ((lVar5 != 0x63bbcc091317fb15) && (lVar1 = lVar5, lVar5 == 0x65731e0d60addaaa)) {
        lVar1 = 0x2d2505df37d70c06;
      }
    }
    lVar1 = 0x4226403d663a6810;
  } while ((lVar5 == 0x6948821d17121736) || (lVar1 = lVar5, lVar5 != 0x659bc0912b2dc829));
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

