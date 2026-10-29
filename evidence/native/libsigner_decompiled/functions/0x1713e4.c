// rea decompile_all
// name: FUN_001713e4
// address: 0x1713e4
// body: available
// range: 0x1713e4-0x171f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001713e4(int *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x27;
  long local_98;
  int local_90;
  int local_8c;
  int local_7c;
  
  puVar1 = (undefined1 *)0x255edd958a6bac09;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0x700353e7f52f2541;
  }
  puVar2 = (undefined1 *)0x5602aba7b2fd1776;
LAB_001714e4:
  while (puVar5 = puVar2, puVar2 = puVar5, (long)puVar5 < 0x7c7b2e9101238be) {
    if ((long)puVar5 < -0x4d54a68c57c6c7d7) {
      if ((long)puVar5 < -0x61df6f5eb675c678) {
        if ((long)puVar5 < -0x6f96062f695abb57) {
          if (puVar5 == (undefined1 *)0x821c8b1c7fb52216) {
            *param_1 = local_8c;
            puVar2 = (undefined1 *)0x985a0271c94b744c;
          }
          else if (puVar5 == (undefined1 *)0x8b5f027c68a44d63) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            puVar2 = (undefined1 *)0xdbad924ea5a61493;
            if (unaff_x27 != 0) {
              puVar2 = (undefined1 *)0x766c039d1f7e793a;
            }
            *param_1 = 0x11;
          }
        }
        else if (puVar5 == (undefined1 *)0x9069f9d096a544a9) {
          DAT_0021d8f8 = DAT_0021d8f8 ^ 0x4f;
          DAT_0021d8f9 = DAT_0021d8f9 ^ 0x4f;
          DAT_0021d8fa = DAT_0021d8fa ^ 0x4f;
          DAT_0021d8fb = DAT_0021d8fb ^ 0x4f;
          _DAT_0021d8e0 = _DAT_0021d8e0 ^ 0x4f4f4f4f4f4f4f4f;
          uRam000000000021d8e8 = uRam000000000021d8e8 ^ 0x4f4f4f4f4f4f4f4f;
          DAT_0021d8f0 = DAT_0021d8f0 ^ 0x4f4f4f4f4f4f4f4f;
          DAT_0021f9c8 = '\x01';
          puVar2 = (undefined1 *)0xc0982d9fe51200a2;
        }
        else if (puVar5 == (undefined1 *)0x93b191de03cef628) {
          puVar2 = (undefined1 *)0x141117e41a694bd2;
          if (DAT_0021f9c8 == '\0') {
            puVar2 = (undefined1 *)0x9069f9d096a544a9;
          }
        }
        else if (puVar5 == (undefined1 *)0x985a0271c94b744c) {
          *param_4 = 0;
          puVar2 = (undefined1 *)0xa10e393b52cbf917;
        }
      }
      else if ((long)puVar5 < -0x5ef1c6c4ad3406e9) {
        puVar2 = (undefined1 *)0xf237c2013c1c6fa2;
        if ((puVar5 != &DAT_9e2090a1498a3988) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0xa1025555fa88bbec)) {
          lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_98);
          *param_4 = lVar4;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          puVar2 = (undefined1 *)0x13c4fd347c136e7f;
          if (lVar4 != 0) {
            puVar2 = (undefined1 *)0xcb6b25853fe6fc06;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0xad7de85437cef473) {
        *param_1 = local_7c;
        puVar2 = (undefined1 *)0x7c7b2e9101238be;
      }
      else {
        puVar2 = (undefined1 *)0x985a0271c94b744c;
        if ((puVar5 != (undefined1 *)0xae3c1f38c62f5e66) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0xa10e393b52cbf917)) {
          return;
        }
      }
    }
    else if ((long)puVar5 < -0x3494da7ac01903fa) {
      if ((long)puVar5 < -0x3f67d2601aedff5e) {
        if (puVar5 == (undefined1 *)0xb2ab5973a8393829) {
          local_7c = 0x11;
          goto LAB_001714d0;
        }
        if (puVar5 == (undefined1 *)0xb2d9bc6161ff7d2e) {
          puVar2 = (undefined1 *)0x5ef7b9568d6b3c0a;
          if (unaff_x27 != 0) {
            puVar2 = &DAT_9e2090a1498a3988;
          }
        }
      }
      else if (puVar5 == (undefined1 *)0xc0982d9fe51200a2) {
        DAT_0021f7fc = 0;
        puVar2 = (undefined1 *)0xdc9ddaed2293c02d;
      }
      else if (puVar5 == (undefined1 *)0xc2e6a1ba5783b696) {
        DAT_0021f7f8 = 0;
        local_98 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021d8d0,&DAT_0021d8e0);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        puVar2 = (undefined1 *)0x14437797ebdb3d1c;
        if (lVar4 != 0) {
          puVar2 = (undefined1 *)0x616167e75f9c95a2;
        }
      }
    }
    else if ((long)puVar5 < -0x23622512dd6c3fd3) {
      if (puVar5 == (undefined1 *)0xcb6b25853fe6fc06) {
        local_90 = 0x1b;
LAB_00171f44:
        puVar2 = (undefined1 *)0x722ff175841bf512;
      }
      else if (puVar5 == (undefined1 *)0xdbad924ea5a61493) {
        puVar2 = (undefined1 *)0x985a0271c94b744c;
      }
    }
    else if (puVar5 == (undefined1 *)0xdc9ddaed2293c02d) {
      iVar3 = FUN_00212730(0,1,&DAT_0021f7f8);
      puVar2 = (undefined1 *)0x6d0a3d5f63139421;
      if (iVar3 != 0) {
        puVar2 = (undefined1 *)0x35d73c47b28080e6;
      }
    }
    else {
      puVar2 = (undefined1 *)0xa10e393b52cbf917;
      if ((puVar5 != (undefined1 *)0xea3eaef375108ea1) &&
         (puVar2 = puVar5, puVar5 == (undefined1 *)0xf237c2013c1c6fa2)) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f7fc);
        puVar2 = (undefined1 *)0x93b191de03cef628;
        if (iVar3 != 0) {
          puVar2 = (undefined1 *)0x225f8dd9081ebc43;
        }
      }
    }
  }
  if ((long)puVar5 < 0x5602aba7b2fd1776) {
    if ((long)puVar5 < 0x225f8dd9081ebc43) {
      if ((long)puVar5 < 0x141117e41a694bd2) {
        if (puVar5 == (undefined1 *)0x7c7b2e9101238be) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          puVar2 = (undefined1 *)0xea3eaef375108ea1;
          if (*param_1 != 0) {
            puVar2 = (undefined1 *)0xae3c1f38c62f5e66;
          }
        }
        else if (puVar5 == (undefined1 *)0x13c4fd347c136e7f) {
          puVar2 = (undefined1 *)0x3ad7c4eff58bcc67;
          if (*param_4 != 0) {
            puVar2 = (undefined1 *)0x548fc1c84959d43b;
          }
        }
      }
      else {
        puVar2 = (undefined1 *)0xc0982d9fe51200a2;
        if ((puVar5 != (undefined1 *)0x141117e41a694bd2) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x14437797ebdb3d1c)) {
          puVar2 = (undefined1 *)0xb2ab5973a8393829;
          if (local_98 != 0) {
            puVar2 = (undefined1 *)0xa1025555fa88bbec;
          }
        }
      }
      goto LAB_001714e4;
    }
    if ((long)puVar5 < 0x35d73c47b28080e6) {
      puVar2 = (undefined1 *)0xf237c2013c1c6fa2;
      if ((puVar5 != (undefined1 *)0x225f8dd9081ebc43) &&
         (puVar2 = puVar5, puVar5 == (undefined1 *)0x255edd958a6bac09)) {
        local_8c = 3;
        goto LAB_00171a00;
      }
      goto LAB_001714e4;
    }
    puVar2 = (undefined1 *)0xdc9ddaed2293c02d;
    if (puVar5 == (undefined1 *)0x35d73c47b28080e6) goto LAB_001714e4;
    if (puVar5 != (undefined1 *)0x3ad7c4eff58bcc67) {
      puVar2 = puVar5;
      if (puVar5 == (undefined1 *)0x548fc1c84959d43b) {
        puVar2 = (undefined1 *)0x7c7b2e9101238be;
      }
      goto LAB_001714e4;
    }
    local_7c = 0x1b;
  }
  else {
    if ((long)puVar5 < 0x6b90417ce1ccb7ee) {
      if ((long)puVar5 < 0x616167e75f9c95a2) {
        puVar2 = puVar1;
        if ((puVar5 != (undefined1 *)0x5602aba7b2fd1776) &&
           (puVar2 = puVar5, puVar5 == (undefined1 *)0x5ef7b9568d6b3c0a)) {
          local_8c = 0x11;
LAB_00171a00:
          puVar2 = (undefined1 *)0x821c8b1c7fb52216;
        }
      }
      else {
        if (puVar5 == (undefined1 *)0x616167e75f9c95a2) {
          local_90 = 0x11;
          goto LAB_00171f44;
        }
        if (puVar5 == (undefined1 *)0x65123e08886f988e) {
          puVar2 = (undefined1 *)0xc2e6a1ba5783b696;
        }
      }
      goto LAB_001714e4;
    }
    if ((long)puVar5 < 0x700353e7f52f2541) {
      if (puVar5 == (undefined1 *)0x6b90417ce1ccb7ee) {
        DAT_0021d8d8 = DAT_0021d8d8 ^ 0x60;
        DAT_0021d8d9 = DAT_0021d8d9 ^ 0x60;
        DAT_0021d8da = DAT_0021d8da ^ 0x60;
        DAT_0021d8db = DAT_0021d8db ^ 0x60;
        DAT_0021d8dc = DAT_0021d8dc ^ 0x60;
        DAT_0021d8d0 = DAT_0021d8d0 ^ 0x6060606060606060;
        DAT_0021f9c7 = '\x01';
        puVar2 = (undefined1 *)0xc2e6a1ba5783b696;
      }
      else if (puVar5 == (undefined1 *)0x6d0a3d5f63139421) {
        puVar2 = (undefined1 *)0x65123e08886f988e;
        if (DAT_0021f9c7 == '\0') {
          puVar2 = (undefined1 *)0x6b90417ce1ccb7ee;
        }
      }
      goto LAB_001714e4;
    }
    if (puVar5 == (undefined1 *)0x700353e7f52f2541) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      puVar2 = (undefined1 *)0xb2d9bc6161ff7d2e;
      if (lVar4 != 0) {
        puVar2 = (undefined1 *)0x8b5f027c68a44d63;
      }
      goto LAB_001714e4;
    }
    if (puVar5 != (undefined1 *)0x722ff175841bf512) {
      if (puVar5 == (undefined1 *)0x766c039d1f7e793a) {
        puVar2 = (undefined1 *)0x7c7b2e9101238be;
      }
      goto LAB_001714e4;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_7c = local_90;
  }
LAB_001714d0:
  puVar2 = (undefined1 *)0xad7de85437cef473;
  goto LAB_001714e4;
}

