
void FUN_0000841c(ulong *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  code *pcVar25;
  char cVar26;
  undefined4 uVar27;
  int *piVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  int iVar33;
  ulong local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (((ulong)*(uint *)((long)param_1 + 0xc) == 0) ||
     (*(long *)(*(long *)(param_2 + 0xa8) + (ulong)*(uint *)((long)param_1 + 0xc) * 0x18 + 8) != 0))
  {
    uVar32 = *param_1;
  }
  else {
    piVar28 = (int *)FUN_00008410();
    if (piVar28 == (int *)0x0) {
      uVar27 = FUN_00008df8();
      cVar26 = FUN_00012354(0,0,uVar27,0x11,0x3f,1,1,0,0,0);
      if (cVar26 != '\0') {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1000,35000);
        (*pcVar25)();
      }
      goto LAB_00008470;
    }
    iVar33 = 0;
    uVar3 = piVar28[1];
    uVar32 = *param_1;
    lVar29 = 0;
    if (*piVar28 != 0) {
      do {
        puVar2 = (uint *)((long)piVar28 + lVar29 + (ulong)uVar3);
        uVar4 = puVar2[2];
        if (uVar4 != 0) {
          if (*(uint *)((long)piVar28 + lVar29 + 0xc + (ulong)uVar3) == uVar32) {
LAB_00008534:
            lVar29 = FUN_00008cdc();
            lVar30 = FUN_00008c00();
            uVar3 = puVar2[1];
            bVar7 = (byte)(uVar3 >> 8);
            bVar5 = ~bVar7;
            bVar23 = (byte)(uVar3 >> 0x10);
            bVar24 = (byte)(uVar3 >> 0x18);
            cVar26 = bVar23 + bVar24;
            bVar9 = (byte)((ulong)param_4 >> 8);
            bVar22 = (byte)uVar3;
            bVar8 = (byte)((ulong)param_4 >> 0x10);
            bVar21 = ((bVar5 ^ (byte)param_4) + 0xba ^ bVar22) + cVar26 + '\f';
            bVar20 = bVar21 ^ 0xf4;
            bVar10 = (byte)((ulong)param_4 >> 0x18);
            bVar6 = (byte)((ulong)param_4 >> 0x20);
            bVar20 = (cVar26 + ((byte)param_4 + (bVar5 ^ bVar9) ^ bVar22)) - bVar20 ^ bVar20;
            bVar19 = bVar20 ^ (cVar26 + (bVar9 + (bVar5 ^ bVar8) ^ bVar22)) - bVar20;
            bVar9 = (byte)((ulong)param_4 >> 0x28);
            bVar18 = bVar19 ^ (cVar26 + (bVar8 + (bVar5 ^ bVar10) ^ bVar22)) - bVar19;
            bVar8 = (byte)((ulong)param_4 >> 0x30);
            bVar17 = bVar18 ^ (cVar26 + (bVar10 + (bVar5 ^ bVar6) ^ bVar22)) - bVar18;
            bVar16 = bVar17 ^ (cVar26 + (bVar6 + (bVar5 ^ bVar9) ^ bVar22)) - bVar17;
            bVar6 = (byte)((ulong)param_4 >> 0x38);
            bVar15 = bVar16 ^ (cVar26 + (bVar9 + (bVar5 ^ bVar8) ^ bVar22)) - bVar16;
            bVar14 = bVar15 ^ (cVar26 + (bVar8 + (bVar5 ^ bVar6) ^ bVar22)) - bVar15;
            bVar13 = bVar14 ^ (cVar26 + (bVar6 + (bVar5 ^ bVar22) ^ bVar22)) - bVar14;
            bVar12 = bVar13 ^ (cVar26 + (bVar22 - 1 ^ bVar22)) - bVar13;
            bVar11 = bVar12 ^ (cVar26 + (bVar7 + (bVar5 ^ bVar23) ^ bVar22)) - bVar12;
            bVar10 = bVar11 ^ (cVar26 + (bVar23 + (bVar5 ^ bVar24) ^ bVar22)) - bVar11;
            bVar9 = (byte)((uint)local_10._4_4_ >> 8);
            bVar8 = bVar10 ^ (cVar26 + (bVar24 + (bVar5 ^ (byte)local_10._4_4_) ^ bVar22)) - bVar10;
            bVar7 = bVar8 ^ (cVar26 + ((byte)local_10._4_4_ + (bVar5 ^ bVar9) ^ bVar22)) - bVar8;
            bVar6 = local_10._6_1_ + (bVar5 ^ local_10._7_1_);
            bVar5 = bVar7 ^ (cVar26 + (bVar9 + (bVar5 ^ local_10._6_1_) ^ bVar22)) - bVar7;
            *(ulong *)(param_3 + *param_1) = lVar30 + lVar29 * (ulong)*puVar2;
            local_10 = CONCAT17((cVar26 + (bVar6 ^ bVar22)) - bVar5 ^ bVar5,
                                CONCAT16(bVar5,CONCAT15(bVar7,CONCAT14(bVar8,CONCAT13(bVar10,
                                                  CONCAT12(bVar11,CONCAT11(bVar12,bVar13)))))));
            local_18 = CONCAT71(CONCAT16(bVar14,CONCAT15(bVar15,CONCAT14(bVar16,CONCAT13(bVar17,
                                                  CONCAT12(bVar18,CONCAT11(bVar19,bVar20)))))),
                                bVar21) ^ 0xf4;
            lVar29 = FUN_000088bc();
            local_18 = local_18 - lVar29;
            local_10 = local_10 - lVar29;
            lVar29 = FUN_00008c0c();
            FUN_00010a04(lVar29 + (ulong)*puVar2 * 0x10,&local_18,0x10);
            cVar26 = '\x01';
            goto LAB_00008470;
          }
          puVar31 = puVar2;
          while (puVar31 != (uint *)((long)piVar28 + lVar29 + (ulong)(uVar4 - 1) * 4 + (ulong)uVar3)
                ) {
            puVar1 = puVar31 + 4;
            puVar31 = puVar31 + 1;
            if (*puVar1 == uVar32) goto LAB_00008534;
          }
        }
        iVar33 = iVar33 + 1;
        lVar29 = lVar29 + 0xc + (ulong)uVar4 * 4;
      } while (iVar33 != *piVar28);
    }
  }
  *(undefined8 *)(param_3 + uVar32) = param_4;
  cVar26 = '\x01';
LAB_00008470:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar26);
  }
  return;
}
