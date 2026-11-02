// rea decompile_all
// name: FUN_0019f05c
// address: 0x19f05c
// body: available
// range: 0x19f05c-0x19fbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019f05c(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_88;
  int local_80;
  int local_7c;
  int local_6c;
  
  lVar1 = 0x280e4b2f28b7519a;
  if (param_3 != 0) {
    lVar1 = -0x7865feda09388b7d;
  }
  lVar4 = 0x644245778bef9eef;
LAB_0019f150:
  lVar3 = lVar4;
  lVar4 = lVar3;
  if (lVar3 < 0x150bbd31d4da96ad) {
    if (lVar3 < -0x1fbdfb39ff2788af) {
      if (-0x64fa39849e50d274 < lVar3) {
        if (lVar3 < -0x58c5009a4dca497d) {
          lVar4 = 0x133b568dda2a6eaf;
          if ((lVar3 != -0x64fa39849e50d273) && (lVar4 = lVar3, lVar3 == -0x62d5dc0978ac1e5c)) {
            DAT_0021f984 = 0;
            local_88 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x27,&DAT_0021e510,&DAT_0021e530);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x457ed11a0256aea8;
            if (lVar3 != 0) {
              lVar4 = -0x7974e97531da1164;
            }
          }
        }
        else if (lVar3 == -0x58c5009a4dca497d) {
          DAT_0021e550 = DAT_0021e550 ^ 0xf;
          DAT_0021e551 = DAT_0021e551 ^ 0xf;
          _DAT_0021e530 = _DAT_0021e530 ^ 0xf0f0f0f0f0f0f0f;
          uRam000000000021e538 = uRam000000000021e538 ^ 0xf0f0f0f0f0f0f0f;
          _DAT_0021e540 = _DAT_0021e540 ^ 0xf0f0f0f0f0f0f0f;
          uRam000000000021e548 = uRam000000000021e548 ^ 0xf0f0f0f0f0f0f0f;
          DAT_0021fa29 = '\x01';
          lVar4 = -0x266c94584c225bd;
        }
        else {
          lVar4 = -0x266c94584c225bd;
          if ((lVar3 != -0x4d8cc6b643108eaf) && (lVar4 = lVar3, lVar3 == -0x21865865568a509e)) {
            local_6c = 0x11;
            goto LAB_0019f13c;
          }
        }
        goto LAB_0019f150;
      }
      if (-0x732abbbfa6ceb70c < lVar3) {
        if (lVar3 == -0x732abbbfa6ceb70b) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = -0x1e9f262b6eadbc79;
          if (unaff_x27 != 0) {
            lVar4 = -0x1fbdfb39ff2788af;
          }
          *param_1 = 0x11;
        }
        else if (lVar3 == -0x6c7f38d955133598) {
          lVar4 = 0x3cb3611338aa819b;
          if (DAT_0021fa28 == '\0') {
            lVar4 = 0x6299a0b30c125920;
          }
        }
        goto LAB_0019f150;
      }
      if (lVar3 != -0x7974e97531da1164) {
        if (lVar3 == -0x7865feda09388b7d) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x497e5b98d7e89dd9;
          if (lVar3 != 0) {
            lVar4 = -0x732abbbfa6ceb70b;
          }
        }
        goto LAB_0019f150;
      }
      local_80 = 0x11;
    }
    else {
      if (lVar3 < -0xc3d40ba3453c21c) {
        if (lVar3 < -0x1dca00352b7c089f) {
          lVar4 = 0x133b568dda2a6eaf;
          if ((lVar3 != -0x1fbdfb39ff2788af) && (lVar4 = lVar3, lVar3 == -0x1e9f262b6eadbc79)) {
            lVar4 = 0x8c8ebe74cdb7ef7;
          }
        }
        else if (lVar3 == -0x1dca00352b7c089f) {
          lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_88);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0xd4a7ed4086a088a;
          if (lVar3 != 0) {
            lVar4 = 0xa5d3e0e8c03d2c2;
          }
        }
        else if (lVar3 == -0xd4a7ed4086a088a) {
          lVar4 = 0x35c10a14219311b5;
          if (*param_4 != 0) {
            lVar4 = -0x64fa39849e50d273;
          }
        }
        goto LAB_0019f150;
      }
      if (lVar3 < 0x8c8ebe74cdb7ef7) {
        lVar4 = 0x8c8ebe74cdb7ef7;
        if ((lVar3 != -0xc3d40ba3453c21c) && (lVar4 = lVar3, lVar3 == -0x266c94584c225bd)) {
          DAT_0021f988 = 0;
          lVar4 = 0x3df4c71738c04530;
        }
        goto LAB_0019f150;
      }
      if (lVar3 == 0x8c8ebe74cdb7ef7) {
        *param_4 = 0;
        lVar4 = 0x351d94fc1a3af0fc;
        goto LAB_0019f150;
      }
      if (lVar3 != 0xa5d3e0e8c03d2c2) {
        if (lVar3 == 0x133b568dda2a6eaf) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar4 = 0x613cf4e14e6f8fab;
          if (*param_1 != 0) {
            lVar4 = -0xc3d40ba3453c21c;
          }
        }
        goto LAB_0019f150;
      }
      local_80 = 0x1b;
    }
    lVar4 = 0x55fdd7394283d6ca;
    goto LAB_0019f150;
  }
  if (0x3cb3611338aa819a < lVar3) {
    if (lVar3 < 0x4a9f89dfcadbc0f8) {
      if (lVar3 < 0x457ed11a0256aea8) {
        lVar4 = -0x62d5dc0978ac1e5c;
        if ((lVar3 != 0x3cb3611338aa819b) && (lVar4 = lVar3, lVar3 == 0x3df4c71738c04530)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f984);
          lVar4 = -0x6c7f38d955133598;
          if (iVar2 != 0) {
            lVar4 = 0x24982c6b72c4e2d3;
          }
        }
      }
      else if (lVar3 == 0x457ed11a0256aea8) {
        lVar4 = -0x21865865568a509e;
        if (local_88 != 0) {
          lVar4 = -0x1dca00352b7c089f;
        }
      }
      else if (lVar3 == 0x497e5b98d7e89dd9) {
        lVar4 = 0x15d7b975425fb44c;
        if (unaff_x27 != 0) {
          lVar4 = 0x4a9f89dfcadbc0f8;
        }
      }
    }
    else if (lVar3 < 0x613cf4e14e6f8fab) {
      lVar4 = 0x283b7cfb02686624;
      if ((lVar3 != 0x4a9f89dfcadbc0f8) && (lVar4 = lVar3, lVar3 == 0x55fdd7394283d6ca)) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_6c = local_80;
LAB_0019f13c:
        lVar4 = 0x36a409d063814c3d;
      }
    }
    else {
      lVar4 = 0x351d94fc1a3af0fc;
      if (lVar3 != 0x613cf4e14e6f8fab) {
        if (lVar3 == 0x6299a0b30c125920) {
          DAT_0021e520 = DAT_0021e520 ^ 0x3e;
          DAT_0021e521 = DAT_0021e521 ^ 0x3e;
          DAT_0021e522 = DAT_0021e522 ^ 0x3e;
          DAT_0021e524 = DAT_0021e524 ^ 0x3e;
          DAT_0021e523 = DAT_0021e523 ^ 0x3e;
          DAT_0021e525 = DAT_0021e525 ^ 0x3e;
          _DAT_0021e510 = _DAT_0021e510 ^ 0x3e3e3e3e3e3e3e3e;
          uRam000000000021e518 = uRam000000000021e518 ^ 0x3e3e3e3e3e3e3e3e;
          DAT_0021fa28 = '\x01';
          lVar4 = -0x62d5dc0978ac1e5c;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x644245778bef9eef) {
            lVar4 = lVar1;
          }
        }
      }
    }
    goto LAB_0019f150;
  }
  if (0x283b7cfb02686623 < lVar3) {
    if (lVar3 < 0x351d94fc1a3af0fc) {
      if (lVar3 == 0x283b7cfb02686624) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f988);
        lVar4 = 0x3221982c8af227e7;
        if (iVar2 != 0) {
          lVar4 = 0x150bbd31d4da96ad;
        }
      }
      else if (lVar3 == 0x3221982c8af227e7) {
        lVar4 = -0x4d8cc6b643108eaf;
        if (DAT_0021fa29 == '\0') {
          lVar4 = -0x58c5009a4dca497d;
        }
      }
    }
    else {
      if (lVar3 == 0x35c10a14219311b5) {
        local_6c = 0x1b;
        goto LAB_0019f13c;
      }
      if (lVar3 == 0x36a409d063814c3d) {
        *param_1 = local_6c;
        lVar4 = 0x133b568dda2a6eaf;
      }
      else if (lVar3 == 0x351d94fc1a3af0fc) {
        return;
      }
    }
    goto LAB_0019f150;
  }
  if (lVar3 < 0x1e0c358806b89e99) {
    lVar4 = 0x283b7cfb02686624;
    if ((lVar3 == 0x150bbd31d4da96ad) || (lVar4 = lVar3, lVar3 != 0x15d7b975425fb44c))
    goto LAB_0019f150;
    local_7c = 0x11;
  }
  else {
    if (lVar3 == 0x1e0c358806b89e99) {
      *param_1 = local_7c;
      lVar4 = 0x8c8ebe74cdb7ef7;
      goto LAB_0019f150;
    }
    lVar4 = 0x3df4c71738c04530;
    if ((lVar3 == 0x24982c6b72c4e2d3) || (lVar4 = lVar3, lVar3 != 0x280e4b2f28b7519a))
    goto LAB_0019f150;
    local_7c = 3;
  }
  lVar4 = 0x1e0c358806b89e99;
  goto LAB_0019f150;
}

