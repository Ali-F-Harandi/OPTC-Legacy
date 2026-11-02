// rea decompile_all
// name: FUN_00159abc
// address: 0x159abc
// body: available
// range: 0x159abc-0x15a763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00159abc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte unaff_w24;
  ulong local_b0;
  long local_a8;
  long *local_a0;
  ulong local_98;
  byte local_90;
  byte local_8c;
  ulong local_88;
  byte local_78;
  byte local_74;
  
  lVar3 = -0x4ce9306aa856bd66;
LAB_00159bc8:
  while (lVar2 = lVar3, lVar3 = lVar2, lVar2 < 0x7719bfe5986de15) {
    if (lVar2 < -0x4318642940a03e7d) {
      if (lVar2 < -0x5fa983d3a2b17e0b) {
        if (lVar2 < -0x754e6f124485f52e) {
          if (lVar2 == -0x7bfadd1bc5a912f3) {
            lVar3 = 0x5ed810c3e1baf04f;
            if (DAT_0021f72f == '\0') {
              lVar3 = 0x3ab49ee9ea0f8f68;
            }
          }
          else if (lVar2 == -0x7a237db2cb6bf64a) goto LAB_00159bb4;
        }
        else if (lVar2 == -0x754e6f124485f52e) {
          DAT_0021f5d4 = 0;
          iVar1 = FUN_001e17a8(&DAT_0021d650,local_a8);
          lVar3 = 0x71f5b38b996c0eec;
          if (iVar1 != 0) {
            lVar3 = -0x67de9a74a9b4d274;
          }
        }
        else if (lVar2 == -0x708c8708b8732bb1) {
          local_98 = 0;
          lVar3 = -0x5cffb23fef9176a;
          local_74 = 0;
        }
        else if (lVar2 == -0x67de9a74a9b4d274) {
          lVar3 = -0xdf25926a35ab71;
          local_8c = local_78;
        }
      }
      else if (lVar2 < -0x552faaaf1d4d4dd6) {
        lVar3 = 0x53872bc99e6eacc;
        if (lVar2 != -0x5fa983d3a2b17e0b) {
          if (lVar2 == -0x58ca011d3a16c2ec) {
            lVar3 = -0x4318642940a03e7d;
            if (DAT_0021f72e == '\0') {
              lVar3 = 0x6450db544366ff66;
            }
          }
          else {
            lVar3 = lVar2;
            if (lVar2 == -0x56e99f0e7a79823e) {
              lVar3 = -0x552faaaf1d4d4dd6;
              unaff_w24 = local_90;
            }
          }
        }
      }
      else {
        lVar3 = 0x1bf7eceb514bf1fc;
        if (((lVar2 != -0x4fea74ada2bb8949) &&
            (lVar3 = 0x60bf21e07bf540de, lVar2 != -0x4ce9306aa856bd66)) &&
           (lVar3 = lVar2, lVar2 == -0x552faaaf1d4d4dd6)) {
          return unaff_w24 & 1;
        }
      }
    }
    else if (lVar2 < -0x2b623563010909b) {
      if (lVar2 < -0x2017123360639fe2) {
        lVar3 = -0x754e6f124485f52e;
        if ((lVar2 != -0x4318642940a03e7d) && (lVar3 = lVar2, lVar2 == -0x260cdcf2072a79ef)) {
          local_98 = local_b0;
          lVar3 = -0x5cffb23fef9176a;
          local_74 = local_90;
        }
      }
      else if (lVar2 == -0x2017123360639fe2) {
        lVar3 = -0x708c8708b8732bb1;
        if (*(long *)(param_1 + 0x870) != 1) {
          lVar3 = 0x7c62ee0501d1c1c;
        }
      }
      else if (lVar2 == -0x101d6e6adf715836) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f264);
        lVar3 = -0x2b623563010909b;
        if (iVar1 != 0) {
          lVar3 = 0x21147d1c48868a46;
        }
      }
      else if (lVar2 == -0x5cffb23fef9176a) {
        local_88 = local_98;
        local_a8 = *(long *)(param_1 + local_98 * 0x10 + 0x70);
        lVar3 = -0x7a237db2cb6bf64a;
        local_78 = local_74;
        if (local_a8 != 0) {
          lVar3 = 0x7202621c40a185ae;
        }
      }
    }
    else if (lVar2 < 0x248b2b95819e219) {
      if (lVar2 == -0x2b623563010909b) {
        lVar3 = -0x5fa983d3a2b17e0b;
        if (DAT_0021f652 == '\0') {
          lVar3 = 0x7719bfe5986de15;
        }
      }
      else if (lVar2 == -0xdf25926a35ab71) {
        local_b0 = local_88 + 1;
        lVar3 = -0x260cdcf2072a79ef;
        local_90 = local_8c;
        if (*(ulong *)(param_1 + 0x870) <= local_b0) {
          lVar3 = -0x56e99f0e7a79823e;
        }
      }
    }
    else if (lVar2 == 0x248b2b95819e219) {
      DAT_0021f5d8 = 0;
      iVar1 = FUN_001e17a8(&DAT_0021d670,*local_a0);
      local_8c = iVar1 == 0 | local_78;
      lVar3 = -0xdf25926a35ab71;
    }
    else if (lVar2 == 0x53872bc99e6eacc) {
      DAT_0021f264 = 0;
      lVar2 = FUN_001e238c(*(undefined8 *)(param_1 + 0x50),&DAT_0021c488);
      lVar3 = -0x2017123360639fe2;
      if (lVar2 != 0) {
        lVar3 = 0x71b928470b25f86d;
      }
    }
    else if (lVar2 == 0x553055f9345bf64) {
      DAT_0021f264 = 0;
      lVar2 = FUN_001e238c(*(undefined8 *)(param_1 + 8),&DAT_0021c488);
      lVar3 = 0x76b0cb9423bdf417;
      if (lVar2 != 0) {
        lVar3 = 0x6210d1caa0343086;
      }
    }
  }
  if (0x5cf00454b0336252 < lVar2) {
    if (lVar2 < 0x6450db544366ff66) {
      if (lVar2 < 0x60bf21e07bf540de) {
        if (lVar2 == 0x5cf00454b0336253) {
          lVar3 = 0x61e0ff3fa00a7444;
          if (DAT_0021f652 == '\0') {
            lVar3 = 0x69ef9eeae967d1f1;
          }
        }
        else if (lVar2 == 0x5ed810c3e1baf04f) {
          lVar3 = 0x248b2b95819e219;
        }
        goto LAB_00159bc8;
      }
      if (lVar2 == 0x60bf21e07bf540de) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f264);
        lVar3 = 0x5cf00454b0336253;
        if (iVar1 != 0) {
          lVar3 = 0x3abf132a1d4c2f11;
        }
        goto LAB_00159bc8;
      }
      lVar3 = 0x553055f9345bf64;
      if ((lVar2 == 0x61e0ff3fa00a7444) || (lVar3 = lVar2, lVar2 != 0x6210d1caa0343086))
      goto LAB_00159bc8;
    }
    else {
      if (0x71f5b38b996c0eeb < lVar2) {
        lVar3 = 0x1bf7eceb514bf1fc;
        if (lVar2 != 0x71f5b38b996c0eec) {
          if (lVar2 == 0x7202621c40a185ae) {
            local_a0 = (long *)(param_1 + local_88 * 0x10 + 0x78);
            lVar3 = 0x54e2117db585762f;
            if (*local_a0 != 0) {
              lVar3 = 0x174b900d43e1fe09;
            }
          }
          else {
            lVar3 = lVar2;
            if (lVar2 == 0x76b0cb9423bdf417) {
              lVar3 = -0x101d6e6adf715836;
            }
          }
        }
        goto LAB_00159bc8;
      }
      if (lVar2 == 0x6450db544366ff66) {
        DAT_0021d668 = DAT_0021d668 ^ 0xb1;
        _DAT_0021d650 = _DAT_0021d650 ^ 0xb1b1b1b1b1b1b1b1;
        uRam000000000021d658 = uRam000000000021d658 ^ 0xb1b1b1b1b1b1b1b1;
        DAT_0021d660 = DAT_0021d660 ^ 0xb1b1b1b1b1b1b1b1;
        DAT_0021f72e = '\x01';
        lVar3 = -0x754e6f124485f52e;
        goto LAB_00159bc8;
      }
      if (lVar2 == 0x69ef9eeae967d1f1) {
        lVar3 = 0x553055f9345bf64;
        goto LAB_0015a674;
      }
      if (lVar2 != 0x71b928470b25f86d) goto LAB_00159bc8;
    }
    lVar3 = -0x552faaaf1d4d4dd6;
    unaff_w24 = 1;
    goto LAB_00159bc8;
  }
  if (lVar2 < 0x1bf7eceb514bf1fc) {
    if (0xb247412997036bb < lVar2) {
      if (lVar2 == 0xb247412997036bc) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5d4);
        lVar3 = -0x58ca011d3a16c2ec;
        if (iVar1 != 0) {
          lVar3 = 0xd5da1e0400adcf3;
        }
      }
      else {
        lVar3 = 0xb247412997036bc;
        if ((lVar2 != 0xd5da1e0400adcf3) && (lVar3 = lVar2, lVar2 == 0x174b900d43e1fe09)) {
          lVar3 = 0xb247412997036bc;
        }
      }
      goto LAB_00159bc8;
    }
    if (lVar2 == 0x7719bfe5986de15) {
      lVar3 = 0x53872bc99e6eacc;
LAB_0015a674:
      DAT_0021c488 = DAT_0021c488 ^ 0xc5c5c5c5c5c5c5c5;
      DAT_0021c490 = DAT_0021c490 ^ 0xc5;
      DAT_0021c492 = DAT_0021c492 ^ 0xc5;
      DAT_0021c491 = DAT_0021c491 ^ 0xc5;
      DAT_0021f652 = '\x01';
      goto LAB_00159bc8;
    }
    if (lVar2 != 0x7c62ee0501d1c1c) goto LAB_00159bc8;
  }
  else {
    if (lVar2 < 0x3ab49ee9ea0f8f68) {
      if (lVar2 == 0x1bf7eceb514bf1fc) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5d8);
        lVar3 = -0x7bfadd1bc5a912f3;
        if (iVar1 != 0) {
          lVar3 = -0x4fea74ada2bb8949;
        }
      }
      else if (lVar2 == 0x21147d1c48868a46) {
        lVar3 = -0x101d6e6adf715836;
      }
      goto LAB_00159bc8;
    }
    if (lVar2 == 0x3ab49ee9ea0f8f68) {
      DAT_0021d678 = DAT_0021d678 ^ 0xe0;
      DAT_0021d67a = DAT_0021d67a ^ 0xe0;
      DAT_0021d679 = DAT_0021d679 ^ 0xe0;
      DAT_0021d670 = DAT_0021d670 ^ 0xe0e0e0e0e0e0e0e0;
      DAT_0021f72f = '\x01';
      lVar3 = 0x248b2b95819e219;
      goto LAB_00159bc8;
    }
    lVar3 = 0x60bf21e07bf540de;
    if ((lVar2 == 0x3abf132a1d4c2f11) || (lVar3 = lVar2, lVar2 != 0x54e2117db585762f))
    goto LAB_00159bc8;
  }
LAB_00159bb4:
  lVar3 = -0x552faaaf1d4d4dd6;
  unaff_w24 = 0;
  goto LAB_00159bc8;
}

