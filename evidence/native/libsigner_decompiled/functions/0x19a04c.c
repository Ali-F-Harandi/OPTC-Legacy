// rea decompile_all
// name: FUN_0019a04c
// address: 0x19a04c
// body: available
// range: 0x19a04c-0x19b02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019a04c(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  long local_b0;
  long local_a8;
  int local_9c;
  long local_90;
  int local_84;
  int local_74;
  long local_68;
  
  lVar1 = 0x7d7ca60ec56e0ed6;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x53c95fd0cdb0d457;
  }
  lVar3 = lVar1;
  lVar8 = -0x10f7fcdba713b08b;
LAB_0019a14c:
  while (lVar6 = lVar8, lVar7 = lVar3, lVar8 = lVar6, lVar3 = lVar7, lVar6 < -0x45308d6c5db8f8a) {
    if (lVar6 < -0x40468d8be3b7b1c2) {
      if (lVar6 < -0x66ff8c9e7589318b) {
        if (lVar6 < -0x74f4c62cc4ba5e9e) {
          if (lVar6 == -0x7e9643df0acdf8c0) {
            _DAT_0021e460 = _DAT_0021e460 ^ 0x7676767676767676;
            uRam000000000021e468 = uRam000000000021e468 ^ 0x7676767676767676;
            DAT_0021e470 = DAT_0021e470 ^ 0x7676767676767676;
            DAT_0021fa21 = '\x01';
            lVar8 = 0x77e21c1e128dbdb;
          }
          else if (lVar6 == -0x7d6cdc377ae2d00c) {
            DAT_0021f81c = 0;
            local_a8 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x20,&DAT_0021d9b4,&DAT_0021e460);
            lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar8 = -0x2a8b6a76d2705264;
            if (lVar7 != 0) {
              lVar8 = -0x22284ca78ec0840e;
            }
          }
          else if (lVar6 == -0x78c03ee56dc0bffe) {
            lVar8 = -0x7d6cdc377ae2d00c;
          }
        }
        else if (lVar6 == -0x74f4c62cc4ba5e9e) {
          iVar5 = FUN_00212730(0,1,&DAT_0021f964);
          lVar8 = -0x4b1c395a5abf85ba;
          if (iVar5 != 0) {
            lVar8 = -0x2d93c2350210af7a;
          }
        }
        else if (lVar6 == -0x72b971aa77b07010) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_68 = local_90;
          local_74 = local_84;
          lVar8 = -0x54f5756e3eb691f2;
        }
        else if (lVar6 == -0x6ab804e3f54b8fd3) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
          lVar8 = -0x42b929fde9b8103f;
          local_b0 = lVar7;
          if (lVar7 != 0) {
            lVar8 = 0x59f4cd4b0585811f;
          }
        }
      }
      else if (lVar6 < -0x44e75be649d70485) {
        lVar8 = 0x77e21c1e128dbdb;
        if (lVar6 != -0x66ff8c9e7589318b) {
          if (lVar6 == -0x54f5756e3eb691f2) {
            *param_1 = local_74;
            lVar3 = local_68;
            lVar8 = -0x6ab804e3f54b8fd3;
          }
          else {
            lVar8 = lVar6;
            if (lVar6 == -0x4b1c395a5abf85ba) {
              lVar8 = 0x47fe5b2c57f6618c;
              lVar7 = 0x1dbc502707e6be16;
              cVar2 = DAT_0021fa20;
LAB_0019afe0:
              if (cVar2 == '\0') {
                lVar8 = lVar7;
              }
            }
          }
        }
      }
      else if (lVar6 == -0x44e75be649d70485) {
        bVar4 = unaff_x21 == 0;
        lVar6 = 0x172651ebbec5122c;
        lVar8 = -0x16cc3e68c6539242;
LAB_0019a144:
        lVar3 = lVar7;
        if (!bVar4) {
          lVar8 = lVar6;
        }
      }
      else if (lVar6 == -0x431882b1aaf0ef63) {
        lVar8 = -0x78c03ee56dc0bffe;
        if (DAT_0021f9d0 == '\0') {
          lVar8 = -0x20464d4bb0fa1f5c;
        }
      }
      else if (lVar6 == -0x42b929fde9b8103f) {
LAB_0019ad20:
        lVar8 = 0x1537c02fdb61e5;
      }
    }
    else if (lVar6 < -0x20464d4bb0fa1f5c) {
      if (lVar6 < -0x2a8b6a76d2705264) {
        lVar8 = 0x309e31f0fbfb7473;
        if (((lVar6 != -0x40468d8be3b7b1c2) &&
            (lVar8 = -0x9ab4150d068a4b8, lVar6 != -0x3463ef23a9b0cf9f)) &&
           (lVar8 = lVar6, lVar6 == -0x2d93c2350210af7a)) {
LAB_0019aab0:
          lVar8 = -0x74f4c62cc4ba5e9e;
        }
      }
      else {
        if (lVar6 == -0x2a8b6a76d2705264) {
          bVar4 = local_a8 == 0;
          lVar8 = 0x184a948e295275f6;
          lVar6 = 0x1af75ebd6f232356;
          goto LAB_0019a144;
        }
        lVar8 = 0x11791194739d5e81;
        if ((lVar6 != -0x264a552d48185c30) && (lVar8 = lVar6, lVar6 == -0x22284ca78ec0840e)) {
          local_90 = 0;
          local_84 = 0x11;
          lVar8 = -0x72b971aa77b07010;
        }
      }
    }
    else if (lVar6 < -0x11e504026d64685a) {
      if (lVar6 == -0x20464d4bb0fa1f5c) {
        DAT_0021d9b5 = DAT_0021d9b5 ^ 0x4e;
        DAT_0021d9b4 = DAT_0021d9b4 ^ 0x4e;
        DAT_0021d9b6 = DAT_0021d9b6 ^ 0x4e;
        DAT_0021d9b7 = DAT_0021d9b7 ^ 0x4e;
        DAT_0021d9b8 = DAT_0021d9b8 ^ 0x4e;
        DAT_0021d9ba = DAT_0021d9ba ^ 0x4e;
        DAT_0021d9b9 = DAT_0021d9b9 ^ 0x4e;
        DAT_0021f9d0 = '\x01';
        lVar8 = -0x7d6cdc377ae2d00c;
      }
      else {
        if (lVar6 == -0x16cc3e68c6539242) {
          local_74 = 0x21;
          local_68 = unaff_x21;
          goto LAB_0019ae28;
        }
        if (lVar6 == -0x16832f8e7e0e189a) {
          iVar5 = FUN_00212730(0,1,&DAT_0021f968);
          lVar8 = 0x74d6dcc3c5b7b622;
          if (iVar5 != 0) {
            lVar8 = 0x2d6677fd84398e19;
          }
        }
      }
    }
    else if (lVar6 < -0xe07a343fe0a8793) {
      if (lVar6 == -0x11e504026d64685a) {
        local_84 = 0x1b;
        goto LAB_0019ac50;
      }
      if (lVar6 == -0x10f7fcdba713b08b) {
        lVar8 = lVar1;
      }
    }
    else {
      if (lVar6 == -0xe07a343fe0a8793) {
        lVar8 = -0x13d91913aabe64e;
        bVar4 = *param_5 == 0;
        lVar6 = 0x25c2551de59e465b;
        goto LAB_0019a144;
      }
      if (lVar6 == -0x9ab4150d068a4b8) {
        return;
      }
    }
  }
  if (0x2d6677fd84398e18 < lVar6) {
    if (lVar6 < 0x59f4cd4b0585811f) {
      if (lVar6 < 0x474660dd6adc49ce) {
        lVar8 = -0x16832f8e7e0e189a;
        if (lVar6 != 0x2d6677fd84398e19) {
          if (lVar6 == 0x2f55761114117f10) {
            local_84 = 0x21;
LAB_0019ac50:
            lVar8 = -0x72b971aa77b07010;
            local_90 = unaff_x21;
          }
          else {
            lVar8 = lVar6;
            if (lVar6 == 0x309e31f0fbfb7473) {
              iVar5 = FUN_00212730(0,1,&DAT_0021f81c);
              lVar8 = -0x431882b1aaf0ef63;
              if (iVar5 != 0) {
                lVar8 = -0x40468d8be3b7b1c2;
              }
            }
          }
        }
        goto LAB_0019a14c;
      }
      lVar8 = -0x16832f8e7e0e189a;
      if (((lVar6 == 0x474660dd6adc49ce) ||
          (lVar8 = 0x5c051af6033ba852, lVar6 == 0x47fe5b2c57f6618c)) ||
         (lVar8 = lVar6, lVar6 != 0x53c95fd0cdb0d457)) goto LAB_0019a14c;
      local_9c = 3;
    }
    else {
      if (0x6df9d26133f36c66 < lVar6) {
        if (lVar6 < 0x74d6dcc3c5b7b622) {
          if (lVar6 == 0x6df9d26133f36c67) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar8 = -0x264a552d48185c30;
            if (unaff_x20 != 0) {
              lVar8 = -0x45308d6c5db8f8a;
            }
            *param_1 = 0x11;
          }
          else if (lVar6 == 0x73f2348a586d9754) {
            lVar8 = 0x11791194739d5e81;
          }
        }
        else {
          if (lVar6 == 0x74d6dcc3c5b7b622) {
            lVar8 = -0x66ff8c9e7589318b;
            lVar7 = -0x7e9643df0acdf8c0;
            cVar2 = DAT_0021fa21;
            goto LAB_0019afe0;
          }
          if (lVar6 == 0x7d7ca60ec56e0ed6) goto LAB_0019aab0;
        }
        goto LAB_0019a14c;
      }
      if (lVar6 == 0x59f4cd4b0585811f) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
        goto LAB_0019ad20;
      }
      if (lVar6 == 0x5c051af6033ba852) {
        DAT_0021f964 = 0;
        unaff_x20 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e440);
        lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = 0x299741929a47184d;
        if (lVar7 != 0) {
          lVar8 = 0x6df9d26133f36c67;
        }
        goto LAB_0019a14c;
      }
      if (lVar6 != 0x5e4ec1c291d6bc50) goto LAB_0019a14c;
      local_9c = 0x11;
    }
    lVar8 = 0x1235de85f768efb6;
    goto LAB_0019a14c;
  }
  if (lVar6 < 0x172651ebbec5122c) {
    if (0x77e21c1e128dbda < lVar6) {
      if (lVar6 == 0x77e21c1e128dbdb) {
        DAT_0021f968 = 0;
        lVar8 = 0x309e31f0fbfb7473;
      }
      else if (lVar6 == 0x11791194739d5e81) {
        *param_5 = 0;
        lVar8 = -0x9ab4150d068a4b8;
      }
      else if (lVar6 == 0x1235de85f768efb6) {
        *param_1 = local_9c;
        lVar8 = 0x11791194739d5e81;
      }
      goto LAB_0019a14c;
    }
    if (lVar6 == -0x45308d6c5db8f8a) {
      lVar3 = 0;
      lVar8 = -0x6ab804e3f54b8fd3;
      goto LAB_0019a14c;
    }
    if (lVar6 != -0x13d91913aabe64e) {
      if (lVar6 == 0x1537c02fdb61e5) {
        lVar8 = -0x3463ef23a9b0cf9f;
        if (*param_1 != 0) {
          lVar8 = 0x73f2348a586d9754;
        }
      }
      goto LAB_0019a14c;
    }
    local_74 = 0x1b;
    local_68 = unaff_x21;
  }
  else {
    if (0x1dbc502707e6be15 < lVar6) {
      if (lVar6 == 0x1dbc502707e6be16) {
        _DAT_0021e440 = _DAT_0021e440 ^ 0x2929292929292929;
        uRam000000000021e448 = uRam000000000021e448 ^ 0x2929292929292929;
        _DAT_0021e450 = _DAT_0021e450 ^ 0x2929292929292929;
        uRam000000000021e458 = uRam000000000021e458 ^ 0x2929292929292929;
        DAT_0021fa20 = '\x01';
        lVar8 = 0x5c051af6033ba852;
      }
      else {
        lVar3 = unaff_x21;
        lVar8 = -0x6ab804e3f54b8fd3;
        if ((lVar6 != 0x25c2551de59e465b) &&
           (lVar3 = lVar7, lVar8 = lVar6, lVar6 == 0x299741929a47184d)) {
          lVar6 = 0x474660dd6adc49ce;
          lVar8 = 0x5e4ec1c291d6bc50;
          bVar4 = unaff_x20 == 0;
          goto LAB_0019a144;
        }
      }
      goto LAB_0019a14c;
    }
    if (lVar6 == 0x172651ebbec5122c) {
      lVar8 = (**(code **)(*param_2 + 0xe0))(param_2,unaff_x20,local_a8,param_3,unaff_x21);
      *param_5 = lVar8;
      lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar8 = -0xe07a343fe0a8793;
      if (lVar7 != 0) {
        lVar8 = -0x11e504026d64685a;
      }
      goto LAB_0019a14c;
    }
    if (lVar6 != 0x184a948e295275f6) {
      if (lVar6 == 0x1af75ebd6f232356) {
        unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
        lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar8 = -0x44e75be649d70485;
        if (lVar7 != 0) {
          lVar8 = 0x2f55761114117f10;
        }
      }
      goto LAB_0019a14c;
    }
    local_68 = 0;
    local_74 = 0x11;
  }
LAB_0019ae28:
  lVar8 = -0x54f5756e3eb691f2;
  goto LAB_0019a14c;
}

