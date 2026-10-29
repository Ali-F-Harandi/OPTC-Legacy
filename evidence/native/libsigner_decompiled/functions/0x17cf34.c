// rea decompile_all
// name: FUN_0017cf34
// address: 0x17cf34
// body: available
// range: 0x17cf34-0x17d96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017cf34(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_78;
  undefined4 local_68;
  undefined4 local_64;
  
  lVar1 = 0x11a8e2a4f0711395;
  if (param_3 != 0) {
    lVar1 = 0x7a5fcb47e1097b92;
  }
  lVar4 = 0x1e4a16417361f8ae;
LAB_0017d040:
  while (lVar3 = lVar4, lVar4 = lVar3, 0x11a8e2a4f0711394 < lVar3) {
    if (lVar3 < 0x43fed8c6fe657b80) {
      if (lVar3 < 0x2131f7f6f40385e5) {
        if (lVar3 < 0x1e3ee457b2054f17) {
          if (lVar3 == 0x11a8e2a4f0711395) {
            *param_1 = 3;
            lVar4 = 0x43fed8c6fe657b80;
          }
          else if (lVar3 == 0x1abeea6c781d215c) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar4 = 0x43fed8c6fe657b80;
          }
        }
        else if (lVar3 == 0x1e3ee457b2054f17) {
          local_68 = 0x11;
LAB_0017d8f4:
          lVar4 = -0x7f65f90fe7a5b994;
        }
        else if (lVar3 == 0x1e4a16417361f8ae) {
          lVar4 = lVar1;
        }
      }
      else if (lVar3 < 0x3700d863e1ecac53) {
        lVar4 = 0x1abeea6c781d215c;
        if ((lVar3 != 0x2131f7f6f40385e5) && (lVar4 = lVar3, lVar3 == 0x352e25158bc7d11a)) {
          local_64 = 0x11;
LAB_0017d358:
          lVar4 = 0x110e2f5113b4f2ea;
        }
      }
      else {
        lVar4 = 0x1abeea6c781d215c;
        if ((lVar3 != 0x3700d863e1ecac53) && (lVar4 = lVar3, lVar3 == 0x3ed36176fa9f74fd)) {
          lVar4 = 0x5709b4f82956ae67;
          if (DAT_0021f9e3 == '\0') {
            lVar4 = -0x62d31b2fb582d167;
          }
        }
      }
    }
    else if (lVar3 < 0x62161c6952797242) {
      if (lVar3 < 0x5709b4f82956ae67) {
        if (lVar3 == 0x48e5c1c93867eef1) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f868);
          lVar4 = 0x3ed36176fa9f74fd;
          if (iVar2 != 0) {
            lVar4 = -0x4ef4c2cb6fde9765;
          }
        }
        else if (lVar3 == 0x43fed8c6fe657b80) {
          return;
        }
      }
      else {
        lVar4 = -0x17db6bb4c37139ad;
        if ((lVar3 != 0x5709b4f82956ae67) && (lVar4 = lVar3, lVar3 == 0x5efe6882d5f81fab)) {
          DAT_0021f864 = 0;
          local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021dc10,&DAT_0021dc30);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x12c8c9625a12e62b;
          if (lVar3 != 0) {
            lVar4 = 0x352e25158bc7d11a;
          }
        }
      }
    }
    else if (lVar3 < 0x6e38425402b87c60) {
      lVar4 = 0x43fed8c6fe657b80;
      if ((lVar3 != 0x62161c6952797242) && (lVar4 = lVar3, lVar3 == 0x6c77c8f9e3444c31)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f864);
        lVar4 = 0xa48f18577c6a5d7;
        if (iVar2 != 0) {
          lVar4 = -0x6d1ad2ec5fb1fa4b;
        }
      }
    }
    else {
      lVar4 = 0x5efe6882d5f81fab;
      if ((lVar3 != 0x6e38425402b87c60) && (lVar4 = lVar3, lVar3 == 0x7a5fcb47e1097b92)) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x3c224f889a7890e6;
        if (lVar3 != 0) {
          lVar4 = -0x5bcc0fb99f955b02;
        }
      }
    }
  }
  if (lVar3 < -0x34f067e1117c2e19) {
    if (lVar3 < -0x62d31b2fb582d167) {
      if (lVar3 == -0x7f65f90fe7a5b994) {
        *param_1 = local_68;
        lVar4 = 0x1abeea6c781d215c;
      }
      else {
        lVar4 = 0x6c77c8f9e3444c31;
        if ((lVar3 != -0x6d1ad2ec5fb1fa4b) && (lVar4 = lVar3, lVar3 == -0x6d1830078610e97c)) {
          DAT_0021dc20 = DAT_0021dc20 ^ 0xb7;
          DAT_0021dc21 = DAT_0021dc21 ^ 0xb7;
          DAT_0021dc22 = DAT_0021dc22 ^ 0xb7;
          DAT_0021dc23 = DAT_0021dc23 ^ 0xb7;
          DAT_0021dc24 = DAT_0021dc24 ^ 0xb7;
          _DAT_0021dc10 = _DAT_0021dc10 ^ 0xb7b7b7b7b7b7b7b7;
          uRam000000000021dc18 = uRam000000000021dc18 ^ 0xb7b7b7b7b7b7b7b7;
          DAT_0021f9e2 = '\x01';
          lVar4 = 0x5efe6882d5f81fab;
        }
      }
      goto LAB_0017d040;
    }
    if (-0x4ef4c2cb6fde9766 < lVar3) {
      lVar4 = 0x48e5c1c93867eef1;
      if ((lVar3 != -0x4ef4c2cb6fde9765) && (lVar4 = lVar3, lVar3 == -0x3c224f889a7890e6)) {
        lVar4 = -0xe1aab80185e29c7;
        if (unaff_x27 != 0) {
          lVar4 = -0x25face9b779a220d;
        }
      }
      goto LAB_0017d040;
    }
    if (lVar3 == -0x62d31b2fb582d167) {
      _DAT_0021dc30 = _DAT_0021dc30 ^ 0xd3d3d3d3d3d3d3d3;
      uRam000000000021dc38 = uRam000000000021dc38 ^ 0xd3d3d3d3d3d3d3d3;
      DAT_0021dc68 = DAT_0021dc68 ^ 0xd3;
      DAT_0021dc69 = DAT_0021dc69 ^ 0xd3;
      DAT_0021dc6a = DAT_0021dc6a ^ 0xd3;
      _DAT_0021dc40 = _DAT_0021dc40 ^ 0xd3d3d3d3d3d3d3d3;
      uRam000000000021dc48 = uRam000000000021dc48 ^ 0xd3d3d3d3d3d3d3d3;
      _DAT_0021dc50 = _DAT_0021dc50 ^ 0xd3d3d3d3d3d3d3d3;
      uRam000000000021dc58 = uRam000000000021dc58 ^ 0xd3d3d3d3d3d3d3d3;
      DAT_0021dc60 = DAT_0021dc60 ^ 0xd3d3d3d3d3d3d3d3;
      DAT_0021f9e3 = '\x01';
      lVar4 = -0x17db6bb4c37139ad;
      goto LAB_0017d040;
    }
    if (lVar3 != -0x5bcc0fb99f955b02) goto LAB_0017d040;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    lVar4 = 0x62161c6952797242;
    if (unaff_x27 != 0) {
      lVar4 = 0x2131f7f6f40385e5;
    }
  }
  else {
    if (lVar3 < -0xe1aab80185e29c7) {
      if (lVar3 < -0x17db6bb4c37139ad) {
        if (lVar3 == -0x34f067e1117c2e19) {
          (**(code **)(*param_2 + 0x110))(param_2,param_3,local_78,param_4 & 1);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x3700d863e1ecac53;
          if (lVar3 != 0) {
            lVar4 = -0x89aa9ef4ac76973;
          }
        }
        else if (lVar3 == -0x25face9b779a220d) {
          lVar4 = 0x48e5c1c93867eef1;
        }
      }
      else if (lVar3 == -0x17db6bb4c37139ad) {
        DAT_0021f868 = 0;
        lVar4 = 0x6c77c8f9e3444c31;
      }
      else if (lVar3 == -0x12c8c9625a12e62b) {
        lVar4 = 0x1e3ee457b2054f17;
        if (local_78 != 0) {
          lVar4 = -0x34f067e1117c2e19;
        }
      }
      goto LAB_0017d040;
    }
    if (0xa48f18577c6a5d6 < lVar3) {
      if (lVar3 == 0xa48f18577c6a5d7) {
        lVar4 = 0x6e38425402b87c60;
        if (DAT_0021f9e2 == '\0') {
          lVar4 = -0x6d1830078610e97c;
        }
      }
      else if (lVar3 == 0x110e2f5113b4f2ea) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_68 = local_64;
        goto LAB_0017d8f4;
      }
      goto LAB_0017d040;
    }
    if (lVar3 != -0xe1aab80185e29c7) {
      if (lVar3 == -0x89aa9ef4ac76973) {
        local_64 = 0x1b;
        goto LAB_0017d358;
      }
      goto LAB_0017d040;
    }
    lVar4 = 0x43fed8c6fe657b80;
  }
  *param_1 = 0x11;
  goto LAB_0017d040;
}

