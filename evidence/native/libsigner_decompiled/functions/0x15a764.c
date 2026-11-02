// rea decompile_all
// name: FUN_0015a764
// address: 0x15a764
// body: available
// range: 0x15a764-0x15b15b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0015a764(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w22;
  ulong unaff_x24;
  ulong uVar5;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_68;
  
  lVar4 = 0x7cdaad12b74f48b3;
LAB_0015a84c:
  while (lVar2 = lVar4, lVar4 = lVar2, 0xac4cb5766386784 < lVar2) {
    if (lVar2 < 0x4d420bc36a16f4af) {
      if (lVar2 < 0x2c5f2d1b4f68d27a) {
        if (lVar2 < 0x16b996f235aabcfa) {
          lVar4 = -0x52618737096a7ef7;
          if ((lVar2 != 0xac4cb5766386785) && (lVar4 = lVar2, lVar2 == 0xf3d17e70a553e65)) {
            local_a8 = local_68;
            local_90 = local_a0 + 1;
            lVar4 = 0x3b8e1d9120af347f;
            if (local_68 <= local_90) {
              lVar4 = 0x3458cd66b5046c87;
            }
          }
        }
        else if (lVar2 == 0x16b996f235aabcfa) {
LAB_0015ad44:
          unaff_w22 = 1;
          lVar4 = 0x4d420bc36a16f4af;
        }
        else if (lVar2 == 0x2967d2e4d2fe19c8) {
          local_80 = *(ulong *)(param_1 + 0x870);
          lVar4 = -0x207074c26efd700f;
          if (local_80 != 0) {
            lVar4 = 0x4e921e040180a6fa;
          }
        }
      }
      else if (lVar2 < 0x35894dd5236723a9) {
        if (lVar2 == 0x2c5f2d1b4f68d27a) {
          DAT_0021f5dc = 0;
          lVar2 = FUN_001e238c(*(undefined8 *)(param_1 + 0x58),&DAT_0021d680);
          lVar4 = 0xac4cb5766386785;
          if (lVar2 != 0) {
            lVar4 = 0x5c5b350895dbed49;
          }
        }
        else if (lVar2 == 0x3458cd66b5046c87) goto LAB_0015ad90;
      }
      else {
        lVar4 = 0x15716619891108a;
        if ((lVar2 != 0x35894dd5236723a9) &&
           (uVar3 = local_a8, lVar4 = lVar2, uVar5 = local_90, lVar2 == 0x3b8e1d9120af347f)) {
LAB_0015af0c:
          lVar4 = 0x59cb235e80a1c62c;
          unaff_x24 = uVar5;
          local_78 = uVar3;
        }
      }
    }
    else if (lVar2 < 0x615c032105472b5d) {
      if (lVar2 < 0x5ad9b43922e6dfbe) {
        if (lVar2 == 0x4e921e040180a6fa) {
          uVar3 = local_80;
          uVar5 = 0;
          goto LAB_0015af0c;
        }
        if (lVar2 == 0x59cb235e80a1c62c) {
          local_88 = *(long *)(param_1 + unaff_x24 * 0x10 + 0x70);
          lVar4 = -0x413c60a305c1e106;
          if (local_88 != 0) {
            lVar4 = 0x71488fb729efcabe;
          }
          local_98 = local_78;
          local_a0 = unaff_x24;
        }
        else if (lVar2 == 0x4d420bc36a16f4af) {
          return unaff_w22 & 1;
        }
      }
      else if (lVar2 == 0x5ad9b43922e6dfbe) {
        lVar4 = 0x3d59df332f372a1;
        if (DAT_0021f5dd == '\0') {
          lVar4 = -0x7a0cf5444f30d800;
        }
      }
      else if (lVar2 == 0x5c5b350895dbed49) goto LAB_0015ad44;
    }
    else if (lVar2 < 0x7cdaad12b74f48b3) {
      lVar4 = -0x52618737096a7ef7;
      if ((lVar2 != 0x615c032105472b5d) && (lVar4 = lVar2, lVar2 == 0x71488fb729efcabe)) {
        lVar4 = 0x15716619891108a;
      }
    }
    else {
      lVar4 = -0x54274d9e482a8761;
      if ((lVar2 != 0x7f432b8e372eed7c) && (lVar4 = lVar2, lVar2 == 0x7cdaad12b74f48b3)) {
        lVar4 = -0x54274d9e482a8761;
      }
    }
  }
  if (lVar2 < -0x52283922a0e03414) {
    if (-0x70b80ecdf6a9cdaf < lVar2) {
      if (lVar2 < -0x54274d9e482a8761) {
        if (lVar2 == -0x70b80ecdf6a9cdae) {
          uVar3 = *(ulong *)(param_1 + 0x870);
          goto LAB_0015af90;
        }
        if (lVar2 == -0x6352de98b50e4605) {
          lVar4 = -0x127e78e7b687b614;
        }
      }
      else if (lVar2 == -0x54274d9e482a8761) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5dc);
        lVar4 = 0x5ad9b43922e6dfbe;
        if (iVar1 != 0) {
          lVar4 = 0x7f432b8e372eed7c;
        }
      }
      else if (lVar2 == -0x52618737096a7ef7) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5dc);
        lVar4 = -0x52283922a0e03414;
        if (iVar1 != 0) {
          lVar4 = 0x615c032105472b5d;
        }
      }
      goto LAB_0015a84c;
    }
    if (lVar2 < -0x7394e1d80be408f3) {
      if (lVar2 == -0x7e93bbbd2bf23a6e) {
        lVar4 = -0x125bbd945a62f6d3;
        if (DAT_0021f5dd == '\0') {
          lVar4 = -0x10bee174614b40bf;
        }
        goto LAB_0015a84c;
      }
      if (lVar2 != -0x7a0cf5444f30d800) goto LAB_0015a84c;
      lVar4 = 0x2c5f2d1b4f68d27a;
    }
    else {
      if (lVar2 != -0x7394e1d80be408f3) {
        if (lVar2 == -0x72c268e5e59bb849) goto LAB_0015ad44;
        goto LAB_0015a84c;
      }
      lVar4 = -0x127e78e7b687b614;
    }
  }
  else {
    if (lVar2 < -0x127e78e7b687b614) {
      if (lVar2 < -0x30676935e44b7498) {
        if (lVar2 == -0x52283922a0e03414) {
          lVar4 = -0x6352de98b50e4605;
          if (DAT_0021f5dd == '\0') {
            lVar4 = -0x7394e1d80be408f3;
          }
        }
        else {
          uVar3 = local_98;
          if (lVar2 == -0x413c60a305c1e106) {
LAB_0015af90:
            lVar4 = 0xf3d17e70a553e65;
            local_68 = uVar3;
          }
        }
      }
      else if (lVar2 == -0x30676935e44b7498) {
        DAT_0021f5dc = 0;
        lVar2 = FUN_001e238c(local_88,&DAT_0021d680);
        lVar4 = -0x70b80ecdf6a9cdae;
        if (lVar2 != 0) {
          lVar4 = -0x72c268e5e59bb849;
        }
      }
      else if (lVar2 == -0x207074c26efd700f) {
LAB_0015ad90:
        unaff_w22 = 0;
        lVar4 = 0x4d420bc36a16f4af;
      }
      goto LAB_0015a84c;
    }
    if (lVar2 < -0x10bee174614b40bf) {
      if (lVar2 == -0x127e78e7b687b614) {
        DAT_0021f5dc = 0;
        lVar2 = FUN_001e238c(*(undefined8 *)(param_1 + 0x28),&DAT_0021d680);
        lVar4 = 0x2967d2e4d2fe19c8;
        if (lVar2 != 0) {
          lVar4 = 0x16b996f235aabcfa;
        }
      }
      else if (lVar2 == -0x125bbd945a62f6d3) {
        lVar4 = -0x30676935e44b7498;
      }
      goto LAB_0015a84c;
    }
    if (lVar2 != -0x10bee174614b40bf) {
      if (lVar2 == 0x15716619891108a) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5dc);
        lVar4 = -0x7e93bbbd2bf23a6e;
        if (iVar1 != 0) {
          lVar4 = 0x35894dd5236723a9;
        }
      }
      else if (lVar2 == 0x3d59df332f372a1) {
        lVar4 = 0x2c5f2d1b4f68d27a;
      }
      goto LAB_0015a84c;
    }
    lVar4 = -0x30676935e44b7498;
  }
  DAT_0021d680 = DAT_0021d680 ^ 0x404040404040404;
  DAT_0021d688 = DAT_0021d688 ^ 4;
  DAT_0021d689 = DAT_0021d689 ^ 4;
  DAT_0021f5dd = '\x01';
  goto LAB_0015a84c;
}

