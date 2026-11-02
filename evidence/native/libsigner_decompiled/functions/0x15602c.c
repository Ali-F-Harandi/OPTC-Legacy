// rea decompile_all
// name: FUN_0015602c
// address: 0x15602c
// body: available
// range: 0x15602c-0x1580b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0015602c(long param_1,byte param_2)

{
  byte unaff_100000d4;
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte in_w8;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong local_f8;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  byte local_c0;
  byte local_bc;
  ulong local_b8;
  ulong local_b0;
  byte local_a8;
  byte local_a4;
  ulong local_a0;
  byte local_94;
  ulong local_90;
  byte local_88;
  byte local_84;
  
  lVar6 = 0x54d7c14df3dcf154;
LAB_00156120:
  bVar4 = in_w8;
  bVar3 = unaff_100000d4;
  bVar5 = param_2;
  lVar7 = lVar6;
  lVar6 = lVar7;
  param_2 = bVar5;
  unaff_100000d4 = bVar3;
  in_w8 = bVar4;
  if (lVar7 < -0x137bebe968a8a6da) {
    if (lVar7 < -0x58f262418537110f) {
      if (-0x6d8b62b09d492b14 < lVar7) {
        if (lVar7 < -0x6370d525669f4283) {
          if (lVar7 < -0x6854be28f5ca8577) {
            if (lVar7 == -0x6d8b62b09d492b13) {
              lVar6 = -0x63d5399c5a653818;
              if (*(long *)(param_1 + 0x870) != 2) {
                lVar6 = 0x34816f1ffc638f93;
              }
            }
            else {
              if (lVar7 == -0x6c8064e0c73165e5) goto LAB_001575d0;
              param_2 = bVar3;
              if (lVar7 == -0x6c3ab0dd7f44ffa5) {
                lVar6 = -0x28e4013ddee17e58;
                param_2 = bVar5;
                if (DAT_0021f71d == '\0') {
                  lVar6 = 0x3aeb57e0cb2b8334;
                }
              }
            }
          }
          else if (lVar7 == -0x6854be28f5ca8577) {
            DAT_0021f590 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d518,*local_c8);
            param_2 = iVar2 == 0 | local_84;
            lVar6 = -0x25ba6380b1acf6c7;
            unaff_100000d4 = param_2;
          }
          else if (lVar7 == -0x682e973a2c8131cb) {
            lVar6 = -0x370d5a5b8fe27b2e;
            if (DAT_0021f727 == '\0') {
              lVar6 = 0x284ef5796415c802;
            }
          }
          else {
            param_2 = bVar3;
            if (lVar7 == -0x63d5399c5a653818) {
              local_90 = 0;
              local_94 = 0;
              goto LAB_001572a8;
            }
          }
        }
        else if (lVar7 < -0x5c2313421c9d60e7) {
          lVar6 = -0x6d8b62b09d492b13;
          param_2 = bVar3;
          if (lVar7 != -0x6370d525669f4283) {
            if (lVar7 == -0x62d3e5f3ef8bb000) goto LAB_0015750c;
            lVar6 = lVar7;
            if (lVar7 == -0x5d227190e6af0a9d) {
              DAT_0021f5c0 = 0;
              iVar2 = FUN_001e17a8(*(undefined8 *)(param_1 + 0x50),&DAT_0021d618);
              lVar6 = -0x474a7e75ba89ffcf;
              param_2 = bVar5;
              if (iVar2 != 0) {
                lVar6 = -0x4bcb371ed1da7126;
              }
            }
          }
        }
        else if (lVar7 < -0x5b68d627a720e728) {
          lVar6 = -0x20e192689f2ec100;
          param_2 = bVar3;
          if ((lVar7 != -0x5c2313421c9d60e7) && (lVar6 = lVar7, lVar7 == -0x5b7bb796a3250c5a))
          goto LAB_001573b4;
        }
        else {
          if (lVar7 == -0x5b68d627a720e728) {
            bVar1 = *(long *)(param_1 + 0x68) == 0;
            lVar7 = 0x122ff5e7c359892a;
            lVar6 = -0x6c8064e0c73165e5;
            goto LAB_00156114;
          }
          param_2 = bVar3;
          if (lVar7 == -0x5b10bba764b383d5) {
            DAT_0021f5b0 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d5e8,*local_d8);
            bVar5 = iVar2 == 0 | local_bc;
            goto LAB_00157750;
          }
        }
        goto LAB_00156120;
      }
      if (lVar7 < -0x75219603a41a4c52) {
        if (-0x7688e2a4cfc9933e < lVar7) {
          lVar6 = -0x7c309e97afd547dc;
          param_2 = bVar3;
          if (lVar7 != -0x7688e2a4cfc9933d) {
            if (lVar7 == -0x762db48028519979) {
LAB_0015750c:
              lVar6 = -0x3dc3530221cb47d4;
              param_2 = bVar3;
              in_w8 = 0;
            }
            else {
              lVar6 = lVar7;
              if (lVar7 == -0x761c6c9a7dfa0974) {
                lVar6 = 0x7d8843610891c0ae;
              }
            }
          }
          goto LAB_00156120;
        }
        if (lVar7 == -0x7c309e97afd547dc) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f5c8);
          lVar6 = 0x7d5cdb8f2e818729;
          if (iVar2 != 0) {
            lVar6 = -0x7688e2a4cfc9933d;
          }
          goto LAB_00156120;
        }
        if (lVar7 == -0x7c18637326316272) {
          local_b0 = local_90;
          local_e8 = *(long *)(param_1 + local_90 * 0x10 + 0x70);
          lVar6 = -0x62d3e5f3ef8bb000;
          local_bc = local_94;
          param_2 = bVar3;
          if (local_e8 != 0) {
            lVar6 = -0x3e4a91a717b1fdcd;
          }
          goto LAB_00156120;
        }
        param_2 = bVar3;
        if (lVar7 != -0x77a14f26594da750) goto LAB_00156120;
      }
      else {
        if (-0x71557afe98c050cc < lVar7) {
          lVar6 = -0x125bb85ce81c297a;
          param_2 = bVar3;
          if (((lVar7 != -0x71557afe98c050cb) &&
              (lVar6 = 0x2126e8580a6e3bfb, lVar7 != -0x70d1f46df656882a)) &&
             (lVar6 = lVar7, lVar7 == -0x6ea27ae8788671f4)) goto LAB_0015750c;
          goto LAB_00156120;
        }
        if (lVar7 != -0x75219603a41a4c52) {
          lVar6 = 0x46f6c1c62b5dbb96;
          param_2 = bVar3;
          if ((lVar7 != -0x74df21e7f1747860) && (lVar6 = lVar7, lVar7 == -0x730b09cc17953b79)) {
            lVar6 = -0x71557afe98c050cb;
            param_2 = bVar5;
            if (DAT_0021f724 == '\0') {
              lVar6 = 0x4c7097a0b37193ef;
            }
          }
          goto LAB_00156120;
        }
      }
LAB_001575d0:
      lVar6 = -0x3dc3530221cb47d4;
      param_2 = bVar3;
      in_w8 = 1;
      goto LAB_00156120;
    }
    if (lVar7 < -0x370d5a5b8fe27b2e) {
      if (lVar7 < -0x474a7e75ba89ffcf) {
        if (lVar7 < -0x528f032c76aec9df) {
          lVar6 = -0x6d8b62b09d492b13;
          param_2 = bVar3;
          if (((lVar7 != -0x58f262418537110f) &&
              (lVar6 = 0x2f2adcf42d1959af, lVar7 != -0x586e6989aef9d2ca)) &&
             (lVar6 = lVar7, lVar7 == -0x56f98d0601193dcd)) {
            DAT_0021d610 = DAT_0021d610 ^ 0x31;
            DAT_0021d611 = DAT_0021d611 ^ 0x31;
            DAT_0021d613 = DAT_0021d613 ^ 0x31;
            DAT_0021d612 = DAT_0021d612 ^ 0x31;
            DAT_0021d614 = DAT_0021d614 ^ 0x31;
            DAT_0021d615 = DAT_0021d615 ^ 0x31;
            DAT_0021f728 = '\x01';
            lVar6 = 0x315228fa0b263017;
          }
        }
        else if (lVar7 == -0x528f032c76aec9df) {
          DAT_0021d619 = DAT_0021d619 ^ 0xc9;
          DAT_0021d618 = DAT_0021d618 ^ 0xc9;
          DAT_0021d61a = DAT_0021d61a ^ 0xc9;
          DAT_0021d61c = DAT_0021d61c ^ 0xc9;
          DAT_0021d61b = DAT_0021d61b ^ 0xc9;
          DAT_0021f729 = '\x01';
          lVar6 = -0x5d227190e6af0a9d;
          param_2 = bVar3;
        }
        else if (lVar7 == -0x517982680de5f42c) {
          DAT_0021d620 = DAT_0021d620 ^ 0x1919191919191919;
          DAT_0021f72a = '\x01';
          lVar6 = -0x3f7c1378b82c31b0;
          param_2 = bVar3;
        }
        else {
          param_2 = bVar3;
          if (lVar7 == -0x4bcb371ed1da7126) {
LAB_001573b4:
            lVar6 = -0x6d8b62b09d492b13;
            param_2 = bVar3;
          }
        }
      }
      else if (lVar7 < -0x3f7c1378b82c31b0) {
        lVar6 = 0x2a24f408fed3ccff;
        param_2 = bVar3;
        if (lVar7 != -0x474a7e75ba89ffcf) {
          if (lVar7 == -0x448cd8760e0e3aaf) {
            lVar6 = -0x2ce06ad52e9790ce;
            param_2 = bVar5;
            if (DAT_0021f727 == '\0') {
              lVar6 = 0x6aeae86eede20de4;
            }
          }
          else {
            lVar6 = lVar7;
            if (lVar7 == -0x3f9663d6dbd29336) {
              lVar6 = 0x5a1aae17b32733ca;
            }
          }
        }
      }
      else if (lVar7 < -0x3dc3530221cb47d4) {
        if (lVar7 == -0x3f7c1378b82c31b0) {
          DAT_0021f5c4 = 0;
          iVar2 = FUN_001e17a8(*(undefined8 *)(param_1 + 0x40),&DAT_0021d620);
          lVar6 = -0x1f966c2cb4f2b6c3;
          if (iVar2 != 0) {
            lVar6 = -0x5b7bb796a3250c5a;
          }
        }
        else {
          param_2 = bVar3;
          if (lVar7 == -0x3e4a91a717b1fdcd) {
            local_d8 = (long *)(param_1 + local_b0 * 0x10 + 0x78);
            bVar1 = *local_d8 == 0;
            lVar7 = -0x586e6989aef9d2ca;
            lVar6 = -0x6ea27ae8788671f4;
            goto LAB_00156114;
          }
        }
      }
      else if (lVar7 == -0x39d80e0aa7d0a92e) {
        local_a0 = local_b8;
        local_d0 = *(long *)(param_1 + local_b8 * 0x10 + 0x70);
        lVar6 = 0x209357342340b8df;
        param_2 = bVar3;
        local_84 = local_a4;
        if (local_d0 != 0) {
          lVar6 = 0x7147a983f5ae4204;
        }
      }
      else {
        param_2 = bVar3;
        if (lVar7 == -0x3dc3530221cb47d4) {
          return bVar4 & 1;
        }
      }
      goto LAB_00156120;
    }
    if (lVar7 < -0x28e4013ddee17e58) {
      if (lVar7 < -0x2faaf16bdf1f2ccb) {
        lVar6 = -0x2e2cf3a1f35fbe97;
        param_2 = bVar3;
        if (((lVar7 != -0x370d5a5b8fe27b2e) &&
            (lVar6 = -0x20e192689f2ec100, lVar7 != -0x36183fe9a88ef8ca)) &&
           (lVar6 = lVar7, lVar7 == -0x3246e3eed2490634)) {
          local_90 = local_f0;
          local_94 = local_c0;
LAB_001572a8:
          lVar6 = -0x7c18637326316272;
          param_2 = bVar3;
        }
      }
      else if (lVar7 == -0x2faaf16bdf1f2ccb) {
        lVar6 = 0x6b34efa19ccf3af6;
        if (DAT_0021f72a == '\0') {
          lVar6 = -0x517982680de5f42c;
        }
      }
      else if (lVar7 == -0x2e2cf3a1f35fbe97) {
        DAT_0021f5b8 = 0;
        lVar7 = FUN_001e238c(*(undefined8 *)(param_1 + 0x58),&DAT_0021d608);
        lVar6 = -0x761c6c9a7dfa0974;
        if (lVar7 != 0) {
          lVar6 = -0x77a14f26594da750;
        }
      }
      else {
        param_2 = bVar3;
        if (lVar7 == -0x2ce06ad52e9790ce) {
          lVar6 = 0x3aceb5168d30b6a9;
        }
      }
      goto LAB_00156120;
    }
    if (lVar7 < -0x20e192689f2ec100) {
      lVar6 = -0x6854be28f5ca8577;
      param_2 = bVar3;
      if (lVar7 != -0x28e4013ddee17e58) {
        if (lVar7 == -0x27b6e9fe3f109118) {
          DAT_0021f5b4 = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d5f8,local_d0);
          bVar1 = iVar2 == 0;
          lVar6 = -0x36183fe9a88ef8ca;
          lVar7 = 0x35794bca1c24ebe1;
          goto LAB_00156114;
        }
        lVar6 = lVar7;
        if (lVar7 == -0x25ba6380b1acf6c7) {
          local_e0 = local_a0 + 1;
          lVar6 = -0xf4b68684232d298;
          local_88 = bVar5;
          if (*(ulong *)(param_1 + 0x870) <= local_e0) {
            lVar6 = -0x1f2acfabfe8cd8ba;
          }
        }
      }
      goto LAB_00156120;
    }
    if (-0x1f2acfabfe8cd8bb < lVar7) {
      lVar6 = -0x3dc3530221cb47d4;
      param_2 = bVar3;
      in_w8 = local_88;
      if ((lVar7 != -0x1f2acfabfe8cd8ba) &&
         (lVar6 = lVar7, in_w8 = bVar4, lVar7 == -0x14a39fab12888e3c)) {
        lVar6 = 0x2f2adcf42d1959af;
      }
      goto LAB_00156120;
    }
    if (lVar7 != -0x20e192689f2ec100) {
      unaff_100000d4 = bVar5;
      if (lVar7 == -0x1f966c2cb4f2b6c3) {
        lVar6 = -0x7c309e97afd547dc;
      }
      goto LAB_00156120;
    }
    iVar2 = FUN_00212730(0,1,&DAT_0021f590);
    bVar1 = iVar2 == 0;
    lVar6 = -0x6c3ab0dd7f44ffa5;
    lVar7 = -0x5c2313421c9d60e7;
  }
  else if (lVar7 < 0x34816f1ffc638f93) {
    if (lVar7 < 0x1197ccc05d29263d) {
      if (lVar7 < -0x1133630d70b316a) {
        if (lVar7 < -0xeb1a49a9bc2a438) {
          lVar6 = 0x1333ce99faf64de4;
          param_2 = bVar3;
          if (lVar7 != -0x137bebe968a8a6da) {
            if (lVar7 == -0x125bb85ce81c297a) {
              DAT_0021f5ac = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d5d0,local_e8);
              lVar6 = 0x670a6395b7a10681;
              param_2 = bVar5;
              if (iVar2 != 0) {
                lVar6 = 0x7566da5a54bced17;
              }
            }
            else {
              lVar6 = lVar7;
              if (lVar7 == -0xf4b68684232d298) {
                local_b8 = local_e0;
                lVar6 = -0x39d80e0aa7d0a92e;
                local_a4 = local_88;
              }
            }
          }
        }
        else {
          lVar6 = -0x5b10bba764b383d5;
          param_2 = bVar3;
          if (((lVar7 != -0xeb1a49a9bc2a438) &&
              (lVar6 = 0x5a1aae17b32733ca, lVar7 != -0xce407ea85c1c71c)) &&
             (lVar6 = lVar7, lVar7 == -0x2e0fe4928cc2b0d)) goto LAB_0015750c;
        }
        goto LAB_00156120;
      }
      if (lVar7 < 0x57ca9a3d9b06a45) {
        if (lVar7 == -0x1133630d70b316a) {
          lVar6 = 0x120fa5261efc015c;
          if (DAT_0021f729 == '\0') {
            lVar6 = -0x528f032c76aec9df;
          }
        }
        else if (lVar7 == -0xf81bd72a2116d8) {
          DAT_0021d628 = DAT_0021d628 ^ 0x39;
          DAT_0021d629 = DAT_0021d629 ^ 0x39;
          DAT_0021d62b = DAT_0021d62b ^ 0x39;
          DAT_0021d62a = DAT_0021d62a ^ 0x39;
          DAT_0021d62c = DAT_0021d62c ^ 0x39;
          DAT_0021d62d = DAT_0021d62d ^ 0x39;
          DAT_0021f72b = '\x01';
          lVar6 = 0x46f6c1c62b5dbb96;
          param_2 = bVar3;
        }
        else {
          param_2 = bVar3;
          if (lVar7 == 0x4c5bfb4e3a3bf59) {
            lVar6 = 0x315228fa0b263017;
          }
        }
        goto LAB_00156120;
      }
      lVar6 = 0x5a9b4f30be15dab8;
      param_2 = bVar3;
      if (lVar7 == 0x57ca9a3d9b06a45) goto LAB_00156120;
      if (lVar7 != 0x6eacc6dcc2f0a20) {
        lVar6 = lVar7;
        if (lVar7 == 0x922b98b74ef76e4) {
          local_f8 = *(ulong *)(param_1 + 0x870);
          local_f0 = local_b0 + 1;
          lVar6 = -0x3246e3eed2490634;
          local_c0 = local_a8;
          if (local_f8 <= local_f0) {
            lVar6 = 0x4b90e8bec0c431f2;
          }
        }
        goto LAB_00156120;
      }
      iVar2 = FUN_00212730(0,1,&DAT_0021f5b8);
      bVar1 = iVar2 == 0;
      lVar6 = -0x448cd8760e0e3aaf;
      lVar7 = 0x7a33fb316c1881bb;
    }
    else if (lVar7 < 0x209357342340b8df) {
      if (lVar7 < 0x130f5727ddd81259) {
        if (lVar7 == 0x1197ccc05d29263d) {
          lVar6 = 0x14bcc93b60c0b214;
          if (DAT_0021f726 == '\0') {
            lVar6 = 0x6a2cd425e0a43f38;
          }
        }
        else {
          lVar6 = -0x5d227190e6af0a9d;
          param_2 = bVar3;
          if ((lVar7 != 0x120fa5261efc015c) && (lVar6 = lVar7, lVar7 == 0x122ff5e7c359892a))
          goto LAB_001573b4;
        }
        goto LAB_00156120;
      }
      if (lVar7 == 0x130f5727ddd81259) {
        lVar6 = -0xeb1a49a9bc2a438;
        if (DAT_0021f725 == '\0') {
          lVar6 = 0x6fa1faf88e104f60;
        }
        goto LAB_00156120;
      }
      if (lVar7 != 0x1333ce99faf64de4) {
        param_2 = bVar3;
        if (lVar7 == 0x14bcc93b60c0b214) {
          lVar6 = -0x27b6e9fe3f109118;
        }
        goto LAB_00156120;
      }
      iVar2 = FUN_00212730(0,1,&DAT_0021f5c0);
      bVar1 = iVar2 == 0;
      lVar6 = -0x1133630d70b316a;
      lVar7 = 0x6417547f5a6f32a4;
    }
    else {
      if (lVar7 < 0x284ef5796415c802) {
        if (lVar7 == 0x209357342340b8df) goto LAB_0015750c;
        if (lVar7 == 0x20aa7d851666cf9f) {
          local_b8 = 0;
          lVar6 = -0x39d80e0aa7d0a92e;
          param_2 = bVar3;
          local_a4 = 0;
        }
        else {
          param_2 = bVar3;
          if (lVar7 == 0x2126e8580a6e3bfb) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f5b0);
            lVar6 = 0x130f5727ddd81259;
            param_2 = bVar5;
            if (iVar2 != 0) {
              lVar6 = -0x70d1f46df656882a;
            }
          }
        }
        goto LAB_00156120;
      }
      if (lVar7 < 0x2f2adcf42d1959af) {
        if (lVar7 == 0x284ef5796415c802) {
          lVar6 = -0x2e2cf3a1f35fbe97;
          goto LAB_00157eb8;
        }
        param_2 = bVar3;
        if (lVar7 != 0x2a24f408fed3ccff) goto LAB_00156120;
        iVar2 = FUN_00212730(0,1,&DAT_0021f5c4);
        bVar1 = iVar2 == 0;
        lVar6 = -0x2faaf16bdf1f2ccb;
        lVar7 = 0x7c3de3decdfc712d;
      }
      else {
        if (lVar7 != 0x2f2adcf42d1959af) {
          param_2 = bVar3;
          if (lVar7 == 0x315228fa0b263017) {
            DAT_0021f5bc = 0;
            iVar2 = FUN_001e17a8(*(undefined8 *)(param_1 + 8),&DAT_0021d610);
            lVar6 = -0x137bebe968a8a6da;
            param_2 = bVar5;
            if (iVar2 != 0) {
              lVar6 = -0x6370d525669f4283;
            }
          }
          goto LAB_00156120;
        }
        iVar2 = FUN_00212730(0,1,&DAT_0021f5ac);
        bVar1 = iVar2 == 0;
        lVar6 = -0x730b09cc17953b79;
        lVar7 = -0x14a39fab12888e3c;
      }
    }
  }
  else {
    if (0x6417547f5a6f32a3 < lVar7) {
      if (lVar7 < 0x6fa1faf88e104f60) {
        if (lVar7 < 0x6aeae86eede20de4) {
          lVar6 = 0x1333ce99faf64de4;
          param_2 = bVar3;
          if (((lVar7 != 0x6417547f5a6f32a4) &&
              (lVar6 = 0x2126e8580a6e3bfb, lVar7 != 0x670a6395b7a10681)) &&
             (lVar6 = lVar7, lVar7 == 0x6a2cd425e0a43f38)) {
            DAT_0021d600 = DAT_0021d600 ^ 0x6b;
            DAT_0021d601 = DAT_0021d601 ^ 0x6b;
            DAT_0021d602 = DAT_0021d602 ^ 0x6b;
            DAT_0021d5f8 = DAT_0021d5f8 ^ 0x6b6b6b6b6b6b6b6b;
            DAT_0021f726 = '\x01';
            lVar6 = -0x27b6e9fe3f109118;
          }
        }
        else if (lVar7 == 0x6aeae86eede20de4) {
          lVar6 = 0x3aceb5168d30b6a9;
LAB_00157eb8:
          DAT_0021d608 = DAT_0021d608 ^ 0xcececececececece;
          DAT_0021f727 = '\x01';
          param_2 = bVar3;
        }
        else {
          lVar6 = -0x3f7c1378b82c31b0;
          param_2 = bVar3;
          if ((lVar7 != 0x6b34efa19ccf3af6) && (lVar6 = lVar7, lVar7 == 0x6c3db32166e7c1ae)) {
            lVar6 = 0x4c5bfb4e3a3bf59;
            param_2 = bVar5;
            if (DAT_0021f728 == '\0') {
              lVar6 = -0x56f98d0601193dcd;
            }
          }
        }
      }
      else if (lVar7 < 0x7a33fb316c1881bb) {
        if (lVar7 == 0x6fa1faf88e104f60) {
          DAT_0021d5f0 = DAT_0021d5f0 ^ 0x1d;
          DAT_0021d5f1 = DAT_0021d5f1 ^ 0x1d;
          DAT_0021d5f2 = DAT_0021d5f2 ^ 0x1d;
          DAT_0021d5e8 = DAT_0021d5e8 ^ 0x1d1d1d1d1d1d1d1d;
          DAT_0021f725 = '\x01';
          lVar6 = -0x5b10bba764b383d5;
          param_2 = bVar3;
        }
        else if (lVar7 == 0x7147a983f5ae4204) {
          local_c8 = (long *)(param_1 + local_a0 * 0x10 + 0x78);
          lVar6 = -0x2e0fe4928cc2b0d;
          if (*local_c8 != 0) {
            lVar6 = -0xce407ea85c1c71c;
          }
        }
        else {
          bVar5 = local_bc;
          param_2 = bVar3;
          if (lVar7 == 0x7566da5a54bced17) {
LAB_00157750:
            lVar6 = 0x922b98b74ef76e4;
            local_a8 = bVar5;
            param_2 = bVar3;
          }
        }
      }
      else if (lVar7 < 0x7d5cdb8f2e818729) {
        lVar6 = 0x6eacc6dcc2f0a20;
        param_2 = bVar3;
        if ((lVar7 != 0x7a33fb316c1881bb) && (lVar6 = lVar7, lVar7 == 0x7c3de3decdfc712d)) {
          lVar6 = 0x2a24f408fed3ccff;
        }
      }
      else if (lVar7 == 0x7d5cdb8f2e818729) {
        lVar6 = -0x74df21e7f1747860;
        if (DAT_0021f72b == '\0') {
          lVar6 = -0xf81bd72a2116d8;
        }
      }
      else {
        param_2 = bVar3;
        if (lVar7 == 0x7d8843610891c0ae) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f5bc);
          lVar6 = 0x6c3db32166e7c1ae;
          param_2 = bVar5;
          if (iVar2 != 0) {
            lVar6 = 0x58d103ee51da8302;
          }
        }
      }
      goto LAB_00156120;
    }
    if (lVar7 < 0x4b90e8bec0c431f2) {
      if (lVar7 < 0x3aeb57e0cb2b8334) {
        if (lVar7 == 0x34816f1ffc638f93) goto LAB_0015750c;
        lVar6 = -0x25ba6380b1acf6c7;
        param_2 = local_84;
        unaff_100000d4 = local_84;
        if ((lVar7 != 0x35794bca1c24ebe1) &&
           (lVar6 = lVar7, param_2 = bVar3, unaff_100000d4 = bVar3, lVar7 == 0x3aceb5168d30b6a9)) {
          DAT_0021f5b8 = 0;
          lVar7 = FUN_001e238c(*(undefined8 *)(param_1 + 0x18),&DAT_0021d608);
          lVar6 = 0x57ca9a3d9b06a45;
          param_2 = bVar5;
          if (lVar7 != 0) {
            lVar6 = -0x75219603a41a4c52;
          }
        }
        goto LAB_00156120;
      }
      if (lVar7 == 0x3aeb57e0cb2b8334) {
        DAT_0021d520 = DAT_0021d520 ^ 0xce;
        DAT_0021d518 = DAT_0021d518 ^ 0xcececececececece;
        DAT_0021f71d = '\x01';
        lVar6 = -0x6854be28f5ca8577;
        param_2 = bVar3;
        goto LAB_00156120;
      }
      lVar6 = 0x5a9b4f30be15dab8;
      param_2 = bVar3;
      if ((lVar7 == 0x403aefdbff8591e8) || (lVar6 = lVar7, lVar7 != 0x46f6c1c62b5dbb96))
      goto LAB_00156120;
      DAT_0021f5c8 = 0;
      iVar2 = FUN_001e17a8(*(undefined8 *)(param_1 + 0x58),&DAT_0021d628);
      bVar1 = iVar2 == 0;
      lVar6 = -0x5b68d627a720e728;
      lVar7 = -0x58f262418537110f;
    }
    else {
      if (lVar7 < 0x58d103ee51da8302) {
        if (lVar7 == 0x4b90e8bec0c431f2) {
          lVar6 = 0x20aa7d851666cf9f;
          if ((local_c0 & local_f8 != 0) == 0) {
            lVar6 = -0x762db48028519979;
          }
        }
        else if (lVar7 == 0x4c7097a0b37193ef) {
          DAT_0021d5e0 = DAT_0021d5e0 ^ 0xf0;
          DAT_0021d5e1 = DAT_0021d5e1 ^ 0xf0;
          DAT_0021d5e2 = DAT_0021d5e2 ^ 0xf0;
          DAT_0021d5e3 = DAT_0021d5e3 ^ 0xf0;
          DAT_0021d5e4 = DAT_0021d5e4 ^ 0xf0;
          DAT_0021d5e5 = DAT_0021d5e5 ^ 0xf0;
          _DAT_0021d5d0 = _DAT_0021d5d0 ^ 0xf0f0f0f0f0f0f0f0;
          uRam000000000021d5d8 = uRam000000000021d5d8 ^ 0xf0f0f0f0f0f0f0f0;
          DAT_0021f724 = '\x01';
          lVar6 = -0x125bb85ce81c297a;
          param_2 = bVar3;
        }
        else {
          param_2 = bVar3;
          if (lVar7 == 0x54d7c14df3dcf154) {
            lVar6 = 0x6eacc6dcc2f0a20;
          }
        }
        goto LAB_00156120;
      }
      lVar6 = 0x7d8843610891c0ae;
      param_2 = bVar3;
      if (lVar7 == 0x58d103ee51da8302) goto LAB_00156120;
      if (lVar7 == 0x5a1aae17b32733ca) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f5b4);
        lVar6 = 0x1197ccc05d29263d;
        param_2 = bVar5;
        if (iVar2 != 0) {
          lVar6 = -0x3f9663d6dbd29336;
        }
        goto LAB_00156120;
      }
      lVar6 = lVar7;
      if (lVar7 != 0x5a9b4f30be15dab8) goto LAB_00156120;
      iVar2 = FUN_00212730(0,1,&DAT_0021f5b8);
      bVar1 = iVar2 == 0;
      lVar6 = -0x682e973a2c8131cb;
      lVar7 = 0x403aefdbff8591e8;
    }
  }
LAB_00156114:
  param_2 = bVar5;
  if (!bVar1) {
    lVar6 = lVar7;
  }
  goto LAB_00156120;
}

