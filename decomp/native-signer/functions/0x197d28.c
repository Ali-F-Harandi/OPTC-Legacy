// rea decompile_all
// name: FUN_00197d28
// address: 0x197d28
// body: available
// range: 0x197d28-0x1989ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00197d28(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x28;
  long local_98;
  int local_8c;
  int local_7c;
  
  lVar3 = -0x4dbbbf854644f9d4;
LAB_00197e24:
  while (lVar2 = lVar3, lVar3 = lVar2, -0xdf2d3229a24126e < lVar2) {
    if (lVar2 < 0x2cf80519e31e1425) {
      if (lVar2 < 0x1ce61cb766af2c30) {
        if (lVar2 < -0x9888437dc260965) {
          lVar3 = 0x31eeb7dc42e6a877;
          if ((lVar2 != -0xdf2d3229a24126d) && (lVar3 = lVar2, lVar2 == -0xd3b217146797eb7)) {
            lVar3 = 0x2a3d0e7168b938ac;
          }
        }
        else if (lVar2 == -0x9888437dc260965) {
          DAT_0021e398 = DAT_0021e398 ^ 0x5e;
          DAT_0021e399 = DAT_0021e399 ^ 0x5e;
          DAT_0021e390 = DAT_0021e390 ^ 0x5e5e5e5e5e5e5e5e;
          DAT_0021fa1a = '\x01';
          lVar3 = 0x25e86f7968f49167;
        }
        else {
          if (lVar2 == 0xb883192d08398bd) {
            local_7c = 0x1b;
            goto LAB_00197e10;
          }
          if (lVar2 == 0x1b40e3879983fb2d) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f948);
            lVar3 = -0x31c0cc762e2e76ae;
            if (iVar1 != 0) {
              lVar3 = -0x1f3977366e9c25fe;
            }
          }
        }
      }
      else if (lVar2 < 0x2a3d0e7168b938ac) {
        if (lVar2 == 0x1ce61cb766af2c30) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f950);
          lVar3 = 0x4b5a9531dcda0044;
          if (iVar1 != 0) {
            lVar3 = 0x760cb7f24d53c426;
          }
        }
        else if (lVar2 == 0x25e86f7968f49167) {
          DAT_0021f94c = 0;
          local_98 = (**(code **)(*param_2 + 0x388))(param_2,unaff_x28,&DAT_0021e390,&DAT_0021e3a0);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x47424ab50666ced8;
          if (lVar2 != 0) {
            lVar3 = -0x78f6f5e8da711af8;
          }
        }
      }
      else if (lVar2 == 0x2a3d0e7168b938ac) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f94c);
        lVar3 = -0x6b1f45b376a58795;
        if (iVar1 != 0) {
          lVar3 = -0xd3b217146797eb7;
        }
      }
      else {
        lVar3 = 0x25e86f7968f49167;
        if ((lVar2 != 0x2b3c21038bf0b7d7) && (lVar3 = lVar2, lVar2 == 0x2c1b04b89a220d14)) {
          DAT_0021f948 = 0;
          unaff_x28 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e370);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x2cf80519e31e1425;
          if (lVar2 != 0) {
            lVar3 = -0x5a2405f8da1725a0;
          }
        }
      }
    }
    else if (lVar2 < 0x55fc0d8117ca80f9) {
      if (lVar2 < 0x4b5a9531dcda0044) {
        if (lVar2 == 0x2cf80519e31e1425) {
          lVar3 = -0x48037b8f5dd08a99;
          if (unaff_x28 != 0) {
            lVar3 = 0x7cc37bc84589a0a4;
          }
        }
        else {
          lVar3 = 0x2c1b04b89a220d14;
          if ((lVar2 != 0x40aae2ec6f6a4f26) && (lVar3 = lVar2, lVar2 == 0x31eeb7dc42e6a877)) {
            return;
          }
        }
      }
      else if (lVar2 == 0x4b5a9531dcda0044) {
        lVar3 = -0x7e9c4d6870066c9d;
        if (DAT_0021fa1b == '\0') {
          lVar3 = -0x5bd62d9d555e3e28;
        }
      }
      else if (lVar2 == 0x51b5d07c3e2c9a24) {
        lVar3 = 0xb883192d08398bd;
        if (*param_3 != 0) {
          lVar3 = -0x3ed1cec5ad9bf9b5;
        }
      }
    }
    else if (lVar2 < 0x6de285e1b91496be) {
      lVar3 = 0x6de285e1b91496be;
      if ((lVar2 != 0x55fc0d8117ca80f9) && (lVar3 = lVar2, lVar2 == 0x655eb7e342aa1b21)) {
        lVar3 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x28,local_98);
        *param_3 = lVar3;
        lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x51b5d07c3e2c9a24;
        if (lVar2 != 0) {
          lVar3 = -0x48fc8f69589c447c;
        }
      }
    }
    else if (lVar2 == 0x6de285e1b91496be) {
      *param_3 = 0;
      lVar3 = 0x31eeb7dc42e6a877;
    }
    else {
      lVar3 = 0x1ce61cb766af2c30;
      if ((lVar2 != 0x760cb7f24d53c426) && (lVar3 = lVar2, lVar2 == 0x7cc37bc84589a0a4)) {
        lVar3 = 0x1ce61cb766af2c30;
      }
    }
  }
  if (lVar2 < -0x48fc8f69589c447c) {
    if (-0x5ec3e5a90b6cd1cb < lVar2) {
      if (lVar2 < -0x5a2405f8da1725a0) {
        if (lVar2 == -0x5ec3e5a90b6cd1ca) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_7c = local_8c;
LAB_00197e10:
          lVar3 = -0x70d3f379afade806;
        }
        else if (lVar2 == -0x5bd62d9d555e3e28) {
          DAT_0021e3c0 = DAT_0021e3c0 ^ 0xf8;
          DAT_0021e3c1 = DAT_0021e3c1 ^ 0xf8;
          _DAT_0021e3a0 = _DAT_0021e3a0 ^ 0xf8f8f8f8f8f8f8f8;
          uRam000000000021e3a8 = uRam000000000021e3a8 ^ 0xf8f8f8f8f8f8f8f8;
          _DAT_0021e3b0 = _DAT_0021e3b0 ^ 0xf8f8f8f8f8f8f8f8;
          uRam000000000021e3b8 = uRam000000000021e3b8 ^ 0xf8f8f8f8f8f8f8f8;
          DAT_0021fa1b = '\x01';
          lVar3 = -0x203ee968e41c49ce;
        }
      }
      else if (lVar2 == -0x5a2405f8da1725a0) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x7ef388dba0dcec1f;
        if (unaff_x28 != 0) {
          lVar3 = -0x3b131567841c69de;
        }
LAB_00198828:
        *param_1 = 0x11;
      }
      else {
        lVar3 = 0x1b40e3879983fb2d;
        if ((lVar2 != -0x4dbbbf854644f9d4) && (lVar3 = lVar2, lVar2 == -0x4a4c07efa47f2f14)) {
          DAT_0021e388 = DAT_0021e388 ^ 0x7f;
          DAT_0021e389 = DAT_0021e389 ^ 0x7f;
          DAT_0021e38a = DAT_0021e38a ^ 0x7f;
          DAT_0021e38b = DAT_0021e38b ^ 0x7f;
          DAT_0021e38c = DAT_0021e38c ^ 0x7f;
          DAT_0021e38d = DAT_0021e38d ^ 0x7f;
          _DAT_0021e370 = _DAT_0021e370 ^ 0x7f7f7f7f7f7f7f7f;
          uRam000000000021e378 = uRam000000000021e378 ^ 0x7f7f7f7f7f7f7f7f;
          DAT_0021e380 = DAT_0021e380 ^ 0x7f7f7f7f7f7f7f7f;
          DAT_0021fa19 = '\x01';
          lVar3 = 0x2c1b04b89a220d14;
        }
      }
      goto LAB_00197e24;
    }
    if (lVar2 < -0x78f6f5e8da711af8) {
      lVar3 = 0x6de285e1b91496be;
      if ((lVar2 != -0x7ef388dba0dcec1f) && (lVar3 = lVar2, lVar2 == -0x7e9c4d6870066c9d)) {
        lVar3 = -0x203ee968e41c49ce;
      }
      goto LAB_00197e24;
    }
    if (lVar2 != -0x78f6f5e8da711af8) {
      if (lVar2 == -0x70d3f379afade806) {
        *param_1 = local_7c;
        lVar3 = -0x2b765d9da1fa4ec3;
      }
      else if (lVar2 == -0x6b1f45b376a58795) {
        lVar3 = 0x2b3c21038bf0b7d7;
        if (DAT_0021fa1a == '\0') {
          lVar3 = -0x9888437dc260965;
        }
      }
      goto LAB_00197e24;
    }
    local_8c = 0x11;
  }
  else {
    if (-0x31c0cc762e2e76af < lVar2) {
      if (lVar2 < -0x203ee968e41c49ce) {
        if (lVar2 == -0x31c0cc762e2e76ae) {
          lVar3 = 0x40aae2ec6f6a4f26;
          if (DAT_0021fa19 == '\0') {
            lVar3 = -0x4a4c07efa47f2f14;
          }
        }
        else if (lVar2 == -0x2b765d9da1fa4ec3) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
          lVar3 = -0xdf2d3229a24126d;
          if (*param_1 != 0) {
            lVar3 = 0x55fc0d8117ca80f9;
          }
        }
      }
      else if (lVar2 == -0x203ee968e41c49ce) {
        DAT_0021f950 = 0;
        lVar3 = 0x2a3d0e7168b938ac;
      }
      else {
        lVar3 = 0x1b40e3879983fb2d;
        if ((lVar2 != -0x1f3977366e9c25fe) && (lVar3 = lVar2, lVar2 == -0x1d25e6566a72556c)) {
          local_7c = 0x11;
          goto LAB_00197e10;
        }
      }
      goto LAB_00197e24;
    }
    if (-0x47424ab50666ced9 < lVar2) {
      if (lVar2 == -0x47424ab50666ced8) {
        lVar3 = -0x1d25e6566a72556c;
        if (local_98 != 0) {
          lVar3 = 0x655eb7e342aa1b21;
        }
      }
      else {
        lVar3 = -0x2b765d9da1fa4ec3;
        if ((lVar2 != -0x3ed1cec5ad9bf9b5) && (lVar3 = lVar2, lVar2 == -0x3b131567841c69de)) {
          lVar3 = -0x2b765d9da1fa4ec3;
        }
      }
      goto LAB_00197e24;
    }
    if (lVar2 != -0x48fc8f69589c447c) {
      if (lVar2 == -0x48037b8f5dd08a99) {
        lVar3 = 0x6de285e1b91496be;
        goto LAB_00198828;
      }
      goto LAB_00197e24;
    }
    local_8c = 0x1b;
  }
  lVar3 = -0x5ec3e5a90b6cd1ca;
  goto LAB_00197e24;
}

