// rea decompile_all
// name: FUN_0019fbc4
// address: 0x19fbc4
// body: available
// range: 0x19fbc4-0x1a0747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019fbc4(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x33c6a0f08f678741;
  if (param_3 != 0) {
    lVar1 = -0x4bf9adfbc759c28e;
  }
  lVar3 = -0x1889af9b882abb02;
LAB_0019fcc0:
  while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x8d36357c62c9ca8) {
    if (lVar4 < -0x2a79d23c22416480) {
      if (lVar4 < -0x3d689f03c5cdf509) {
        if (lVar4 < -0x4bf9adfbc759c28e) {
          lVar3 = -0x5b3b9dd256b6370;
          if ((lVar4 != -0x69b46b64e22f9012) && (lVar3 = lVar4, lVar4 == -0x4c664f44515cfd54)) {
            local_74 = 0x11;
            goto LAB_0019fcac;
          }
        }
        else if (lVar4 == -0x4bf9adfbc759c28e) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x378ef1766ad2fb0a;
          if (lVar4 != 0) {
            lVar3 = 0x5950e7cdbab77a9;
          }
        }
        else if (lVar4 == -0x4939b47b8f0a1a0f) {
          lVar3 = -0x35e510dbdc5247be;
          if (DAT_0021fa2a == '\0') {
            lVar3 = 0x6ab25889ff927a65;
          }
        }
      }
      else if (lVar4 < -0x35e510dbdc5247be) {
        lVar3 = -0x1a8ec0a85bfb8d5e;
        if ((lVar4 != -0x3d689f03c5cdf509) && (lVar3 = lVar4, lVar4 == -0x378ef1766ad2fb0a)) {
          lVar3 = 0x7cf072c09eec72c5;
          if (unaff_x27 != 0) {
            lVar3 = 0x4f3ca44d66c9633e;
          }
        }
      }
      else {
        lVar3 = -0x21aef81a67c656bf;
        if (lVar4 != -0x35e510dbdc5247be) {
          if (lVar4 == -0x33c6a0f08f678741) {
            local_84 = 3;
            goto LAB_001a0470;
          }
          lVar3 = lVar4;
          if (lVar4 == -0x306fd8e1bf4fc6fc) {
            DAT_0021e550 = DAT_0021e550 ^ 0xf;
            DAT_0021e551 = DAT_0021e551 ^ 0xf;
            _DAT_0021e530 = _DAT_0021e530 ^ 0xf0f0f0f0f0f0f0f;
            uRam000000000021e538 = uRam000000000021e538 ^ 0xf0f0f0f0f0f0f0f;
            _DAT_0021e540 = _DAT_0021e540 ^ 0xf0f0f0f0f0f0f0f;
            uRam000000000021e548 = uRam000000000021e548 ^ 0xf0f0f0f0f0f0f0f;
            DAT_0021fa29 = '\x01';
            lVar3 = 0x74931dcc8b2a1b4b;
          }
        }
      }
    }
    else if (lVar4 < -0x1889af9b882abb02) {
      if (lVar4 < -0x21aef81a67c656bf) {
        if (lVar4 == -0x2a79d23c22416480) {
          lVar3 = 0xb0a8a1be3b521a4;
          if (*param_4 != 0) {
            lVar3 = -0x3d689f03c5cdf509;
          }
        }
        else if (lVar4 == -0x2635b0d197007feb) {
          *param_1 = local_84;
          lVar3 = 0x30d407c2a19a0124;
        }
      }
      else if (lVar4 == -0x21aef81a67c656bf) {
        DAT_0021f98c = 0;
        lVar3 = -0x6f84b85f4bb653a;
      }
      else {
        lVar3 = 0x74931dcc8b2a1b4b;
        if ((lVar4 != -0x20233af7ce4d4a99) && (lVar3 = lVar4, lVar4 == -0x1a8ec0a85bfb8d5e)) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar3 = -0x69b46b64e22f9012;
          if (*param_1 != 0) {
            lVar3 = 0x25f3e0ddbf1c00ed;
          }
        }
      }
    }
    else if (lVar4 < -0x6f84b85f4bb653a) {
      lVar3 = lVar1;
      if ((lVar4 != -0x1889af9b882abb02) && (lVar3 = lVar4, lVar4 == -0x1071951839ebc499)) {
        lVar3 = -0x4c664f44515cfd54;
        if (local_90 != 0) {
          lVar3 = 0x1d5d3c098e2cf248;
        }
      }
    }
    else if (lVar4 == -0x6f84b85f4bb653a) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f988);
      lVar3 = 0x3432068a9d054c97;
      if (iVar2 != 0) {
        lVar3 = 0x732b21b946f0412d;
      }
    }
    else if (lVar4 == 0x5950e7cdbab77a9) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar3 = 0x8d36357c62c9ca8;
      if (unaff_x27 != 0) {
        lVar3 = 0x4651b16cb9472178;
      }
      *param_1 = 0x11;
    }
    else if (lVar4 == -0x5b3b9dd256b6370) {
      return;
    }
  }
  if (lVar4 < 0x4b230be80ad31ded) {
    if (0x1d5d3c098e2cf247 < lVar4) {
      if (lVar4 < 0x30d407c2a19a0124) {
        if (lVar4 == 0x1d5d3c098e2cf248) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x2a79d23c22416480;
          if (lVar4 != 0) {
            lVar3 = 0xe4e7e5123e7bc1f;
          }
        }
        else if (lVar4 == 0x25f3e0ddbf1c00ed) {
          lVar3 = 0x30d407c2a19a0124;
        }
      }
      else if (lVar4 == 0x30d407c2a19a0124) {
        *param_4 = 0;
        lVar3 = -0x5b3b9dd256b6370;
      }
      else if (lVar4 == 0x3432068a9d054c97) {
        lVar3 = -0x20233af7ce4d4a99;
        if (DAT_0021fa29 == '\0') {
          lVar3 = -0x306fd8e1bf4fc6fc;
        }
      }
      else if (lVar4 == 0x4651b16cb9472178) {
        lVar3 = -0x1a8ec0a85bfb8d5e;
      }
      goto LAB_0019fcc0;
    }
    if (0xe4e7e5123e7bc1e < lVar4) {
      if (lVar4 == 0xe4e7e5123e7bc1f) {
        local_88 = 0x1b;
      }
      else {
        if (lVar4 != 0x194f4c9e271d8bc6) goto LAB_0019fcc0;
        local_88 = 0x11;
      }
      lVar3 = 0x68962bff82ad2f00;
      goto LAB_0019fcc0;
    }
    lVar3 = 0x30d407c2a19a0124;
    if ((lVar4 == 0x8d36357c62c9ca8) || (lVar3 = lVar4, lVar4 != 0xb0a8a1be3b521a4))
    goto LAB_0019fcc0;
    local_74 = 0x1b;
  }
  else {
    if (0x6ab25889ff927a64 < lVar4) {
      if (lVar4 < 0x74931dcc8b2a1b4b) {
        if (lVar4 == 0x6ab25889ff927a65) {
          DAT_0021e578 = DAT_0021e578 ^ 0xf1;
          DAT_0021e579 = DAT_0021e579 ^ 0xf1;
          DAT_0021e57a = DAT_0021e57a ^ 0xf1;
          DAT_0021e57b = DAT_0021e57b ^ 0xf1;
          _DAT_0021e560 = _DAT_0021e560 ^ 0xf1f1f1f1f1f1f1f1;
          uRam000000000021e568 = uRam000000000021e568 ^ 0xf1f1f1f1f1f1f1f1;
          DAT_0021e57c = DAT_0021e57c ^ 0xf1;
          DAT_0021e570 = DAT_0021e570 ^ 0xf1f1f1f1f1f1f1f1;
          DAT_0021fa2a = '\x01';
          lVar3 = -0x21aef81a67c656bf;
        }
        else if (lVar4 == 0x732b21b946f0412d) {
          lVar3 = -0x6f84b85f4bb653a;
        }
      }
      else if (lVar4 == 0x74931dcc8b2a1b4b) {
        DAT_0021f988 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e560,&DAT_0021e530);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x1071951839ebc499;
        if (lVar4 != 0) {
          lVar3 = 0x194f4c9e271d8bc6;
        }
      }
      else if (lVar4 == 0x78564c773b884662) {
        *param_1 = local_74;
        lVar3 = -0x1a8ec0a85bfb8d5e;
      }
      else if (lVar4 == 0x7cf072c09eec72c5) {
        local_84 = 0x11;
LAB_001a0470:
        lVar3 = -0x2635b0d197007feb;
      }
      goto LAB_0019fcc0;
    }
    if (lVar4 < 0x645127bed22cc8dd) {
      lVar3 = 0x645127bed22cc8dd;
      if ((lVar4 != 0x4b230be80ad31ded) && (lVar3 = lVar4, lVar4 == 0x4f3ca44d66c9633e)) {
        lVar3 = 0x645127bed22cc8dd;
      }
      goto LAB_0019fcc0;
    }
    if (lVar4 == 0x645127bed22cc8dd) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f98c);
      lVar3 = -0x4939b47b8f0a1a0f;
      if (iVar2 != 0) {
        lVar3 = 0x4b230be80ad31ded;
      }
      goto LAB_0019fcc0;
    }
    if (lVar4 != 0x68962bff82ad2f00) goto LAB_0019fcc0;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
LAB_0019fcac:
  lVar3 = 0x78564c773b884662;
  goto LAB_0019fcc0;
}

