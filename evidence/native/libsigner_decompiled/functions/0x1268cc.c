// rea decompile_all
// name: FUN_001268cc
// address: 0x1268cc
// body: available
// range: 0x1268cc-0x12712b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x127128 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001268cc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *local_2a0;
  undefined8 *puStack_298;
  undefined4 local_1f8;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined4 local_f8;
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  long local_88;
  
  local_90 = tpidr_el0;
  local_88 = *(long *)(local_90 + 0x28);
  lVar1 = -0xa26d27699b19f3e;
  local_98 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar3 = lVar1, lVar1 = lVar3, -0x95c7fb9615b298b < lVar3) {
              if (lVar3 < 0x2ac8f962b85f1348) {
                if (lVar3 < 0x21f89fb6280e1198) {
                  lVar1 = -0x44281625c09c414c;
                  if (lVar3 != -0x95c7fb9615b298a) {
                    if (lVar3 == 0x452d53eeea4fae6) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f24c);
                      lVar1 = 0x4cb25ba0d623a5cf;
                      if (iVar2 != 0) {
                        lVar1 = -0x719aeac5c2fa92bd;
                      }
                    }
                    else {
                      lVar1 = lVar3;
                      if (lVar3 == 0x686abeca53c867f) {
                        DAT_0021f24c = 0;
                        lVar1 = 0x40b17a06f7ed6277;
                      }
                    }
                  }
                }
                else {
                  lVar1 = 0x40b17a06f7ed6277;
                  if (lVar3 != 0x21f89fb6280e1198) {
                    if (lVar3 == 0x24e310e2985a3222) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f244);
                      lVar1 = 0x2c812424ce32f415;
                      if (iVar2 != 0) {
                        lVar1 = -0x11f4cf8d2c00c35b;
                      }
                    }
                    else {
                      lVar1 = lVar3;
                      if (lVar3 == 0x26b62020b0aa121e) {
                        lVar1 = 0x319faf94648beb71;
                      }
                    }
                  }
                }
              }
              else if (lVar3 < 0x40b17a06f7ed6277) {
                if (lVar3 == 0x2ac8f962b85f1348) {
                  DAT_0021f244 = 0;
                  lVar1 = -0x3ffb44e85fa27eaf;
                }
                else if (lVar3 == 0x2c812424ce32f415) {
                  lVar1 = 0x4834b9277651b0ab;
                  if (DAT_0021f64a == '\0') {
                    lVar1 = -0x4a4edde3b19d8a04;
                  }
                }
                else if (lVar3 == 0x319faf94648beb71) {
                  DAT_0021f248 = 0;
                  lVar1 = 0x24e310e2985a3222;
                }
              }
              else if (lVar3 == 0x40b17a06f7ed6277) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f248);
                lVar1 = -0x6de64a9f2615d4e5;
                if (iVar2 != 0) {
                  lVar1 = 0x21f89fb6280e1198;
                }
              }
              else {
                lVar1 = 0x2ac8f962b85f1348;
                if ((lVar3 != 0x4834b9277651b0ab) && (lVar1 = lVar3, lVar3 == 0x4cb25ba0d623a5cf)) {
                  lVar1 = -0x2d58c8d04261592b;
                  if (DAT_0021f64c == '\0') {
                    lVar1 = -0x34d4ad3abedffff4;
                  }
                }
              }
            }
            if (lVar3 < -0x33b97250fb962322) break;
            if (lVar3 < -0x231adb85a81a7f15) {
              if (lVar3 == -0x33b97250fb962322) {
                DAT_0021c410 = DAT_0021c410 ^ 0x6f;
                DAT_0021c411 = DAT_0021c411 ^ 0x6f;
                DAT_0021c412 = DAT_0021c412 ^ 0x6f;
                DAT_0021c414 = DAT_0021c414 ^ 0x6f;
                DAT_0021c415 = DAT_0021c415 ^ 0x6f;
                DAT_0021c416 = DAT_0021c416 ^ 0x6f;
                DAT_0021c413 = DAT_0021c413 ^ 0x6f;
                _DAT_0021c3f0 = _DAT_0021c3f0 ^ 0x6f6f6f6f6f6f6f6f;
                uRam000000000021c3f8 = uRam000000000021c3f8 ^ 0x6f6f6f6f6f6f6f6f;
                _DAT_0021c400 = _DAT_0021c400 ^ 0x6f6f6f6f6f6f6f6f;
                uRam000000000021c408 = uRam000000000021c408 ^ 0x6f6f6f6f6f6f6f6f;
                DAT_0021f64b = '\x01';
                lVar1 = 0x319faf94648beb71;
              }
              else {
                lVar1 = 0x686abeca53c867f;
                if ((lVar3 != -0x2d58c8d04261592b) && (lVar1 = lVar3, lVar3 == -0x231afa1b7f11a7da))
                {
                  lVar1 = -0x95c7fb9615b298a;
                  if (DAT_0021f649 == '\0') {
                    lVar1 = -0x4e9c5a5e47d18ad6;
                  }
                }
              }
            }
            else {
              lVar1 = -0x3ffb44e85fa27eaf;
              if (((lVar3 != -0x231adb85a81a7f15) &&
                  (lVar1 = 0x24e310e2985a3222, lVar3 != -0x11f4cf8d2c00c35b)) &&
                 (lVar1 = lVar3, lVar3 == -0xa26d27699b19f3e)) {
                lVar1 = 0x452d53eeea4fae6;
              }
            }
          }
          if (-0x4a4edde3b19d8a05 < lVar3) break;
          lVar1 = 0x452d53eeea4fae6;
          if (lVar3 != -0x719aeac5c2fa92bd) {
            if (lVar3 == -0x6de64a9f2615d4e5) {
              lVar1 = 0x26b62020b0aa121e;
              if (DAT_0021f64b == '\0') {
                lVar1 = -0x33b97250fb962322;
              }
            }
            else {
              lVar1 = lVar3;
              if (lVar3 == -0x4e9c5a5e47d18ad6) {
                DAT_0021c3d8 = DAT_0021c3d8 ^ 0x8b;
                _DAT_0021c3b0 = _DAT_0021c3b0 ^ 0x8b8b8b8b8b8b8b8b;
                uRam000000000021c3b8 = uRam000000000021c3b8 ^ 0x8b8b8b8b8b8b8b8b;
                _DAT_0021c3c0 = _DAT_0021c3c0 ^ 0x8b8b8b8b8b8b8b8b;
                uRam000000000021c3c8 = uRam000000000021c3c8 ^ 0x8b8b8b8b8b8b8b8b;
                DAT_0021f649 = '\x01';
                DAT_0021c3d0 = DAT_0021c3d0 ^ 0x8b8b8b8b8b8b8b8b;
                lVar1 = -0x44281625c09c414c;
              }
            }
          }
        }
        if (lVar3 < -0x3ffb44e85fa27eaf) break;
        if (lVar3 == -0x3ffb44e85fa27eaf) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f240);
          lVar1 = -0x231afa1b7f11a7da;
          if (iVar2 != 0) {
            lVar1 = -0x231adb85a81a7f15;
          }
        }
        else if (lVar3 == -0x34d4ad3abedffff4) {
          DAT_0021c418 = DAT_0021c418 ^ 0x3a3a3a3a3a3a3a3a;
          DAT_0021f64c = '\x01';
          lVar1 = 0x686abeca53c867f;
        }
      }
      if (lVar3 != -0x4a4edde3b19d8a04) break;
      DAT_0021c3e8 = DAT_0021c3e8 ^ 0x51;
      DAT_0021c3ea = DAT_0021c3ea ^ 0x51;
      DAT_0021c3e9 = DAT_0021c3e9 ^ 0x51;
      DAT_0021c3e0 = DAT_0021c3e0 ^ 0x5151515151515151;
      DAT_0021f64a = '\x01';
      lVar1 = 0x2ac8f962b85f1348;
    }
  } while (lVar3 != -0x44281625c09c414c);
  DAT_0021f240 = 0;
  local_2a0 = &DAT_0021c3b0;
  puStack_298 = &DAT_0021c3e0;
  local_1f8 = 3;
  local_1a8 = 1;
  local_1a0 = &DAT_0021c3f0;
  puStack_198 = &DAT_0021c418;
  local_f8 = 3;
  local_a8 = 1;
  FUN_00123c98(&local_2a0,2,local_98);
  if (*(long *)(local_90 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

