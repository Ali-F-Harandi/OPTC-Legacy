// rea decompile_all
// name: FUN_001965d4
// address: 0x1965d4
// body: available
// range: 0x1965d4-0x19714b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001965d4(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                 long *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x5529e3973cc046ad;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x7150b060e6820573;
  }
  lVar3 = -0x43c3f7cff18068e0;
LAB_001966dc:
  do {
    while( true ) {
      while (lVar4 = lVar3, lVar3 = lVar4, 0x25baa1b2ad8e2dc < lVar4) {
        if (lVar4 < 0x3e83aa5a6579a168) {
          if (lVar4 < 0x272065a78cb71f77) {
            if (lVar4 < 0x4ef6a31abe0ec9c) {
              if (lVar4 == 0x25baa1b2ad8e2dd) {
                DAT_0021e2d0 = DAT_0021e2d0 ^ 0x8f;
                DAT_0021e2d2 = DAT_0021e2d2 ^ 0x8f;
                DAT_0021e2d1 = DAT_0021e2d1 ^ 0x8f;
                _DAT_0021e2c0 = _DAT_0021e2c0 ^ 0x8f8f8f8f8f8f8f8f;
                uRam000000000021e2c8 = uRam000000000021e2c8 ^ 0x8f8f8f8f8f8f8f8f;
                DAT_0021fa15 = '\x01';
                lVar3 = -0x598900475bb5ce2e;
              }
              else if (lVar4 == 0x30b867073a6ca70) {
                lVar3 = -0x40efc73a09323fc5;
                if (DAT_0021fa15 == '\0') {
                  lVar3 = 0x25baa1b2ad8e2dd;
                }
              }
            }
            else {
              lVar3 = -0x32ec24ad8c556e0d;
              if (((lVar4 != 0x4ef6a31abe0ec9c) && (lVar4 != 0x19a2ea649276c555)) &&
                 (lVar3 = lVar4, lVar4 == 0x1e0084a6876a98ad)) {
                lVar3 = -0x505e59b84f5a1a7d;
              }
            }
          }
          else if (lVar4 < 0x2a8c5712890ef093) {
            if (lVar4 == 0x291a07fe86e32767) {
              _DAT_0021e2e0 = _DAT_0021e2e0 ^ 0x5656565656565656;
              uRam000000000021e2e8 = uRam000000000021e2e8 ^ 0x5656565656565656;
              _DAT_0021e2f0 = _DAT_0021e2f0 ^ 0x5656565656565656;
              uRam000000000021e2f8 = uRam000000000021e2f8 ^ 0x5656565656565656;
              DAT_0021e318 = DAT_0021e318 ^ 0x56;
              DAT_0021e319 = DAT_0021e319 ^ 0x56;
              DAT_0021e310 = DAT_0021e310 ^ 0x5656565656565656;
              _DAT_0021e300 = _DAT_0021e300 ^ 0x5656565656565656;
              uRam000000000021e308 = uRam000000000021e308 ^ 0x5656565656565656;
              DAT_0021fa16 = '\x01';
              lVar3 = -0x5014e2511b3f3720;
            }
            else {
              if (lVar4 == 0x29b27fffee295cc2) {
                local_74 = 0x22;
                goto LAB_001966c8;
              }
              if (lVar4 == 0x272065a78cb71f77) {
                return;
              }
            }
          }
          else {
            lVar3 = -0x7db7b2fa48b3c495;
            if ((lVar4 != 0x2a8c5712890ef093) && (lVar3 = lVar4, lVar4 == 0x37122e73a58282bd)) {
              lVar3 = 0x29b27fffee295cc2;
              if (*param_6 != 0) {
                lVar3 = 0x7093fe45d03c4677;
              }
            }
          }
        }
        else if (lVar4 < 0x5b5eb966fcb0302c) {
          if (lVar4 < 0x513876352ffa3a2b) {
            lVar3 = -0x7db7b2fa48b3c495;
            if ((lVar4 != 0x3e83aa5a6579a168) && (lVar3 = lVar4, lVar4 == 0x453391939e35397e)) {
              local_88 = 0x11;
              goto LAB_001970c0;
            }
          }
          else if (lVar4 == 0x513876352ffa3a2b) {
            lVar3 = -0x2d1d199cae2ad6aa;
            if (DAT_0021fa16 == '\0') {
              lVar3 = 0x291a07fe86e32767;
            }
          }
          else if (lVar4 == 0x5964365604f1d569) {
            lVar3 = -0xc6f57cee008058;
            if (local_90 != 0) {
              lVar3 = -0x8078c1ff0e7793e;
            }
          }
        }
        else if (lVar4 < 0x654ae84d1f1fb68b) {
          if (lVar4 == 0x5b5eb966fcb0302c) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f938);
            lVar3 = 0x30b867073a6ca70;
            if (iVar2 != 0) {
              lVar3 = -0x17f21811d5e391bb;
            }
          }
          else if (lVar4 == 0x615ee32a5fd663b6) {
            local_84 = 0x11;
            goto LAB_00196c14;
          }
        }
        else if (lVar4 == 0x654ae84d1f1fb68b) {
          *param_1 = local_74;
          lVar3 = -0x505e59b84f5a1a7d;
        }
        else {
          lVar3 = -0x505e59b84f5a1a7d;
          if ((lVar4 != 0x7093fe45d03c4677) && (lVar3 = lVar4, lVar4 == 0x7af938b01d08b8ed)) {
            *param_1 = local_84;
            lVar3 = -0x32ec24ad8c556e0d;
          }
        }
      }
      if (-0x32ec24ad8c556e0e < lVar4) break;
      if (lVar4 < -0x5529e3973cc046ad) {
        if (lVar4 < -0x5bf474f72bcdc40f) {
          if (lVar4 == -0x7db7b2fa48b3c495) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f93c);
            lVar3 = 0x513876352ffa3a2b;
            if (iVar2 != 0) {
              lVar3 = 0x3e83aa5a6579a168;
            }
          }
          else if (lVar4 == -0x7150b060e6820573) {
            local_84 = 3;
LAB_00196c14:
            lVar3 = 0x7af938b01d08b8ed;
          }
        }
        else if (lVar4 == -0x5bf474f72bcdc40f) {
          local_88 = 0x22;
LAB_001970c0:
          lVar3 = 0x14b51e9ad3c2d74;
        }
        else if (lVar4 == -0x598900475bb5ce2e) {
          DAT_0021f938 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x20,&DAT_0021e2c0,&DAT_0021e2e0);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x5964365604f1d569;
          if (lVar4 != 0) {
            lVar3 = 0x453391939e35397e;
          }
        }
      }
      else if (lVar4 < -0x5014e2511b3f3720) {
        if (lVar4 == -0x5529e3973cc046ad) {
          unaff_x20 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x26d8988656260025;
          if (lVar4 != 0) {
            lVar3 = -0x2ed24dd64775ccca;
          }
        }
        else if (lVar4 == -0x505e59b84f5a1a7d) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
          lVar3 = -0x24530648a142c2c6;
          if (*param_1 != 0) {
            lVar3 = 0x19a2ea649276c555;
          }
        }
      }
      else if (lVar4 == -0x5014e2511b3f3720) {
        DAT_0021f93c = 0;
        lVar3 = 0x5b5eb966fcb0302c;
      }
      else {
        lVar3 = lVar1;
        if ((lVar4 != -0x43c3f7cff18068e0) && (lVar3 = lVar4, lVar4 == -0x40efc73a09323fc5)) {
          lVar3 = -0x598900475bb5ce2e;
        }
      }
    }
    if (lVar4 < -0x24530648a142c2c6) {
      if (lVar4 < -0x2d1d199cae2ad6aa) {
        if (lVar4 == -0x32ec24ad8c556e0d) {
          *param_6 = 0;
          lVar3 = 0x272065a78cb71f77;
        }
        else if (lVar4 == -0x2ed24dd64775ccca) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = 0x4ef6a31abe0ec9c;
          if (unaff_x20 != 0) {
            lVar3 = 0x1e0084a6876a98ad;
          }
          *param_1 = 0x11;
        }
      }
      else {
        lVar3 = -0x5014e2511b3f3720;
        if ((lVar4 != -0x2d1d199cae2ad6aa) && (lVar3 = lVar4, lVar4 == -0x26d8988656260025)) {
          lVar3 = 0x615ee32a5fd663b6;
          if (unaff_x20 != 0) {
            lVar3 = 0x2a8c5712890ef093;
          }
        }
      }
      goto LAB_001966dc;
    }
    if (-0x8078c1ff0e7793f < lVar4) {
      if (lVar4 != -0x8078c1ff0e7793e) {
        if (lVar4 == -0xc6f57cee008058) {
          local_74 = 0x11;
        }
        else {
          if (lVar4 != 0x14b51e9ad3c2d74) goto LAB_001966dc;
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
        }
LAB_001966c8:
        lVar3 = 0x654ae84d1f1fb68b;
        goto LAB_001966dc;
      }
      lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4,param_5);
      *param_6 = lVar3;
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x37122e73a58282bd;
      if (lVar4 != 0) {
        lVar3 = -0x5bf474f72bcdc40f;
      }
      goto LAB_001966dc;
    }
    lVar3 = 0x272065a78cb71f77;
    if ((lVar4 != -0x24530648a142c2c6) && (lVar3 = lVar4, lVar4 == -0x17f21811d5e391bb)) {
      lVar3 = 0x5b5eb966fcb0302c;
    }
  } while( true );
}

