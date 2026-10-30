
void FUN_000088fc(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long local_10;
  long local_8;
  
  cVar4 = '\x01';
  local_8 = *(long *)PTR_DAT_00029e38;
  puVar9 = (uint *)FUN_00008410();
  uVar5 = *puVar9;
  if (uVar5 != 0) {
    lVar10 = FUN_0000ef9c((ulong)uVar5 << 4);
    if (lVar10 == 0) {
      uVar8 = FUN_00008df8();
      cVar4 = FUN_00012354(0,0,uVar8,0x11,0x45,1,1,uVar5,0,0);
      if (cVar4 == '\0') {
        cVar4 = '\0';
        goto LAB_00008944;
      }
    }
    DAT_0002a640 = lVar10;
    lVar11 = FUN_00008404();
    uVar5 = *puVar9;
    *(long *)(lVar11 + (ulong)DAT_0002a1b8) = lVar10;
    lVar10 = FUN_00008cdc();
    uVar12 = FUN_00011784(lVar10 * (ulong)uVar5,0x1000,1);
    lVar10 = FUN_0000ef9c();
    if (lVar10 == 0) {
      uVar8 = FUN_00008df8();
      cVar4 = FUN_00012354(0,0,uVar8,0x11,0x5d,1,2,uVar12 & 0xffffffff,0,0);
      if (cVar4 == '\0') {
        cVar4 = '\0';
        goto LAB_00008944;
      }
    }
    plVar15 = &local_10;
    uVar5 = (uint)(uVar12 >> 2);
    local_10._0_4_ = (uint)plVar15;
    if (uVar5 != 0) {
      lVar11 = 0;
      uVar6 = 0xd344587f;
      plVar3 = plVar15;
      while( true ) {
        iVar7 = (int)plVar3 + (uVar6 >> 3);
        iVar7 = ((uint)(iVar7 * iVar7) >> (ulong)((int)lVar11 + 3U & 7)) + iVar7;
        uVar6 = uVar6 + 0xd344587f;
        local_10._0_4_ = (iVar7 * iVar7 << (ulong)((int)lVar11 + 5U & 0xb)) + iVar7;
        *(uint *)(lVar10 + lVar11 * 4) = (uint)local_10;
        lVar11 = lVar11 + 1;
        if (uVar5 <= (uint)lVar11) break;
        plVar3 = (long *)(ulong)(uint)local_10;
      }
    }
    uVar13 = FUN_000088bc();
    uVar5 = puVar9[1];
    lVar11 = FUN_00008cdc();
    uVar6 = *puVar9;
    local_10 = 0;
    if (uVar6 != 0) {
      local_10 = 0;
      iVar7 = 0x28abf6a2;
      uVar16 = 0;
      lVar17 = lVar10;
      do {
        uVar16 = uVar16 + 1;
        iVar14 = (int)plVar15;
        lVar2 = (long)puVar9 + local_10 + (ulong)uVar5;
        local_10 = local_10 + 0xc;
        iVar14 = iVar14 + uVar16 * -0x3083632c + ((uint)(iVar14 * iVar14) >> 0x11);
        uVar1 = iVar7 + iVar14 + iVar14 * iVar14 * 0x800;
        plVar15 = (long *)(ulong)uVar1;
        *(uint *)(lVar2 + 4) = uVar1;
        cVar4 = FUN_00008d20(lVar17,lVar2,uVar13);
        local_10 = local_10 + (ulong)*(uint *)(lVar2 + 8) * 4;
        if (cVar4 == '\0') {
          cVar4 = '\0';
          goto LAB_00008944;
        }
        iVar7 = iVar7 + -0x47c6adca;
        lVar17 = lVar17 + lVar11;
      } while (uVar16 != uVar6);
    }
    iVar7 = thunk_FUN_000027d0(lVar10,uVar12,5);
    if (iVar7 != 0) {
      uVar8 = FUN_00008df8();
      cVar4 = FUN_00012354(0,0,uVar8,0x11,0x9d,1,3,0,0,0);
      if (cVar4 == '\0') goto LAB_00008944;
    }
    cVar4 = '\x01';
    DAT_0002a648 = lVar10;
  }
LAB_00008944:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar4);
  }
  return;
}
