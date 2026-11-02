// rea decompile_all
// name: FUN_001a0748
// address: 0x1a0748
// body: available
// range: 0x1a0748-0x1a123f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a0748(int *param_1,long *param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long unaff_x27;
  int local_7c;
  long local_78;
  int local_70;
  int local_6c;
  
  lVar1 = 0x32bcb057e0ed1a10;
  if (param_3 != 0) {
    lVar1 = -0x2ddff39f285ee50c;
  }
  lVar2 = 0x4f1b9cab582378b9;
LAB_001a0854:
  while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < -0x91043ba7ccd8b39) {
    if (lVar5 < -0x3d7fece8399865f1) {
      if (lVar5 < -0x5c07c69e797fb94e) {
        if (lVar5 < -0x6c8d1b452692f741) {
          if (lVar5 == -0x763e863b1d938581) {
            *param_4 = 0;
            lVar2 = -0x6c8d1b452692f741;
          }
          else if (lVar5 == -0x6fd162ffaff5d274) {
            lVar2 = 0x4d0dba6e5725fc17;
          }
        }
        else if (lVar5 == -0x6c5623d74b6a3230) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f994);
          lVar2 = -0x18f20bbaa1ffd3fe;
          if (iVar4 != 0) {
            lVar2 = -0x263b2e1eedb072ab;
          }
        }
        else if (lVar5 == -0x68a4483dbff2ede8) {
          DAT_0021f994 = 0;
          lVar2 = -0x394554614163c67;
        }
        else if (lVar5 == -0x6c8d1b452692f741) {
          return;
        }
      }
      else if (lVar5 < -0x4a8f76dddab8e8ed) {
        if (lVar5 == -0x5c07c69e797fb94e) {
          *param_1 = local_7c;
          lVar2 = -0x34b081542e0ef959;
        }
        else if (lVar5 == -0x54721b0e9109bdd7) {
          lVar2 = -0x763e863b1d938581;
        }
      }
      else {
        if (lVar5 == -0x4a8f76dddab8e8ed) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_7c = local_70;
          goto LAB_001a11c0;
        }
        if (lVar5 == -0x49f48471cdba84ab) {
          lVar2 = 0x1fca94d408715810;
          if (local_78 != 0) {
            lVar2 = 0x1e848e67d439766;
          }
        }
      }
    }
    else if (lVar5 < -0x263b2e1eedb072ab) {
      if (lVar5 < -0x2ddff39f285ee50c) {
        lVar2 = -0x6c8d1b452692f741;
        if ((lVar5 != -0x3d7fece8399865f1) && (lVar2 = lVar5, lVar5 == -0x34b081542e0ef959)) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar2 = -0x3d7fece8399865f1;
          if (*param_1 != 0) {
            lVar2 = -0x54721b0e9109bdd7;
          }
        }
      }
      else if (lVar5 == -0x2ddff39f285ee50c) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = 0xa3774c8d609a92e;
        if (lVar5 != 0) {
          lVar2 = 0x4829936d2a47f82;
        }
      }
      else if (lVar5 == -0x2bd1c4cf64e2dceb) {
        lVar2 = -0x6fd162ffaff5d274;
        if (DAT_0021fa2b == '\0') {
          lVar2 = 0x3e9a4ecb34ab2b44;
        }
      }
    }
    else if (lVar5 < -0x18f20bbaa1ffd3fe) {
      lVar2 = -0x6c5623d74b6a3230;
      if ((lVar5 != -0x263b2e1eedb072ab) && (lVar2 = lVar5, lVar5 == -0x238a2a73b8b6f780)) {
        lVar2 = -0x34b081542e0ef959;
      }
    }
    else if (lVar5 == -0x18f20bbaa1ffd3fe) {
      lVar2 = 0x298c5505706a74e6;
      if (DAT_0021fa2c == '\0') {
        lVar2 = 0x5c45c2fd370b370b;
      }
    }
    else {
      lVar2 = -0x763e863b1d938581;
      if ((lVar5 != -0x17792efdcaaed1bf) && (lVar2 = lVar5, lVar5 == -0xd63a8ab62e25a7a)) {
        local_70 = 0x11;
LAB_001a1110:
        lVar2 = -0x4a8f76dddab8e8ed;
      }
    }
  }
  if (lVar5 < 0x1e25f9c96f74cab5) {
    if (0x4829936d2a47f81 < lVar5) {
      if (lVar5 < 0xa3774c8d609a92e) {
        if (lVar5 == 0x4829936d2a47f82) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar2 = -0x17792efdcaaed1bf;
          if (unaff_x27 != 0) {
            lVar2 = 0xd75b01f72a79914;
          }
          *param_1 = 0x11;
        }
        else if (lVar5 == 0x564b76368c5b6e9) {
          lVar2 = -0x394554614163c67;
        }
      }
      else if (lVar5 == 0xa3774c8d609a92e) {
        lVar2 = -0x91043ba7ccd8b39;
        if (unaff_x27 != 0) {
          lVar2 = 0x1e25f9c96f74cab5;
        }
      }
      else if (lVar5 == 0xd75b01f72a79914) {
        lVar2 = -0x34b081542e0ef959;
      }
      goto LAB_001a0854;
    }
    if (-0x1b8aed5b66cc469 < lVar5) {
      if (lVar5 == -0x1b8aed5b66cc468) {
        local_70 = 0x1b;
        goto LAB_001a1110;
      }
      if (lVar5 == 0x1e848e67d439766) {
        uVar3 = (**(code **)(*param_2 + 0x128))(param_2,param_3,local_78);
        *param_4 = uVar3;
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = -0x238a2a73b8b6f780;
        if (lVar5 != 0) {
          lVar2 = -0x1b8aed5b66cc468;
        }
      }
      goto LAB_001a0854;
    }
    if (lVar5 != -0x91043ba7ccd8b39) {
      if (lVar5 == -0x394554614163c67) {
        iVar4 = FUN_00212730(0,1,&DAT_0021f990);
        lVar2 = -0x2bd1c4cf64e2dceb;
        if (iVar4 != 0) {
          lVar2 = 0x564b76368c5b6e9;
        }
      }
      goto LAB_001a0854;
    }
    local_6c = 0x11;
  }
  else {
    if (lVar5 < 0x32bcb057e0ed1a10) {
      if (lVar5 < 0x2285223634518d12) {
        lVar2 = -0x6c5623d74b6a3230;
        if ((lVar5 != 0x1e25f9c96f74cab5) && (lVar2 = lVar5, lVar5 == 0x1fca94d408715810)) {
          local_7c = 0x11;
LAB_001a11c0:
          lVar2 = -0x5c07c69e797fb94e;
        }
      }
      else if (lVar5 == 0x2285223634518d12) {
        *param_1 = local_6c;
        lVar2 = -0x763e863b1d938581;
      }
      else if (lVar5 == 0x298c5505706a74e6) {
        lVar2 = -0x68a4483dbff2ede8;
      }
      goto LAB_001a0854;
    }
    if (0x4d0dba6e5725fc16 < lVar5) {
      if (lVar5 == 0x4d0dba6e5725fc17) {
        DAT_0021f990 = 0;
        local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e580,&DAT_0021e594);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = -0x49f48471cdba84ab;
        if (lVar5 != 0) {
          lVar2 = -0xd63a8ab62e25a7a;
        }
      }
      else if (lVar5 == 0x5c45c2fd370b370b) {
        DAT_0021e594 = DAT_0021e594 ^ 0xc1;
        DAT_0021e595 = DAT_0021e595 ^ 0xc1;
        DAT_0021e596 = DAT_0021e596 ^ 0xc1;
        DAT_0021e597 = DAT_0021e597 ^ 0xc1;
        DAT_0021fa2c = '\x01';
        lVar2 = -0x68a4483dbff2ede8;
      }
      else if (lVar5 == 0x4f1b9cab582378b9) {
        lVar2 = lVar1;
      }
      goto LAB_001a0854;
    }
    if (lVar5 != 0x32bcb057e0ed1a10) {
      if (lVar5 == 0x3e9a4ecb34ab2b44) {
        DAT_0021e590 = DAT_0021e590 ^ 0xed;
        DAT_0021e592 = DAT_0021e592 ^ 0xed;
        DAT_0021e591 = DAT_0021e591 ^ 0xed;
        _DAT_0021e580 = _DAT_0021e580 ^ 0xedededededededed;
        uRam000000000021e588 = uRam000000000021e588 ^ 0xedededededededed;
        DAT_0021fa2b = '\x01';
        lVar2 = 0x4d0dba6e5725fc17;
      }
      goto LAB_001a0854;
    }
    local_6c = 3;
  }
  lVar2 = 0x2285223634518d12;
  goto LAB_001a0854;
}

