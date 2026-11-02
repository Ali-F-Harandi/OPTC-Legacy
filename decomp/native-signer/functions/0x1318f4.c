// rea decompile_all
// name: FUN_001318f4
// address: 0x1318f4
// body: available
// range: 0x1318f4-0x138d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x138d84 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001318f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *local_36c0;
  undefined8 local_36b8;
  undefined1 auStack_36b0 [152];
  undefined4 local_3618;
  undefined8 local_35c8;
  undefined *puStack_35c0;
  undefined4 local_3518;
  undefined8 local_34c8;
  undefined *puStack_34c0;
  undefined4 local_3418;
  undefined8 local_33c8;
  undefined *local_33c0;
  undefined4 local_3318;
  undefined8 local_32c8;
  undefined *local_32c0;
  undefined4 local_3218;
  undefined8 local_31c8;
  undefined *local_31c0;
  undefined4 local_3118;
  undefined8 local_30c8;
  undefined *local_30c0;
  undefined4 local_3018;
  undefined8 local_2fc8;
  undefined *local_2fc0;
  undefined1 *local_2fb8;
  undefined8 local_2ec8;
  undefined *local_2ec0;
  undefined4 local_2e18;
  undefined8 local_2dc8;
  undefined *local_2dc0;
  undefined4 local_2d18;
  undefined8 local_2cc8;
  undefined *local_2cc0;
  undefined4 local_2c18;
  undefined8 local_2bc8;
  undefined *local_2bc0;
  undefined4 local_2b18;
  undefined8 local_2ac8;
  undefined8 *local_2ac0;
  undefined4 local_2a18;
  undefined8 local_29c8;
  undefined *local_29c0;
  undefined4 local_2918;
  undefined8 local_28c8;
  undefined8 *local_28c0;
  undefined4 local_2818;
  undefined8 local_27c8;
  undefined *local_27c0;
  undefined8 *local_27b8;
  undefined8 local_26c8;
  undefined *local_26c0;
  undefined4 local_2618;
  undefined8 local_25c8;
  undefined *local_25c0;
  undefined4 local_2518;
  undefined8 local_24c8;
  undefined *local_24c0;
  undefined4 local_2418;
  undefined8 local_23c8;
  undefined *local_23c0;
  undefined4 local_2318;
  undefined8 local_22c8;
  undefined *local_22c0;
  undefined4 local_2218;
  undefined8 local_21c8;
  undefined8 *local_21c0;
  undefined4 local_2118;
  undefined8 local_20c8;
  undefined8 *local_20c0;
  undefined4 local_2018;
  undefined8 local_1fc8;
  undefined *local_1fc0;
  undefined4 local_1f18;
  undefined8 local_1ec8;
  undefined *local_1ec0;
  undefined4 local_1e18;
  undefined8 local_1dc8;
  undefined *local_1dc0;
  undefined8 *local_1db8;
  undefined8 local_1cc8;
  undefined *local_1cc0;
  undefined4 local_1c18;
  undefined8 local_1bc8;
  undefined *local_1bc0;
  undefined4 local_1b18;
  undefined8 local_1ac8;
  undefined *local_1ac0;
  undefined8 local_1ab8;
  undefined4 local_1a18;
  undefined8 local_19c8;
  undefined *local_19c0;
  undefined8 local_19b8;
  undefined4 local_1918;
  undefined8 local_18c8;
  undefined *local_18c0;
  undefined8 local_18b8;
  undefined4 local_1818;
  undefined8 local_17c8;
  undefined *local_17c0;
  undefined8 local_17b8;
  undefined4 local_1718;
  undefined8 local_16c8;
  undefined *local_16c0;
  undefined8 local_16b8;
  undefined4 local_1618;
  undefined8 local_15c8;
  undefined *local_15c0;
  undefined8 local_15b8;
  undefined4 local_1518;
  undefined8 local_14c8;
  undefined *local_14c0;
  undefined8 local_14b8;
  undefined4 local_1418;
  undefined8 local_13c8;
  undefined *local_13c0;
  undefined8 local_13b8;
  undefined4 local_1318;
  undefined8 local_12c8;
  undefined *local_12c0;
  undefined8 local_12b8;
  undefined4 local_1218;
  undefined8 local_11c8;
  undefined *local_11c0;
  undefined8 local_11b8;
  undefined4 local_1118;
  undefined8 local_10c8;
  undefined *local_10c0;
  undefined8 local_10b8;
  undefined4 local_1018;
  undefined8 local_fc8;
  undefined *local_fc0;
  undefined8 local_fb8;
  undefined4 local_f18;
  undefined8 local_ec8;
  undefined *local_ec0;
  undefined8 local_eb8;
  undefined4 local_e18;
  undefined8 local_dc8;
  undefined *local_dc0;
  undefined8 local_db8;
  undefined4 local_d18;
  undefined8 local_cc8;
  undefined *local_cc0;
  undefined8 local_cb8;
  undefined4 local_c18;
  undefined8 local_bc8;
  undefined8 *local_bc0;
  undefined8 local_bb8;
  undefined4 local_b18;
  undefined8 local_ac8;
  undefined *local_ac0;
  undefined8 local_ab8;
  undefined4 local_a18;
  undefined8 local_9c8;
  undefined *local_9c0;
  undefined8 local_9b8;
  undefined4 local_918;
  undefined8 local_8c8;
  undefined8 *local_8c0;
  undefined1 *local_8b8;
  undefined4 local_818;
  undefined8 local_7c8;
  undefined *local_7c0;
  undefined8 local_7b8;
  undefined4 local_718;
  undefined8 local_6c8;
  undefined *local_6c0;
  undefined8 local_6b8;
  undefined4 local_618;
  undefined8 local_5c8;
  undefined8 *local_5c0;
  undefined1 *local_5b8;
  undefined4 local_518;
  undefined8 local_4c8;
  undefined *local_4c0;
  undefined8 local_4b8;
  undefined4 local_418;
  undefined8 local_3c8;
  undefined *local_3c0;
  undefined8 local_3b8;
  undefined4 local_318;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined4 local_218;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_118;
  undefined8 local_c8;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  
  local_b0 = tpidr_el0;
  local_a8 = *(long *)(local_b0 + 0x28);
  lVar1 = -0x343aa9c5ff2a582b;
  local_b8 = param_2;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while (lVar3 = lVar1, lVar1 = lVar3, -0x6b0b3269d90ff19 < lVar3) {
                      if (lVar3 < 0x401c3d77c2d8a6ba) {
                        if (lVar3 < 0x1de7a89e298f6287) {
                          if (lVar3 < 0xd964a51cd3ba505) {
                            if (lVar3 < 0x69b7b4277ae7a0e) {
                              if (lVar3 < -0x31b7fdae55ea9ca) {
                                if (lVar3 < -0x4730497cd5cd0d4) {
                                  lVar1 = 0x6f5929ae29751780;
                                  if ((lVar3 != -0x6b0b3269d90ff18) &&
                                     (lVar1 = lVar3, lVar3 == -0x5c420429114e188)) {
                                    lVar1 = 0x497a453e6cb30f1e;
                                  }
                                }
                                else if (lVar3 == -0x4730497cd5cd0d4) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f36c);
                                  lVar1 = 0x48e2320e4e47af28;
                                  if (iVar2 != 0) {
                                    lVar1 = 0xf09b43c25d3e36f;
                                  }
                                }
                                else if (lVar3 == -0x3bd5139e863058e) {
                                  DAT_0021f388 = 0;
                                  lVar1 = 0x584f91cbbf5031a1;
                                }
                                else if (lVar3 == -0x39aaa39454e2218) {
                                  DAT_0021f41c = 0;
                                  lVar1 = 0x497a453e6cb30f1e;
                                }
                              }
                              else if (lVar3 < 0x2e435fe7314e62e) {
                                if (lVar3 == -0x31b7fdae55ea9ca) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f3f4);
                                  lVar1 = -0x71a3b7ef5a3bb1ed;
                                  if (iVar2 != 0) {
                                    lVar1 = 0x1d736f34de4f5975;
                                  }
                                }
                                else if (lVar3 == -0x1cfc9480f6cf5f3) {
                                  DAT_0021f358 = 0;
                                  lVar1 = -0x4fc708d50990ccec;
                                }
                              }
                              else if (lVar3 == 0x2e435fe7314e62e) {
                                lVar1 = 0x68d4dbe8fffc5ba5;
                                if (DAT_0021f6bc == '\0') {
                                  lVar1 = -0x6ef333dd6d0e189d;
                                }
                              }
                              else {
                                lVar1 = 0x7b91c9e5bfa87b6c;
                                if ((lVar3 != 0x3177db33ce154e5) &&
                                   (lVar1 = lVar3, lVar3 == 0x663253d10f5cf24)) {
                                  DAT_0021f370 = 0;
                                  lVar1 = -0x4730497cd5cd0d4;
                                }
                              }
                            }
                            else if (lVar3 < 0x8c62057a7158526) {
                              if (lVar3 < 0x7af0f1fab2cb9bc) {
                                lVar1 = 0x7af0f1fab2cb9bc;
                                if ((lVar3 != 0x69b7b4277ae7a0e) &&
                                   (lVar1 = lVar3, lVar3 == 0x6be1775ce9fb66b)) {
                                  lVar1 = 0x5cf9af05cb0d7345;
                                }
                              }
                              else if (lVar3 == 0x7af0f1fab2cb9bc) {
                                DAT_0021f3f0 = 0;
                                lVar1 = -0x74239bebd0569f12;
                              }
                              else if (lVar3 == 0x7cc0f569d5d36b6) {
                                DAT_0021cad0 = DAT_0021cad0 ^ 0x85;
                                DAT_0021cad1 = DAT_0021cad1 ^ 0x85;
                                DAT_0021cad2 = DAT_0021cad2 ^ 0x85;
                                DAT_0021cad4 = DAT_0021cad4 ^ 0x85;
                                DAT_0021cad5 = DAT_0021cad5 ^ 0x85;
                                DAT_0021cad6 = DAT_0021cad6 ^ 0x85;
                                DAT_0021cad3 = DAT_0021cad3 ^ 0x85;
                                _DAT_0021cab0 = _DAT_0021cab0 ^ 0x8585858585858585;
                                uRam000000000021cab8 = uRam000000000021cab8 ^ 0x8585858585858585;
                                _DAT_0021cac0 = _DAT_0021cac0 ^ 0x8585858585858585;
                                uRam000000000021cac8 = uRam000000000021cac8 ^ 0x8585858585858585;
                                DAT_0021f69c = '\x01';
                                lVar1 = -0x5da0429d9dcb81f2;
                              }
                              else if (lVar3 == 0x8c0b9fc0216be12) {
                                lVar1 = -0x64f09d75547f6c9b;
                                if (DAT_0021f6b9 == '\0') {
                                  lVar1 = -0x28d0b56c980ca8d4;
                                }
                              }
                            }
                            else if (lVar3 < 0xb753b922fcbc12a) {
                              if (lVar3 == 0x8c62057a7158526) {
                                DAT_0021f410 = 0;
                                lVar1 = -0x57eada46b965af4c;
                              }
                              else {
                                lVar1 = 0x2b40bcacce57df95;
                                if ((lVar3 != 0x8e29227462b7f14) &&
                                   (lVar1 = lVar3, lVar3 == 0x95214ada4899f6b)) {
                                  lVar1 = 0x3296ee8db148021c;
                                }
                              }
                            }
                            else if (lVar3 == 0xb753b922fcbc12a) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f358);
                              lVar1 = -0x1f66f0e1a299fcd5;
                              if (iVar2 != 0) {
                                lVar1 = -0x1a6f90379157b251;
                              }
                            }
                            else if (lVar3 == 0xbf7705b22c59245) {
                              DAT_0021f360 = 0;
                              lVar1 = -0x562e8781ba89f5e4;
                            }
                            else if (lVar3 == 0xc1e123e9dd6abb7) {
                              lVar1 = 0x4743ed1ddb003bc3;
                            }
                          }
                          else if (lVar3 < 0x13c817d32be76879) {
                            if (lVar3 < 0x1022bd810cccdf04) {
                              if (lVar3 < 0xebfa26a97a03d23) {
                                if (lVar3 == 0xd964a51cd3ba505) {
                                  DAT_0021cb78 = DAT_0021cb78 ^ 99;
                                  DAT_0021cb79 = DAT_0021cb79 ^ 99;
                                  DAT_0021cb70 = DAT_0021cb70 ^ 0x6363636363636363;
                                  DAT_0021f6a1 = '\x01';
                                  lVar1 = -0x6a5a906d80283b3a;
                                }
                                else if (lVar3 == 0xe21fedf0419cc21) {
                                  lVar1 = 0x4111780a0b694329;
                                  if (DAT_0021f69a == '\0') {
                                    lVar1 = 0x6b71b155612b92ff;
                                  }
                                }
                              }
                              else {
                                lVar1 = -0x2da13e23b2303993;
                                if (((lVar3 != 0xebfa26a97a03d23) &&
                                    (lVar1 = -0x4730497cd5cd0d4, lVar3 != 0xf09b43c25d3e36f)) &&
                                   (lVar1 = lVar3, lVar3 == 0xf2dc5b03450f24e)) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f360);
                                  lVar1 = -0x7c1629b7e1ab1463;
                                  if (iVar2 != 0) {
                                    lVar1 = -0x54e9be1f1777f7dd;
                                  }
                                }
                              }
                            }
                            else if (lVar3 < 0x136ac4c662db7f8e) {
                              if (lVar3 == 0x1022bd810cccdf04) {
                                lVar1 = -0x72d5b2dc4548f4e5;
                                if (DAT_0021f65f == '\0') {
                                  lVar1 = 0x3566d0551bef7412;
                                }
                              }
                              else {
                                lVar1 = 0x1386810cf6d4d9cd;
                                if ((lVar3 != 0x10558ba40e9c2820) &&
                                   (lVar1 = lVar3, lVar3 == 0x11154bf597b6dece)) {
                                  _DAT_0021cef0 = _DAT_0021cef0 ^ 0x5c5c5c5c5c5c5c5c;
                                  uRam000000000021cef8 = uRam000000000021cef8 ^ 0x5c5c5c5c5c5c5c5c;
                                  _DAT_0021cf00 = _DAT_0021cf00 ^ 0x5c5c5c5c5c5c5c5c;
                                  uRam000000000021cf08 = uRam000000000021cf08 ^ 0x5c5c5c5c5c5c5c5c;
                                  DAT_0021f6bd = '\x01';
                                  lVar1 = 0x8c62057a7158526;
                                }
                              }
                            }
                            else {
                              lVar1 = 0x1ae2a8cbc7c20e19;
                              if (lVar3 != 0x136ac4c662db7f8e) {
                                if (lVar3 == 0x1386810cf6d4d9cd) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f3e8);
                                  lVar1 = -0x7320e8c862582bbd;
                                  if (iVar2 != 0) {
                                    lVar1 = 0x10558ba40e9c2820;
                                  }
                                }
                                else {
                                  lVar1 = lVar3;
                                  if (lVar3 == 0x1396af11cad04dea) {
                                    lVar1 = -0x2680b6c5de36d34e;
                                  }
                                }
                              }
                            }
                          }
                          else if (lVar3 < 0x175a33ed6739010b) {
                            if (lVar3 < 0x163b21dc9aaeda16) {
                              lVar1 = -0x4ad51e0bef7de66c;
                              if ((lVar3 != 0x13c817d32be76879) &&
                                 (lVar1 = lVar3, lVar3 == 0x144ca716b9ef087d)) {
                                lVar1 = -0x330e471128b3b732;
                              }
                            }
                            else if (lVar3 == 0x163b21dc9aaeda16) {
                              DAT_0021cc10 = DAT_0021cc10 ^ 0x53;
                              DAT_0021cc11 = DAT_0021cc11 ^ 0x53;
                              DAT_0021cc13 = DAT_0021cc13 ^ 0x53;
                              DAT_0021cc12 = DAT_0021cc12 ^ 0x53;
                              _DAT_0021cc00 = _DAT_0021cc00 ^ 0x5353535353535353;
                              uRam000000000021cc08 = uRam000000000021cc08 ^ 0x5353535353535353;
                              DAT_0021f6a7 = '\x01';
                              lVar1 = -0x160b35ef5ce6a3ed;
                            }
                            else if (lVar3 == 0x16c54598b5281d42) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f408);
                              lVar1 = 0x5d34d65ba8521957;
                              if (iVar2 != 0) {
                                lVar1 = 0x202b58ff5cabb4a2;
                              }
                            }
                            else if (lVar3 == 0x16f769392dd6ee15) {
                              lVar1 = 0x584f91cbbf5031a1;
                            }
                          }
                          else if (lVar3 < 0x1b5b4f4a3f58ee4b) {
                            if (lVar3 == 0x175a33ed6739010b) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f41c);
                              lVar1 = -0x6c2a031b40553915;
                              if (iVar2 != 0) {
                                lVar1 = -0x1faf59df4cee9cb4;
                              }
                            }
                            else if (lVar3 == 0x1ae2a8cbc7c20e19) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3f8);
                              lVar1 = 0x1d93e77425e89855;
                              if (iVar2 != 0) {
                                lVar1 = 0x136ac4c662db7f8e;
                              }
                            }
                            else if (lVar3 == 0x1aec64e8cfbc4e87) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3b4);
                              lVar1 = -0x489e92765aa06d85;
                              if (iVar2 != 0) {
                                lVar1 = -0x3463af09068d8d71;
                              }
                            }
                          }
                          else if (lVar3 == 0x1b5b4f4a3f58ee4b) {
                            DAT_0021f3ac = 0;
                            lVar1 = 0x376d3c2c3dfb1bd9;
                          }
                          else {
                            lVar1 = -0x31b7fdae55ea9ca;
                            if ((lVar3 != 0x1d736f34de4f5975) &&
                               (lVar1 = lVar3, lVar3 == 0x1d93e77425e89855)) {
                              lVar1 = -0x534005e4dc739e2c;
                              if (DAT_0021f6b7 == '\0') {
                                lVar1 = -0x7f9b2c32b7cd6bc4;
                              }
                            }
                          }
                        }
                        else if (lVar3 < 0x302ad501d969e85a) {
                          if (lVar3 < 0x27a4ecd09cc7862b) {
                            if (lVar3 < 0x23f4540d480a156e) {
                              if (lVar3 < 0x202b58ff5cabb4a2) {
                                if (lVar3 == 0x1de7a89e298f6287) {
                                  DAT_0021ca88 = DAT_0021ca88 ^ 0xbe;
                                  DAT_0021ca89 = DAT_0021ca89 ^ 0xbe;
                                  DAT_0021ca8b = DAT_0021ca8b ^ 0xbe;
                                  _DAT_0021ca70 = _DAT_0021ca70 ^ 0xbebebebebebebebe;
                                  uRam000000000021ca78 = uRam000000000021ca78 ^ 0xbebebebebebebebe;
                                  DAT_0021ca8a = DAT_0021ca8a ^ 0xbe;
                                  DAT_0021ca80 = DAT_0021ca80 ^ 0xbebebebebebebebe;
                                  DAT_0021f699 = '\x01';
                                  lVar1 = -0x19c270b7be5fef6e;
                                }
                                else if (lVar3 == 0x1f900fe147600228) {
                                  DAT_0021ccb0 = DAT_0021ccb0 ^ 4;
                                  _DAT_0021cc90 = _DAT_0021cc90 ^ 0x404040404040404;
                                  uRam000000000021cc98 = uRam000000000021cc98 ^ 0x404040404040404;
                                  _DAT_0021cca0 = _DAT_0021cca0 ^ 0x404040404040404;
                                  uRam000000000021cca8 = uRam000000000021cca8 ^ 0x404040404040404;
                                  DAT_0021ccb1 = DAT_0021ccb1 ^ 4;
                                  DAT_0021f6ab = '\x01';
                                  lVar1 = -0x73fb90b6486c7c6f;
                                }
                              }
                              else {
                                lVar1 = 0x16c54598b5281d42;
                                if (((lVar3 != 0x202b58ff5cabb4a2) &&
                                    (lVar1 = -0xcb25e3cf5c5d1c2, lVar3 != 0x223aad313b039649)) &&
                                   (lVar1 = lVar3, lVar3 == 0x227633c85a010475)) {
                                  lVar1 = -0x27dcc213e25f7af4;
                                }
                              }
                            }
                            else if (lVar3 < 0x25c043a1e458bb2f) {
                              if (lVar3 == 0x23f4540d480a156e) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f308);
                                lVar1 = 0x4d5d29824f4967f5;
                                if (iVar2 != 0) {
                                  lVar1 = -0x252681a442b27e48;
                                }
                              }
                              else if (lVar3 == 0x245a9e19c14354b1) {
                                lVar1 = -0x599279007049402e;
                                if (DAT_0021f6ac == '\0') {
                                  lVar1 = 0x5df1c66c6b17ba94;
                                }
                              }
                              else if (lVar3 == 0x255c31bcfe175512) {
                                lVar1 = 0x2db5284845514020;
                              }
                            }
                            else if (lVar3 == 0x25c043a1e458bb2f) {
                              DAT_0021f3a8 = 0;
                              lVar1 = 0x3cc122309fddaed8;
                            }
                            else {
                              lVar1 = -0x23d11bc296f30bf7;
                              if ((lVar3 != 0x262a59440fb08605) &&
                                 (lVar1 = lVar3, lVar3 == 0x26786d387123267c)) {
                                lVar1 = -0x6b9547eed49dc57a;
                              }
                            }
                          }
                          else if (lVar3 < 0x2b796aef8b8ff357) {
                            if (lVar3 < 0x2969b6bc69e32041) {
                              lVar1 = -0x19c270b7be5fef6e;
                              if ((lVar3 != 0x27a4ecd09cc7862b) &&
                                 (lVar1 = lVar3, lVar3 == 0x28d24ed58bb0e734)) {
                                DAT_0021f39c = 0;
                                lVar1 = 0x7c09026e7ef0be76;
                              }
                            }
                            else if (lVar3 == 0x2969b6bc69e32041) {
                              lVar1 = 0x722232e8301a113f;
                              if (DAT_0021f690 == '\0') {
                                lVar1 = -0x2d054a64c1586b88;
                              }
                            }
                            else {
                              lVar1 = 0x3cf612dce28d5354;
                              if ((lVar3 != 0x29fc86aa7fded232) &&
                                 (lVar1 = lVar3, lVar3 == 0x2b40bcacce57df95)) {
                                DAT_0021f378 = 0;
                                lVar1 = -0x20eba83f6a1e5cda;
                              }
                            }
                          }
                          else if (lVar3 < 0x2e664d2afca28034) {
                            if (lVar3 == 0x2b796aef8b8ff357) {
                              lVar1 = 0x6be1775ce9fb66b;
                              if (DAT_0021f68d == '\0') {
                                lVar1 = -0x41e66b439b923c0b;
                              }
                            }
                            else {
                              lVar1 = -0x6a41f5466a250461;
                              if ((lVar3 != 0x2d3fab30bff8ed93) &&
                                 (lVar1 = lVar3, lVar3 == 0x2db5284845514020)) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f400);
                                lVar1 = 0x8c0b9fc0216be12;
                                if (iVar2 != 0) {
                                  lVar1 = 0x255c31bcfe175512;
                                }
                              }
                            }
                          }
                          else if (lVar3 == 0x2e664d2afca28034) {
                            lVar1 = -0x538353fa8fdb8a5d;
                            if (DAT_0021f69d == '\0') {
                              lVar1 = 0x70ae8bbdb0445bab;
                            }
                          }
                          else if (lVar3 == 0x2f40a79c06d86749) {
                            DAT_0021f354 = 0;
                            lVar1 = -0x6b9547eed49dc57a;
                          }
                          else if (lVar3 == 0x2f9c83e308b2120b) {
                            lVar1 = -0x36216984911a0b50;
                          }
                        }
                        else if (lVar3 < 0x3763ccbf4160a5f0) {
                          if (lVar3 < 0x3367fb9f654e23cb) {
                            if (lVar3 < 0x317bded53e61b6e5) {
                              if (lVar3 == 0x302ad501d969e85a) {
                                lVar1 = 0x5eba8fa9b8bf3d3f;
                                if (DAT_0021f6a1 == '\0') {
                                  lVar1 = 0xd964a51cd3ba505;
                                }
                              }
                              else if (lVar3 == 0x30537398dff57f51) {
                                DAT_0021cc88 = DAT_0021cc88 ^ 0xfe;
                                _DAT_0021cc60 = _DAT_0021cc60 ^ 0xfefefefefefefefe;
                                uRam000000000021cc68 = uRam000000000021cc68 ^ 0xfefefefefefefefe;
                                DAT_0021cc89 = DAT_0021cc89 ^ 0xfe;
                                _DAT_0021cc70 = _DAT_0021cc70 ^ 0xfefefefefefefefe;
                                uRam000000000021cc78 = uRam000000000021cc78 ^ 0xfefefefefefefefe;
                                DAT_0021cc8c = DAT_0021cc8c ^ 0xfe;
                                DAT_0021cc8a = DAT_0021cc8a ^ 0xfe;
                                DAT_0021cc8b = DAT_0021cc8b ^ 0xfe;
                                DAT_0021cc80 = DAT_0021cc80 ^ 0xfefefefefefefefe;
                                DAT_0021f6aa = '\x01';
                                lVar1 = -0x283dec2459e3b2cb;
                              }
                            }
                            else if (lVar3 == 0x317bded53e61b6e5) {
                              DAT_0021c6d0 = DAT_0021c6d0 ^ 0xbe;
                              _DAT_0021c6c0 = _DAT_0021c6c0 ^ 0xbebebebebebebebe;
                              uRam000000000021c6c8 = uRam000000000021c6c8 ^ 0xbebebebebebebebe;
                              DAT_0021f674 = '\x01';
                              lVar1 = -0x5c4426f3749195ad;
                            }
                            else if (lVar3 == 0x3296ee8db148021c) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f414);
                              lVar1 = 0x6ca31c62cc1485fa;
                              if (iVar2 != 0) {
                                lVar1 = 0x95214ada4899f6b;
                              }
                            }
                            else if (lVar3 == 0x32bd9012a6e79e28) {
                              DAT_0021cc50 = DAT_0021cc50 ^ 0xc6;
                              DAT_0021cc51 = DAT_0021cc51 ^ 0xc6;
                              DAT_0021cc53 = DAT_0021cc53 ^ 0xc6;
                              DAT_0021cc52 = DAT_0021cc52 ^ 0xc6;
                              _DAT_0021cc40 = _DAT_0021cc40 ^ 0xc6c6c6c6c6c6c6c6;
                              uRam000000000021cc48 = uRam000000000021cc48 ^ 0xc6c6c6c6c6c6c6c6;
                              DAT_0021f6a9 = '\x01';
                              lVar1 = 0x70052c10865bca47;
                            }
                          }
                          else if (lVar3 < 0x367bc87fbb798031) {
                            if (lVar3 == 0x3367fb9f654e23cb) {
                              DAT_0021f3a4 = 0;
                              lVar1 = -0x7368917e5ab1285c;
                            }
                            else if (lVar3 == 0x34ae1e47f43a56f6) {
                              DAT_0021f364 = 0;
                              lVar1 = 0xf2dc5b03450f24e;
                            }
                            else if (lVar3 == 0x3566d0551bef7412) {
                              DAT_0021c5ac = DAT_0021c5ac ^ 0x44;
                              DAT_0021c5ad = DAT_0021c5ad ^ 0x44;
                              DAT_0021c5ae = DAT_0021c5ae ^ 0x44;
                              DAT_0021c5b0 = DAT_0021c5b0 ^ 0x44;
                              DAT_0021c5af = DAT_0021c5af ^ 0x44;
                              DAT_0021c5b2 = DAT_0021c5b2 ^ 0x44;
                              DAT_0021c5b1 = DAT_0021c5b1 ^ 0x44;
                              DAT_0021f65f = '\x01';
                              lVar1 = -0x32183a452afd59c6;
                            }
                          }
                          else if (lVar3 == 0x367bc87fbb798031) {
                            lVar1 = 0x7f0211edad7abf7c;
                            if (DAT_0021f6a2 == '\0') {
                              lVar1 = -0x7a7b772342a3a9f1;
                            }
                          }
                          else if (lVar3 == 0x36cfef7ce37de3dd) {
                            DAT_0021f404 = 0;
                            lVar1 = 0x2db5284845514020;
                          }
                          else if (lVar3 == 0x37575066b882f1d0) {
                            DAT_0021cf80 = DAT_0021cf80 ^ 0xd3;
                            DAT_0021cf81 = DAT_0021cf81 ^ 0xd3;
                            DAT_0021cf83 = DAT_0021cf83 ^ 0xd3;
                            DAT_0021cf82 = DAT_0021cf82 ^ 0xd3;
                            _DAT_0021cf70 = _DAT_0021cf70 ^ 0xd3d3d3d3d3d3d3d3;
                            uRam000000000021cf78 = uRam000000000021cf78 ^ 0xd3d3d3d3d3d3d3d3;
                            DAT_0021f6c1 = '\x01';
                            lVar1 = -0x2a4a39866eb634c9;
                          }
                        }
                        else if (lVar3 < 0x3b1e8a64c5e70069) {
                          if (lVar3 < 0x395b3e8842789284) {
                            if (lVar3 == 0x3763ccbf4160a5f0) {
                              DAT_0021caa8 = DAT_0021caa8 ^ 0xb9;
                              DAT_0021caa9 = DAT_0021caa9 ^ 0xb9;
                              DAT_0021caaa = DAT_0021caaa ^ 0xb9;
                              DAT_0021caab = DAT_0021caab ^ 0xb9;
                              DAT_0021caad = DAT_0021caad ^ 0xb9;
                              DAT_0021caac = DAT_0021caac ^ 0xb9;
                              DAT_0021caae = DAT_0021caae ^ 0xb9;
                              DAT_0021caa0 = DAT_0021caa0 ^ 0xb9b9b9b9b9b9b9b9;
                              DAT_0021f69b = '\x01';
                              lVar1 = -0x3bd5139e863058e;
                            }
                            else if (lVar3 == 0x376d3c2c3dfb1bd9) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3a8);
                              lVar1 = -0x48cc972e0affcf05;
                              if (iVar2 != 0) {
                                lVar1 = -0x646a880db18ebfa8;
                              }
                            }
                          }
                          else if (lVar3 == 0x395b3e8842789284) {
                            _DAT_0021cbe0 = _DAT_0021cbe0 ^ 0xbdbdbdbdbdbdbdbd;
                            uRam000000000021cbe8 = uRam000000000021cbe8 ^ 0xbdbdbdbdbdbdbdbd;
                            DAT_0021f6a5 = '\x01';
                            lVar1 = -0x4990598d15cc4d49;
                          }
                          else if (lVar3 == 0x3a0c73e3397b09e4) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f3c0);
                            lVar1 = -0x794a0dcb32dfba6d;
                            if (iVar2 != 0) {
                              lVar1 = 0x6dbfb2d035773ff3;
                            }
                          }
                          else if (lVar3 == 0x3a9954ad82ffa048) {
                            lVar1 = -0x3d2d47febb83d7a7;
                          }
                        }
                        else if (lVar3 < 0x3cf612dce28d5354) {
                          lVar1 = -0x20eba83f6a1e5cda;
                          if (lVar3 != 0x3b1e8a64c5e70069) {
                            if (lVar3 == 0x3c0f171d81262162) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f39c);
                              lVar1 = -0x2a0b63f9bdabb29a;
                              if (iVar2 != 0) {
                                lVar1 = -0x78a83b5b9fce00b2;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x3cc122309fddaed8) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f3a4);
                                lVar1 = 0x367bc87fbb798031;
                                if (iVar2 != 0) {
                                  lVar1 = -0x3500764870e243e8;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 == 0x3cf612dce28d5354) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f404);
                          lVar1 = -0x5d9c42c0f017932f;
                          if (iVar2 != 0) {
                            lVar1 = 0x29fc86aa7fded232;
                          }
                        }
                        else {
                          lVar1 = 0x748695b54e546dc3;
                          if ((lVar3 != 0x3ec8a2d0341496c4) &&
                             (lVar1 = lVar3, lVar3 == 0x3feab2b571a96d99)) {
                            lVar1 = 0x7d41ee1d37870109;
                          }
                        }
                      }
                      else if (lVar3 < 0x626b6c2a054da67e) {
                        if (lVar3 < 0x4dc82dc71b5741d9) {
                          if (lVar3 < 0x47dcb3a9e761af62) {
                            if (lVar3 < 0x455df301ced06cb6) {
                              if (lVar3 < 0x4111780a0b694329) {
                                if (lVar3 == 0x401c3d77c2d8a6ba) {
                                  lVar1 = -0x5c85b46279d15ea3;
                                  if (DAT_0021f6ad == '\0') {
                                    lVar1 = -0x2348c62440cf0103;
                                  }
                                }
                                else if (lVar3 == 0x40f7dc0715a95ea7) {
                                  lVar1 = -0xbbd141c4547c454;
                                }
                              }
                              else {
                                lVar1 = -0x5a5297691d74482d;
                                if (lVar3 != 0x4111780a0b694329) {
                                  if (lVar3 == 0x4272471328575692) {
                                    lVar1 = -0x64a14186f99a34cd;
                                    if (DAT_0021f69b == '\0') {
                                      lVar1 = 0x3763ccbf4160a5f0;
                                    }
                                  }
                                  else {
                                    lVar1 = lVar3;
                                    if (lVar3 == 0x44fd100218a9bacb) {
                                      DAT_0021ce30 = DAT_0021ce30 ^ 0x7f;
                                      DAT_0021ce31 = DAT_0021ce31 ^ 0x7f;
                                      DAT_0021ce33 = DAT_0021ce33 ^ 0x7f;
                                      DAT_0021ce32 = DAT_0021ce32 ^ 0x7f;
                                      _DAT_0021ce20 = _DAT_0021ce20 ^ 0x7f7f7f7f7f7f7f7f;
                                      uRam000000000021ce28 =
                                           uRam000000000021ce28 ^ 0x7f7f7f7f7f7f7f7f;
                                      DAT_0021f6b6 = '\x01';
                                      lVar1 = -0x330e471128b3b732;
                                    }
                                  }
                                }
                              }
                            }
                            else if (lVar3 < 0x4743ed1ddb003bc3) {
                              if (lVar3 == 0x455df301ced06cb6) {
                                DAT_0021f3e8 = 0;
                                lVar1 = 0x626b6c2a054da67e;
                              }
                              else if (lVar3 == 0x46982ca6d86fd3f4) {
                                DAT_0021cf18 = DAT_0021cf18 ^ 0xc4;
                                DAT_0021cf19 = DAT_0021cf19 ^ 0xc4;
                                DAT_0021cf1a = DAT_0021cf1a ^ 0xc4;
                                DAT_0021cf1c = DAT_0021cf1c ^ 0xc4;
                                DAT_0021cf1b = DAT_0021cf1b ^ 0xc4;
                                DAT_0021cf10 = DAT_0021cf10 ^ 0xc4c4c4c4c4c4c4c4;
                                DAT_0021f6be = '\x01';
                                lVar1 = 0x662013c6c4946a7b;
                              }
                            }
                            else if (lVar3 == 0x4743ed1ddb003bc3) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3dc);
                              lVar1 = -0x7c33fee57db6e3de;
                              if (iVar2 != 0) {
                                lVar1 = 0xc1e123e9dd6abb7;
                              }
                            }
                            else if (lVar3 == 0x478bb03e8335ed58) {
                              DAT_0021c900 = DAT_0021c900 ^ 0x74;
                              _DAT_0021c8e0 = _DAT_0021c8e0 ^ 0x7474747474747474;
                              uRam000000000021c8e8 = uRam000000000021c8e8 ^ 0x7474747474747474;
                              _DAT_0021c8f0 = _DAT_0021c8f0 ^ 0x7474747474747474;
                              uRam000000000021c8f8 = uRam000000000021c8f8 ^ 0x7474747474747474;
                              DAT_0021c901 = DAT_0021c901 ^ 0x74;
                              DAT_0021f68e = '\x01';
                              lVar1 = 0x2f40a79c06d86749;
                            }
                            else if (lVar3 == 0x4792129cec6a567a) {
                              lVar1 = -0x1e698f547628a824;
                            }
                          }
                          else if (lVar3 < 0x497a453e6cb30f1e) {
                            if (lVar3 < 0x48e2320e4e47af28) {
                              lVar1 = -0x283dec2459e3b2cb;
                              if ((lVar3 != 0x47dcb3a9e761af62) &&
                                 (lVar1 = lVar3, lVar3 == 0x48a371b1a1685dcd)) {
                                DAT_0021ca08 = DAT_0021ca08 ^ 0xbc;
                                _DAT_0021c9f0 = _DAT_0021c9f0 ^ 0xbcbcbcbcbcbcbcbc;
                                uRam000000000021c9f8 = uRam000000000021c9f8 ^ 0xbcbcbcbcbcbcbcbc;
                                DAT_0021ca00 = DAT_0021ca00 ^ 0xbcbcbcbcbcbcbcbc;
                                DAT_0021f695 = '\x01';
                                lVar1 = 0x663253d10f5cf24;
                              }
                            }
                            else if (lVar3 == 0x48e2320e4e47af28) {
                              lVar1 = -0x790ef64f56af8f9f;
                              if (DAT_0021f694 == '\0') {
                                lVar1 = -0x174f8d80f4c2fa28;
                              }
                            }
                            else if (lVar3 == 0x48eb73ef44c24496) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3ac);
                              lVar1 = -0x4f01b5b26079cb73;
                              if (iVar2 != 0) {
                                lVar1 = -0xd96ed9de873c94f;
                              }
                            }
                            else if (lVar3 == 0x4930e5ff59a63d98) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3b0);
                              lVar1 = 0x685bf3f83f8318e8;
                              if (iVar2 != 0) {
                                lVar1 = 0x7ad06382c76d8907;
                              }
                            }
                          }
                          else if (lVar3 < 0x4bc7ca523bdd439e) {
                            if (lVar3 == 0x497a453e6cb30f1e) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f418);
                              lVar1 = -0x71eeb9127430d185;
                              if (iVar2 != 0) {
                                lVar1 = -0x5c420429114e188;
                              }
                            }
                            else {
                              lVar1 = -0x42ae6dd5b623a2ae;
                              if ((lVar3 != 0x4ae0fee2b7817c09) &&
                                 (lVar1 = lVar3, lVar3 == 0x4af3c3c42e1259de)) {
                                lVar1 = -0xab20af63b321c9d;
                              }
                            }
                          }
                          else if (lVar3 == 0x4bc7ca523bdd439e) {
                            lVar1 = -0x6b0b3269d90ff18;
                            if (DAT_0021f698 == '\0') {
                              lVar1 = -0xcec91e3997b2fb7;
                            }
                          }
                          else if (lVar3 == 0x4cc37e94ed8488f0) {
                            DAT_0021f3dc = 0;
                            lVar1 = -0x74b80c1d40f5a6dc;
                          }
                          else if (lVar3 == 0x4d5d29824f4967f5) {
                            lVar1 = 0x3a9954ad82ffa048;
                            if (DAT_0021f67b == '\0') {
                              lVar1 = -0x4b96d5fba611650a;
                            }
                          }
                        }
                        else if (lVar3 < 0x593120ea5b9c453c) {
                          if (lVar3 < 0x55c1a9b2fdeee252) {
                            if (lVar3 < 0x4e4bff83aab105c0) {
                              lVar1 = -0x248717d2abbdb9c5;
                              if ((lVar3 != 0x4dc82dc71b5741d9) &&
                                 (lVar1 = lVar3, lVar3 == 0x4ddb09f816eaddf9)) {
                                DAT_0021f3d0 = 0;
                                lVar1 = -0x1e698f547628a824;
                              }
                            }
                            else if (lVar3 == 0x4e4bff83aab105c0) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3c4);
                              lVar1 = -0x7c818c7b8a123434;
                              if (iVar2 != 0) {
                                lVar1 = -0x3b82eeb7afdae721;
                              }
                            }
                            else if (lVar3 == 0x4ecf333fdf08b478) {
                              DAT_0021cd20 = DAT_0021cd20 ^ 0xdd;
                              DAT_0021cd21 = DAT_0021cd21 ^ 0xdd;
                              DAT_0021cd23 = DAT_0021cd23 ^ 0xdd;
                              DAT_0021cd22 = DAT_0021cd22 ^ 0xdd;
                              _DAT_0021cd10 = _DAT_0021cd10 ^ 0xdddddddddddddddd;
                              uRam000000000021cd18 = uRam000000000021cd18 ^ 0xdddddddddddddddd;
                              DAT_0021f6ae = '\x01';
                              lVar1 = 0x570598bb43671b46;
                            }
                            else if (lVar3 == 0x50743118d2d985f0) {
                              lVar1 = -0x562e8781ba89f5e4;
                            }
                          }
                          else if (lVar3 < 0x57f94ec4e30fce80) {
                            lVar1 = 0x25c043a1e458bb2f;
                            if (lVar3 != 0x55c1a9b2fdeee252) {
                              if (lVar3 == 0x56cf395fa7e225f9) {
                                _DAT_0021cd70 = _DAT_0021cd70 ^ 0x9999999999999999;
                                uRam000000000021cd78 = uRam000000000021cd78 ^ 0x9999999999999999;
                                DAT_0021cd80 = DAT_0021cd80 ^ 0x9999999999999999;
                                DAT_0021f6b1 = '\x01';
                                lVar1 = -0x7b0531c8e02998cb;
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == 0x570598bb43671b46) {
                                  DAT_0021f3d4 = 0;
                                  lVar1 = 0x75dc6b5f9cabc466;
                                }
                              }
                            }
                          }
                          else if (lVar3 == 0x57f94ec4e30fce80) {
                            _DAT_0021cb90 = _DAT_0021cb90 ^ 0x5d5d5d5d5d5d5d5d;
                            uRam000000000021cb98 = uRam000000000021cb98 ^ 0x5d5d5d5d5d5d5d5d;
                            s_5p_8_____0021cba0._0_8_ =
                                 s_5p_8_____0021cba0._0_8_ ^ 0x5d5d5d5d5d5d5d5d;
                            DAT_0021f6a3 = '\x01';
                            lVar1 = 0x25c043a1e458bb2f;
                          }
                          else if (lVar3 == 0x580318e8dfdd8386) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f390);
                            lVar1 = 0x2e664d2afca28034;
                            if (iVar2 != 0) {
                              lVar1 = -0x1099d903d2d9bbfc;
                            }
                          }
                          else if (lVar3 == 0x584f91cbbf5031a1) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f384);
                            lVar1 = 0xe21fedf0419cc21;
                            if (iVar2 != 0) {
                              lVar1 = 0x16f769392dd6ee15;
                            }
                          }
                        }
                        else if (lVar3 < 0x5ded9a2423b0f354) {
                          if (lVar3 < 0x5b71dabc82c958b8) {
                            if (lVar3 == 0x593120ea5b9c453c) {
                              lVar1 = -0x382004ae3a779619;
                              if (DAT_0021f6b2 == '\0') {
                                lVar1 = -0x13817eb3f325d285;
                              }
                            }
                            else if (lVar3 == 0x593c712d6ed2cdc1) {
                              DAT_0021f3d8 = 0;
                              lVar1 = -0xbbd141c4547c454;
                            }
                          }
                          else if (lVar3 == 0x5b71dabc82c958b8) {
                            lVar1 = -0x6e83584ff66aa582;
                            if (DAT_0021f6af == '\0') {
                              lVar1 = -0x1f80c7998a1f4679;
                            }
                          }
                          else if (lVar3 == 0x5cf9af05cb0d7345) {
                            DAT_0021f350 = 0;
                            lVar1 = -0xcb25e3cf5c5d1c2;
                          }
                          else if (lVar3 == 0x5d34d65ba8521957) {
                            lVar1 = -0x5b65650c8dbcc4a7;
                            if (DAT_0021f6bb == '\0') {
                              lVar1 = -0x4f9638727ea71bc5;
                            }
                          }
                        }
                        else if (lVar3 < 0x5eba8fa9b8bf3d3f) {
                          lVar1 = -0x4fc708d50990ccec;
                          if (lVar3 != 0x5ded9a2423b0f354) {
                            if (lVar3 == 0x5df1c66c6b17ba94) {
                              s_PR_VARlCA_G_P__lEVA3_0021cccf[0x11] =
                                   s_PR_VARlCA_G_P__lEVA3_0021cccf[0x11] ^ 0x33;
                              s_PR_VARlCA_G_P__lEVA3_0021cccf[0x12] =
                                   s_PR_VARlCA_G_P__lEVA3_0021cccf[0x12] ^ 0x33;
                              DAT_0021f6ac = '\x01';
                              _DAT_0021ccc0 = _DAT_0021ccc0 ^ 0x3333333333333333;
                              uRam000000000021ccc8 = uRam000000000021ccc8 ^ 0x3333333333333333;
                              s_PR_VARlCA_G_P__lEVA3_0021cccf[0x13] =
                                   s_PR_VARlCA_G_P__lEVA3_0021cccf[0x13] ^ 0x33;
                              s_PR_VARlCA_G_P__lEVA3_0021cccf._1_8_ =
                                   s_PR_VARlCA_G_P__lEVA3_0021cccf._1_8_ ^ 0x3333333333333333;
                              s_PR_VARlCA_G_P__lEVA3_0021cccf._9_8_ =
                                   s_PR_VARlCA_G_P__lEVA3_0021cccf._9_8_ ^ 0x3333333333333333;
                              lVar1 = 0x7592808094afd113;
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x5eb3990af1eb6230) {
                                DAT_0021cf98 = DAT_0021cf98 ^ 0x7c;
                                DAT_0021cf99 = DAT_0021cf99 ^ 0x7c;
                                DAT_0021cf9b = DAT_0021cf9b ^ 0x7c;
                                DAT_0021cf9a = DAT_0021cf9a ^ 0x7c;
                                DAT_0021cf90 = DAT_0021cf90 ^ 0x7c7c7c7c7c7c7c7c;
                                DAT_0021f6c3 = '\x01';
                                lVar1 = 0x640127afa8318c63;
                              }
                            }
                          }
                        }
                        else {
                          lVar1 = -0x6a5a906d80283b3a;
                          if (lVar3 != 0x5eba8fa9b8bf3d3f) {
                            if (lVar3 == 0x5f45bc70951b60fb) {
                              lVar1 = 0x69b7b4277ae7a0e;
                              if (DAT_0021f6b5 == '\0') {
                                lVar1 = -0x551292a9ff739055;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x605a32b7e00a0508) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f3f0);
                                lVar1 = 0x5f45bc70951b60fb;
                                if (iVar2 != 0) {
                                  lVar1 = 0x64eb8df776a0a097;
                                }
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x6eb5c68fa75595fa) {
                        if (lVar3 < 0x692695899e1ee24e) {
                          if (lVar3 < 0x662013c6c4946a7b) {
                            if (lVar3 < 0x640127afa8318c63) {
                              if (lVar3 == 0x626b6c2a054da67e) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f3e4);
                                lVar1 = 0x593120ea5b9c453c;
                                if (iVar2 != 0) {
                                  lVar1 = 0x7b6cd8a78218bd24;
                                }
                              }
                              else if (lVar3 == 0x63343d7496ecf449) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f394);
                                lVar1 = -0x75e6ce9d443c131e;
                                if (iVar2 != 0) {
                                  lVar1 = -0x27d20edb58d568eb;
                                }
                              }
                            }
                            else if (lVar3 == 0x640127afa8318c63) {
                              DAT_0021f428 = 0;
                              lVar1 = -0x4b2f34297c87900a;
                            }
                            else {
                              lVar1 = 0x605a32b7e00a0508;
                              if ((lVar3 != 0x64eb8df776a0a097) &&
                                 (lVar1 = lVar3, lVar3 == 0x6564ad592c761b30)) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f3c8);
                                lVar1 = -0x5568d2d10870cd16;
                                if (iVar2 != 0) {
                                  lVar1 = -0x1700f82a3079e6ec;
                                }
                              }
                            }
                          }
                          else if (lVar3 < 0x682354860f0246ef) {
                            if (lVar3 == 0x662013c6c4946a7b) {
                              DAT_0021f414 = 0;
                              lVar1 = -0x23d11bc296f30bf7;
                            }
                            else if (lVar3 == 0x666f5881e0777d21) {
                              DAT_0021cb40 = DAT_0021cb40 ^ 0x15;
                              _DAT_0021cb20 = _DAT_0021cb20 ^ 0x1515151515151515;
                              uRam000000000021cb28 = uRam000000000021cb28 ^ 0x1515151515151515;
                              _DAT_0021cb30 = _DAT_0021cb30 ^ 0x1515151515151515;
                              uRam000000000021cb38 = uRam000000000021cb38 ^ 0x1515151515151515;
                              DAT_0021f69f = '\x01';
                              lVar1 = -0x27dcc213e25f7af4;
                            }
                            else if (lVar3 == 0x673582748bb94ab0) {
                              lVar1 = 0x8c62057a7158526;
                            }
                          }
                          else if (lVar3 == 0x682354860f0246ef) {
                            DAT_0021cf30 = DAT_0021cf30 ^ 0xe5;
                            DAT_0021cf31 = DAT_0021cf31 ^ 0xe5;
                            DAT_0021cf32 = DAT_0021cf32 ^ 0xe5;
                            _DAT_0021cf20 = _DAT_0021cf20 ^ 0xe5e5e5e5e5e5e5e5;
                            uRam000000000021cf28 = uRam000000000021cf28 ^ 0xe5e5e5e5e5e5e5e5;
                            DAT_0021f6bf = '\x01';
                            lVar1 = -0x1f94e148600fd9ad;
                          }
                          else if (lVar3 == 0x685bf3f83f8318e8) {
                            lVar1 = -0x395c05d374146914;
                            if (DAT_0021f6a5 == '\0') {
                              lVar1 = 0x395b3e8842789284;
                            }
                          }
                          else if (lVar3 == 0x68d4dbe8fffc5ba5) {
                            lVar1 = -0x5017da1e6648d2b6;
                          }
                        }
                        else if (lVar3 < 0x6ad8071808b2fed3) {
                          if (lVar3 < 0x69aa946d14c3999b) {
                            lVar1 = 0x715dc3274bbf44f8;
                            if ((lVar3 != 0x692695899e1ee24e) &&
                               (lVar1 = lVar3, lVar3 == 0x69a3fb3fb834cb4d)) {
                              lVar1 = -0x73fb90b6486c7c6f;
                            }
                          }
                          else {
                            lVar1 = 0x1b5b4f4a3f58ee4b;
                            if (lVar3 != 0x69aa946d14c3999b) {
                              if (lVar3 == 0x69ffe6f6a23ee570) {
                                lVar1 = -0x64d7f846fafd15e9;
                                if (DAT_0021f695 == '\0') {
                                  lVar1 = 0x48a371b1a1685dcd;
                                }
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == 0x6ab76382404d8c7c) {
                                  _DAT_0021cbb0 = _DAT_0021cbb0 ^ 0x1f1f1f1f1f1f1f1f;
                                  uRam000000000021cbb8 = uRam000000000021cbb8 ^ 0x1f1f1f1f1f1f1f1f;
                                  _DAT_0021cbc0 = _DAT_0021cbc0 ^ 0x1f1f1f1f1f1f1f1f;
                                  uRam000000000021cbc8 = uRam000000000021cbc8 ^ 0x1f1f1f1f1f1f1f1f;
                                  DAT_0021cbd8 = DAT_0021cbd8 ^ 0x1f;
                                  DAT_0021cbd0 = DAT_0021cbd0 ^ 0x1f1f1f1f1f1f1f1f;
                                  DAT_0021f6a4 = '\x01';
                                  lVar1 = 0x1b5b4f4a3f58ee4b;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 < 0x6ca31c62cc1485fa) {
                          lVar1 = -0x57eada46b965af4c;
                          if (lVar3 != 0x6ad8071808b2fed3) {
                            if (lVar3 == 0x6b3ee9fb586513dc) {
                              lVar1 = 0x7f45a06d341c309c;
                              if (DAT_0021f6a7 == '\0') {
                                lVar1 = 0x163b21dc9aaeda16;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x6b71b155612b92ff) {
                                DAT_0021ca98 = DAT_0021ca98 ^ 0x29;
                                DAT_0021ca99 = DAT_0021ca99 ^ 0x29;
                                DAT_0021ca9a = DAT_0021ca9a ^ 0x29;
                                DAT_0021ca9c = DAT_0021ca9c ^ 0x29;
                                DAT_0021ca9b = DAT_0021ca9b ^ 0x29;
                                DAT_0021ca90 = DAT_0021ca90 ^ 0x2929292929292929;
                                DAT_0021f69a = '\x01';
                                lVar1 = -0x5a5297691d74482d;
                              }
                            }
                          }
                        }
                        else if (lVar3 == 0x6ca31c62cc1485fa) {
                          lVar1 = -0xdda62df3fbdc442;
                          if (DAT_0021f6be == '\0') {
                            lVar1 = 0x46982ca6d86fd3f4;
                          }
                        }
                        else {
                          lVar1 = 0x3a0c73e3397b09e4;
                          if ((lVar3 != 0x6dbfb2d035773ff3) &&
                             (lVar1 = lVar3, lVar3 == 0x6dc5f16e57580e42)) {
                            DAT_0021f408 = 0;
                            lVar1 = 0x3cf612dce28d5354;
                          }
                        }
                      }
                      else if (lVar3 < 0x7610f3f29cae43f2) {
                        if (lVar3 < 0x722232e8301a113f) {
                          if (lVar3 < 0x70052c10865bca47) {
                            if (lVar3 == 0x6eb5c68fa75595fa) {
                              DAT_0021c968 = DAT_0021c968 ^ 0xc1;
                              _DAT_0021c950 = _DAT_0021c950 ^ 0xc1c1c1c1c1c1c1c1;
                              uRam000000000021c958 = uRam000000000021c958 ^ 0xc1c1c1c1c1c1c1c1;
                              DAT_0021c969 = DAT_0021c969 ^ 0xc1;
                              DAT_0021c96a = DAT_0021c96a ^ 0xc1;
                              DAT_0021c960 = DAT_0021c960 ^ 0xc1c1c1c1c1c1c1c1;
                              DAT_0021f691 = '\x01';
                              lVar1 = 0xbf7705b22c59245;
                            }
                            else if (lVar3 == 0x6f5929ae29751780) {
                              DAT_0021f37c = 0;
                              lVar1 = -0x2680b6c5de36d34e;
                            }
                          }
                          else if (lVar3 == 0x70052c10865bca47) {
                            DAT_0021f3c0 = 0;
                            lVar1 = -0x436ee720be00bd32;
                          }
                          else if (lVar3 == 0x70ae8bbdb0445bab) {
                            DAT_0021caf0 = DAT_0021caf0 ^ 6;
                            DAT_0021caf1 = DAT_0021caf1 ^ 6;
                            DAT_0021caf2 = DAT_0021caf2 ^ 6;
                            DAT_0021caf3 = DAT_0021caf3 ^ 6;
                            DAT_0021caf4 = DAT_0021caf4 ^ 6;
                            DAT_0021caf5 = DAT_0021caf5 ^ 6;
                            DAT_0021caf6 = DAT_0021caf6 ^ 6;
                            _DAT_0021cae0 = _DAT_0021cae0 ^ 0x606060606060606;
                            uRam000000000021cae8 = uRam000000000021cae8 ^ 0x606060606060606;
                            DAT_0021f69d = '\x01';
                            lVar1 = -0x749ba309b160912b;
                          }
                          else if (lVar3 == 0x715dc3274bbf44f8) {
                            DAT_0021f374 = 0;
                            lVar1 = -0x248717d2abbdb9c5;
                          }
                        }
                        else if (lVar3 < 0x74ce24779109e63c) {
                          lVar1 = -0x50994f47f3a48332;
                          if (lVar3 != 0x722232e8301a113f) {
                            if (lVar3 == 0x739eda5c23529b93) {
                              lVar1 = 0x227633c85a010475;
                              if (DAT_0021f69f == '\0') {
                                lVar1 = 0x666f5881e0777d21;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x748695b54e546dc3) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f368);
                                lVar1 = -0x741f3f9b9c8e017e;
                                if (iVar2 != 0) {
                                  lVar1 = 0x3ec8a2d0341496c4;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 == 0x74ce24779109e63c) {
                          DAT_0021f394 = 0;
                          lVar1 = 0x580318e8dfdd8386;
                        }
                        else if (lVar3 == 0x7592808094afd113) {
                          DAT_0021f3cc = 0;
                          lVar1 = 0x6564ad592c761b30;
                        }
                        else if (lVar3 == 0x75dc6b5f9cabc466) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f3d0);
                          lVar1 = 0x401c3d77c2d8a6ba;
                          if (iVar2 != 0) {
                            lVar1 = -0x7cc52ca8c83ce441;
                          }
                        }
                      }
                      else if (lVar3 < 0x7b6cd8a78218bd24) {
                        if (lVar3 < 0x7952b2681778921a) {
                          lVar1 = 0x7990b37d240fbb71;
                          if ((lVar3 != 0x7610f3f29cae43f2) &&
                             (lVar1 = lVar3, lVar3 == 0x789d755abe031216)) {
                            lVar1 = -0x7428cea90a3236d5;
                          }
                        }
                        else {
                          lVar1 = -0x7368917e5ab1285c;
                          if (lVar3 != 0x7952b2681778921a) {
                            if (lVar3 == 0x7990b37d240fbb71) {
                              DAT_0021f3fc = 0;
                              lVar1 = 0x1ae2a8cbc7c20e19;
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x7ad06382c76d8907) {
                                lVar1 = 0x4930e5ff59a63d98;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x7d41ee1d37870109) {
                        lVar1 = 0x626b6c2a054da67e;
                        if (lVar3 != 0x7b6cd8a78218bd24) {
                          if (lVar3 == 0x7b91c9e5bfa87b6c) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f298);
                            lVar1 = 0x1022bd810cccdf04;
                            if (iVar2 != 0) {
                              lVar1 = 0x3177db33ce154e5;
                            }
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == 0x7c09026e7ef0be76) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f398);
                              lVar1 = 0x739eda5c23529b93;
                              if (iVar2 != 0) {
                                lVar1 = -0x48b81812e43d7cd5;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 == 0x7d41ee1d37870109) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f428);
                        lVar1 = -0x666238c4a6f70ef0;
                        if (iVar2 != 0) {
                          lVar1 = 0x3feab2b571a96d99;
                        }
                      }
                      else {
                        lVar1 = 0x3367fb9f654e23cb;
                        if ((lVar3 != 0x7f0211edad7abf7c) &&
                           (lVar1 = lVar3, lVar3 == 0x7f45a06d341c309c)) {
                          lVar1 = -0x160b35ef5ce6a3ed;
                        }
                      }
                    }
                    if (-0x4d4fe61e1b10d684 < lVar3) break;
                    if (lVar3 < -0x6a41f5466a250461) {
                      if (lVar3 < -0x75e6ce9d443c131e) {
                        if (lVar3 < -0x7a88e7ad8401b074) {
                          if (lVar3 < -0x7c818c7b8a123434) {
                            if (lVar3 < -0x7ce9415b4fcd5ec6) {
                              if (lVar3 == -0x7f9b2c32b7cd6bc4) {
                                DAT_0021ce50 = DAT_0021ce50 ^ 0xb9;
                                DAT_0021ce51 = DAT_0021ce51 ^ 0xb9;
                                DAT_0021ce54 = DAT_0021ce54 ^ 0xb9;
                                DAT_0021ce52 = DAT_0021ce52 ^ 0xb9;
                                DAT_0021ce53 = DAT_0021ce53 ^ 0xb9;
                                DAT_0021ce55 = DAT_0021ce55 ^ 0xb9;
                                _DAT_0021ce40 = _DAT_0021ce40 ^ 0xb9b9b9b9b9b9b9b9;
                                uRam000000000021ce48 = uRam000000000021ce48 ^ 0xb9b9b9b9b9b9b9b9;
                                DAT_0021f6b7 = '\x01';
                                lVar1 = -0x28de8d5a5397b305;
                              }
                              else if (lVar3 == -0x7e7764c337185d91) {
                                lVar1 = -0x6b58ce94abb5bd77;
                              }
                            }
                            else if (lVar3 == -0x7ce9415b4fcd5ec6) {
                              DAT_0021cb10 = DAT_0021cb10 ^ 0x92;
                              DAT_0021cb11 = DAT_0021cb11 ^ 0x92;
                              DAT_0021cb14 = DAT_0021cb14 ^ 0x92;
                              DAT_0021cb12 = DAT_0021cb12 ^ 0x92;
                              DAT_0021cb13 = DAT_0021cb13 ^ 0x92;
                              DAT_0021cb15 = DAT_0021cb15 ^ 0x92;
                              _DAT_0021cb00 = _DAT_0021cb00 ^ 0x9292929292929292;
                              uRam000000000021cb08 = uRam000000000021cb08 ^ 0x9292929292929292;
                              DAT_0021f69e = '\x01';
                              lVar1 = 0x74ce24779109e63c;
                            }
                            else if (lVar3 == -0x7cc7d813c9212a7a) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f364);
                              lVar1 = -0x1ce5e6a4847571dc;
                              if (iVar2 != 0) {
                                lVar1 = -0x31962dbd86a75b5c;
                              }
                            }
                            else if (lVar3 == -0x7cc52ca8c83ce441) {
                              lVar1 = 0x75dc6b5f9cabc466;
                            }
                          }
                          else if (lVar3 < -0x7c29516b80152c85) {
                            if (lVar3 == -0x7c818c7b8a123434) {
                              lVar1 = 0x47dcb3a9e761af62;
                              if (DAT_0021f6aa == '\0') {
                                lVar1 = 0x30537398dff57f51;
                              }
                            }
                            else if (lVar3 == -0x7c33fee57db6e3de) {
                              lVar1 = -0x2584dec680601261;
                              if (DAT_0021f6b0 == '\0') {
                                lVar1 = -0x79622e24e8b414e8;
                              }
                            }
                          }
                          else {
                            lVar1 = -0x7a88e7ad8401b074;
                            if (lVar3 != -0x7c29516b80152c85) {
                              if (lVar3 == -0x7c1629b7e1ab1463) {
                                lVar1 = -0x1fede5bdb1d15a28;
                                if (DAT_0021f691 == '\0') {
                                  lVar1 = 0x6eb5c68fa75595fa;
                                }
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == -0x7b0531c8e02998cb) {
                                  DAT_0021f3e0 = 0;
                                  lVar1 = 0x4743ed1ddb003bc3;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 < -0x791e9cec5fe5f95c) {
                          if (lVar3 < -0x79aedc7e8afe1ef9) {
                            if (lVar3 == -0x7a88e7ad8401b074) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f388);
                              lVar1 = 0x4272471328575692;
                              if (iVar2 != 0) {
                                lVar1 = -0x7c29516b80152c85;
                              }
                            }
                            else if (lVar3 == -0x7a7b772342a3a9f1) {
                              DAT_0021cb88 = DAT_0021cb88 ^ 0x14;
                              DAT_0021cb89 = DAT_0021cb89 ^ 0x14;
                              DAT_0021cb8b = DAT_0021cb8b ^ 0x14;
                              DAT_0021cb8a = DAT_0021cb8a ^ 0x14;
                              DAT_0021cb8c = DAT_0021cb8c ^ 0x14;
                              DAT_0021cb8d = DAT_0021cb8d ^ 0x14;
                              DAT_0021cb80 = DAT_0021cb80 ^ 0x1414141414141414;
                              DAT_0021f6a2 = '\x01';
                              lVar1 = 0x3367fb9f654e23cb;
                            }
                          }
                          else if (lVar3 == -0x79aedc7e8afe1ef9) {
                            DAT_0021f3e4 = 0;
                            lVar1 = -0x7428cea90a3236d5;
                          }
                          else if (lVar3 == -0x79622e24e8b414e8) {
                            _DAT_0021cd50 = _DAT_0021cd50 ^ 0x1010101010101010;
                            uRam000000000021cd58 = uRam000000000021cd58 ^ 0x1010101010101010;
                            DAT_0021cd60 = DAT_0021cd60 ^ 0x1010101010101010;
                            DAT_0021f6b0 = '\x01';
                            lVar1 = 0x4cc37e94ed8488f0;
                          }
                          else if (lVar3 == -0x794a0dcb32dfba6d) {
                            lVar1 = -0x2433de9d9459e086;
                            if (DAT_0021f6a9 == '\0') {
                              lVar1 = 0x32bd9012a6e79e28;
                            }
                          }
                        }
                        else if (lVar3 < -0x7759a3c6bb93bbd3) {
                          if (lVar3 == -0x791e9cec5fe5f95c) {
                            DAT_0021ce60 = DAT_0021ce60 ^ 0xdc;
                            DAT_0021ce61 = DAT_0021ce61 ^ 0xdc;
                            DAT_0021ce62 = DAT_0021ce62 ^ 0xdc;
                            DAT_0021ce63 = DAT_0021ce63 ^ 0xdc;
                            DAT_0021ce65 = DAT_0021ce65 ^ 0xdc;
                            DAT_0021ce64 = DAT_0021ce64 ^ 0xdc;
                            DAT_0021ce66 = DAT_0021ce66 ^ 0xdc;
                            DAT_0021ce58 = DAT_0021ce58 ^ 0xdcdcdcdcdcdcdcdc;
                            DAT_0021f6b8 = '\x01';
                            lVar1 = 0x7990b37d240fbb71;
                          }
                          else {
                            lVar1 = -0x59949fcbcd44a83b;
                            if ((lVar3 != -0x790ef64f56af8f9f) &&
                               (lVar1 = lVar3, lVar3 == -0x78a83b5b9fce00b2)) {
                              lVar1 = 0x3c0f171d81262162;
                            }
                          }
                        }
                        else {
                          lVar1 = 0x28d24ed58bb0e734;
                          if (lVar3 != -0x7759a3c6bb93bbd3) {
                            if (lVar3 == -0x76db28d5517706d2) {
                              lVar1 = -0x75f60d4f4f1ece6d;
                              if (DAT_0021f6b1 == '\0') {
                                lVar1 = 0x56cf395fa7e225f9;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == -0x75f60d4f4f1ece6d) {
                                lVar1 = -0x7b0531c8e02998cb;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < -0x72d5b2dc4548f4e5) {
                        if (lVar3 < -0x74239bebd0569f12) {
                          if (lVar3 < -0x74b80c1d40f5a6dc) {
                            if (lVar3 == -0x75e6ce9d443c131e) {
                              lVar1 = -0x627f78b8cbd30357;
                              if (DAT_0021f69e == '\0') {
                                lVar1 = -0x7ce9415b4fcd5ec6;
                              }
                            }
                            else if (lVar3 == -0x753a2421353a68a2) {
                              DAT_0021cb68 = DAT_0021cb68 ^ 0x7c;
                              DAT_0021cb69 = DAT_0021cb69 ^ 0x7c;
                              DAT_0021cb6a = DAT_0021cb6a ^ 0x7c;
                              _DAT_0021cb50 = _DAT_0021cb50 ^ 0x7c7c7c7c7c7c7c7c;
                              uRam000000000021cb58 = uRam000000000021cb58 ^ 0x7c7c7c7c7c7c7c7c;
                              DAT_0021cb60 = DAT_0021cb60 ^ 0x7c7c7c7c7c7c7c7c;
                              DAT_0021f6a0 = '\x01';
                              lVar1 = 0x28d24ed58bb0e734;
                            }
                          }
                          else if (lVar3 == -0x74b80c1d40f5a6dc) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f3d8);
                            lVar1 = 0x5b71dabc82c958b8;
                            if (iVar2 != 0) {
                              lVar1 = -0x640e9afcd9d59424;
                            }
                          }
                          else if (lVar3 == -0x749ba309b160912b) {
                            DAT_0021f390 = 0;
                            lVar1 = -0x6b58ce94abb5bd77;
                          }
                          else if (lVar3 == -0x7428cea90a3236d5) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f3e0);
                            lVar1 = -0x76db28d5517706d2;
                            if (iVar2 != 0) {
                              lVar1 = 0x789d755abe031216;
                            }
                          }
                        }
                        else if (lVar3 < -0x7368917e5ab1285c) {
                          if (lVar3 == -0x74239bebd0569f12) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f3ec);
                            lVar1 = -0x57d427ac5800a517;
                            if (iVar2 != 0) {
                              lVar1 = -0x45fa588128210ec4;
                            }
                          }
                          else if (lVar3 == -0x741f3f9b9c8e017e) {
                            lVar1 = -0x4adf6fd3f1f8a6fe;
                            if (DAT_0021f693 == '\0') {
                              lVar1 = -0x53e8788836a8e48d;
                            }
                          }
                          else if (lVar3 == -0x73fb90b6486c7c6f) {
                            DAT_0021f3c8 = 0;
                            lVar1 = 0x4e4bff83aab105c0;
                          }
                        }
                        else if (lVar3 == -0x7368917e5ab1285c) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f3a0);
                          lVar1 = 0x302ad501d969e85a;
                          if (iVar2 != 0) {
                            lVar1 = 0x7952b2681778921a;
                          }
                        }
                        else if (lVar3 == -0x732c76896e171f03) {
                          lVar1 = -0x2ef323ec5b63f416;
                          if (DAT_0021f6ae == '\0') {
                            lVar1 = 0x4ecf333fdf08b478;
                          }
                        }
                        else if (lVar3 == -0x7320e8c862582bbd) {
                          lVar1 = -0x1375256aacb16b1c;
                          if (DAT_0021f6b3 == '\0') {
                            lVar1 = -0x15bfe279fa90eafe;
                          }
                        }
                      }
                      else if (lVar3 < -0x6e83584ff66aa582) {
                        if (lVar3 < -0x71eeb9127430d185) {
                          lVar1 = -0x32183a452afd59c6;
                          if ((lVar3 != -0x72d5b2dc4548f4e5) &&
                             (lVar1 = lVar3, lVar3 == -0x71f1103100ca2c32)) {
                            lVar1 = -0x1e203c4aceef0b3f;
                            if (DAT_0021f69c == '\0') {
                              lVar1 = 0x7cc0f569d5d36b6;
                            }
                          }
                        }
                        else if (lVar3 == -0x71eeb9127430d185) {
                          lVar1 = -0x677b73b78b3950af;
                          if (DAT_0021f6bf == '\0') {
                            lVar1 = 0x682354860f0246ef;
                          }
                        }
                        else if (lVar3 == -0x71a3b7ef5a3bb1ed) {
                          lVar1 = 0x144ca716b9ef087d;
                          if (DAT_0021f6b6 == '\0') {
                            lVar1 = 0x44fd100218a9bacb;
                          }
                        }
                        else if (lVar3 == -0x6ef333dd6d0e189d) {
                          DAT_0021cee0 = DAT_0021cee0 ^ 0xe0;
                          DAT_0021cee1 = DAT_0021cee1 ^ 0xe0;
                          DAT_0021cee3 = DAT_0021cee3 ^ 0xe0;
                          DAT_0021cee2 = DAT_0021cee2 ^ 0xe0;
                          _DAT_0021ced0 = _DAT_0021ced0 ^ 0xe0e0e0e0e0e0e0e0;
                          uRam000000000021ced8 = uRam000000000021ced8 ^ 0xe0e0e0e0e0e0e0e0;
                          DAT_0021f6bc = '\x01';
                          lVar1 = -0x5017da1e6648d2b6;
                        }
                      }
                      else if (lVar3 < -0x6b9547eed49dc57a) {
                        lVar1 = 0x593c712d6ed2cdc1;
                        if (((lVar3 != -0x6e83584ff66aa582) &&
                            (lVar1 = 0x2f40a79c06d86749, lVar3 != -0x6cde44c0d957bcbf)) &&
                           (lVar1 = lVar3, lVar3 == -0x6c2a031b40553915)) {
                          lVar1 = -0xf8ce93be88fcc48;
                          if (DAT_0021f6c0 == '\0') {
                            lVar1 = -0x3109cf76909bfda4;
                          }
                        }
                      }
                      else if (lVar3 == -0x6b9547eed49dc57a) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f350);
                        lVar1 = 0x2b796aef8b8ff357;
                        if (iVar2 != 0) {
                          lVar1 = 0x26786d387123267c;
                        }
                      }
                      else if (lVar3 == -0x6b58ce94abb5bd77) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f38c);
                        lVar1 = -0x71f1103100ca2c32;
                        if (iVar2 != 0) {
                          lVar1 = -0x7e7764c337185d91;
                        }
                      }
                      else if (lVar3 == -0x6a5a906d80283b3a) {
                        DAT_0021f3a0 = 0;
                        lVar1 = 0x3c0f171d81262162;
                      }
                    }
                    else if (lVar3 < -0x59949fcbcd44a83b) {
                      if (lVar3 < -0x627f78b8cbd30357) {
                        if (lVar3 < -0x64a14186f99a34cd) {
                          if (lVar3 < -0x666238c4a6f70ef0) {
                            if (lVar3 == -0x6a41f5466a250461) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f3fc);
                              lVar1 = -0x3cf2a9bbbadb1104;
                              if (iVar2 != 0) {
                                lVar1 = 0x2d3fab30bff8ed93;
                              }
                            }
                            else if (lVar3 == -0x677b73b78b3950af) {
                              lVar1 = -0x1f94e148600fd9ad;
                            }
                          }
                          else if (lVar3 == -0x666238c4a6f70ef0) {
                            lVar1 = -0x2f88a7d9884c8f7f;
                            if (DAT_0021f6c3 == '\0') {
                              lVar1 = 0x5eb3990af1eb6230;
                            }
                          }
                          else {
                            lVar1 = -0x34057e279c80b9af;
                            if ((lVar3 != -0x64f09d75547f6c9b) &&
                               (lVar1 = lVar3, lVar3 == -0x64d7f846fafd15e9)) {
                              lVar1 = 0x663253d10f5cf24;
                            }
                          }
                        }
                        else if (lVar3 < -0x640e9afcd9d59424) {
                          lVar1 = -0x3bd5139e863058e;
                          if (((lVar3 != -0x64a14186f99a34cd) &&
                              (lVar1 = 0x376d3c2c3dfb1bd9, lVar3 != -0x646a880db18ebfa8)) &&
                             (lVar1 = lVar3, lVar3 == -0x6425070a08009ca9)) {
                            DAT_0021c9a0 = DAT_0021c9a0 ^ 0xeb;
                            DAT_0021c9a1 = DAT_0021c9a1 ^ 0xeb;
                            _DAT_0021c970 = _DAT_0021c970 ^ 0xebebebebebebebeb;
                            uRam000000000021c978 = uRam000000000021c978 ^ 0xebebebebebebebeb;
                            _DAT_0021c980 = _DAT_0021c980 ^ 0xebebebebebebebeb;
                            uRam000000000021c988 = uRam000000000021c988 ^ 0xebebebebebebebeb;
                            _DAT_0021c990 = _DAT_0021c990 ^ 0xebebebebebebebeb;
                            uRam000000000021c998 = uRam000000000021c998 ^ 0xebebebebebebebeb;
                            DAT_0021f692 = '\x01';
                            lVar1 = 0x34ae1e47f43a56f6;
                          }
                        }
                        else {
                          lVar1 = -0x74b80c1d40f5a6dc;
                          if (((lVar3 != -0x640e9afcd9d59424) &&
                              (lVar1 = -0x2b5ce874daacfbb7, lVar3 != -0x63fdafecacd67af6)) &&
                             (lVar1 = lVar3, lVar3 == -0x6290c84f81b1c63a)) {
                            DAT_0021cbf8 = DAT_0021cbf8 ^ 0xe0;
                            DAT_0021cbf9 = DAT_0021cbf9 ^ 0xe0;
                            DAT_0021cbf0 = DAT_0021cbf0 ^ 0xe0e0e0e0e0e0e0e0;
                            DAT_0021f6a6 = '\x01';
                            lVar1 = -0x2b5ce874daacfbb7;
                          }
                        }
                      }
                      else if (lVar3 < -0x5c85b46279d15ea3) {
                        if (lVar3 < -0x5f57a4c7f9e48340) {
                          lVar1 = 0x74ce24779109e63c;
                          if ((lVar3 != -0x627f78b8cbd30357) &&
                             (lVar1 = lVar3, lVar3 == -0x5ff5d3a8940dc152)) {
                            lVar1 = -0x5f57a4c7f9e48340;
                          }
                        }
                        else if (lVar3 == -0x5f57a4c7f9e48340) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f3b8);
                          lVar1 = 0x6b3ee9fb586513dc;
                          if (iVar2 != 0) {
                            lVar1 = -0x5ff5d3a8940dc152;
                          }
                        }
                        else if (lVar3 == -0x5da0429d9dcb81f2) {
                          DAT_0021f38c = 0;
                          lVar1 = -0x7a88e7ad8401b074;
                        }
                        else if (lVar3 == -0x5d9c42c0f017932f) {
                          lVar1 = -0xab700e369f32ef0;
                          if (DAT_0021f6ba == '\0') {
                            lVar1 = -0x1d35ba8c8b8d4302;
                          }
                        }
                      }
                      else if (lVar3 < -0x5b556e2399052bd6) {
                        lVar1 = 0x4ddb09f816eaddf9;
                        if (lVar3 != -0x5c85b46279d15ea3) {
                          if (lVar3 == -0x5c4426f3749195ad) {
                            DAT_0021f2ec = 0;
                            lVar1 = 0x7b91c9e5bfa87b6c;
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == -0x5b65650c8dbcc4a7) {
                              lVar1 = 0x6dc5f16e57580e42;
                            }
                          }
                        }
                      }
                      else {
                        lVar1 = -0x2a4a39866eb634c9;
                        if (lVar3 != -0x5b556e2399052bd6) {
                          if (lVar3 == -0x5a5297691d74482d) {
                            DAT_0021f384 = 0;
                            lVar1 = -0x2da13e23b2303993;
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == -0x5a275988820244ab) {
                              lVar1 = 0x692695899e1ee24e;
                              if (DAT_0021f696 == '\0') {
                                lVar1 = -0x4e2f866ff2b37473;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (lVar3 < -0x538353fa8fdb8a5d) {
                      if (lVar3 < -0x562e8781ba89f5e4) {
                        if (lVar3 < -0x57eada46b965af4c) {
                          if (lVar3 == -0x59949fcbcd44a83b) {
                            DAT_0021f36c = 0;
                            lVar1 = 0x748695b54e546dc3;
                          }
                          else if (lVar3 == -0x599279007049402e) {
                            lVar1 = 0x7592808094afd113;
                          }
                        }
                        else if (lVar3 == -0x57eada46b965af4c) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f40c);
                          lVar1 = 0x2e435fe7314e62e;
                          if (iVar2 != 0) {
                            lVar1 = 0x6ad8071808b2fed3;
                          }
                        }
                        else if (lVar3 == -0x57d427ac5800a517) {
                          lVar1 = 0x4af3c3c42e1259de;
                          if (DAT_0021f6b4 == '\0') {
                            lVar1 = -0xfc25a1dde3c785c;
                          }
                        }
                        else if (lVar3 == -0x567bacb4e5314217) {
                          lVar1 = 0x27a4ecd09cc7862b;
                          if (DAT_0021f699 == '\0') {
                            lVar1 = 0x1de7a89e298f6287;
                          }
                        }
                      }
                      else if (lVar3 < -0x551292a9ff739055) {
                        if (lVar3 == -0x562e8781ba89f5e4) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f35c);
                          lVar1 = 0x2969b6bc69e32041;
                          if (iVar2 != 0) {
                            lVar1 = 0x50743118d2d985f0;
                          }
                        }
                        else if (lVar3 == -0x55f64dbfe3e12c6b) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f37c);
                          lVar1 = 0x4bc7ca523bdd439e;
                          if (iVar2 != 0) {
                            lVar1 = -0xfe627f7c322e2f3;
                          }
                        }
                        else if (lVar3 == -0x5568d2d10870cd16) {
                          lVar1 = 0x69a3fb3fb834cb4d;
                          if (DAT_0021f6ab == '\0') {
                            lVar1 = 0x1f900fe147600228;
                          }
                        }
                      }
                      else if (lVar3 == -0x551292a9ff739055) {
                        DAT_0021ce10 = DAT_0021ce10 ^ 0x65;
                        DAT_0021ce11 = DAT_0021ce11 ^ 0x65;
                        DAT_0021ce13 = DAT_0021ce13 ^ 0x65;
                        DAT_0021ce14 = DAT_0021ce14 ^ 0x65;
                        DAT_0021ce12 = DAT_0021ce12 ^ 0x65;
                        _DAT_0021ce00 = _DAT_0021ce00 ^ 0x6565656565656565;
                        uRam000000000021ce08 = uRam000000000021ce08 ^ 0x6565656565656565;
                        DAT_0021f6b5 = '\x01';
                        lVar1 = 0x7af0f1fab2cb9bc;
                      }
                      else {
                        lVar1 = 0xf2dc5b03450f24e;
                        if ((lVar3 != -0x54e9be1f1777f7dd) &&
                           (lVar1 = lVar3, lVar3 == -0x53e8788836a8e48d)) {
                          DAT_0021c9c0 = DAT_0021c9c0 ^ 0x96;
                          DAT_0021c9c1 = DAT_0021c9c1 ^ 0x96;
                          _DAT_0021c9b0 = _DAT_0021c9b0 ^ 0x9696969696969696;
                          uRam000000000021c9b8 = uRam000000000021c9b8 ^ 0x9696969696969696;
                          DAT_0021f693 = '\x01';
                          lVar1 = -0x4d6520ef1a391d8f;
                        }
                      }
                    }
                    else if (lVar3 < -0x4fca7899ba80477b) {
                      if (lVar3 < -0x5184569a1b4e3e2c) {
                        lVar1 = -0x749ba309b160912b;
                        if ((lVar3 != -0x538353fa8fdb8a5d) &&
                           (lVar1 = lVar3, lVar3 == -0x534005e4dc739e2c)) {
                          lVar1 = -0x28de8d5a5397b305;
                        }
                      }
                      else if (lVar3 == -0x5184569a1b4e3e2c) {
                        DAT_0021cc38 = DAT_0021cc38 ^ 5;
                        DAT_0021cc39 = DAT_0021cc39 ^ 5;
                        DAT_0021cc3a = DAT_0021cc3a ^ 5;
                        DAT_0021cc3b = DAT_0021cc3b ^ 5;
                        DAT_0021cc3c = DAT_0021cc3c ^ 5;
                        DAT_0021cc3d = DAT_0021cc3d ^ 5;
                        _DAT_0021cc20 = _DAT_0021cc20 ^ 0x505050505050505;
                        uRam000000000021cc28 = uRam000000000021cc28 ^ 0x505050505050505;
                        DAT_0021cc3e = DAT_0021cc3e ^ 5;
                        DAT_0021cc30 = DAT_0021cc30 ^ 0x505050505050505;
                        DAT_0021f6a8 = '\x01';
                        lVar1 = -0x36216984911a0b50;
                      }
                      else if (lVar3 == -0x50994f47f3a48332) {
                        DAT_0021f35c = 0;
                        lVar1 = 0xb753b922fcbc12a;
                      }
                      else if (lVar3 == -0x5017da1e6648d2b6) {
                        DAT_0021f40c = 0;
                        lVar1 = 0x16c54598b5281d42;
                      }
                    }
                    else if (lVar3 < -0x4f01b5b26079cb73) {
                      if (lVar3 == -0x4fca7899ba80477b) {
                        lVar1 = -0x6cde44c0d957bcbf;
                        if (DAT_0021f68e == '\0') {
                          lVar1 = 0x478bb03e8335ed58;
                        }
                      }
                      else if (lVar3 == -0x4fc708d50990ccec) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f354);
                        lVar1 = -0x4fca7899ba80477b;
                        if (iVar2 != 0) {
                          lVar1 = 0x5ded9a2423b0f354;
                        }
                      }
                      else if (lVar3 == -0x4f9638727ea71bc5) {
                        DAT_0021cec0 = DAT_0021cec0 ^ 0xd5;
                        DAT_0021cec1 = DAT_0021cec1 ^ 0xd5;
                        DAT_0021cec2 = DAT_0021cec2 ^ 0xd5;
                        DAT_0021cec4 = DAT_0021cec4 ^ 0xd5;
                        DAT_0021cec3 = DAT_0021cec3 ^ 0xd5;
                        DAT_0021ceb8 = DAT_0021ceb8 ^ 0xd5d5d5d5d5d5d5d5;
                        DAT_0021f6bb = '\x01';
                        lVar1 = 0x6dc5f16e57580e42;
                      }
                    }
                    else if (lVar3 == -0x4f01b5b26079cb73) {
                      lVar1 = 0x69aa946d14c3999b;
                      if (DAT_0021f6a4 == '\0') {
                        lVar1 = 0x6ab76382404d8c7c;
                      }
                    }
                    else if (lVar3 == -0x4e2f866ff2b37473) {
                      DAT_0021ca28 = DAT_0021ca28 ^ 0x2e;
                      DAT_0021ca29 = DAT_0021ca29 ^ 0x2e;
                      _DAT_0021ca10 = _DAT_0021ca10 ^ 0x2e2e2e2e2e2e2e2e;
                      uRam000000000021ca18 = uRam000000000021ca18 ^ 0x2e2e2e2e2e2e2e2e;
                      DAT_0021ca20 = DAT_0021ca20 ^ 0x2e2e2e2e2e2e2e2e;
                      DAT_0021f696 = '\x01';
                      lVar1 = 0x715dc3274bbf44f8;
                    }
                    else if (lVar3 == -0x4d6520ef1a391d8f) {
                      DAT_0021f368 = 0;
                      lVar1 = -0x7cc7d813c9212a7a;
                    }
                  }
                  if (lVar3 < -0x27d20edb58d568eb) break;
                  if (lVar3 < -0x1a6f90379157b251) {
                    if (lVar3 < -0x20eba83f6a1e5cda) {
                      if (lVar3 < -0x24bd7e187ddccf98) {
                        if (lVar3 < -0x2623773697ce2f56) {
                          lVar1 = 0x63343d7496ecf449;
                          if ((lVar3 != -0x27d20edb58d568eb) &&
                             (lVar1 = lVar3, lVar3 == -0x2680b6c5de36d34e)) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f378);
                            lVar1 = -0x379fb395c80eae78;
                            if (iVar2 != 0) {
                              lVar1 = 0x1396af11cad04dea;
                            }
                          }
                        }
                        else {
                          lVar1 = -0x5c4426f3749195ad;
                          if (((lVar3 != -0x2623773697ce2f56) &&
                              (lVar1 = 0x4cc37e94ed8488f0, lVar3 != -0x2584dec680601261)) &&
                             (lVar1 = lVar3, lVar3 == -0x252681a442b27e48)) {
                            lVar1 = 0x23f4540d480a156e;
                          }
                        }
                      }
                      else if (lVar3 < -0x2433de9d9459e086) {
                        if (lVar3 == -0x24bd7e187ddccf98) {
                          _DAT_0021ca30 = _DAT_0021ca30 ^ 0x5b5b5b5b5b5b5b5b;
                          uRam000000000021ca38 = uRam000000000021ca38 ^ 0x5b5b5b5b5b5b5b5b;
                          _DAT_0021ca40 = _DAT_0021ca40 ^ 0x5b5b5b5b5b5b5b5b;
                          uRam000000000021ca48 = uRam000000000021ca48 ^ 0x5b5b5b5b5b5b5b5b;
                          DAT_0021ca58 = DAT_0021ca58 ^ 0x5b;
                          DAT_0021ca59 = DAT_0021ca59 ^ 0x5b;
                          DAT_0021ca5a = DAT_0021ca5a ^ 0x5b;
                          DAT_0021ca50 = DAT_0021ca50 ^ 0x5b5b5b5b5b5b5b5b;
                          DAT_0021f697 = '\x01';
                          lVar1 = 0x2b40bcacce57df95;
                        }
                        else if (lVar3 == -0x248717d2abbdb9c5) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f370);
                          lVar1 = 0x69ffe6f6a23ee570;
                          if (iVar2 != 0) {
                            lVar1 = 0x4dc82dc71b5741d9;
                          }
                        }
                        else if (lVar3 == -0x246c429bd19b5c0d) {
                          lVar1 = -0x436ee720be00bd32;
                        }
                      }
                      else {
                        lVar1 = 0x70052c10865bca47;
                        if (lVar3 != -0x2433de9d9459e086) {
                          if (lVar3 == -0x23d11bc296f30bf7) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f410);
                            lVar1 = -0xf2bf374642ffe36;
                            if (iVar2 != 0) {
                              lVar1 = 0x262a59440fb08605;
                            }
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == -0x2348c62440cf0103) {
                              DAT_0021cd08 = DAT_0021cd08 ^ 0x42;
                              DAT_0021cd09 = DAT_0021cd09 ^ 0x42;
                              _DAT_0021ccf0 = _DAT_0021ccf0 ^ 0x4242424242424242;
                              uRam000000000021ccf8 = uRam000000000021ccf8 ^ 0x4242424242424242;
                              DAT_0021cd0a = DAT_0021cd0a ^ 0x42;
                              DAT_0021cd0b = DAT_0021cd0b ^ 0x42;
                              DAT_0021cd0c = DAT_0021cd0c ^ 0x42;
                              DAT_0021cd00 = DAT_0021cd00 ^ 0x4242424242424242;
                              DAT_0021f6ad = '\x01';
                              lVar1 = 0x4ddb09f816eaddf9;
                            }
                          }
                        }
                      }
                    }
                    else if (lVar3 < -0x1f66f0e1a299fcd5) {
                      if (lVar3 < -0x1faf59df4cee9cb4) {
                        if (lVar3 == -0x20eba83f6a1e5cda) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f374);
                          lVar1 = -0x5a275988820244ab;
                          if (iVar2 != 0) {
                            lVar1 = 0x3b1e8a64c5e70069;
                          }
                        }
                        else if (lVar3 == -0x1fede5bdb1d15a28) {
                          lVar1 = 0xbf7705b22c59245;
                        }
                      }
                      else {
                        lVar1 = 0x175a33ed6739010b;
                        if (lVar3 != -0x1faf59df4cee9cb4) {
                          if (lVar3 == -0x1f94e148600fd9ad) {
                            DAT_0021f418 = 0;
                            lVar1 = 0x3296ee8db148021c;
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == -0x1f80c7998a1f4679) {
                              DAT_0021cd40 = DAT_0021cd40 ^ 0xa9;
                              DAT_0021cd41 = DAT_0021cd41 ^ 0xa9;
                              DAT_0021cd42 = DAT_0021cd42 ^ 0xa9;
                              DAT_0021cd43 = DAT_0021cd43 ^ 0xa9;
                              DAT_0021cd44 = DAT_0021cd44 ^ 0xa9;
                              DAT_0021cd45 = DAT_0021cd45 ^ 0xa9;
                              DAT_0021cd46 = DAT_0021cd46 ^ 0xa9;
                              _DAT_0021cd30 = _DAT_0021cd30 ^ 0xa9a9a9a9a9a9a9a9;
                              uRam000000000021cd38 = uRam000000000021cd38 ^ 0xa9a9a9a9a9a9a9a9;
                              DAT_0021f6af = '\x01';
                              lVar1 = 0x593c712d6ed2cdc1;
                            }
                          }
                        }
                      }
                    }
                    else if (lVar3 < -0x1e203c4aceef0b3f) {
                      if (lVar3 == -0x1f66f0e1a299fcd5) {
                        lVar1 = -0x3abd9295c1093e37;
                        if (DAT_0021f68f == '\0') {
                          lVar1 = -0x457122a82ec7029f;
                        }
                      }
                      else if (lVar3 == -0x1e81e43b0dc38416) {
                        lVar1 = 0x2f9c83e308b2120b;
                        if (DAT_0021f6a8 == '\0') {
                          lVar1 = -0x5184569a1b4e3e2c;
                        }
                      }
                      else if (lVar3 == -0x1e698f547628a824) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f3cc);
                        lVar1 = 0x245a9e19c14354b1;
                        if (iVar2 != 0) {
                          lVar1 = 0x4792129cec6a567a;
                        }
                      }
                    }
                    else {
                      lVar1 = -0x5da0429d9dcb81f2;
                      if (lVar3 != -0x1e203c4aceef0b3f) {
                        if (lVar3 == -0x1d35ba8c8b8d4302) {
                          DAT_0021ceb0 = DAT_0021ceb0 ^ 0x94;
                          _DAT_0021ce90 = _DAT_0021ce90 ^ 0x9494949494949494;
                          uRam000000000021ce98 = uRam000000000021ce98 ^ 0x9494949494949494;
                          _DAT_0021cea0 = _DAT_0021cea0 ^ 0x9494949494949494;
                          uRam000000000021cea8 = uRam000000000021cea8 ^ 0x9494949494949494;
                          DAT_0021f6ba = '\x01';
                          lVar1 = 0x36cfef7ce37de3dd;
                        }
                        else {
                          lVar1 = lVar3;
                          if (lVar3 == -0x1ce5e6a4847571dc) {
                            lVar1 = -0x4214afa598482cc0;
                            if (DAT_0021f692 == '\0') {
                              lVar1 = -0x6425070a08009ca9;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (lVar3 < -0xf8ce93be88fcc48) {
                    if (lVar3 < -0x15bfe279fa90eafe) {
                      if (lVar3 < -0x174f8d80f4c2fa28) {
                        lVar1 = 0xb753b922fcbc12a;
                        if ((lVar3 != -0x1a6f90379157b251) &&
                           (lVar1 = lVar3, lVar3 == -0x19c270b7be5fef6e)) {
                          DAT_0021f380 = 0;
                          lVar1 = -0x55f64dbfe3e12c6b;
                        }
                      }
                      else if (lVar3 == -0x174f8d80f4c2fa28) {
                        DAT_0021c9e0 = DAT_0021c9e0 ^ 0x51;
                        DAT_0021c9e1 = DAT_0021c9e1 ^ 0x51;
                        DAT_0021c9e4 = DAT_0021c9e4 ^ 0x51;
                        DAT_0021c9e2 = DAT_0021c9e2 ^ 0x51;
                        DAT_0021c9e3 = DAT_0021c9e3 ^ 0x51;
                        DAT_0021c9e5 = DAT_0021c9e5 ^ 0x51;
                        _DAT_0021c9d0 = _DAT_0021c9d0 ^ 0x5151515151515151;
                        uRam000000000021c9d8 = uRam000000000021c9d8 ^ 0x5151515151515151;
                        DAT_0021f694 = '\x01';
                        lVar1 = -0x59949fcbcd44a83b;
                      }
                      else {
                        lVar1 = 0x6564ad592c761b30;
                        if ((lVar3 != -0x1700f82a3079e6ec) &&
                           (lVar1 = lVar3, lVar3 == -0x160b35ef5ce6a3ed)) {
                          DAT_0021f3b8 = 0;
                          lVar1 = 0x1aec64e8cfbc4e87;
                        }
                      }
                    }
                    else if (lVar3 < -0x1099d903d2d9bbfc) {
                      if (lVar3 == -0x15bfe279fa90eafe) {
                        DAT_0021cdd0 = DAT_0021cdd0 ^ 0x75;
                        _DAT_0021cda0 = _DAT_0021cda0 ^ 0x7575757575757575;
                        uRam000000000021cda8 = uRam000000000021cda8 ^ 0x7575757575757575;
                        DAT_0021cdd1 = DAT_0021cdd1 ^ 0x75;
                        DAT_0021cdd3 = DAT_0021cdd3 ^ 0x75;
                        _DAT_0021cdb0 = _DAT_0021cdb0 ^ 0x7575757575757575;
                        uRam000000000021cdb8 = uRam000000000021cdb8 ^ 0x7575757575757575;
                        DAT_0021cdd2 = DAT_0021cdd2 ^ 0x75;
                        _DAT_0021cdc0 = _DAT_0021cdc0 ^ 0x7575757575757575;
                        uRam000000000021cdc8 = uRam000000000021cdc8 ^ 0x7575757575757575;
                        DAT_0021f6b3 = '\x01';
                        lVar1 = 0x455df301ced06cb6;
                      }
                      else if (lVar3 == -0x13817eb3f325d285) {
                        _DAT_0021cd90 = _DAT_0021cd90 ^ 0x808080808080808;
                        uRam000000000021cd98 = uRam000000000021cd98 ^ 0x808080808080808;
                        DAT_0021f6b2 = '\x01';
                        lVar1 = -0x79aedc7e8afe1ef9;
                      }
                      else if (lVar3 == -0x1375256aacb16b1c) {
                        lVar1 = 0x455df301ced06cb6;
                      }
                    }
                    else {
                      lVar1 = 0x580318e8dfdd8386;
                      if (((lVar3 != -0x1099d903d2d9bbfc) &&
                          (lVar1 = -0x55f64dbfe3e12c6b, lVar3 != -0xfe627f7c322e2f3)) &&
                         (lVar1 = lVar3, lVar3 == -0xfc25a1dde3c785c)) {
                        _DAT_0021cde0 = _DAT_0021cde0 ^ 0x9999999999999999;
                        uRam000000000021cde8 = uRam000000000021cde8 ^ 0x9999999999999999;
                        DAT_0021cdf0 = DAT_0021cdf0 ^ 0x9999999999999999;
                        DAT_0021f6b4 = '\x01';
                        lVar1 = -0xab20af63b321c9d;
                      }
                    }
                  }
                  else if (lVar3 < -0xd077a2d9bcf09a1) {
                    if (lVar3 < -0xe1b00f7d7270e57) {
                      lVar1 = -0x39aaa39454e2218;
                      if ((lVar3 != -0xf8ce93be88fcc48) &&
                         (lVar1 = lVar3, lVar3 == -0xf2bf374642ffe36)) {
                        lVar1 = 0x673582748bb94ab0;
                        if (DAT_0021f6bd == '\0') {
                          lVar1 = 0x11154bf597b6dece;
                        }
                      }
                    }
                    else if (lVar3 == -0xe1b00f7d7270e57) {
                      lVar1 = -0x2623773697ce2f56;
                      if (DAT_0021f674 == '\0') {
                        lVar1 = 0x317bded53e61b6e5;
                      }
                    }
                    else {
                      lVar1 = 0x662013c6c4946a7b;
                      if ((lVar3 != -0xdda62df3fbdc442) &&
                         (lVar1 = lVar3, lVar3 == -0xd96ed9de873c94f)) {
                        lVar1 = 0x48eb73ef44c24496;
                      }
                    }
                  }
                  else if (lVar3 < -0xbbd141c4547c454) {
                    if (lVar3 == -0xd077a2d9bcf09a1) {
                      lVar1 = 0x4ae0fee2b7817c09;
                      if (DAT_0021f68c == '\0') {
                        lVar1 = -0x35341ab3a5d92113;
                      }
                    }
                    else if (lVar3 == -0xcec91e3997b2fb7) {
                      DAT_0021ca68 = DAT_0021ca68 ^ 0x4c;
                      DAT_0021ca69 = DAT_0021ca69 ^ 0x4c;
                      DAT_0021ca6a = DAT_0021ca6a ^ 0x4c;
                      DAT_0021ca6c = DAT_0021ca6c ^ 0x4c;
                      DAT_0021ca6b = DAT_0021ca6b ^ 0x4c;
                      DAT_0021ca60 = DAT_0021ca60 ^ 0x4c4c4c4c4c4c4c4c;
                      DAT_0021f698 = '\x01';
                      lVar1 = 0x6f5929ae29751780;
                    }
                    else if (lVar3 == -0xcb25e3cf5c5d1c2) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f34c);
                      lVar1 = -0xd077a2d9bcf09a1;
                      if (iVar2 != 0) {
                        lVar1 = 0x223aad313b039649;
                      }
                    }
                  }
                  else if (lVar3 == -0xbbd141c4547c454) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f3d4);
                    lVar1 = -0x732c76896e171f03;
                    if (iVar2 != 0) {
                      lVar1 = 0x40f7dc0715a95ea7;
                    }
                  }
                  else {
                    lVar1 = 0x36cfef7ce37de3dd;
                    if ((lVar3 != -0xab700e369f32ef0) &&
                       (lVar1 = lVar3, lVar3 == -0xab20af63b321c9d)) {
                      DAT_0021f3ec = 0;
                      lVar1 = 0x1386810cf6d4d9cd;
                    }
                  }
                }
                if (-0x379fb395c80eae79 < lVar3) break;
                if (lVar3 < -0x457122a82ec7029f) {
                  if (lVar3 < -0x4ad51e0bef7de66c) {
                    if (lVar3 < -0x4b84c75c7462da44) {
                      if (lVar3 == -0x4d4fe61e1b10d683) {
                        lVar1 = -0x5b556e2399052bd6;
                        if (DAT_0021f6c1 == '\0') {
                          lVar1 = 0x37575066b882f1d0;
                        }
                      }
                      else if (lVar3 == -0x4b96d5fba611650a) {
                        DAT_0021c758 = DAT_0021c758 ^ 0xc2;
                        DAT_0021c759 = DAT_0021c759 ^ 0xc2;
                        DAT_0021f67b = '\x01';
                        lVar1 = -0x3d2d47febb83d7a7;
                      }
                    }
                    else {
                      lVar1 = -0x4b2f34297c87900a;
                      if (lVar3 != -0x4b84c75c7462da44) {
                        if (lVar3 == -0x4b2f34297c87900a) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f420);
                          lVar1 = -0x4d4fe61e1b10d683;
                          if (iVar2 != 0) {
                            lVar1 = -0x4b84c75c7462da44;
                          }
                        }
                        else {
                          lVar1 = lVar3;
                          if (lVar3 == -0x4adf6fd3f1f8a6fe) {
                            lVar1 = -0x4d6520ef1a391d8f;
                          }
                        }
                      }
                    }
                  }
                  else if (lVar3 < -0x48b81812e43d7cd5) {
                    if (lVar3 == -0x4ad51e0bef7de66c) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f2ec);
                      lVar1 = -0xe1b00f7d7270e57;
                      if (iVar2 != 0) {
                        lVar1 = 0x13c817d32be76879;
                      }
                    }
                    else if (lVar3 == -0x4990598d15cc4d49) {
                      DAT_0021f3b0 = 0;
                      lVar1 = 0x48eb73ef44c24496;
                    }
                    else if (lVar3 == -0x48cc972e0affcf05) {
                      lVar1 = 0x55c1a9b2fdeee252;
                      if (DAT_0021f6a3 == '\0') {
                        lVar1 = 0x57f94ec4e30fce80;
                      }
                    }
                  }
                  else {
                    lVar1 = 0x7c09026e7ef0be76;
                    if (lVar3 != -0x48b81812e43d7cd5) {
                      if (lVar3 == -0x489e92765aa06d85) {
                        lVar1 = -0x63fdafecacd67af6;
                        if (DAT_0021f6a6 == '\0') {
                          lVar1 = -0x6290c84f81b1c63a;
                        }
                      }
                      else {
                        lVar1 = lVar3;
                        if (lVar3 == -0x45fa588128210ec4) {
                          lVar1 = -0x74239bebd0569f12;
                        }
                      }
                    }
                  }
                }
                else if (lVar3 < -0x3d2d47febb83d7a7) {
                  if (lVar3 < -0x42ae6dd5b623a2ae) {
                    if (lVar3 == -0x457122a82ec7029f) {
                      _DAT_0021c910 = _DAT_0021c910 ^ 0x9d9d9d9d9d9d9d9d;
                      uRam000000000021c918 = uRam000000000021c918 ^ 0x9d9d9d9d9d9d9d9d;
                      DAT_0021c920 = DAT_0021c920 ^ 0x9d9d9d9d9d9d9d9d;
                      DAT_0021f68f = '\x01';
                      lVar1 = -0x1cfc9480f6cf5f3;
                    }
                    else if (lVar3 == -0x436ee720be00bd32) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f3bc);
                      lVar1 = -0x1e81e43b0dc38416;
                      if (iVar2 != 0) {
                        lVar1 = -0x246c429bd19b5c0d;
                      }
                    }
                  }
                  else if (lVar3 == -0x42ae6dd5b623a2ae) {
                    DAT_0021f34c = 0;
                    lVar1 = 0x23f4540d480a156e;
                  }
                  else {
                    lVar1 = 0x34ae1e47f43a56f6;
                    if ((lVar3 != -0x4214afa598482cc0) &&
                       (lVar1 = lVar3, lVar3 == -0x41e66b439b923c0b)) {
                      DAT_0021c8d8 = DAT_0021c8d8 ^ 0x36;
                      DAT_0021c8d9 = DAT_0021c8d9 ^ 0x36;
                      DAT_0021c8db = DAT_0021c8db ^ 0x36;
                      _DAT_0021c8c0 = _DAT_0021c8c0 ^ 0x3636363636363636;
                      uRam000000000021c8c8 = uRam000000000021c8c8 ^ 0x3636363636363636;
                      DAT_0021c8da = DAT_0021c8da ^ 0x36;
                      DAT_0021c8d0 = DAT_0021c8d0 ^ 0x3636363636363636;
                      DAT_0021f68d = '\x01';
                      lVar1 = 0x5cf9af05cb0d7345;
                    }
                  }
                }
                else if (lVar3 < -0x3abd9295c1093e37) {
                  if (lVar3 == -0x3d2d47febb83d7a7) {
                    DAT_0021f308 = 0;
                    lVar1 = -0x4ad51e0bef7de66c;
                  }
                  else if (lVar3 == -0x3cf2a9bbbadb1104) {
                    lVar1 = 0x7610f3f29cae43f2;
                    if (DAT_0021f6b8 == '\0') {
                      lVar1 = -0x791e9cec5fe5f95c;
                    }
                  }
                  else if (lVar3 == -0x3b82eeb7afdae721) {
                    lVar1 = 0x4e4bff83aab105c0;
                  }
                }
                else {
                  lVar1 = -0x1cfc9480f6cf5f3;
                  if (((lVar3 != -0x3abd9295c1093e37) &&
                      (lVar1 = -0x4990598d15cc4d49, lVar3 != -0x395c05d374146914)) &&
                     (lVar1 = lVar3, lVar3 == -0x382004ae3a779619)) {
                    lVar1 = -0x79aedc7e8afe1ef9;
                  }
                }
              }
              if (lVar3 < -0x2f88a7d9884c8f7f) break;
              if (lVar3 < -0x2a4a39866eb634c9) {
                if (lVar3 < -0x2da13e23b2303993) {
                  lVar1 = 0x640127afa8318c63;
                  if ((lVar3 != -0x2f88a7d9884c8f7f) &&
                     (lVar1 = lVar3, lVar3 == -0x2ef323ec5b63f416)) {
                    lVar1 = 0x570598bb43671b46;
                  }
                }
                else if (lVar3 == -0x2da13e23b2303993) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f380);
                  lVar1 = -0x567bacb4e5314217;
                  if (iVar2 != 0) {
                    lVar1 = 0xebfa26a97a03d23;
                  }
                }
                else if (lVar3 == -0x2d054a64c1586b88) {
                  DAT_0021c940 = DAT_0021c940 ^ 0x25;
                  DAT_0021c941 = DAT_0021c941 ^ 0x25;
                  DAT_0021c943 = DAT_0021c943 ^ 0x25;
                  DAT_0021c944 = DAT_0021c944 ^ 0x25;
                  DAT_0021c942 = DAT_0021c942 ^ 0x25;
                  _DAT_0021c930 = _DAT_0021c930 ^ 0x2525252525252525;
                  uRam000000000021c938 = uRam000000000021c938 ^ 0x2525252525252525;
                  DAT_0021f690 = '\x01';
                  lVar1 = -0x50994f47f3a48332;
                }
                else if (lVar3 == -0x2b5ce874daacfbb7) {
                  DAT_0021f3b4 = 0;
                  lVar1 = 0x4930e5ff59a63d98;
                }
              }
              else if (lVar3 < -0x28d0b56c980ca8d4) {
                if (lVar3 == -0x2a4a39866eb634c9) {
                  DAT_0021f420 = 0;
                  lVar1 = 0x175a33ed6739010b;
                }
                else if (lVar3 == -0x2a0b63f9bdabb29a) {
                  lVar1 = -0x7759a3c6bb93bbd3;
                  if (DAT_0021f6a0 == '\0') {
                    lVar1 = -0x753a2421353a68a2;
                  }
                }
                else if (lVar3 == -0x28de8d5a5397b305) {
                  DAT_0021f3f8 = 0;
                  lVar1 = -0x31b7fdae55ea9ca;
                }
              }
              else if (lVar3 == -0x28d0b56c980ca8d4) {
                DAT_0021ce88 = DAT_0021ce88 ^ 0x2e;
                DAT_0021ce89 = DAT_0021ce89 ^ 0x2e;
                _DAT_0021ce70 = _DAT_0021ce70 ^ 0x2e2e2e2e2e2e2e2e;
                uRam000000000021ce78 = uRam000000000021ce78 ^ 0x2e2e2e2e2e2e2e2e;
                DAT_0021ce8a = DAT_0021ce8a ^ 0x2e;
                DAT_0021ce8b = DAT_0021ce8b ^ 0x2e;
                DAT_0021ce8c = DAT_0021ce8c ^ 0x2e;
                DAT_0021ce80 = DAT_0021ce80 ^ 0x2e2e2e2e2e2e2e2e;
                DAT_0021f6b9 = '\x01';
                lVar1 = -0x34057e279c80b9af;
              }
              else if (lVar3 == -0x283dec2459e3b2cb) {
                DAT_0021f3c4 = 0;
                lVar1 = 0x3a0c73e3397b09e4;
              }
              else if (lVar3 == -0x27dcc213e25f7af4) {
                DAT_0021f398 = 0;
                lVar1 = 0x63343d7496ecf449;
              }
            }
            if (-0x343aa9c5ff2a582c < lVar3) break;
            if (lVar3 < -0x35341ab3a5d92113) {
              if (lVar3 == -0x379fb395c80eae78) {
                lVar1 = 0x8e29227462b7f14;
                if (DAT_0021f697 == '\0') {
                  lVar1 = -0x24bd7e187ddccf98;
                }
              }
              else if (lVar3 == -0x36216984911a0b50) {
                DAT_0021f3bc = 0;
                lVar1 = -0x5f57a4c7f9e48340;
              }
            }
            else if (lVar3 == -0x35341ab3a5d92113) {
              DAT_0021c8b8 = DAT_0021c8b8 ^ 0xd0;
              DAT_0021c8b9 = DAT_0021c8b9 ^ 0xd0;
              _DAT_0021c8a0 = _DAT_0021c8a0 ^ 0xd0d0d0d0d0d0d0d0;
              uRam000000000021c8a8 = uRam000000000021c8a8 ^ 0xd0d0d0d0d0d0d0d0;
              DAT_0021c8bc = DAT_0021c8bc ^ 0xd0;
              DAT_0021c8ba = DAT_0021c8ba ^ 0xd0;
              DAT_0021c8bd = DAT_0021c8bd ^ 0xd0;
              DAT_0021c8bb = DAT_0021c8bb ^ 0xd0;
              DAT_0021c8b0 = DAT_0021c8b0 ^ 0xd0d0d0d0d0d0d0d0;
              DAT_0021f68c = '\x01';
              lVar1 = -0x42ae6dd5b623a2ae;
            }
            else {
              lVar1 = 0x3cc122309fddaed8;
              if ((lVar3 != -0x3500764870e243e8) && (lVar1 = lVar3, lVar3 == -0x3463af09068d8d71)) {
                lVar1 = 0x1aec64e8cfbc4e87;
              }
            }
          }
          if (-0x32183a452afd59c7 < lVar3) break;
          lVar1 = 0x7d41ee1d37870109;
          if (lVar3 != -0x343aa9c5ff2a582b) {
            if (lVar3 == -0x34057e279c80b9af) {
              DAT_0021f400 = 0;
              lVar1 = -0x6a41f5466a250461;
            }
            else {
              lVar1 = lVar3;
              if (lVar3 == -0x330e471128b3b732) {
                DAT_0021f3f4 = 0;
                lVar1 = 0x605a32b7e00a0508;
              }
            }
          }
        }
        lVar1 = -0x7cc7d813c9212a7a;
      } while (lVar3 == -0x31962dbd86a75b5c);
      if (lVar3 != -0x3109cf76909bfda4) break;
      _DAT_0021cf40 = _DAT_0021cf40 ^ 0xd0d0d0d0d0d0d0d;
      uRam000000000021cf48 = uRam000000000021cf48 ^ 0xd0d0d0d0d0d0d0d;
      _DAT_0021cf50 = _DAT_0021cf50 ^ 0xd0d0d0d0d0d0d0d;
      uRam000000000021cf58 = uRam000000000021cf58 ^ 0xd0d0d0d0d0d0d0d;
      _DAT_0021cf60 = _DAT_0021cf60 ^ 0xd0d0d0d0d0d0d0d;
      uRam000000000021cf68 = uRam000000000021cf68 ^ 0xd0d0d0d0d0d0d0d;
      DAT_0021f6c0 = '\x01';
      lVar1 = -0x39aaa39454e2218;
    }
    lVar1 = lVar3;
  } while (lVar3 != -0x32183a452afd59c6);
  DAT_0021f298 = 0;
  memset(auStack_36b0,0,0x35f0);
  local_33c0 = &DAT_0021c910;
  local_1bc0 = &DAT_0021cc20;
  local_36c0 = &DAT_0021c8a0;
  local_32c0 = &DAT_0021c930;
  local_1ac0 = &DAT_0021cc40;
  local_31c0 = &DAT_0021c950;
  local_19c0 = &DAT_0021cc60;
  local_30c0 = &DAT_0021c970;
  local_18c0 = &DAT_0021cc90;
  local_36b8 = 0;
  local_2fc0 = &DAT_0021c9b0;
  local_17c0 = &DAT_0021ccc0;
  local_33c8 = 1;
  local_2ec0 = &DAT_0021c9d0;
  local_16c0 = &DAT_0021ccf0;
  local_32c8 = 1;
  local_2dc0 = &DAT_0021c9f0;
  local_15c0 = &DAT_0021cd10;
  local_31c8 = 1;
  local_2cc0 = &DAT_0021ca10;
  local_14c0 = &DAT_0021cd30;
  local_30c8 = 1;
  local_2bc0 = &DAT_0021ca30;
  local_13c0 = &DAT_0021cd50;
  local_2fc8 = 1;
  local_2ac0 = &DAT_0021ca60;
  local_12c0 = &DAT_0021cd70;
  local_2fb8 = &DAT_0021c5ac;
  local_29c0 = &DAT_0021ca70;
  local_11c0 = &DAT_0021cd90;
  local_2ec8 = 1;
  local_28c0 = &DAT_0021ca90;
  local_10c0 = &DAT_0021cda0;
  local_2dc8 = 1;
  local_27c0 = &DAT_0021c6c0;
  local_fc0 = &DAT_0021cde0;
  local_2cc8 = 1;
  local_27b8 = &DAT_0021caa0;
  local_ec0 = &DAT_0021ce00;
  local_2bc8 = 1;
  local_26c0 = &DAT_0021cab0;
  local_dc0 = &DAT_0021ce20;
  local_2ac8 = 1;
  local_25c0 = &DAT_0021cae0;
  local_cc0 = &DAT_0021ce40;
  local_29c8 = 1;
  local_24c0 = &DAT_0021cb00;
  local_bc0 = &DAT_0021ce58;
  local_28c8 = 1;
  local_23c0 = &DAT_0021cb20;
  local_ac0 = &DAT_0021ce70;
  local_27c8 = 1;
  local_22c0 = &DAT_0021cb50;
  local_9c0 = &DAT_0021ce90;
  local_26c8 = 1;
  local_21c0 = &DAT_0021cb70;
  local_8c0 = &DAT_0021ceb8;
  local_25c8 = 1;
  local_20c0 = &DAT_0021cb80;
  local_7c0 = &DAT_0021ced0;
  local_24c8 = 1;
  local_1fc0 = &DAT_0021cb90;
  local_6c0 = &DAT_0021cef0;
  local_23c8 = 1;
  local_1ec0 = &DAT_0021cbb0;
  local_5c0 = &DAT_0021cf10;
  local_22c8 = 1;
  local_1db8 = &DAT_0021cbf0;
  local_5b8 = &DAT_0021c758;
  local_21c8 = 1;
  local_1cc0 = &DAT_0021cc00;
  local_4c0 = &DAT_0021cf20;
  local_20c8 = 1;
  local_35c8 = 1;
  puStack_35c0 = &DAT_0021c8c0;
  local_3c0 = &DAT_0021cf40;
  local_1fc8 = 1;
  local_34c8 = 1;
  puStack_34c0 = &DAT_0021c8e0;
  local_2c0 = &DAT_0021cf70;
  local_1ec8 = 1;
  local_1dc0 = &DAT_0021cbe0;
  local_1dc8 = 1;
  local_1cc8 = 1;
  local_3618 = 8;
  local_3518 = 8;
  local_3418 = 8;
  local_3318 = 8;
  local_3218 = 8;
  local_3118 = 8;
  local_3018 = 8;
  local_2e18 = 8;
  local_2d18 = 8;
  local_2c18 = 8;
  local_2b18 = 8;
  local_2a18 = 8;
  local_2918 = 8;
  local_2818 = 8;
  local_2618 = 8;
  local_2518 = 8;
  local_2418 = 8;
  local_2318 = 8;
  local_2218 = 8;
  local_2118 = 8;
  local_2018 = 8;
  local_1f18 = 8;
  local_1e18 = 8;
  local_1c18 = 8;
  local_1bc8 = 1;
  local_1b18 = 8;
  local_1ac8 = 1;
  local_1ab8 = 0;
  local_1a18 = 8;
  local_19c8 = 1;
  local_19b8 = 0;
  local_1918 = 8;
  local_18c8 = 1;
  local_18b8 = 0;
  local_1818 = 8;
  local_17c8 = 1;
  local_17b8 = 0;
  local_1718 = 8;
  local_16c8 = 1;
  local_16b8 = 0;
  local_1618 = 8;
  local_15c8 = 1;
  local_15b8 = 0;
  local_1518 = 8;
  local_14c8 = 1;
  local_14b8 = 0;
  local_1418 = 8;
  local_13c8 = 1;
  local_13b8 = 0;
  local_1318 = 8;
  local_12c8 = 1;
  local_12b8 = 0;
  local_1218 = 8;
  local_11c8 = 1;
  local_11b8 = 0;
  local_1118 = 8;
  local_10c8 = 1;
  local_10b8 = 0;
  local_1018 = 8;
  local_fc8 = 1;
  local_fb8 = 0;
  local_f18 = 8;
  local_ec8 = 1;
  local_eb8 = 0;
  local_e18 = 8;
  local_dc8 = 1;
  local_db8 = 0;
  local_d18 = 8;
  local_cc8 = 1;
  local_cb8 = 0;
  local_c18 = 8;
  local_bc8 = 1;
  local_bb8 = 0;
  local_b18 = 8;
  local_ac8 = 1;
  local_ab8 = 0;
  local_a18 = 8;
  local_9c8 = 1;
  local_9b8 = 0;
  local_918 = 8;
  local_8c8 = 1;
  local_8b8 = &DAT_0021c5ac;
  local_818 = 0;
  local_7c8 = 1;
  local_7b8 = 0;
  local_718 = 8;
  local_6c8 = 1;
  local_6b8 = 0;
  local_618 = 8;
  local_5c8 = 1;
  local_518 = 0;
  local_4c8 = 1;
  local_4b8 = 0;
  local_418 = 8;
  local_3c8 = 1;
  local_3b8 = 0;
  local_318 = 8;
  local_2c8 = 1;
  local_2b8 = 0;
  local_218 = 8;
  local_1c8 = 1;
  local_1c0 = &DAT_0021cf90;
  uStack_1b8 = 0;
  local_118 = 8;
  local_c8 = 1;
  FUN_00125518(&local_36c0,0x36,local_b8);
  if (*(long *)(local_b0 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

