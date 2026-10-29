// rea decompile_all
// name: FUN_00119af0
// address: 0x119af0
// body: available
// range: 0x119af0-0x11a8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11a8fc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119af0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x21;
  long *plVar7;
  long *unaff_x28;
  long local_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  void *local_a0;
  void *local_98;
  long *local_90;
  long local_88;
  
  local_c0 = tpidr_el0;
  local_88 = *(long *)(local_c0 + 0x28);
  local_b8 = param_2 + 0x20;
  plVar2 = &local_c0;
  lVar1 = -0x86c811434081476;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while (lVar5 = lVar1, lVar1 = lVar5, lVar5 < -0x1ab7d7cee959a11d) {
                if (lVar5 < -0x4b9986a7dfdad2f0) {
                  if (lVar5 < -0x5e7eec544003c7b6) {
                    if (lVar5 < -0x7684a385383e45a2) {
                      if (lVar5 == -0x795f117d2acf5896) {
                        iVar4 = FUN_00212730(0,1,&DAT_0021f180);
                        lVar1 = 0x44deba006d2d4801;
                        if (iVar4 != 0) {
                          lVar1 = 0x11c6687713f96334;
                        }
                      }
                      else if (lVar5 == -0x78ade21811686803) {
                        lVar1 = 0x2745f1d09246953f;
                      }
                    }
                    else {
                      lVar1 = -0x58d4a1ff99370983;
                      if (lVar5 != -0x7684a385383e45a2) {
                        if (lVar5 == -0x75dbffb39709e92e) {
                          local_98 = (void *)*unaff_x21;
                          lVar1 = -0x249f7fc26b918e59;
                          if ((void *)*unaff_x21 != (void *)0x0) {
                            lVar1 = 0xb342b2cda2804e9;
                          }
                        }
                        else {
                          lVar1 = lVar5;
                          if (lVar5 == -0x6e8bfbccbadfbcb4) {
                            iVar4 = FUN_001e2ed0(local_b0,*local_90);
                            lVar1 = -0x3d02ae5e9a21a1e4;
                            if (iVar4 != 0) {
                              lVar1 = 0x343897bece408525;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (lVar5 < -0x5a02aba064e491c4) {
                    lVar1 = 0x325182182b17a69e;
                    if ((lVar5 != -0x5e7eec544003c7b6) &&
                       (lVar1 = lVar5, lVar5 == -0x5dc8661fe70bb191)) {
                      lVar1 = -0x75dbffb39709e92e;
                    }
                  }
                  else {
                    lVar1 = -0x38a37251ff50f43c;
                    if (lVar5 != -0x5a02aba064e491c4) {
                      if (lVar5 == -0x58d4a1ff99370983) {
                        DAT_0021f180 = 0;
                        lVar1 = -0x123a1d4e94934922;
                      }
                      else {
                        lVar1 = lVar5;
                        if (lVar5 == -0x4cdcd6fb7877a002) {
                          free(local_a0);
                          lVar1 = 0x325182182b17a69e;
                        }
                      }
                    }
                  }
                }
                else if (lVar5 < -0x3d02ae5e9a21a1e4) {
                  if (lVar5 < -0x4358e346d27e0c4b) {
                    if (lVar5 == -0x4b9986a7dfdad2f0) {
                      DAT_0021c020 = DAT_0021c020 ^ 0x69;
                      DAT_0021c022 = DAT_0021c022 ^ 0x69;
                      DAT_0021c021 = DAT_0021c021 ^ 0x69;
                      DAT_0021c018 = DAT_0021c018 ^ 0x6969696969696969;
                      DAT_0021f1ae = '\x01';
                      lVar1 = 0x2745f1d09246953f;
                    }
                    else if (lVar5 == -0x4a8e958f50cb2936) {
                      DAT_0021f17c = 0;
                      unaff_x28 = plVar2 + -2;
                      local_a8 = plVar2 + -0xe;
                      plVar7 = plVar2 + -0x1a;
                      unaff_x21 = plVar2 + -0x1c;
                      plVar6 = plVar2 + -0x1e;
                      *(undefined4 *)(plVar2 + -2) = 0;
                      plVar2[-0x1c] = 0;
                      plVar2[-0x1e] = 0;
                      plVar2[-0xd] = 0;
                      plVar2[-0xe] = 0;
                      plVar2[-0xb] = 0;
                      plVar2[-0xc] = 0;
                      plVar2[-9] = 0;
                      plVar2[-10] = 0;
                      plVar2[-7] = 0;
                      plVar2[-8] = 0;
                      plVar2[-5] = 0;
                      plVar2[-6] = 0;
                      *(undefined8 *)((long)plVar2 + -0x1c) = 0;
                      *(undefined8 *)((long)plVar2 + -0x24) = 0;
                      plVar2[-0x19] = 0;
                      plVar2[-0x1a] = 0;
                      plVar2[-0x17] = 0;
                      plVar2[-0x18] = 0;
                      plVar2[-0x15] = 0;
                      plVar2[-0x16] = 0;
                      plVar2[-0x13] = 0;
                      plVar2[-0x14] = 0;
                      plVar2[-0x11] = 0;
                      plVar2[-0x12] = 0;
                      *(undefined8 *)((long)plVar2 + -0x7c) = 0;
                      *(undefined8 *)((long)plVar2 + -0x84) = 0;
                      local_90 = plVar6;
                      FUN_001b0700(&DAT_0021bfe0);
                      FUN_001b0700(&DAT_0021c000,plVar7);
                      iVar4 = *(int *)(param_2 + 0xc);
                      local_b0 = plVar7;
                      iVar3 = FUN_001e1068(plVar7);
                      plVar2 = plVar6;
                      lVar1 = 0x4d201dca34f9057d;
                      if (iVar4 != iVar3) {
                        lVar1 = -0x5a02aba064e491c4;
                      }
                    }
                  }
                  else if (lVar5 == -0x4358e346d27e0c4b) {
                    lVar1 = -0x78ade21811686803;
                    if (DAT_0021f1ae == '\0') {
                      lVar1 = -0x4b9986a7dfdad2f0;
                    }
                  }
                  else if (lVar5 == -0x416128ec12d809db) {
                    local_a0 = (void *)*local_90;
                    lVar1 = -0x5e7eec544003c7b6;
                    if ((void *)*local_90 != (void *)0x0) {
                      lVar1 = -0x4cdcd6fb7877a002;
                    }
                  }
                  else if (lVar5 == -0x3efc2da3496f0afd) {
                    lVar1 = 0x373719e29df8005e;
                  }
                }
                else if (lVar5 < -0x360208aa015ed5da) {
                  lVar1 = -0x75dbffb39709e92e;
                  if (lVar5 != -0x3d02ae5e9a21a1e4) {
                    if (lVar5 == -0x39a3d296cdd14fd1) {
                      DAT_0021c030 = DAT_0021c030 ^ 0x39;
                      DAT_0021c031 = DAT_0021c031 ^ 0x39;
                      DAT_0021c028 = DAT_0021c028 ^ 0x3939393939393939;
                      DAT_0021f1af = '\x01';
                      lVar1 = 0x46c1bbde0911dd5e;
                    }
                    else {
                      lVar1 = lVar5;
                      if (lVar5 == -0x38a37251ff50f43c) {
                        FUN_002083ac(local_b8,0x3c);
                        *(ulong *)(param_2 + 0x238) = *(ulong *)(param_2 + 0x238) | 1;
                        lVar1 = -0x75dbffb39709e92e;
                      }
                    }
                  }
                }
                else if (lVar5 == -0x360208aa015ed5da) {
                  DAT_0021bff8 = DAT_0021bff8 ^ 0xea;
                  _DAT_0021bfe0 = _DAT_0021bfe0 ^ 0xeaeaeaeaeaeaeaea;
                  uRam000000000021bfe8 = uRam000000000021bfe8 ^ 0xeaeaeaeaeaeaeaea;
                  DAT_0021bff0 = DAT_0021bff0 ^ 0xeaeaeaeaeaeaeaea;
                  DAT_0021f1ac = '\x01';
                  lVar1 = -0x4a8e958f50cb2936;
                }
                else {
                  lVar1 = -0x1ab7d7cee959a11d;
                  if ((lVar5 != -0x32ead494ef7d212b) &&
                     (lVar1 = lVar5, lVar5 == -0x249f7fc26b918e59)) {
                    lVar1 = -0x416128ec12d809db;
                  }
                }
              }
              if (0x325182182b17a69d < lVar5) break;
              if (lVar5 < 0xb342b2cda2804e9) {
                if (lVar5 < -0x86c811434081476) {
                  if (lVar5 == -0x1ab7d7cee959a11d) {
                    iVar4 = FUN_00212730(0,1,&DAT_0021f188);
                    lVar1 = -0x5bc40c228c222b9;
                    if (iVar4 != 0) {
                      lVar1 = -0x32ead494ef7d212b;
                    }
                  }
                  else if (lVar5 == -0x123a1d4e94934922) {
                    iVar4 = FUN_00212730(0,1,&DAT_0021f17c);
                    lVar1 = 0x4aca3f16e97412ac;
                    if (iVar4 != 0) {
                      lVar1 = 0x10c09a7e26c7bc45;
                    }
                  }
                }
                else {
                  lVar1 = -0x795f117d2acf5896;
                  if (lVar5 != -0x86c811434081476) {
                    if (lVar5 == -0x5bc40c228c222b9) {
                      lVar1 = 0x4ab9a3d3d82e6640;
                      if (DAT_0021f1af == '\0') {
                        lVar1 = -0x39a3d296cdd14fd1;
                      }
                    }
                    else {
                      lVar1 = lVar5;
                      if (lVar5 == 0x23258f4ff3a4841) {
                        lVar1 = -0x4a8e958f50cb2936;
                      }
                    }
                  }
                }
              }
              else if (lVar5 < 0x11c6687713f96334) {
                if (lVar5 == 0xb342b2cda2804e9) {
                  free(local_98);
                  *unaff_x21 = 0;
                  lVar1 = -0x416128ec12d809db;
                }
                else {
                  lVar1 = -0x75dbffb39709e92e;
                  if ((lVar5 != 0xd13689237f469f0) && (lVar1 = lVar5, lVar5 == 0x10c09a7e26c7bc45))
                  {
                    lVar1 = -0x123a1d4e94934922;
                  }
                }
              }
              else {
                lVar1 = -0x795f117d2acf5896;
                if (((lVar5 != 0x11c6687713f96334) &&
                    (lVar1 = -0x1ab7d7cee959a11d, lVar5 != 0x12e9a821eda1e176)) &&
                   (lVar1 = lVar5, lVar5 == 0x2745f1d09246953f)) {
                  DAT_0021f184 = 0;
                  FUN_0018b510(unaff_x28,param_1,*(undefined8 *)(param_2 + 0x10),&DAT_0021c018,
                               unaff_x21);
                  lVar1 = 0x12e9a821eda1e176;
                  if ((int)*unaff_x28 != 0) {
                    lVar1 = -0x5dc8661fe70bb191;
                  }
                }
              }
            }
            if (lVar5 < 0x4aca3f16e97412ac) break;
            if (lVar5 < 0x6553b286c8407477) {
              if (lVar5 == 0x4aca3f16e97412ac) {
                lVar1 = 0x23258f4ff3a4841;
                if (DAT_0021f1ac == '\0') {
                  lVar1 = -0x360208aa015ed5da;
                }
              }
              else if (lVar5 == 0x4d201dca34f9057d) {
                lVar1 = 0x373719e29df8005e;
              }
            }
            else if (lVar5 == 0x6553b286c8407477) {
              DAT_0021c010 = DAT_0021c010 ^ 0x81;
              DAT_0021c011 = DAT_0021c011 ^ 0x81;
              DAT_0021c012 = DAT_0021c012 ^ 0x81;
              DAT_0021c013 = DAT_0021c013 ^ 0x81;
              DAT_0021c014 = DAT_0021c014 ^ 0x81;
              _DAT_0021c000 = _DAT_0021c000 ^ 0x8181818181818181;
              uRam000000000021c008 = uRam000000000021c008 ^ 0x8181818181818181;
              DAT_0021f1ad = '\x01';
              lVar1 = -0x58d4a1ff99370983;
            }
            else if (lVar5 == 0x7333431cb1ef57ea) {
              iVar4 = FUN_001e2ed0(local_a8,*unaff_x21);
              lVar1 = -0x6e8bfbccbadfbcb4;
              if (iVar4 != 0) {
                lVar1 = 0x7dcf737b2adf3002;
              }
            }
            else if (lVar5 == 0x7dcf737b2adf3002) {
              lVar1 = -0x38a37251ff50f43c;
            }
          }
          if (lVar5 < 0x44deba006d2d4801) break;
          if (lVar5 == 0x44deba006d2d4801) {
            lVar1 = -0x7684a385383e45a2;
            if (DAT_0021f1ad == '\0') {
              lVar1 = 0x6553b286c8407477;
            }
          }
          else if (lVar5 == 0x46c1bbde0911dd5e) {
            DAT_0021f188 = 0;
            FUN_0018b510(unaff_x28,param_1,*(undefined8 *)(param_2 + 0x10),&DAT_0021c028,local_90);
            lVar1 = 0x7333431cb1ef57ea;
            if ((int)*unaff_x28 != 0) {
              lVar1 = 0xd13689237f469f0;
            }
          }
          else if (lVar5 == 0x4ab9a3d3d82e6640) {
            lVar1 = 0x46c1bbde0911dd5e;
          }
        }
        lVar1 = -0x38a37251ff50f43c;
      } while (lVar5 == 0x343897bece408525);
      if (lVar5 != 0x373719e29df8005e) break;
      iVar4 = FUN_00212730(0,1,&DAT_0021f184);
      lVar1 = -0x4358e346d27e0c4b;
      if (iVar4 != 0) {
        lVar1 = -0x3efc2da3496f0afd;
      }
    }
    lVar1 = lVar5;
  } while (lVar5 != 0x325182182b17a69e);
  *(ulong *)(param_2 + 0x238) = *(ulong *)(param_2 + 0x238) | 0x1000000000000000;
  if (*(long *)(local_c0 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

