// rea decompile_all
// name: FUN_00173900
// address: 0x173900
// body: available
// range: 0x173900-0x174463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00173900(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x28;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x5a6daaf505e6129c;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x2d4673f83300de4f;
  }
  lVar3 = -0x7353f89f407630c4;
LAB_00173a0c:
  while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x6288b31db4af0d0) {
    if (lVar4 < -0x3eef45067d3bf338) {
      if (lVar4 < -0x5d2b6741d85f7410) {
        if (lVar4 < -0x691837bae57ac643) {
          lVar3 = -0x1c5b2ab53e093884;
          if ((lVar4 != -0x7d966677c36dcece) && (lVar3 = lVar4, lVar4 == -0x7353f89f407630c4)) {
            lVar3 = lVar1;
          }
        }
        else if (lVar4 == -0x691837bae57ac643) {
          local_88 = 0x11;
LAB_0017440c:
          lVar3 = 0x3e722c767da45809;
        }
        else if (lVar4 == -0x61e598ced63c221e) {
          lVar3 = 0x15491d2b22f9328e;
        }
      }
      else if (lVar4 < -0x4d93c90d4c4e8cc5) {
        lVar3 = 0x70d6ef9c84f56d26;
        if ((lVar4 != -0x5d2b6741d85f7410) && (lVar3 = lVar4, lVar4 == -0x5a6daaf505e6129c)) {
          unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x10f63700d782bf54;
          if (lVar4 != 0) {
            lVar3 = 0xc418a6cc8b6f1ff;
          }
        }
      }
      else if (lVar4 == -0x4d93c90d4c4e8cc5) {
        DAT_0021f810 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021d988,&DAT_0021d990);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x4c688c2b3b180e1;
        if (lVar4 != 0) {
          lVar3 = -0x691837bae57ac643;
        }
      }
      else {
        if (lVar4 == -0x4c71e68197f00951) {
          local_74 = 0x11;
          goto LAB_001739f8;
        }
        if (lVar4 == -0x41df0b638b763578) {
          lVar3 = 0x6298686b9f6b9f24;
          if (DAT_0021f9cd == '\0') {
            lVar3 = 0xc11c3ec18b1aa40;
          }
        }
      }
    }
    else if (lVar4 < -0x1c5b2ab53e093884) {
      if (lVar4 < -0x2d4673f83300de4f) {
        if (lVar4 == -0x3eef45067d3bf338) {
          lVar3 = 0x14f4c2a3fc87591b;
          if (*param_5 != 0) {
            lVar3 = -0xf9c92c752203283;
          }
        }
        else if (lVar4 == -0x3b6e0fe4a7713ec6) {
          *param_1 = local_74;
          lVar3 = 0x3c1d6e269c73b2c4;
        }
      }
      else if (lVar4 == -0x2d4673f83300de4f) {
        local_84 = 3;
LAB_0017422c:
        lVar3 = 0x7a1d336c9fe8990f;
      }
      else {
        lVar3 = 0x47a378886e13f5f;
        if ((lVar4 != -0x24d3583348e9211e) && (lVar3 = lVar4, lVar4 == -0x22076b5cc3122b5b)) {
          lVar3 = 0x6288b31db4af0d0;
          if (DAT_0021f9ce == '\0') {
            lVar3 = 0x5be851ffc25e1a72;
          }
        }
      }
    }
    else if (lVar4 < -0xf9c92c752203283) {
      if (lVar4 == -0x1c5b2ab53e093884) {
        *param_5 = 0;
        lVar3 = 0x47a378886e13f5f;
      }
      else if (lVar4 == -0x10f63700d782bf54) {
        lVar3 = 0x40a7395875650256;
        if (unaff_x28 != 0) {
          lVar3 = -0x5d2b6741d85f7410;
        }
      }
    }
    else {
      lVar3 = 0x3c1d6e269c73b2c4;
      if (lVar4 != -0xf9c92c752203283) {
        if (lVar4 == 0x4c688c2b3b180e1) {
          lVar3 = -0x4c71e68197f00951;
          if (local_90 != 0) {
            lVar3 = 0x9e148cc4f502246;
          }
        }
        else {
          lVar3 = lVar4;
          if (lVar4 == 0x47a378886e13f5f) {
            return;
          }
        }
      }
    }
  }
  if (lVar4 < 0x3e722c767da45809) {
    if (lVar4 < 0x10778cda4c5f8a73) {
      if (lVar4 < 0xc11c3ec18b1aa40) {
        lVar3 = 0x10778cda4c5f8a73;
        if ((lVar4 != 0x6288b31db4af0d0) && (lVar3 = lVar4, lVar4 == 0x9e148cc4f502246)) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4);
          *param_5 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x3eef45067d3bf338;
          if (lVar4 != 0) {
            lVar3 = 0x51c7910840e8eaee;
          }
        }
      }
      else if (lVar4 == 0xc11c3ec18b1aa40) {
        DAT_0021d988 = DAT_0021d988 ^ 0xb9b9b9b9b9b9b9b9;
        DAT_0021f9cd = '\x01';
        lVar3 = -0x4d93c90d4c4e8cc5;
      }
      else if (lVar4 == 0xc418a6cc8b6f1ff) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x731bafea6ffaf9d2;
        if (unaff_x28 != 0) {
          lVar3 = 0x3dce80f3d755ea8b;
        }
        *param_1 = 0x11;
      }
      goto LAB_00173a0c;
    }
    if (0x15491d2b22f9328d < lVar4) {
      if (lVar4 == 0x15491d2b22f9328e) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f810);
        lVar3 = -0x41df0b638b763578;
        if (iVar2 != 0) {
          lVar3 = -0x61e598ced63c221e;
        }
      }
      else if (lVar4 == 0x3c1d6e269c73b2c4) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
        lVar3 = -0x24d3583348e9211e;
        if (*param_1 != 0) {
          lVar3 = -0x7d966677c36dcece;
        }
      }
      else if (lVar4 == 0x3dce80f3d755ea8b) {
        lVar3 = 0x3c1d6e269c73b2c4;
      }
      goto LAB_00173a0c;
    }
    if (lVar4 == 0x10778cda4c5f8a73) {
      DAT_0021f814 = 0;
      lVar3 = 0x15491d2b22f9328e;
      goto LAB_00173a0c;
    }
    if (lVar4 != 0x14f4c2a3fc87591b) goto LAB_00173a0c;
    local_74 = 0x18;
  }
  else {
    if (0x6298686b9f6b9f23 < lVar4) {
      if (lVar4 < 0x731bafea6ffaf9d2) {
        lVar3 = -0x4d93c90d4c4e8cc5;
        if ((lVar4 != 0x6298686b9f6b9f24) && (lVar3 = lVar4, lVar4 == 0x70d6ef9c84f56d26)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f814);
          lVar3 = -0x22076b5cc3122b5b;
          if (iVar2 != 0) {
            lVar3 = 0x74a731b62b0290ae;
          }
        }
      }
      else {
        lVar3 = -0x1c5b2ab53e093884;
        if (((lVar4 != 0x731bafea6ffaf9d2) &&
            (lVar3 = 0x70d6ef9c84f56d26, lVar4 != 0x74a731b62b0290ae)) &&
           (lVar3 = lVar4, lVar4 == 0x7a1d336c9fe8990f)) {
          *param_1 = local_84;
          lVar3 = -0x1c5b2ab53e093884;
        }
      }
      goto LAB_00173a0c;
    }
    if (0x51c7910840e8eaed < lVar4) {
      if (lVar4 == 0x51c7910840e8eaee) {
        local_88 = 0x18;
        goto LAB_0017440c;
      }
      if (lVar4 == 0x5be851ffc25e1a72) {
        DAT_0021d990 = DAT_0021d990 ^ 0x2c;
        DAT_0021d991 = DAT_0021d991 ^ 0x2c;
        DAT_0021d992 = DAT_0021d992 ^ 0x2c;
        DAT_0021d994 = DAT_0021d994 ^ 0x2c;
        DAT_0021d995 = DAT_0021d995 ^ 0x2c;
        DAT_0021d996 = DAT_0021d996 ^ 0x2c;
        DAT_0021d993 = DAT_0021d993 ^ 0x2c;
        DAT_0021f9ce = '\x01';
        lVar3 = 0x10778cda4c5f8a73;
      }
      goto LAB_00173a0c;
    }
    if (lVar4 != 0x3e722c767da45809) {
      if (lVar4 == 0x40a7395875650256) {
        local_84 = 0x11;
        goto LAB_0017422c;
      }
      goto LAB_00173a0c;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
LAB_001739f8:
  lVar3 = -0x3b6e0fe4a7713ec6;
  goto LAB_00173a0c;
}

