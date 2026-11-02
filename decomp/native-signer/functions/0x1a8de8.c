// rea decompile_all
// name: thunk_FUN_00118b6c
// address: 0x1a8de8
// body: available
// range: 0x1a8de8-0x1a8deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00118b6c(long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *unaff_x25;
  int aiStack_b0 [4];
  undefined1 auStack_a0 [8];
  long lStack_98;
  int iStack_8c;
  ulong uStack_88;
  int iStack_7c;
  long lStack_78;
  
  lStack_98 = tpidr_el0;
  lVar1 = param_1 + 0x20;
  lStack_78 = *(long *)(lStack_98 + 0x28);
  piVar3 = (int *)auStack_a0;
  lVar2 = -0x4d9f8c3bbc73dc5;
LAB_00118c54:
  do {
    while (lVar6 = lVar2, lVar2 = lVar6, 0x4ae95f42ffb5c < lVar6) {
      if (lVar6 < 0x35dd32dfb4a6e12b) {
        if (lVar6 < 0x17159aef89473706) {
          if (lVar6 < 0x1b2059ac6c9842f) {
            lVar2 = -0x53b5e3f20bb42b48;
            if ((lVar6 != 0x4ae95f42ffb5d) && (lVar2 = lVar6, lVar6 == 0x8b1b4901ef83a7)) {
              FUN_002083ac(lVar1,0x2d);
              *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
              lVar2 = -0x4e3d9425464273c7;
            }
          }
          else {
            lVar2 = 0x8fe7a66682c8a04;
            if (lVar6 != 0x1b2059ac6c9842f) {
              if (lVar6 == 0x8fe7a66682c8a04) {
                *unaff_x25 = 0;
                uVar5 = FUN_00206a18(unaff_x25);
                lVar2 = 0x8b1b4901ef83a7;
                if ((uVar5 & 1) == 0) {
                  lVar2 = 0x2ee01fa48395221f;
                }
              }
              else {
                lVar2 = lVar6;
                if (lVar6 == 0xb1e98d3e0a413a8) {
                  lVar2 = 0x17159aef89473706;
                }
              }
            }
          }
        }
        else if (lVar6 < 0x2c5fba45f07f5deb) {
          if (lVar6 == 0x17159aef89473706) {
            DAT_0021f174 = 0;
            unaff_x25 = piVar3 + -4;
            piVar3[-4] = 0;
            uVar5 = FUN_001b20b4(unaff_x25,&DAT_0021bfc0);
            piVar3 = unaff_x25;
            lVar2 = 0x4c76874860a3d3ae;
            if ((uVar5 & 1) == 0) {
              lVar2 = -0x21facd943851a124;
            }
          }
          else if (lVar6 == 0x1a5858dea0284c2e) {
            FUN_002083ac(lVar1,0x3a);
            iStack_7c = *unaff_x25;
            *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
            lVar2 = -0x17b058e69a58c2eb;
          }
        }
        else if (lVar6 == 0x2c5fba45f07f5deb) {
          DAT_0021bfd8 = DAT_0021bfd8 ^ 6;
          DAT_0021bfd9 = DAT_0021bfd9 ^ 6;
          DAT_0021bfda = DAT_0021bfda ^ 6;
          DAT_0021bfdb = DAT_0021bfdb ^ 6;
          DAT_0021bfdc = DAT_0021bfdc ^ 6;
          DAT_0021bfdd = DAT_0021bfdd ^ 6;
          DAT_0021bfd0 = DAT_0021bfd0 ^ 0x606060606060606;
          DAT_0021f1ab = '\x01';
          lVar2 = 0x35dd32dfb4a6e12b;
        }
        else {
          lVar2 = -0x4e3d9425464273c7;
          if ((lVar6 != 0x2ee01fa48395221f) && (lVar2 = lVar6, lVar6 == 0x3084a77f8ccecb77)) {
            lVar2 = -0x4379695484f3b9ed;
          }
        }
      }
      else if (lVar6 < 0x5777173fc1efbe1d) {
        if (lVar6 < 0x519d6b467110aa8d) {
          if (lVar6 == 0x35dd32dfb4a6e12b) {
            DAT_0021f178 = 0;
            *unaff_x25 = 0;
            uVar5 = FUN_001b2864(unaff_x25,&DAT_0021bfd0);
            lVar2 = 0x5485df2a4ff004cd;
            if ((uVar5 & 1) == 0) {
              lVar2 = -0x6040195d60536efc;
            }
          }
          else if (lVar6 == 0x4c76874860a3d3ae) {
            FUN_002083ac(lVar1,0x22);
            *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
            lVar2 = 0x564e4570920a34cd;
          }
        }
        else if (lVar6 == 0x519d6b467110aa8d) {
          FUN_002083ac(lVar1,0x2e);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = -0x4379695484f3b9ed;
        }
        else if (lVar6 == 0x5485df2a4ff004cd) {
          FUN_002083ac(lVar1,0x23);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = 0x6981fe660bc7544d;
        }
        else if (lVar6 == 0x564e4570920a34cd) {
          lVar2 = -0x592bcae7d590fc8d;
          if (*unaff_x25 != 0) {
            lVar2 = -0x670bf0433937c828;
          }
        }
      }
      else if (lVar6 < 0x68a8ec28bf33d61d) {
        if (lVar6 == 0x5777173fc1efbe1d) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f174);
          lVar2 = -0x16363b2ce2336309;
          if (iVar4 != 0) {
            lVar2 = -0x5a4e52a497a1edfd;
          }
        }
        else if (lVar6 == 0x62a421dce498d63f) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f178);
          lVar2 = -0x4349f36fd7187ba2;
          if (iVar4 != 0) {
            lVar2 = -0x6141532fd00a50be;
          }
        }
      }
      else if (lVar6 == 0x68a8ec28bf33d61d) {
        FUN_002083ac(lVar1,0x3a);
        uStack_88 = *(ulong *)(param_1 + 0x238) | 1;
LAB_00119690:
        lVar2 = -0x479fb4e052341ead;
      }
      else if (lVar6 == 0x6981fe660bc7544d) {
        lVar2 = 0x4ae95f42ffb5d;
        if (*unaff_x25 != 0) {
          lVar2 = -0x3470ec699c7f9eb9;
        }
      }
      else if (lVar6 == 0x6f3c6f97b14b7d86) {
        FUN_002083ac(lVar1,0x25);
        *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
        lVar2 = 0x8fe7a66682c8a04;
      }
    }
    if (-0x4349f36fd7187ba3 < lVar6) {
      if (lVar6 < -0x1ff8c9c596900baa) {
        if (lVar6 < -0x3470ec699c7f9eb9) {
          if (lVar6 == -0x4349f36fd7187ba2) {
            lVar2 = -0x1ff8c9c596900baa;
            if (DAT_0021f1ab == '\0') {
              lVar2 = 0x2c5fba45f07f5deb;
            }
          }
          else if (lVar6 == -0x3e2ffff5ca645444) {
            iStack_7c = 0;
            lVar2 = -0x17b058e69a58c2eb;
          }
        }
        else if (lVar6 == -0x3470ec699c7f9eb9) {
          FUN_002083ac(lVar1,0x36);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = -0x53b5e3f20bb42b48;
        }
        else {
          lVar2 = 0x62a421dce498d63f;
          if ((lVar6 != -0x247c48d24182b04d) && (lVar2 = lVar6, lVar6 == -0x21facd943851a124)) {
            lVar2 = 0x564e4570920a34cd;
          }
        }
      }
      else if (lVar6 < -0x16363b2ce2336309) {
        lVar2 = 0x35dd32dfb4a6e12b;
        if ((lVar6 != -0x1ff8c9c596900baa) && (lVar2 = lVar6, lVar6 == -0x17b058e69a58c2eb)) {
          *unaff_x25 = 0;
          uVar5 = FUN_00207134(unaff_x25);
          iStack_8c = iStack_7c;
          lVar2 = 0x519d6b467110aa8d;
          if ((uVar5 & 1) == 0) {
            lVar2 = 0x3084a77f8ccecb77;
          }
        }
      }
      else if (lVar6 == -0x16363b2ce2336309) {
        lVar2 = 0xb1e98d3e0a413a8;
        if (DAT_0021f1aa == '\0') {
          lVar2 = -0xdb04fae0bc9b54;
        }
      }
      else {
        lVar2 = 0x5777173fc1efbe1d;
        if ((lVar6 != -0x4d9f8c3bbc73dc5) && (lVar2 = lVar6, lVar6 == -0xdb04fae0bc9b54)) {
          _DAT_0021bfc0 = _DAT_0021bfc0 ^ 0x8080808080808080;
          uRam000000000021bfc8 = uRam000000000021bfc8 ^ 0x8080808080808080;
          DAT_0021f1aa = '\x01';
          lVar2 = 0x17159aef89473706;
        }
      }
      goto LAB_00118c54;
    }
    if (lVar6 < -0x552fa67ac2892b22) {
      if (lVar6 < -0x6040195d60536efc) {
        if (lVar6 == -0x670bf0433937c828) {
          FUN_002083ac(lVar1,0x35);
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
          lVar2 = -0x247c48d24182b04d;
        }
        else if (lVar6 == -0x6141532fd00a50be) {
          lVar2 = 0x62a421dce498d63f;
        }
      }
      else {
        lVar2 = 0x6981fe660bc7544d;
        if (((lVar6 != -0x6040195d60536efc) &&
            (lVar2 = 0x5777173fc1efbe1d, lVar6 != -0x5a4e52a497a1edfd)) &&
           (lVar2 = lVar6, lVar6 == -0x592bcae7d590fc8d)) {
          lVar2 = -0x247c48d24182b04d;
        }
      }
    }
    else if (lVar6 < -0x4e3d9425464273c7) {
      if (lVar6 == -0x552fa67ac2892b22) {
        uStack_88 = *(ulong *)(param_1 + 0x238);
        goto LAB_00119690;
      }
      if (lVar6 == -0x53b5e3f20bb42b48) {
        uVar5 = FUN_002063b4();
        lVar2 = 0x6f3c6f97b14b7d86;
        if ((uVar5 & 1) == 0) {
          lVar2 = 0x1b2059ac6c9842f;
        }
      }
    }
    else if (lVar6 == -0x4e3d9425464273c7) {
      lVar2 = -0x3e2ffff5ca645444;
      if (*unaff_x25 != 0) {
        lVar2 = 0x1a5858dea0284c2e;
      }
    }
    else if (lVar6 == -0x4379695484f3b9ed) {
      lVar2 = 0x68a8ec28bf33d61d;
      if (iStack_8c != 0 || *unaff_x25 == 0) {
        lVar2 = -0x552fa67ac2892b22;
      }
    }
    else if (lVar6 == -0x479fb4e052341ead) {
      *(ulong *)(param_1 + 0x238) = uStack_88 | 0x460603c00000000;
      if (*(long *)(lStack_98 + 0x28) == lStack_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

