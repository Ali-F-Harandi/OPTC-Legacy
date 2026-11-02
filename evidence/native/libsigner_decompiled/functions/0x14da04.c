// rea decompile_all
// name: FUN_0014da04
// address: 0x14da04
// body: available
// range: 0x14da04-0x14e973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0014da04(long param_1,byte param_2)

{
  byte unaff_10000082;
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong in_x10;
  ulong uVar7;
  byte unaff_w25;
  byte bVar8;
  long local_a8;
  long *local_a0;
  byte local_94;
  ulong local_90;
  ulong local_88;
  byte local_78;
  byte local_74;
  
  lVar6 = 0x25f3e0ddbf1c00ed;
LAB_0014db08:
  bVar3 = unaff_10000082;
  bVar4 = param_2;
  uVar7 = in_x10;
  lVar5 = lVar6;
  lVar6 = lVar5;
  in_x10 = uVar7;
  param_2 = bVar4;
  unaff_10000082 = bVar3;
  if (lVar5 < -0x18f20bbaa1ffd3fe) {
    if (-0x3ecc84b430e541be < lVar5) {
      if (lVar5 < -0x263b2e1eedb072ab) {
        if (lVar5 < -0x34b081542e0ef959) {
          if (lVar5 != -0x3ecc84b430e541bd) {
            if (lVar5 == -0x3d7fece8399865f1) {
              local_88 = local_90 + 1;
              lVar6 = -0x763e863b1d938581;
              local_74 = local_94;
              param_2 = bVar3;
              if (*(ulong *)(param_1 + 0x870) <= local_88) {
                lVar6 = 0x2285223634518d12;
              }
            }
            else {
              param_2 = bVar3;
              if (lVar5 == -0x35e510dbdc5247be) {
                lVar6 = -0x4939b47b8f0a1a0f;
              }
            }
            goto LAB_0014db08;
          }
          lVar5 = 0x4f1b9cab582378b9;
          bVar1 = DAT_0021f717 == '\0';
          lVar6 = -0x66abc1be75c4909a;
        }
        else {
          if (lVar5 == -0x34b081542e0ef959) {
            DAT_0021d498 = DAT_0021d498 ^ 0x7f;
            DAT_0021d490 = DAT_0021d490 ^ 0x7f7f7f7f7f7f7f7f;
            DAT_0021f716 = '\x01';
            lVar6 = -0x54721b0e9109bdd7;
            param_2 = bVar3;
            goto LAB_0014db08;
          }
          if (lVar5 == -0x2ddff39f285ee50c) goto LAB_0014daec;
          param_2 = bVar3;
          if (lVar5 != -0x2bd1c4cf64e2dceb) goto LAB_0014db08;
          lVar5 = -0x238a2a73b8b6f780;
          bVar1 = DAT_0021f715 == '\0';
          lVar6 = -0x6fd162ffaff5d274;
        }
LAB_0014e854:
        param_2 = bVar3;
        if (bVar1) {
          lVar6 = lVar5;
        }
        goto LAB_0014db08;
      }
      if (lVar5 < -0x238a2a73b8b6f780) {
        if (lVar5 == -0x263b2e1eedb072ab) {
          DAT_0021f578 = 0;
          lVar6 = FUN_001e238c(*(undefined8 *)(param_1 + 0x58),&DAT_0021d4a0);
          bVar1 = lVar6 == 0;
          lVar6 = -0x68a4483dbff2ede8;
          lVar5 = 0x5c45c2fd370b370b;
          goto LAB_0014e7d4;
        }
        lVar6 = -0x69b46b64e22f9012;
        param_2 = bVar3;
        if ((lVar5 != -0x2635b0d197007feb) && (lVar6 = lVar5, lVar5 == -0x239f40ac08666d8e)) {
          lVar6 = -0x1beed7eeda6ea90b;
          if (DAT_0021f717 == '\0') {
            lVar6 = -0x6c5623d74b6a3230;
          }
        }
      }
      else if (lVar5 == -0x238a2a73b8b6f780) {
        DAT_0021d488 = DAT_0021d488 ^ 0x9e;
        _DAT_0021d470 = _DAT_0021d470 ^ 0x9e9e9e9e9e9e9e9e;
        uRam000000000021d478 = uRam000000000021d478 ^ 0x9e9e9e9e9e9e9e9e;
        DAT_0021d480 = DAT_0021d480 ^ 0x9e9e9e9e9e9e9e9e;
        DAT_0021f715 = '\x01';
        lVar6 = 0x4829936d2a47f82;
        param_2 = bVar3;
      }
      else {
        lVar6 = -0x4939b47b8f0a1a0f;
        param_2 = bVar3;
        if ((lVar5 != -0x20233af7ce4d4a99) && (lVar6 = lVar5, lVar5 == -0x1beed7eeda6ea90b)) {
          lVar6 = -0x263b2e1eedb072ab;
        }
      }
      goto LAB_0014db08;
    }
    if (lVar5 < -0x5f8740c5e2721f53) {
      if (lVar5 < -0x69b46b64e22f9012) {
        if (lVar5 < -0x6c8d1b452692f741) {
          lVar6 = 0x3e9a4ecb34ab2b44;
          in_x10 = local_88;
          param_2 = local_74;
          unaff_10000082 = local_74;
          if ((lVar5 != -0x763e863b1d938581) &&
             (lVar6 = lVar5, in_x10 = uVar7, param_2 = bVar3, unaff_10000082 = bVar3,
             lVar5 == -0x6fd162ffaff5d274)) {
            lVar6 = 0x4829936d2a47f82;
          }
        }
        else {
          if (lVar5 == -0x6c5623d74b6a3230) {
            lVar6 = -0x263b2e1eedb072ab;
            goto LAB_0014e680;
          }
          param_2 = bVar3;
          if (lVar5 == -0x6c8d1b452692f741) {
            return unaff_w25 & 1;
          }
        }
      }
      else {
        if (lVar5 == -0x69b46b64e22f9012) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f578);
          lVar5 = -0x2635b0d197007feb;
          lVar6 = 0x23cd0ca8e37f44f3;
          bVar1 = iVar2 == 0;
          goto LAB_0014e8a0;
        }
        if (lVar5 == -0x68a4483dbff2ede8) {
          lVar6 = 0x564b76368c5b6e9;
          param_2 = bVar3;
          if (*(long *)(param_1 + 0x870) != 1) {
            lVar6 = -0x394554614163c67;
          }
        }
        else {
          param_2 = bVar3;
          if (lVar5 == -0x66abc1be75c4909a) {
            lVar6 = 0x32bcb057e0ed1a10;
          }
        }
      }
    }
    else {
      if (-0x4a8f76dddab8e8ee < lVar5) {
        if (lVar5 == -0x4a8f76dddab8e8ed) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f574);
          bVar1 = iVar2 == 0;
          lVar5 = -0x5c07c69e797fb94e;
          lVar6 = -0x18f20bbaa1ffd3fe;
        }
        else {
          if (lVar5 == -0x49f48471cdba84ab) goto LAB_0014e478;
          param_2 = bVar3;
          if (lVar5 != -0x4939b47b8f0a1a0f) goto LAB_0014db08;
          iVar2 = FUN_00212730(0,1,&DAT_0021f578);
          bVar1 = iVar2 == 0;
          lVar5 = -0x35e510dbdc5247be;
          lVar6 = -0x3ecc84b430e541bd;
        }
LAB_0014e8a0:
        param_2 = bVar3;
        if (!bVar1) {
          lVar6 = lVar5;
        }
        goto LAB_0014db08;
      }
      lVar6 = -0x5b3b9dd256b6370;
      param_2 = bVar3;
      if (((lVar5 != -0x5f8740c5e2721f53) &&
          (lVar6 = -0x4a8f76dddab8e8ed, lVar5 != -0x5c07c69e797fb94e)) &&
         (lVar6 = lVar5, lVar5 == -0x54721b0e9109bdd7)) {
        DAT_0021f574 = 0;
        iVar2 = FUN_001e17a8(&DAT_0021d490,*local_a0);
        bVar4 = iVar2 == 0 | local_78;
LAB_0014e3d4:
        lVar6 = -0x3d7fece8399865f1;
        local_94 = bVar4;
        param_2 = bVar3;
      }
    }
    goto LAB_0014db08;
  }
  if (lVar5 < 0x1e25f9c96f74cab5) {
    if (lVar5 < -0x1b8aed5b66cc468) {
      if (lVar5 < -0x91043ba7ccd8b39) {
        if (lVar5 == -0x18f20bbaa1ffd3fe) {
          lVar6 = 0x298c5505706a74e6;
          param_2 = bVar3;
          if (DAT_0021f716 == '\0') {
            lVar6 = -0x34b081542e0ef959;
          }
        }
        else {
          lVar6 = -0x4a8f76dddab8e8ed;
          param_2 = bVar3;
          if ((lVar5 != -0x17792efdcaaed1bf) && (lVar6 = lVar5, lVar5 == -0xd63a8ab62e25a7a)) {
            local_a0 = (long *)(param_1 + local_90 * 0x10 + 0x78);
            lVar6 = -0x49f48471cdba84ab;
            if (*local_a0 != 0) {
              lVar6 = 0x1fca94d408715810;
            }
          }
        }
        goto LAB_0014db08;
      }
      if (lVar5 == -0x91043ba7ccd8b39) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f578);
        lVar6 = -0x239f40ac08666d8e;
        lVar5 = 0x1e25f9c96f74cab5;
        bVar1 = iVar2 == 0;
      }
      else {
        if (lVar5 != -0x5b3b9dd256b6370) {
          param_2 = bVar3;
          if (lVar5 == -0x394554614163c67) goto LAB_0014e478;
          goto LAB_0014db08;
        }
        DAT_0021f578 = 0;
        lVar6 = FUN_001e238c(*(undefined8 *)(param_1 + 0x48),&DAT_0021d4a0);
        bVar1 = lVar6 == 0;
        lVar6 = -0x20233af7ce4d4a99;
        lVar5 = 0x3432068a9d054c97;
      }
    }
    else {
      if (0x564b76368c5b6e8 < lVar5) {
        if (lVar5 == 0x564b76368c5b6e9) {
          lVar6 = 0x3e9a4ecb34ab2b44;
          in_x10 = 0;
          param_2 = 0;
          unaff_10000082 = 0;
        }
        else {
          lVar6 = -0x91043ba7ccd8b39;
          param_2 = bVar3;
          if ((lVar5 != 0xa3774c8d609a92e) &&
             (lVar6 = lVar5, bVar4 = local_78, lVar5 == 0xd75b01f72a79914)) goto LAB_0014e3d4;
        }
        goto LAB_0014db08;
      }
      lVar6 = 0x1e848e67d439766;
      param_2 = bVar3;
      if (lVar5 == -0x1b8aed5b66cc468) goto LAB_0014db08;
      if (lVar5 == 0x1e848e67d439766) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f570);
        bVar1 = iVar2 == 0;
        lVar6 = -0x2bd1c4cf64e2dceb;
        lVar5 = -0x1b8aed5b66cc468;
      }
      else {
        lVar6 = lVar5;
        if (lVar5 != 0x4829936d2a47f82) goto LAB_0014db08;
        DAT_0021f570 = 0;
        iVar2 = FUN_001e17a8(&DAT_0021d470,local_a8);
        bVar1 = iVar2 == 0;
        lVar6 = -0x17792efdcaaed1bf;
        lVar5 = 0xd75b01f72a79914;
      }
    }
LAB_0014e7d4:
    param_2 = bVar3;
    if (!bVar1) {
      lVar6 = lVar5;
    }
    goto LAB_0014db08;
  }
  if (lVar5 < 0x30d407c2a19a0124) {
    if (0x23cd0ca8e37f44f2 < lVar5) {
      if (lVar5 == 0x23cd0ca8e37f44f3) {
        lVar5 = 0x30d407c2a19a0124;
        bVar1 = DAT_0021f717 == '\0';
        lVar6 = -0x5f8740c5e2721f53;
        goto LAB_0014e854;
      }
      lVar6 = -0x69b46b64e22f9012;
      param_2 = bVar3;
      if ((lVar5 != 0x25f3e0ddbf1c00ed) && (lVar6 = lVar5, lVar5 == 0x298c5505706a74e6)) {
        lVar6 = -0x54721b0e9109bdd7;
      }
      goto LAB_0014db08;
    }
    lVar6 = -0x91043ba7ccd8b39;
    param_2 = bVar3;
    if (((lVar5 == 0x1e25f9c96f74cab5) || (lVar6 = 0x1e848e67d439766, lVar5 == 0x1fca94d408715810))
       || (lVar6 = lVar5, bVar8 = local_74, lVar5 != 0x2285223634518d12)) goto LAB_0014db08;
  }
  else {
    if (lVar5 < 0x3e9a4ecb34ab2b44) {
      if (lVar5 == 0x30d407c2a19a0124) {
        lVar6 = -0x5b3b9dd256b6370;
LAB_0014e680:
        DAT_0021d4a0 = DAT_0021d4a0 ^ 0xa9a9a9a9a9a9a9a9;
        DAT_0021f717 = '\x01';
        param_2 = bVar3;
        goto LAB_0014db08;
      }
      if (lVar5 == 0x32bcb057e0ed1a10) {
        DAT_0021f578 = 0;
        lVar6 = FUN_001e238c(*(undefined8 *)(param_1 + 0x50),&DAT_0021d4a0);
        bVar1 = lVar6 == 0;
        lVar5 = -0x2ddff39f285ee50c;
        lVar6 = 0xa3774c8d609a92e;
        goto LAB_0014e8a0;
      }
      param_2 = bVar3;
      if (lVar5 != 0x3432068a9d054c97) goto LAB_0014db08;
    }
    else {
      if (lVar5 < 0x4f1b9cab582378b9) {
        if (lVar5 == 0x3e9a4ecb34ab2b44) {
          local_a8 = *(long *)(param_1 + uVar7 * 0x10 + 0x70);
          lVar6 = 0x4d0dba6e5725fc17;
          local_90 = uVar7;
          param_2 = bVar3;
          local_78 = bVar4;
          if (local_a8 != 0) {
            lVar6 = -0xd63a8ab62e25a7a;
          }
        }
        else {
          unaff_10000082 = bVar4;
          if (lVar5 == 0x4d0dba6e5725fc17) {
LAB_0014e478:
            bVar8 = 0;
            goto LAB_0014daf0;
          }
        }
        goto LAB_0014db08;
      }
      if (lVar5 == 0x4f1b9cab582378b9) {
        lVar6 = 0x32bcb057e0ed1a10;
        goto LAB_0014e680;
      }
      if (lVar5 != 0x5c45c2fd370b370b) goto LAB_0014db08;
    }
LAB_0014daec:
    bVar8 = 1;
  }
LAB_0014daf0:
  lVar6 = -0x6c8d1b452692f741;
  param_2 = bVar4;
  unaff_10000082 = bVar3;
  unaff_w25 = bVar8;
  goto LAB_0014db08;
}

