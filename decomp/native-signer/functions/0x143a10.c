// rea decompile_all
// name: FUN_00143a10
// address: 0x143a10
// body: available
// range: 0x143a10-0x1446a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00143a10(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  float fVar6;
  
  lVar1 = 0x7c549ef106217fb9;
  if (param_1 != 0) {
    lVar1 = -0x43c3f7cff18068e0;
  }
  lVar2 = 0x6c05945b101f2e8a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < 0x30b867073a6ca70) {
              if (lVar5 < -0x32ec24ad8c556e0d) {
                if (lVar5 < -0x5529e3973cc046ad) {
                  if (lVar5 < -0x5bf474f72bcdc40f) {
                    if (lVar5 == -0x7db7b2fa48b3c495) {
                      DAT_0021f434 = 0;
                      uVar4 = FUN_00124d64(unaff_x22,&DAT_0021cfc0,0);
                      lVar2 = 0x3e83aa5a6579a168;
                      if ((uVar4 & 1) == 0) {
                        lVar2 = 0x291a07fe86e32767;
                      }
                    }
                    else if (lVar5 == -0x7150b060e6820573) {
                      lVar2 = 0x19a2ea649276c555;
                    }
                  }
                  else if (lVar5 == -0x5bf474f72bcdc40f) {
                    DAT_0021f500 = 0;
                    uVar4 = FUN_00124d64(unaff_x22,&DAT_0021d240,0);
                    lVar2 = 0x37122e73a58282bd;
                    if ((uVar4 & 1) == 0) {
                      lVar2 = 0x7093fe45d03c4677;
                    }
                  }
                  else if (lVar5 == -0x598900475bb5ce2e) {
                    lVar2 = -0x505e59b84f5a1a7d;
                  }
                }
                else if (lVar5 < -0x5014e2511b3f3720) {
                  lVar2 = -0x26d8988656260025;
                  if ((lVar5 != -0x5529e3973cc046ad) &&
                     (lVar2 = lVar5, lVar5 == -0x505e59b84f5a1a7d)) {
                    fVar6 = *param_2;
                    *param_3 = *param_3 | 0x8000;
                    *param_2 = fVar6 + (1.0 - fVar6);
                    lVar2 = 0x19a2ea649276c555;
                  }
                }
                else if (lVar5 == -0x5014e2511b3f3720) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021f4fc);
                  lVar2 = 0x30b867073a6ca70;
                  if (iVar3 != 0) {
                    lVar2 = 0x5b5eb966fcb0302c;
                  }
                }
                else if (lVar5 == -0x43c3f7cff18068e0) {
                  unaff_x22 = *(long *)(param_1 + 0x18);
                  lVar2 = -0x5529e3973cc046ad;
                  if (unaff_x22 == 0 || param_3 == (ulong *)0x0) {
                    lVar2 = -0x7150b060e6820573;
                  }
                }
                else if (lVar5 == -0x40efc73a09323fc5) {
                  lVar2 = 0x25baa1b2ad8e2dd;
                }
              }
              else if (lVar5 < -0x17f21811d5e391bb) {
                if (lVar5 < -0x2d1d199cae2ad6aa) {
                  if (lVar5 == -0x32ec24ad8c556e0d) {
                    lVar2 = 0x272065a78cb71f77;
                    if (DAT_0021f6c7 == '\0') {
                      lVar2 = 0x1e0084a6876a98ad;
                    }
                  }
                  else if (lVar5 == -0x2ed24dd64775ccca) {
                    lVar2 = 0x29b27fffee295cc2;
                  }
                }
                else {
                  lVar2 = -0x5bf474f72bcdc40f;
                  if (lVar5 != -0x2d1d199cae2ad6aa) {
                    if (lVar5 == -0x26d8988656260025) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f434);
                      lVar2 = -0x24530648a142c2c6;
                      if (iVar3 != 0) {
                        lVar2 = 0x615ee32a5fd663b6;
                      }
                    }
                    else {
                      lVar2 = lVar5;
                      if (lVar5 == -0x24530648a142c2c6) {
                        lVar2 = 0x7af938b01d08b8ed;
                        if (DAT_0021f6c6 == '\0') {
                          lVar2 = 0x2a8c5712890ef093;
                        }
                      }
                    }
                  }
                }
              }
              else if (lVar5 < -0xc6f57cee008058) {
                if (lVar5 == -0x17f21811d5e391bb) {
                  DAT_0021d238 = DAT_0021d238 ^ 0x3a;
                  DAT_0021d239 = DAT_0021d239 ^ 0x3a;
                  DAT_0021d23a = DAT_0021d23a ^ 0x3a;
                  DAT_0021d23b = DAT_0021d23b ^ 0x3a;
                  _DAT_0021d220 = _DAT_0021d220 ^ 0x3a3a3a3a3a3a3a3a;
                  uRam000000000021d228 = uRam000000000021d228 ^ 0x3a3a3a3a3a3a3a3a;
                  DAT_0021d230 = DAT_0021d230 ^ 0x3a3a3a3a3a3a3a3a;
                  DAT_0021f6f8 = '\x01';
                  lVar2 = 0x25baa1b2ad8e2dd;
                }
                else if (lVar5 == -0x8078c1ff0e7793e) {
                  DAT_0021d258 = DAT_0021d258 ^ 0x57;
                  DAT_0021d259 = DAT_0021d259 ^ 0x57;
                  DAT_0021d25a = DAT_0021d25a ^ 0x57;
                  DAT_0021d25b = DAT_0021d25b ^ 0x57;
                  _DAT_0021d240 = _DAT_0021d240 ^ 0x5757575757575757;
                  uRam000000000021d248 = uRam000000000021d248 ^ 0x5757575757575757;
                  DAT_0021d250 = DAT_0021d250 ^ 0x5757575757575757;
                  DAT_0021f6f9 = '\x01';
                  lVar2 = -0x5bf474f72bcdc40f;
                }
              }
              else {
                lVar2 = 0x5964365604f1d569;
                if (((lVar5 != -0xc6f57cee008058) &&
                    (lVar2 = 0x19a2ea649276c555, lVar5 != 0x14b51e9ad3c2d74)) &&
                   (lVar2 = lVar5, lVar5 == 0x25baa1b2ad8e2dd)) {
                  DAT_0021f4fc = 0;
                  uVar4 = FUN_00124d64(unaff_x22,&DAT_0021d220,0);
                  lVar2 = -0x598900475bb5ce2e;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = 0x453391939e35397e;
                  }
                }
              }
            }
            if (lVar5 < 0x453391939e35397e) break;
            if (lVar5 < 0x654ae84d1f1fb68b) {
              if (lVar5 < 0x5964365604f1d569) {
                lVar2 = 0x5964365604f1d569;
                if ((lVar5 != 0x453391939e35397e) && (lVar2 = lVar5, lVar5 == 0x513876352ffa3a2b)) {
                  lVar2 = -0x2d1d199cae2ad6aa;
                  if (DAT_0021f6f9 == '\0') {
                    lVar2 = -0x8078c1ff0e7793e;
                  }
                }
              }
              else if (lVar5 == 0x5964365604f1d569) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f500);
                lVar2 = 0x513876352ffa3a2b;
                if (iVar3 != 0) {
                  lVar2 = -0xc6f57cee008058;
                }
              }
              else {
                lVar2 = -0x5014e2511b3f3720;
                if ((lVar5 != 0x5b5eb966fcb0302c) && (lVar2 = lVar5, lVar5 == 0x615ee32a5fd663b6)) {
                  lVar2 = -0x26d8988656260025;
                }
              }
            }
            else if (lVar5 < 0x7093fe45d03c4677) {
              lVar2 = -0x505e59b84f5a1a7d;
              if ((lVar5 != 0x654ae84d1f1fb68b) && (lVar2 = lVar5, lVar5 == 0x6c05945b101f2e8a)) {
                lVar2 = lVar1;
              }
            }
            else {
              lVar2 = 0x29b27fffee295cc2;
              if (((lVar5 != 0x7093fe45d03c4677) &&
                  (lVar2 = -0x7db7b2fa48b3c495, lVar5 != 0x7af938b01d08b8ed)) &&
                 (lVar2 = lVar5, lVar5 == 0x7c549ef106217fb9)) {
                lVar2 = 0x19a2ea649276c555;
              }
            }
          }
          if (lVar5 < 0x291a07fe86e32767) break;
          if (lVar5 < 0x2a8c5712890ef093) {
            lVar2 = -0x5014e2511b3f3720;
            if ((lVar5 != 0x291a07fe86e32767) && (lVar2 = lVar5, lVar5 == 0x29b27fffee295cc2)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f438);
              lVar2 = -0x32ec24ad8c556e0d;
              if (iVar3 != 0) {
                lVar2 = -0x2ed24dd64775ccca;
              }
            }
          }
          else if (lVar5 == 0x2a8c5712890ef093) {
            DAT_0021cfd8 = DAT_0021cfd8 ^ 0x61;
            DAT_0021cfd9 = DAT_0021cfd9 ^ 0x61;
            _DAT_0021cfc0 = _DAT_0021cfc0 ^ 0x6161616161616161;
            uRam000000000021cfc8 = uRam000000000021cfc8 ^ 0x6161616161616161;
            DAT_0021cfd0 = DAT_0021cfd0 ^ 0x6161616161616161;
            DAT_0021f6c6 = '\x01';
            lVar2 = -0x7db7b2fa48b3c495;
          }
          else {
            lVar2 = -0x505e59b84f5a1a7d;
            if ((lVar5 != 0x37122e73a58282bd) && (lVar2 = lVar5, lVar5 == 0x3e83aa5a6579a168)) {
              lVar2 = -0x505e59b84f5a1a7d;
            }
          }
        }
        if (0x19a2ea649276c554 < lVar5) break;
        if (lVar5 == 0x30b867073a6ca70) {
          lVar2 = -0x40efc73a09323fc5;
          if (DAT_0021f6f8 == '\0') {
            lVar2 = -0x17f21811d5e391bb;
          }
        }
        else if (lVar5 == 0x4ef6a31abe0ec9c) {
          DAT_0021f438 = 0;
          uVar4 = FUN_00124d64(unaff_x22,&DAT_0021cfe0,0);
          lVar2 = 0x654ae84d1f1fb68b;
          if ((uVar4 & 1) == 0) {
            lVar2 = 0x14b51e9ad3c2d74;
          }
        }
      }
      if (lVar5 != 0x1e0084a6876a98ad) break;
      DAT_0021cff8 = DAT_0021cff8 ^ 0xe1;
      DAT_0021cff9 = DAT_0021cff9 ^ 0xe1;
      DAT_0021cffa = DAT_0021cffa ^ 0xe1;
      DAT_0021cffb = DAT_0021cffb ^ 0xe1;
      _DAT_0021cfe0 = _DAT_0021cfe0 ^ 0xe1e1e1e1e1e1e1e1;
      uRam000000000021cfe8 = uRam000000000021cfe8 ^ 0xe1e1e1e1e1e1e1e1;
      DAT_0021cffc = DAT_0021cffc ^ 0xe1;
      DAT_0021cff0 = DAT_0021cff0 ^ 0xe1e1e1e1e1e1e1e1;
      DAT_0021f6c7 = '\x01';
      lVar2 = 0x4ef6a31abe0ec9c;
    }
    lVar2 = 0x4ef6a31abe0ec9c;
  } while ((lVar5 == 0x272065a78cb71f77) || (lVar2 = lVar5, lVar5 != 0x19a2ea649276c555));
  return;
}

