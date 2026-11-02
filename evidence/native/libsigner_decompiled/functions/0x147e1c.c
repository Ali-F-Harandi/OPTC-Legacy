// rea decompile_all
// name: FUN_00147e1c
// address: 0x147e1c
// body: available
// range: 0x147e1c-0x14892b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147e1c(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  long local_98;
  long local_90;
  long local_88;
  
  lVar1 = -0x72b971aa77b07010;
  if (param_1 != 0) {
    lVar1 = -0x54f5756e3eb691f2;
  }
  lVar2 = -0x264a552d48185c30;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar5 = lVar2, lVar2 = lVar5, -0x9ab4150d068a4b9 < lVar5) {
            if (lVar5 < 0x1ec95b13cd9877cd) {
              if (lVar5 < 0x65dfca2b27b3e8b) {
                if (lVar5 < 0x1537c02fdb61e5) {
                  lVar2 = -0x4afefde29e9fdaa8;
                  if ((lVar5 != -0x9ab4150d068a4b8) && (lVar2 = lVar5, lVar5 == -0x5f46c5760953fe9))
                  {
                    DAT_0021f52c = 0;
                    uVar4 = FUN_00200ad4(local_98,&DAT_0021d340);
                    lVar2 = -0x13c8e1371760ca3c;
                    if ((uVar4 & 1) == 0) {
                      lVar2 = -0x34a629dd58525f30;
                    }
                  }
                }
                else {
                  lVar2 = 0x59f4cd4b0585811f;
                  if ((lVar5 != 0x1537c02fdb61e5) && (lVar2 = lVar5, lVar5 == 0x1930bd59f5c5006)) {
                    lVar2 = -0x3a4d9f57c2c35a06;
                  }
                }
              }
              else if (lVar5 < 0x11791194739d5e81) {
                if (lVar5 == 0x65dfca2b27b3e8b) {
                  DAT_0021d350 = DAT_0021d350 ^ 0x26;
                  DAT_0021d351 = DAT_0021d351 ^ 0x26;
                  DAT_0021d352 = DAT_0021d352 ^ 0x26;
                  DAT_0021d353 = DAT_0021d353 ^ 0x26;
                  DAT_0021d354 = DAT_0021d354 ^ 0x26;
                  _DAT_0021d340 = _DAT_0021d340 ^ 0x2626262626262626;
                  uRam000000000021d348 = uRam000000000021d348 ^ 0x2626262626262626;
                  DAT_0021f704 = '\x01';
                  lVar2 = -0x5f46c5760953fe9;
                }
                else if (lVar5 == 0xc8111e814a0e067) {
                  lVar2 = -0x3a4d9f57c2c35a06;
                }
              }
              else if (lVar5 == 0x11791194739d5e81) {
                local_90 = *(long *)(param_1 + 0x30);
                lVar2 = -0x9ab4150d068a4b8;
                if (local_90 != 0) {
                  lVar2 = -0x431882b1aaf0ef63;
                }
              }
              else if (lVar5 == 0x1235de85f768efb6) {
                lVar2 = 0x7e75e27b18f6ce17;
              }
            }
            else if (lVar5 < 0x59f4cd4b0585811f) {
              if (lVar5 < 0x33791bb6a7b3e54e) {
                lVar2 = -0x5f46c5760953fe9;
                if ((lVar5 != 0x1ec95b13cd9877cd) && (lVar2 = lVar5, lVar5 == 0x251737c6e7f43d74)) {
                  lVar2 = -0x7e9fb96f7264edcc;
                  if (DAT_0021f702 == '\0') {
                    lVar2 = 0x73f2348a586d9754;
                  }
                }
              }
              else if (lVar5 == 0x33791bb6a7b3e54e) {
                lVar2 = 0x7d4ab20834d0cf78;
                if (DAT_0021f703 == '\0') {
                  lVar2 = 0x47fe5b2c57f6618c;
                }
              }
              else if (lVar5 == 0x47fe5b2c57f6618c) {
                DAT_0021d330 = DAT_0021d330 ^ 0xc1;
                DAT_0021d332 = DAT_0021d332 ^ 0xc1;
                DAT_0021d331 = DAT_0021d331 ^ 0xc1;
                _DAT_0021d320 = _DAT_0021d320 ^ 0xc1c1c1c1c1c1c1c1;
                uRam000000000021d328 = uRam000000000021d328 ^ 0xc1c1c1c1c1c1c1c1;
                DAT_0021f703 = '\x01';
                lVar2 = 0x74d6dcc3c5b7b622;
              }
            }
            else if (lVar5 < 0x74d6dcc3c5b7b622) {
              if (lVar5 == 0x59f4cd4b0585811f) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f524);
                lVar2 = 0x251737c6e7f43d74;
                if (iVar3 != 0) {
                  lVar2 = 0x1537c02fdb61e5;
                }
              }
              else if (lVar5 == 0x73f2348a586d9754) {
                DAT_0021d310 = DAT_0021d310 ^ 0xe8;
                DAT_0021d311 = DAT_0021d311 ^ 0xe8;
                DAT_0021d312 = DAT_0021d312 ^ 0xe8;
                DAT_0021d313 = DAT_0021d313 ^ 0xe8;
                DAT_0021d314 = DAT_0021d314 ^ 0xe8;
                _DAT_0021d300 = _DAT_0021d300 ^ 0xe8e8e8e8e8e8e8e8;
                uRam000000000021d308 = uRam000000000021d308 ^ 0xe8e8e8e8e8e8e8e8;
                DAT_0021f702 = '\x01';
                lVar2 = -0x3463ef23a9b0cf9f;
              }
            }
            else if (lVar5 == 0x74d6dcc3c5b7b622) {
              DAT_0021f528 = 0;
              uVar4 = FUN_00200ad4(local_90,&DAT_0021d320);
              lVar2 = -0x66ff8c9e7589318b;
              if ((uVar4 & 1) == 0) {
                lVar2 = -0x6136e70a5583634b;
              }
            }
            else {
              lVar2 = 0x74d6dcc3c5b7b622;
              if ((lVar5 != 0x7d4ab20834d0cf78) && (lVar2 = lVar5, lVar5 == 0x7e75e27b18f6ce17)) {
                fVar6 = *param_2;
                *param_3 = *param_3 | 0x800000;
                *param_2 = fVar6 + (1.0 - fVar6);
                lVar2 = -0x4afefde29e9fdaa8;
              }
            }
          }
          if (-0x4afefde29e9fdaa9 < lVar5) break;
          if (lVar5 < -0x6ab804e3f54b8fd3) {
            if (lVar5 < -0x78c03ee56dc0bffe) {
              lVar2 = -0x3463ef23a9b0cf9f;
              if ((lVar5 != -0x7e9fb96f7264edcc) && (lVar2 = lVar5, lVar5 == -0x7b0836634360dd49)) {
                lVar2 = 0x1ec95b13cd9877cd;
                if (DAT_0021f704 == '\0') {
                  lVar2 = 0x65dfca2b27b3e8b;
                }
              }
            }
            else if (lVar5 == -0x78c03ee56dc0bffe) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f528);
              lVar2 = 0x33791bb6a7b3e54e;
              if (iVar3 != 0) {
                lVar2 = -0x4b1c395a5abf85ba;
              }
            }
            else if (lVar5 == -0x72b971aa77b07010) {
              lVar2 = -0x4afefde29e9fdaa8;
            }
          }
          else if (lVar5 < -0x6136e70a5583634b) {
            lVar2 = -0x4afefde29e9fdaa8;
            if ((lVar5 != -0x6ab804e3f54b8fd3) && (lVar2 = lVar5, lVar5 == -0x66ff8c9e7589318b)) {
              lVar2 = 0x7e75e27b18f6ce17;
            }
          }
          else if (lVar5 == -0x6136e70a5583634b) {
            local_98 = *(long *)(param_1 + 0x30);
            lVar2 = -0x2df588f0e78fb9d0;
            if (local_98 != 0) {
              lVar2 = 0x1930bd59f5c5006;
            }
          }
          else if (lVar5 == -0x54f5756e3eb691f2) {
            local_88 = *(long *)(param_1 + 0x30);
            lVar2 = -0x42b929fde9b8103f;
            if (local_88 == 0 || param_3 == (ulong *)0x0) {
              lVar2 = -0x6ab804e3f54b8fd3;
            }
          }
          else if (lVar5 == -0x4b1c395a5abf85ba) {
            lVar2 = -0x78c03ee56dc0bffe;
          }
        }
        if (lVar5 < -0x3463ef23a9b0cf9f) break;
        if (lVar5 < -0x264a552d48185c30) {
          if (lVar5 == -0x3463ef23a9b0cf9f) {
            DAT_0021f524 = 0;
            lVar5 = FUN_001e238c(local_88,&DAT_0021d300);
            lVar2 = 0x11791194739d5e81;
            if (lVar5 != 0) {
              lVar2 = 0x1235de85f768efb6;
            }
          }
          else if (lVar5 == -0x2df588f0e78fb9d0) {
            lVar2 = -0x4afefde29e9fdaa8;
          }
        }
        else {
          lVar2 = lVar1;
          if ((lVar5 != -0x264a552d48185c30) && (lVar2 = lVar5, lVar5 == -0x13c8e1371760ca3c)) {
            lVar2 = 0x7e75e27b18f6ce17;
          }
        }
      }
      if (lVar5 < -0x3a4d9f57c2c35a06) break;
      if (lVar5 == -0x3a4d9f57c2c35a06) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f52c);
        lVar2 = -0x7b0836634360dd49;
        if (iVar3 != 0) {
          lVar2 = 0xc8111e814a0e067;
        }
      }
      else if (lVar5 == -0x34a629dd58525f30) {
        lVar2 = -0x4afefde29e9fdaa8;
      }
    }
    lVar2 = -0x78c03ee56dc0bffe;
  } while (((lVar5 == -0x431882b1aaf0ef63) ||
           (lVar2 = 0x59f4cd4b0585811f, lVar5 == -0x42b929fde9b8103f)) ||
          (lVar2 = lVar5, lVar5 != -0x4afefde29e9fdaa8));
  return;
}

