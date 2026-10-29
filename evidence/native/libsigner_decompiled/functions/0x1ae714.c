// rea decompile_all
// name: FUN_001ae714
// address: 0x1ae714
// body: available
// range: 0x1ae714-0x1aece3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001ae714(ulong param_1,undefined8 *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x21;
  ulong unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 *local_b0;
  ulong local_a8;
  size_t local_a0;
  long lStack_98;
  undefined8 *local_90;
  ulong local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  long local_68;
  
  local_80 = 0;
  local_88 = 0;
  lVar4 = 0x24e5eef263e81b7c;
  local_90 = param_2;
  local_78 = param_3;
LAB_001ae7b4:
  while (lVar5 = lVar4, uVar3 = param_1, param_1 = uVar3, lVar4 = lVar5, -0x12bc87502b2af86f < lVar5
        ) {
    if (lVar5 < 0x1b4ac2f1f22e2589) {
      if (lVar5 < 0xbccd62a0fc32d) {
        if (lVar5 == -0x12bc87502b2af86e) {
          local_b0 = (undefined8 *)(lStack_98 + uVar3 * 0x30);
          iVar2 = strncmp((char *)*local_b0,unaff_x24,local_a0);
          lVar4 = -0x2701f7b957916a96;
          local_c8 = uVar3;
          if (iVar2 != 0) {
            lVar4 = -0x65a31e6327338728;
          }
        }
        else if (lVar5 == -0x17196cb747ef8c5) {
          lStack_98 = unaff_x26[3];
          local_a0 = (long)unaff_x23 - (long)unaff_x24;
          local_b8 = local_80;
          param_1 = 0;
          lVar4 = -0x12bc87502b2af86e;
        }
      }
      else if (lVar5 == 0xbccd62a0fc32d) {
        local_88 = (ulong)*(uint *)(unaff_x26 + 4);
        bVar1 = *(uint *)(unaff_x26 + 4) == 0;
        lVar5 = 0x11389729d7590b94;
        lVar4 = -0x144ad6ddee249a62;
LAB_001ae7ac:
        if (!bVar1) {
          lVar4 = lVar5;
        }
      }
      else {
        param_1 = unaff_x27;
        lVar4 = -0x12bc87502b2af86e;
        if ((lVar5 != 0xf111d00f6a8edda) &&
           (param_1 = uVar3, lVar4 = lVar5, lVar5 == 0x11389729d7590b94)) {
          local_68 = unaff_x26[5];
          local_c0 = local_88;
          unaff_x22 = 0;
          lVar4 = -0x5587caf0ffc9f6c4;
        }
      }
    }
    else if (lVar5 < 0x3cd27908c3b8e652) {
      lVar4 = -0x400e37f3caa97ab4;
      if (lVar5 != 0x24e5eef263e81b7c) {
        if (lVar5 == 0x361985fb5d496b76) {
          local_a8 = local_70 + 1;
          bVar1 = local_a8 == local_c0;
          lVar5 = 0x4b73c4e968047988;
          lVar4 = -0x429b7b8ddead7976;
          goto LAB_001ae7ac;
        }
        lVar4 = lVar5;
        if (lVar5 == 0x1b4ac2f1f22e2589) {
          return unaff_x21;
        }
      }
    }
    else {
      if (lVar5 == 0x3cd27908c3b8e652) {
        local_80 = (ulong)*(uint *)(unaff_x26 + 2);
        bVar1 = *(uint *)(unaff_x26 + 2) == 0;
        lVar5 = -0x17196cb747ef8c5;
        lVar4 = -0x361936ecac8b8986;
        goto LAB_001ae7ac;
      }
      if (lVar5 == 0x4b73c4e968047988) {
        lVar4 = -0x5587caf0ffc9f6c4;
        unaff_x22 = local_a8;
      }
    }
  }
  if (lVar5 < -0x429b7b8ddead7976) {
    if (-0x5f20efb5b92e6f75 < lVar5) {
      if (lVar5 == -0x5f20efb5b92e6f74) goto LAB_001aebc4;
      if (lVar5 == -0x5587caf0ffc9f6c4) {
        iVar2 = strcmp(*(char **)(local_68 + unaff_x22 * 0x30),unaff_x24);
        lVar4 = -0x6e4a13fb3d707c87;
        local_70 = unaff_x22;
        if (iVar2 != 0) {
          lVar4 = 0x361985fb5d496b76;
        }
      }
      goto LAB_001ae7b4;
    }
    if (lVar5 != -0x6e4a13fb3d707c87) {
      if (lVar5 == -0x65a31e6327338728) {
        unaff_x27 = local_c8 + 1;
        lVar4 = -0x5f20efb5b92e6f74;
        if (unaff_x27 != local_b8) {
          lVar4 = 0xf111d00f6a8edda;
        }
      }
      goto LAB_001ae7b4;
    }
    unaff_x21 = *(undefined8 *)(local_68 + (local_70 & 0xffffffff) * 0x30 + 8);
  }
  else {
    if (lVar5 < -0x361936ecac8b8986) {
      if (lVar5 != -0x429b7b8ddead7976) {
        if (lVar5 == -0x400e37f3caa97ab4) {
          unaff_x23 = strchr(local_78,0x2e);
          lVar4 = 0xbccd62a0fc32d;
          unaff_x24 = local_78;
          unaff_x26 = local_90;
          if (unaff_x23 != (char *)0x0) {
            lVar4 = 0x3cd27908c3b8e652;
          }
        }
        goto LAB_001ae7b4;
      }
    }
    else if (lVar5 != -0x361936ecac8b8986) {
      if (lVar5 == -0x2701f7b957916a96) {
        local_78 = unaff_x23 + 1;
        local_90 = local_b0;
        lVar4 = -0x400e37f3caa97ab4;
        goto LAB_001ae7b4;
      }
      if (lVar5 != -0x144ad6ddee249a62) goto LAB_001ae7b4;
    }
LAB_001aebc4:
    unaff_x21 = 0;
  }
  lVar4 = 0x1b4ac2f1f22e2589;
  goto LAB_001ae7b4;
}

