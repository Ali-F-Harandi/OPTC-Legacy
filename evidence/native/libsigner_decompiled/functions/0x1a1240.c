// rea decompile_all
// name: FUN_001a1240
// address: 0x1a1240
// body: available
// range: 0x1a1240-0x1a1d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1240(int *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x27;
  int local_7c;
  long local_78;
  int local_68;
  int local_64;
  
  lVar1 = -0x5f8740c5e2721f53;
  if (param_3 != 0) {
    lVar1 = -0x3ecc84b430e541bd;
  }
  lVar2 = 0x23cd0ca8e37f44f3;
LAB_001a1354:
  while (lVar5 = lVar2, lVar2 = lVar5, -0x1beed7eeda6ea90c < lVar5) {
    if (lVar5 < 0x39a7f0fb9977dffc) {
      if (lVar5 < 0x17a95f467534555d) {
        if (lVar5 < 0x8378b7ff07cba5d) {
          lVar2 = -0x5cb0fe2e3b181f4e;
          if ((lVar5 != -0x1beed7eeda6ea90b) && (lVar2 = lVar5, lVar5 == 0x440cd085d4cedea)) {
            local_68 = 0x11;
LAB_001a1cc0:
            lVar2 = -0x2e0226396fa51b9f;
          }
        }
        else if (lVar5 == 0x8378b7ff07cba5d) {
          DAT_0021f99c = 0;
          lVar2 = 0x25aef4e9c7a3cced;
        }
        else if (lVar5 == 0xe77b5fd8e5a1ae4) {
          uVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_78);
          *param_4 = uVar4;
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = -0x35e88eb74b5cca71;
          if (lVar5 != 0) {
            lVar2 = 0x43caf3b81ea1e4c2;
          }
        }
      }
      else if (lVar5 < 0x22e30fd623edcefa) {
        if (lVar5 == 0x17a95f467534555d) {
          DAT_0021e5d8 = DAT_0021e5d8 ^ 0xfe;
          _DAT_0021e5c0 = _DAT_0021e5c0 ^ 0xfefefefefefefefe;
          uRam000000000021e5c8 = uRam000000000021e5c8 ^ 0xfefefefefefefefe;
          DAT_0021e5d0 = DAT_0021e5d0 ^ 0xfefefefefefefefe;
          DAT_0021fa2e = '\x01';
          lVar2 = 0x8378b7ff07cba5d;
        }
        else if (lVar5 == 0x1a860386f9c1d99a) {
          local_7c = 0x11;
LAB_001a1b90:
          lVar2 = 0x636d451c5178cab1;
        }
      }
      else {
        lVar2 = -0x30d005201502684a;
        if (((lVar5 != 0x22e30fd623edcefa) && (lVar2 = lVar1, lVar5 != 0x23cd0ca8e37f44f3)) &&
           (lVar2 = lVar5, lVar5 == 0x25aef4e9c7a3cced)) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f998);
          lVar2 = -0x7152f074e01f937f;
          if (iVar3 != 0) {
            lVar2 = -0x676085a1ab199639;
          }
        }
      }
    }
    else if (lVar5 < 0x51a005fc510cbc3f) {
      if (lVar5 < 0x43caf3b81ea1e4c2) {
        lVar2 = -0x5cb0fe2e3b181f4e;
        if ((lVar5 != 0x39a7f0fb9977dffc) && (lVar2 = lVar5, lVar5 == 0x4216f7b2e2ac276d)) {
          DAT_0021e5b0 = DAT_0021e5b0 ^ 0xe9;
          DAT_0021e5b1 = DAT_0021e5b1 ^ 0xe9;
          _DAT_0021e5a0 = _DAT_0021e5a0 ^ 0xe9e9e9e9e9e9e9e9;
          uRam000000000021e5a8 = uRam000000000021e5a8 ^ 0xe9e9e9e9e9e9e9e9;
          DAT_0021fa2d = '\x01';
          lVar2 = -0x58a66a1a6ece8dff;
        }
      }
      else {
        if (lVar5 == 0x43caf3b81ea1e4c2) {
          local_68 = 0x1b;
          goto LAB_001a1cc0;
        }
        if (lVar5 == 0x4b33ae40c34368ca) {
          lVar2 = 0x549e8574b01cd797;
        }
      }
    }
    else if (lVar5 < 0x554807ffdfa41730) {
      lVar2 = 0x549e8574b01cd797;
      if ((lVar5 != 0x51a005fc510cbc3f) && (lVar2 = lVar5, lVar5 == 0x549e8574b01cd797)) {
        *param_4 = 0;
        lVar2 = 0x554807ffdfa41730;
      }
    }
    else if (lVar5 == 0x636d451c5178cab1) {
      *param_1 = local_7c;
      lVar2 = -0x30d005201502684a;
    }
    else if (lVar5 == 0x6fb33f1e6cfb9bc5) {
      *param_1 = local_64;
      lVar2 = 0x549e8574b01cd797;
    }
    else if (lVar5 == 0x554807ffdfa41730) {
      return;
    }
  }
  if (lVar5 < -0x489ca353db7f6c0f) {
    if (lVar5 < -0x5f8740c5e2721f53) {
      if (lVar5 < -0x676085a1ab199639) {
        if (lVar5 == -0x7152f074e01f937f) {
          lVar2 = -0x58ff310258132cf0;
          if (DAT_0021fa2d == '\0') {
            lVar2 = 0x4216f7b2e2ac276d;
          }
        }
        else if (lVar5 == -0x6ef39ccd177a5c22) {
          lVar2 = 0x554807ffdfa41730;
        }
      }
      else {
        lVar2 = 0x25aef4e9c7a3cced;
        if ((lVar5 != -0x676085a1ab199639) && (lVar2 = lVar5, lVar5 == -0x66abc1be75c4909a)) {
          lVar2 = -0x239f40ac08666d8e;
          if (unaff_x27 != 0) {
            lVar2 = -0x1beed7eeda6ea90b;
          }
        }
      }
      goto LAB_001a1354;
    }
    if (-0x58ff310258132cf1 < lVar5) {
      lVar2 = -0x58a66a1a6ece8dff;
      if ((lVar5 != -0x58ff310258132cf0) && (lVar2 = lVar5, lVar5 == -0x58a66a1a6ece8dff)) {
        DAT_0021f998 = 0;
        local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e5a0,&DAT_0021e5c0);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = -0x489ca353db7f6c0f;
        if (lVar5 != 0) {
          lVar2 = 0x440cd085d4cedea;
        }
      }
      goto LAB_001a1354;
    }
    if (lVar5 != -0x5f8740c5e2721f53) {
      if (lVar5 == -0x5cb0fe2e3b181f4e) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f99c);
        lVar2 = -0x31bc73e2f10ee04d;
        if (iVar3 != 0) {
          lVar2 = 0x39a7f0fb9977dffc;
        }
      }
      goto LAB_001a1354;
    }
    local_64 = 3;
  }
  else {
    if (lVar5 < -0x31bc73e2f10ee04d) {
      if (lVar5 < -0x35e88eb74b5cca71) {
        if (lVar5 == -0x489ca353db7f6c0f) {
          lVar2 = 0x1a860386f9c1d99a;
          if (local_78 != 0) {
            lVar2 = 0xe77b5fd8e5a1ae4;
          }
        }
        else if (lVar5 == -0x3ecc84b430e541bd) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = -0x66abc1be75c4909a;
          if (lVar5 != 0) {
            lVar2 = -0x35446ecb5f631f52;
          }
        }
      }
      else {
        lVar2 = -0x30d005201502684a;
        if ((lVar5 != -0x35e88eb74b5cca71) && (lVar2 = lVar5, lVar5 == -0x35446ecb5f631f52)) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar2 = 0x4b33ae40c34368ca;
          if (unaff_x27 != 0) {
            lVar2 = 0x22e30fd623edcefa;
          }
          *param_1 = 0x11;
        }
      }
      goto LAB_001a1354;
    }
    if (lVar5 < -0x2e0226396fa51b9f) {
      if (lVar5 == -0x31bc73e2f10ee04d) {
        lVar2 = -0x1d831319e0098aee;
        if (DAT_0021fa2e == '\0') {
          lVar2 = 0x17a95f467534555d;
        }
      }
      else if (lVar5 == -0x30d005201502684a) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar2 = -0x6ef39ccd177a5c22;
        if (*param_1 != 0) {
          lVar2 = 0x51a005fc510cbc3f;
        }
      }
      goto LAB_001a1354;
    }
    if (lVar5 == -0x2e0226396fa51b9f) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_7c = local_68;
      goto LAB_001a1b90;
    }
    if (lVar5 != -0x239f40ac08666d8e) {
      if (lVar5 == -0x1d831319e0098aee) {
        lVar2 = 0x8378b7ff07cba5d;
      }
      goto LAB_001a1354;
    }
    local_64 = 0x11;
  }
  lVar2 = 0x6fb33f1e6cfb9bc5;
  goto LAB_001a1354;
}

