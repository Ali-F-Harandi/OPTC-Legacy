// rea decompile_all
// name: FUN_0014c574
// address: 0x14c574
// body: available
// range: 0x14c574-0x14d0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0014c574(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x11;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x20;
  ulong unaff_x22;
  ulong unaff_x24;
  ulong uVar15;
  ulong local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  byte local_9c;
  byte local_98;
  byte local_94;
  ulong local_90;
  long *local_88;
  byte local_7c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar1 = 0x6299a0b30c125920;
  if (param_3 != 0) {
    uVar1 = 0x24982c6b72c4e2d3;
  }
  uVar2 = 0xa73aff65b235b683;
  if (param_2 == 0 || param_1 == 0) {
    uVar2 = 0x150bbd31d4da96ad;
  }
  uVar4 = param_1;
  uVar7 = param_2;
  uVar10 = uVar2;
  uVar11 = 0x283b7cfb02686624;
LAB_0014c73c:
  while( true ) {
    uVar13 = in_x11;
    uVar12 = uVar11;
    uVar8 = uVar10;
    uVar9 = uVar4;
    uVar15 = uVar8 & 0xffffffff;
    uVar14 = uVar7 & 0xffffffff;
    uVar4 = uVar9;
    uVar7 = uVar14;
    uVar10 = uVar15;
    uVar11 = uVar12;
    in_x11 = uVar13;
    if ((long)uVar12 < 0xa5d3e0e8c03d2c2) break;
    if ((long)uVar12 < 0x35c10a14219311b5) {
      if ((long)uVar12 < 0x1e0c358806b89e99) {
        if (uVar12 == 0xa5d3e0e8c03d2c2) {
          local_78 = 0;
          local_c0 = (long *)(param_2 + local_90 * 0x10);
          local_88 = local_c0 + 1;
          local_7c = 0;
LAB_0014cf38:
          uVar11 = 0xf2b5812bf795f776;
        }
        else {
          if (uVar12 == 0x133b568dda2a6eaf) {
            iVar6 = FUN_001e17a8(local_c8,local_d8);
            bVar5 = iVar6 == 0;
            uVar9 = 0xf3c2bf45cbac3de4;
            uVar11 = 0x613cf4e14e6f8fab;
            goto LAB_0014d0c8;
          }
          if (uVar12 == 0x150bbd31d4da96ad) {
LAB_0014c71c:
            uVar10 = 0;
            goto LAB_0014c728;
          }
        }
      }
      else if ((long)uVar12 < 0x283b7cfb02686624) {
        if (uVar12 == 0x1e0c358806b89e99) {
          unaff_x20 = *(ulong *)(param_1 + 0x870);
          local_e0 = local_70 + 1;
          uVar11 = 0x8c8ebe74cdb7ef7;
          local_9c = local_98;
          if (unaff_x20 <= local_e0) {
            uVar11 = 0x351d94fc1a3af0fc;
          }
        }
        else if (uVar12 == 0x24982c6b72c4e2d3) {
          uVar4 = 0;
          uVar7 = 0;
          uVar11 = 0xde79a79aa975af62;
          in_x11 = 1;
        }
      }
      else {
        uVar11 = uVar2;
        if ((uVar12 != 0x283b7cfb02686624) && (uVar11 = uVar12, uVar12 == 0x351d94fc1a3af0fc)) {
          uVar11 = 0x9d2a23f68753e1a4;
          if ((local_9c & 1) == 0) {
            uVar11 = 0x9380c726aaecca68;
          }
        }
      }
    }
    else if ((long)uVar12 < 0x457ed11a0256aea8) {
      if ((long)uVar12 < 0x3cb3611338aa819b) {
        if (uVar12 == 0x35c10a14219311b5) {
          uVar11 = 0x8cd54440593148f5;
          if (*local_88 != 0) {
            uVar11 = 0xe04204c600d87751;
          }
        }
        else if (uVar12 == 0x36a409d063814c3d) goto LAB_0014cc18;
      }
      else {
        uVar11 = uVar1;
        if ((uVar12 != 0x3df4c71738c04530) && (uVar11 = uVar12, uVar12 == 0x3cb3611338aa819b)) {
          return (uint)uVar8 & 1;
        }
      }
    }
    else if ((long)uVar12 < 0x613cf4e14e6f8fab) {
      uVar10 = unaff_x24 & 0xffffffff;
      uVar11 = 0x3cb3611338aa819b;
      if ((uVar12 != 0x457ed11a0256aea8) &&
         (uVar10 = uVar15, uVar11 = uVar12, uVar12 == 0x55fdd7394283d6ca)) {
        local_d0 = (long *)(param_1 + local_70 * 0x10 + 0x78);
        bVar5 = *local_d0 == 0;
        uVar11 = 0x36a409d063814c3d;
        uVar9 = 0x133b568dda2a6eaf;
        goto LAB_0014d0c8;
      }
    }
    else {
      if (uVar12 == 0x613cf4e14e6f8fab) {
        iVar6 = FUN_001e17a8(*local_88,*local_d0);
        bVar3 = iVar6 == 0 | local_94;
        goto LAB_0014d07c;
      }
      if (uVar12 == 0x6299a0b30c125920) {
        uVar10 = 1;
        goto LAB_0014c728;
      }
    }
  }
  if ((long)uVar12 < -0x1fbdfb39ff2788af) {
    if ((long)uVar12 < -0x64fa39849e50d273) {
      uVar4 = local_68;
      uVar7 = unaff_x24 & 0xffffffff;
      uVar11 = 0xde79a79aa975af62;
      in_x11 = unaff_x20;
      if (uVar12 != 0x868b168ace25ee9c) {
        uVar4 = uVar9;
        uVar7 = uVar14;
        uVar10 = unaff_x22 & 0xffffffff;
        uVar11 = 0x3cb3611338aa819b;
        in_x11 = uVar13;
        if ((uVar12 != 0x8cd54440593148f5) &&
           (uVar10 = uVar15, uVar11 = uVar12, uVar12 == 0x9380c726aaecca68)) {
LAB_0014cc18:
          uVar10 = unaff_x22 & 0xffffffff;
LAB_0014c728:
          uVar4 = uVar9;
          uVar7 = uVar14;
          uVar11 = 0x3cb3611338aa819b;
          in_x11 = uVar13;
        }
      }
      goto LAB_0014c73c;
    }
    if ((long)uVar12 < -0x58c5009a4dca497d) {
      uVar10 = unaff_x22 & 0xffffffff;
      uVar11 = 0x3cb3611338aa819b;
      if ((uVar12 != 0x9b05c67b61af2d8d) &&
         (uVar10 = uVar15, uVar11 = uVar12, uVar12 == 0x9d2a23f68753e1a4)) {
        local_68 = local_90 + 1;
        unaff_x24 = (ulong)(param_3 <= local_68);
        uVar11 = 0x457ed11a0256aea8;
        if (local_68 != param_3) {
          uVar11 = 0x868b168ace25ee9c;
        }
      }
      goto LAB_0014c73c;
    }
    if (uVar12 != 0xa73aff65b235b683) {
      if ((uVar12 == 0xde79a79aa975af62) &&
         (uVar11 = 0xe235ffcad483f761, unaff_x22 = uVar14, local_90 = uVar9, uVar13 != 0)) {
        uVar11 = 0xa5d3e0e8c03d2c2;
      }
      goto LAB_0014c73c;
    }
    bVar5 = *(ulong *)(param_1 + 0x870) == param_3;
    uVar9 = 0xfd9936ba7b3dda43;
    uVar11 = 0x3df4c71738c04530;
  }
  else {
    if (-0xd4a7ed4086a088b < (long)uVar12) {
      if ((long)uVar12 < -0x266c94584c225bd) {
        if (uVar12 == 0xf2b5812bf795f776) {
          local_c8 = *local_c0;
          local_70 = local_78;
          uVar11 = 0x9b05c67b61af2d8d;
          local_94 = local_7c;
          if (local_c8 != 0) {
            uVar11 = 0x35c10a14219311b5;
          }
        }
        else {
          bVar3 = local_94;
          if (uVar12 == 0xf3c2bf45cbac3de4) {
LAB_0014d07c:
            uVar11 = 0x1e0c358806b89e99;
            local_98 = bVar3;
          }
        }
      }
      else {
        if (uVar12 == 0xfd9936ba7b3dda43) goto LAB_0014c71c;
        if (uVar12 == 0x8c8ebe74cdb7ef7) {
          local_78 = local_e0;
          local_7c = local_9c;
          goto LAB_0014cf38;
        }
      }
      goto LAB_0014c73c;
    }
    if (uVar12 != 0xe04204c600d87751) {
      uVar10 = unaff_x22 & 0xffffffff;
      uVar11 = 0x3cb3611338aa819b;
      if ((uVar12 != 0xe160d9d491524387) &&
         (uVar10 = uVar15, uVar11 = uVar12, uVar12 == 0xe235ffcad483f761)) goto LAB_0014cc18;
      goto LAB_0014c73c;
    }
    uVar11 = 0xe160d9d491524387;
    local_d8 = *(long *)(param_1 + local_70 * 0x10 + 0x70);
    bVar5 = local_d8 == 0;
    uVar9 = 0x55fdd7394283d6ca;
  }
LAB_0014d0c8:
  uVar10 = uVar15;
  if (!bVar5) {
    uVar11 = uVar9;
  }
  goto LAB_0014c73c;
}

