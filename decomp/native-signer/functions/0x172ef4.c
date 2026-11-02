// rea decompile_all
// name: FUN_00172ef4
// address: 0x172ef4
// body: available
// range: 0x172ef4-0x1738ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00172ef4(undefined4 *param_1,long *param_2,long param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x28;
  undefined4 local_84;
  long local_80;
  undefined4 local_74;
  
  lVar1 = -0x32f7034afe95e1a8;
  if (param_5 == 0 || param_3 == 0) {
    lVar1 = 0x6beeef139d94bec;
  }
  lVar4 = -0xbbaf2345e37dd60;
LAB_00173008:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, -0xbbaf2345e37dd61 < lVar3) {
      if (lVar3 < 0x25b4e6ec9cd2ecdc) {
        if (lVar3 < 0x16719e03f6bac21d) {
          lVar4 = lVar1;
          if (lVar3 != -0xbbaf2345e37dd60) {
            if (lVar3 == 0x6beeef139d94bec) {
              *param_1 = 3;
              lVar4 = -0x28ee212cd644d530;
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == 0x15af5640957b8c3e) {
                lVar4 = -0x689f306bde299b82;
                if (unaff_x28 != 0) {
                  lVar4 = -0x554301dbdde0ca2c;
                }
              }
            }
          }
        }
        else if (lVar3 < 0x20737e34b7c0d799) {
          if (lVar3 == 0x16719e03f6bac21d) {
            DAT_0021f80c = 0;
            lVar4 = 0x40e2e377ff801f0f;
          }
          else if (lVar3 == 0x187cf29d06d6bd9e) {
            lVar4 = 0x16719e03f6bac21d;
          }
        }
        else if (lVar3 == 0x20737e34b7c0d799) {
          lVar4 = 0x187cf29d06d6bd9e;
          if (DAT_0021f9cc == '\0') {
            lVar4 = -0xbd76994df8af996;
          }
        }
        else if (lVar3 == 0x21f15559b2a9e8ab) {
          *param_1 = local_84;
          lVar4 = -0x6bd26373b69e2212;
        }
      }
      else if (lVar3 < 0x40e2e377ff801f0f) {
        if (lVar3 < 0x2f24479933703a4a) {
          if (lVar3 == 0x25b4e6ec9cd2ecdc) {
            local_74 = 0x28;
            goto LAB_001737b8;
          }
          if (lVar3 == 0x2ceb08fc97843c55) {
            DAT_0021f808 = 0;
            local_80 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x28,&DAT_0021d95c,&DAT_0021d970);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = -0x76001134909e88fc;
            if (lVar3 != 0) {
              lVar4 = -0x6ac927218151fec6;
            }
          }
        }
        else if (lVar3 == 0x2f24479933703a4a) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = -0x1038528dd04cc9b8;
          if (unaff_x28 != 0) {
            lVar4 = -0x1131d0135a6d3962;
          }
LAB_00173818:
          *param_1 = 0x11;
        }
        else if (lVar3 == 0x33d65f6cdac5d180) {
          lVar4 = -0x6bd26373b69e2212;
        }
      }
      else if (lVar3 < 0x5d0df0c4d56662f1) {
        if (lVar3 == 0x40e2e377ff801f0f) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f808);
          lVar4 = -0x19fe551b65af4a47;
          if (iVar2 != 0) {
            lVar4 = 0x4750cf34c56940e3;
          }
        }
        else if (lVar3 == 0x4750cf34c56940e3) {
          lVar4 = 0x40e2e377ff801f0f;
        }
      }
      else if (lVar3 == 0x5d0df0c4d56662f1) {
        DAT_0021d95c = DAT_0021d95c ^ 0x79;
        DAT_0021d95d = DAT_0021d95d ^ 0x79;
        DAT_0021d95e = DAT_0021d95e ^ 0x79;
        DAT_0021d95f = DAT_0021d95f ^ 0x79;
        DAT_0021d960 = DAT_0021d960 ^ 0x79;
        DAT_0021f9cb = '\x01';
        lVar4 = 0x2ceb08fc97843c55;
      }
      else if (lVar3 == 0x7bc8e480be254667) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_84 = local_74;
        goto LAB_001735d8;
      }
    }
    if (lVar3 < -0x32f7034afe95e1a8) {
      if (lVar3 < -0x61a21996f647e3aa) {
        if (lVar3 < -0x6ac927218151fec6) {
          if (lVar3 == -0x76001134909e88fc) {
            lVar4 = -0x43d8d42d8bbf5814;
            if (local_80 != 0) {
              lVar4 = -0x51cf875a70e06525;
            }
          }
          else if (lVar3 == -0x6bd26373b69e2212) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
            lVar4 = -0x28ee212cd644d530;
          }
        }
        else if (lVar3 == -0x6ac927218151fec6) {
          local_74 = 0x11;
LAB_001737b8:
          lVar4 = 0x7bc8e480be254667;
        }
        else if (lVar3 == -0x689f306bde299b82) {
          lVar4 = -0x28ee212cd644d530;
          goto LAB_00173818;
        }
      }
      else if (lVar3 < -0x51cf875a70e06525) {
        if (lVar3 == -0x61a21996f647e3aa) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f80c);
          lVar4 = 0x20737e34b7c0d799;
          if (iVar2 != 0) {
            lVar4 = -0x29d5f6a10f86b08c;
          }
        }
        else if (lVar3 == -0x554301dbdde0ca2c) {
          lVar4 = -0x61a21996f647e3aa;
        }
      }
      else if (lVar3 == -0x51cf875a70e06525) {
        (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_80,param_4,param_5);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x33d65f6cdac5d180;
        if (lVar3 != 0) {
          lVar4 = 0x25b4e6ec9cd2ecdc;
        }
      }
      else if (lVar3 == -0x43d8d42d8bbf5814) {
        local_84 = 0x11;
LAB_001735d8:
        lVar4 = 0x21f15559b2a9e8ab;
      }
      goto LAB_00173008;
    }
    if (lVar3 < -0x19fe551b65af4a47) {
      if (lVar3 < -0x29d5f6a10f86b08c) {
        if (lVar3 == -0x32f7034afe95e1a8) {
          unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x15af5640957b8c3e;
          if (lVar3 != 0) {
            lVar4 = 0x2f24479933703a4a;
          }
        }
        else if (lVar3 == -0x30c47c559a45f485) {
          lVar4 = 0x2ceb08fc97843c55;
        }
      }
      else {
        lVar4 = -0x61a21996f647e3aa;
        if ((lVar3 != -0x29d5f6a10f86b08c) && (lVar4 = lVar3, lVar3 == -0x28ee212cd644d530)) {
          return;
        }
      }
    }
    else if (lVar3 < -0x1038528dd04cc9b8) {
      if (lVar3 == -0x19fe551b65af4a47) {
        lVar4 = -0x30c47c559a45f485;
        if (DAT_0021f9cb == '\0') {
          lVar4 = 0x5d0df0c4d56662f1;
        }
      }
      else if (lVar3 == -0x1131d0135a6d3962) {
        lVar4 = -0x6bd26373b69e2212;
      }
    }
    else {
      lVar4 = -0x28ee212cd644d530;
      if ((lVar3 != -0x1038528dd04cc9b8) && (lVar4 = lVar3, lVar3 == -0xbd76994df8af996)) {
        _DAT_0021d970 = _DAT_0021d970 ^ 0xebebebebebebebeb;
        uRam000000000021d978 = uRam000000000021d978 ^ 0xebebebebebebebeb;
        DAT_0021d980 = DAT_0021d980 ^ 0xebebebebebebebeb;
        DAT_0021f9cc = '\x01';
        lVar4 = 0x16719e03f6bac21d;
      }
    }
  } while( true );
}

