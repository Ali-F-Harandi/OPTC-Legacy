// rea decompile_all
// name: FUN_00187a98
// address: 0x187a98
// body: available
// range: 0x187a98-0x1884d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00187a98(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  undefined4 local_7c;
  long local_78;
  undefined4 local_6c;
  
  lVar1 = 0x3c0f171d81262162;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x6a5a906d80283b3a;
  }
  lVar4 = 0xd964a51cd3ba505;
LAB_00187ba8:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < -0x1099d903d2d9bbfc) {
      if (lVar3 < -0x6b58ce94abb5bd77) {
        if (lVar3 < -0x7a88e7ad8401b074) {
          lVar4 = -0x3bd5139e863058e;
          if (lVar3 != -0x7e7764c337185d91) {
            if (lVar3 == -0x7ce9415b4fcd5ec6) {
              DAT_0021d95c = DAT_0021d95c ^ 0x79;
              DAT_0021d95d = DAT_0021d95d ^ 0x79;
              DAT_0021d95e = DAT_0021d95e ^ 0x79;
              DAT_0021d95f = DAT_0021d95f ^ 0x79;
              DAT_0021d960 = DAT_0021d960 ^ 0x79;
              DAT_0021f9cb = '\x01';
              lVar4 = 0x74ce24779109e63c;
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == -0x7c29516b80152c85) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                local_7c = local_6c;
                goto LAB_00187fe4;
              }
            }
          }
        }
        else if (lVar3 < -0x753a2421353a68a2) {
          lVar4 = 0x584f91cbbf5031a1;
          if ((lVar3 != -0x7a88e7ad8401b074) && (lVar4 = lVar3, lVar3 == -0x78a83b5b9fce00b2)) {
            lVar4 = -0x753a2421353a68a2;
            if (unaff_x27 != 0) {
              lVar4 = 0x28d24ed58bb0e734;
            }
          }
        }
        else if (lVar3 == -0x753a2421353a68a2) {
          lVar4 = 0x584f91cbbf5031a1;
LAB_0018844c:
          *param_1 = 0x11;
        }
        else if (lVar3 == -0x749ba309b160912b) {
          (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_78,param_4);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x7e7764c337185d91;
          if (lVar3 != 0) {
            lVar4 = -0x6b58ce94abb5bd77;
          }
        }
      }
      else if (lVar3 < -0x48b81812e43d7cd5) {
        if (lVar3 < -0x5da0429d9dcb81f2) {
          if (lVar3 == -0x6b58ce94abb5bd77) {
            local_6c = 0x26;
LAB_001882d0:
            lVar4 = -0x7c29516b80152c85;
          }
          else if (lVar3 == -0x6a5a906d80283b3a) {
            *param_1 = 3;
            lVar4 = 0x584f91cbbf5031a1;
          }
        }
        else {
          lVar4 = -0x3bd5139e863058e;
          if ((lVar3 != -0x5da0429d9dcb81f2) && (lVar4 = lVar3, lVar3 == -0x5a5297691d74482d)) {
            lVar4 = -0x2da13e23b2303993;
            if (DAT_0021f9fc == '\0') {
              lVar4 = 0x666f5881e0777d21;
            }
          }
        }
      }
      else if (lVar3 < -0x27dcc213e25f7af4) {
        lVar4 = 0x7c09026e7ef0be76;
        if ((lVar3 != -0x48b81812e43d7cd5) && (lVar4 = lVar3, lVar3 == -0x2da13e23b2303993)) {
          lVar4 = -0x27dcc213e25f7af4;
        }
      }
      else if (lVar3 == -0x27dcc213e25f7af4) {
        DAT_0021f8cc = 0;
        lVar4 = 0x63343d7496ecf449;
      }
      else if (lVar3 == -0x27d20edb58d568eb) {
        lVar4 = 0x63343d7496ecf449;
      }
    }
    if (lVar3 < 0x580318e8dfdd8386) {
      if (lVar3 < 0x16f769392dd6ee15) {
        if (lVar3 < 0x7cc0f569d5d36b6) {
          if (lVar3 == -0x1099d903d2d9bbfc) {
            lVar4 = 0x70ae8bbdb0445bab;
            if (local_78 != 0) {
              lVar4 = -0x749ba309b160912b;
            }
          }
          else if (lVar3 == -0x3bd5139e863058e) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar4 = 0x584f91cbbf5031a1;
          }
        }
        else {
          if (lVar3 == 0x7cc0f569d5d36b6) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar4 = -0x7a88e7ad8401b074;
            if (unaff_x27 != 0) {
              lVar4 = -0x5da0429d9dcb81f2;
            }
            goto LAB_0018844c;
          }
          if (lVar3 == 0xd964a51cd3ba505) {
            lVar4 = lVar1;
          }
        }
      }
      else if (lVar3 < 0x3763ccbf4160a5f0) {
        if (lVar3 == 0x16f769392dd6ee15) {
          lVar4 = 0x6b71b155612b92ff;
          if (DAT_0021f9cb == '\0') {
            lVar4 = -0x7ce9415b4fcd5ec6;
          }
        }
        else if (lVar3 == 0x28d24ed58bb0e734) {
          lVar4 = 0x7c09026e7ef0be76;
        }
      }
      else if (lVar3 == 0x3763ccbf4160a5f0) {
        *param_1 = local_7c;
        lVar4 = -0x3bd5139e863058e;
      }
      else if (lVar3 == 0x3c0f171d81262162) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x78a83b5b9fce00b2;
        if (lVar3 != 0) {
          lVar4 = 0x7cc0f569d5d36b6;
        }
      }
      goto LAB_00187ba8;
    }
    if (lVar3 < 0x6b71b155612b92ff) {
      if (lVar3 < 0x63343d7496ecf449) {
        if (lVar3 == 0x580318e8dfdd8386) {
          local_6c = 0x11;
          goto LAB_001882d0;
        }
        if (lVar3 == 0x584f91cbbf5031a1) {
          return;
        }
      }
      else if (lVar3 == 0x63343d7496ecf449) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f808);
        lVar4 = 0x16f769392dd6ee15;
        if (iVar2 != 0) {
          lVar4 = -0x27d20edb58d568eb;
        }
      }
      else if (lVar3 == 0x666f5881e0777d21) {
        DAT_0021dfb0 = DAT_0021dfb0 ^ 0xfa;
        DAT_0021dfb1 = DAT_0021dfb1 ^ 0xfa;
        DAT_0021dfb2 = DAT_0021dfb2 ^ 0xfa;
        DAT_0021dfb3 = DAT_0021dfb3 ^ 0xfa;
        DAT_0021dfb5 = DAT_0021dfb5 ^ 0xfa;
        DAT_0021dfb4 = DAT_0021dfb4 ^ 0xfa;
        DAT_0021dfb6 = DAT_0021dfb6 ^ 0xfa;
        _DAT_0021dfa0 = _DAT_0021dfa0 ^ 0xfafafafafafafafa;
        uRam000000000021dfa8 = uRam000000000021dfa8 ^ 0xfafafafafafafafa;
        DAT_0021f9fc = '\x01';
        lVar4 = -0x27dcc213e25f7af4;
      }
    }
    else if (lVar3 < 0x74ce24779109e63c) {
      lVar4 = 0x74ce24779109e63c;
      if ((lVar3 != 0x6b71b155612b92ff) && (lVar4 = lVar3, lVar3 == 0x70ae8bbdb0445bab)) {
        local_7c = 0x11;
LAB_00187fe4:
        lVar4 = 0x3763ccbf4160a5f0;
      }
    }
    else if (lVar3 == 0x74ce24779109e63c) {
      DAT_0021f808 = 0;
      local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021d95c,&DAT_0021dfa0);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x1099d903d2d9bbfc;
      if (lVar3 != 0) {
        lVar4 = 0x580318e8dfdd8386;
      }
    }
    else if (lVar3 == 0x7c09026e7ef0be76) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f8cc);
      lVar4 = -0x5a5297691d74482d;
      if (iVar2 != 0) {
        lVar4 = -0x48b81812e43d7cd5;
      }
    }
  } while( true );
}

