
undefined8 FUN_000099ec(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  byte *pbVar18;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  byte *pbVar19;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(int *)param_3 = (int)param_1;
  uVar24 = param_1 & 0xffffffff;
  lVar10 = thunk_FUN_000027d0(param_1,0,2);
  if (lVar10 < 0x16) {
    lVar11 = 0;
    *(undefined4 *)PTR_DAT_00029f18 = 0xa1;
    goto LAB_00009a94;
  }
  lVar23 = 0;
  if (0x10014 < lVar10) {
    lVar23 = lVar10 + -0x10015;
    lVar10 = 0x10015;
  }
  lVar11 = thunk_FUN_000027d0(lVar10);
  lVar12 = thunk_FUN_000027d0(uVar24,lVar23,0);
  if (lVar12 == lVar23) {
    do {
      lVar23 = thunk_FUN_000027d0(uVar24,lVar11,lVar10);
      puVar7 = PTR_DAT_00029f18;
      if (lVar23 != -1) {
        if (lVar10 == lVar23) {
          iVar8 = (int)lVar10 + -0x16;
          pcVar20 = (char *)(lVar11 + iVar8);
          goto LAB_00009b10;
        }
        break;
      }
      piVar13 = (int *)thunk_FUN_000027d0();
    } while (*piVar13 == 4);
    uVar16 = 0xbd;
  }
  else {
    uVar16 = 0xb8;
  }
  goto LAB_00009a78;
LAB_00009e70:
  uVar16 = 0x120;
  goto LAB_00009df8;
  while( true ) {
    uVar9 = uVar9 + 1;
    if (uVar2 == uVar9) {
      *(undefined4 *)PTR_DAT_00029f18 = 0x13e;
      return 0;
    }
    if (((uint)pbVar21[2] << 0x10 | (uint)pbVar21[1] << 8 | (uint)*pbVar21 |
        (uint)pbVar21[3] << 0x18) != 0x2014b50) goto LAB_00009e70;
    pbVar22 = pbVar21 + 0x2e;
    if (pbVar25 + uVar24 < pbVar22) break;
LAB_00009ce0:
    if (lVar10 <= (long)(ulong)((uint)pbVar21[0x2c] << 0x10 | (uint)pbVar21[0x2b] << 8 |
                                (uint)pbVar21[0x2a] | (uint)pbVar21[0x2d] << 0x18)) {
      uVar16 = 0x12a;
      goto LAB_00009df8;
    }
    uVar4 = *(ushort *)(pbVar21 + 0x1c);
    uVar3 = (uint)uVar4;
    uVar5 = *(ushort *)(pbVar21 + 0x20);
    uVar6 = *(ushort *)(pbVar21 + 0x1e);
    if (uVar3 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      pbVar19 = pbVar22;
      do {
        pbVar18 = pbVar19 + 1;
        uVar15 = (uint)*pbVar19 + uVar15 * 0x1f;
        pbVar19 = pbVar18;
      } while (pbVar18 != pbVar22 + (ulong)(uVar3 - 1) + 1);
    }
    while( true ) {
      uVar15 = uVar15 & *(int *)((long)param_3 + 0x34) - 1U;
      uVar17 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar15 << 4;
      puVar1 = (ulong *)(param_3[7] + uVar17);
      if (*(long *)(param_3[7] + uVar17) == 0) break;
      uVar15 = uVar15 + 1;
    }
    *puVar1 = (ulong)pbVar22;
    *(ushort *)(puVar1 + 1) = uVar4;
    pbVar21 = pbVar21 + (uVar3 + uVar6 + 0x2e + (uint)uVar5);
    if (uVar24 < (ulong)((long)pbVar21 - (long)pbVar25)) {
      uVar16 = 0x13a;
      goto LAB_00009df8;
    }
  }
LAB_00009df0:
  uVar16 = 0x124;
LAB_00009df8:
  puVar7 = PTR_DAT_00029fa8;
  *(undefined4 *)PTR_DAT_00029f18 = uVar16;
  if (*(int *)puVar7 == 0) {
    *(undefined4 *)puVar7 = uVar16;
  }
  *(undefined4 *)PTR_DAT_00029f18 = 0x175;
  return 0;
  while( true ) {
    iVar8 = iVar8 + -1;
    pcVar20 = pcVar20 + -1;
    if (iVar8 == -1) break;
LAB_00009b10:
    if ((*pcVar20 == 'P') &&
       (((uint)(byte)pcVar20[2] << 0x10 | (uint)(byte)pcVar20[1] << 8 | 0x50 |
        (uint)(byte)pcVar20[3] << 0x18) == 0x6054b50)) {
      uVar17 = (ulong)((uint)(byte)pcVar20[0xe] << 0x10 | (uint)(byte)pcVar20[0xd] << 8 |
                       (uint)(byte)pcVar20[0xc] | (uint)(byte)pcVar20[0xf] << 0x18);
      uVar26 = (ulong)((uint)(byte)pcVar20[0x12] << 0x10 | (uint)(byte)pcVar20[0x11] << 8 |
                       (uint)(byte)pcVar20[0x10] | (uint)(byte)pcVar20[0x13] << 0x18);
      uVar4 = *(ushort *)(pcVar20 + 8);
      *(undefined4 *)PTR_DAT_00029f18 = 0xca;
      if (lVar12 + iVar8 < (long)(uVar26 + uVar17)) {
        uVar16 = 0xe2;
      }
      else {
        uVar2 = (uint)uVar4;
        if (uVar2 == 0) {
          uVar16 = 0xe6;
        }
        else {
          *(undefined4 *)puVar7 = 0xeb;
          iVar8 = FUN_0000a8a8(uVar24,uVar26,uVar17,param_3 + 2);
          if (iVar8 == 0) {
            *(uint *)(param_3 + 6) = uVar2;
            param_3[1] = uVar26;
            thunk_FUN_000027d0(lVar11);
            pbVar25 = (byte *)param_3[2];
            uVar24 = param_3[3];
            iVar8 = FUN_0000a888((uVar2 << 2) / 3 + 1);
            *(int *)((long)param_3 + 0x34) = iVar8;
            uVar14 = thunk_FUN_000027d0((long)iVar8,0x10);
            param_3[7] = uVar14;
            if (((uint)pbVar25[2] << 0x10 | (uint)pbVar25[1] << 8 | (uint)*pbVar25 |
                (uint)pbVar25[3] << 0x18) != 0x2014b50) goto LAB_00009e70;
            pbVar22 = pbVar25 + 0x2e;
            if (pbVar25 + uVar24 < pbVar22) goto LAB_00009df0;
            lVar10 = param_3[1];
            uVar9 = 0;
            pbVar21 = pbVar25;
            goto LAB_00009ce0;
          }
          uVar16 = 0xf4;
        }
      }
      *(undefined4 *)puVar7 = uVar16;
      if (*(int *)PTR_DAT_00029fa8 == 0) {
        *(undefined4 *)PTR_DAT_00029fa8 = uVar16;
      }
      goto LAB_00009a94;
    }
  }
  uVar16 = 0xcf;
LAB_00009a78:
  puVar7 = PTR_DAT_00029fa8;
  iVar8 = *(int *)PTR_DAT_00029fa8;
  *(undefined4 *)PTR_DAT_00029f18 = uVar16;
  if (iVar8 == 0) {
    *(undefined4 *)puVar7 = uVar16;
  }
LAB_00009a94:
  thunk_FUN_000027d0(lVar11);
  FUN_00009990(param_3);
  return 0xffffffff;
}
