
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002910(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 *in_x5;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar41;
  int iVar42;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  iVar7 = FUN_000087f8(9,0,0,0);
  iVar8 = FUN_000087f8(10,0,0,0);
  if ((iVar8 < 0) && (-1 < iVar7)) {
    bVar4 = FUN_00008bb4();
    bVar5 = FUN_00008c7c(param_2);
    if (bVar4 <= bVar5) goto LAB_0000297c;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    cVar3 = FUN_00009e28(0x60,0,&local_80);
    if ((((cVar3 != '\0') && (cVar3 = FUN_00009e28(0x60,1,&local_7c), cVar3 != '\0')) &&
        (cVar3 = FUN_00009e28(0x40,0,&local_78), cVar3 != '\0')) &&
       (cVar3 = FUN_00009e28(0x40,1,&local_74), cVar3 != '\0')) {
      if (local_80 == 1) {
        if (local_7c != 1) goto LAB_00002ed8;
      }
      else {
        if (local_80 == 0) {
          uVar14 = 0x100;
          if (local_7c == 0) goto LAB_00002da0;
        }
        else {
LAB_00002ed8:
          uVar14 = 0x101;
          if (local_7c == 0) {
            uVar14 = 1;
          }
        }
        uVar1 = uVar14 | 0x10000;
        if (local_78 == 0) {
          uVar1 = uVar14;
        }
        uVar14 = uVar1 | 0x1000000;
        if (local_74 == 0) {
          uVar14 = uVar1;
        }
        cVar3 = FUN_00008870(0x20000,uVar1 | 0x1000000);
        if (cVar3 == '\0') {
          uVar9 = FUN_000022cc();
          cVar3 = FUN_0000baa8(0,0,uVar9,0xff,0x86,1,3,uVar14,0,0);
        }
        else {
          uVar9 = FUN_000022cc();
          cVar3 = FUN_0000baa8(0,0,uVar9,0xff,0x85,0x46,2,uVar14,0,0);
        }
        if (cVar3 == '\0') goto LAB_00002c40;
      }
LAB_00002da0:
      if (local_78 == 1) {
        if (local_74 == 1) goto LAB_0000297c;
LAB_00002ea4:
        uVar14 = (uint)(local_80 != 0);
        if ((local_7c == 0) || (uVar14 = uVar14 | 0x100, local_78 != 0)) {
          uVar14 = uVar14 | 0x10000;
        }
        if (local_74 != 0) goto LAB_00002dd4;
      }
      else {
        if (local_78 != 0) goto LAB_00002ea4;
        if (local_74 == 0) goto LAB_0000297c;
        uVar14 = local_80 != 0 | 0x100;
        if (local_7c == 0) {
          uVar14 = (uint)(local_80 != 0);
        }
LAB_00002dd4:
        uVar14 = uVar14 | 0x1000000;
      }
      cVar3 = FUN_00008870(0x20000);
      if (cVar3 == '\0') {
        uVar9 = FUN_000022cc();
        cVar3 = FUN_0000baa8(0,0,uVar9,0xff,0x9e,1,5,uVar14,0,0);
      }
      else {
        uVar9 = FUN_000022cc();
        cVar3 = FUN_0000baa8(0,0,uVar9,0xff,0x9d,0x46,4,uVar14,0,0);
      }
      if (cVar3 != '\0') goto LAB_0000297c;
    }
LAB_00002c40:
    uVar10 = FUN_00009ebc();
    FUN_0000a028(0x9d,uVar10,1);
    FUN_0000a028(0x9e,uVar10,1);
    *in_x5 = 1;
  }
  else {
LAB_0000297c:
    uVar15 = *(undefined8 *)(param_1 + 8);
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = FUN_00009ebc();
    lVar11 = FUN_00009f00(0x9d,uVar10);
    uVar14 = DAT_00020210;
    if (lVar11 == 0) {
      uVar9 = 0;
      uVar17 = 0;
    }
    else {
      FUN_0000ab28(&local_70,*(undefined8 *)(lVar11 + 8),0x5c);
      iVar7 = (uVar14 + 0xd3e87144) * uVar14;
      auVar24._8_8_ = uRam0000000000002f08;
      auVar24._0_8_ = _DAT_00002f00;
      cVar3 = (char)uVar14;
      auVar39._4_4_ = iVar7;
      auVar39._0_4_ = iVar7;
      auVar39._8_4_ = iVar7;
      auVar39._12_4_ = iVar7;
      uVar1 = iVar7 + uVar14 * 0xbd9418d;
      auVar27._0_5_ =
           CONCAT14(cVar3 + (char)((ulong)_DAT_00002f10 >> 0x20),
                    (uint)(cVar3 + (char)_DAT_00002f10 & 7)) & 0x700ffffff;
      auVar27._5_3_ = 0;
      auVar27[8] = cVar3 + (char)uRam0000000000002f18 & 7;
      auVar27._9_3_ = 0;
      auVar27[0xc] = cVar3 + (char)((ulong)uRam0000000000002f18 >> 0x20) & 7;
      auVar27._13_3_ = 0;
      auVar40 = NEON_sshl(auVar39,auVar24,4);
      auVar28 = NEON_neg(auVar27,4);
      iVar8 = CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50)));
      iVar20 = auVar40._0_4_;
      iVar41 = local_70 - iVar20;
      iVar21 = auVar40._4_4_;
      iVar42 = uStack_6c - iVar21;
      iVar22 = auVar40._8_4_;
      iStack_68 = iStack_68 - iVar22;
      iVar23 = auVar40._12_4_;
      iStack_64 = iStack_64 - iVar23;
      auVar30._0_5_ =
           CONCAT14(cVar3 + (char)((ulong)_DAT_00002f20 >> 0x20),
                    (uint)(cVar3 + (char)_DAT_00002f20 & 7)) & 0x700ffffff;
      auVar30._5_3_ = 0;
      auVar30[8] = cVar3 + (char)uRam0000000000002f28 & 7;
      auVar30._9_3_ = 0;
      auVar30[0xc] = cVar3 + (char)((ulong)uRam0000000000002f28 >> 0x20) & 7;
      auVar30._13_3_ = 0;
      auVar40._4_4_ = uVar1;
      auVar40._0_4_ = uVar1;
      auVar40._8_4_ = uVar1;
      auVar40._12_4_ = uVar1;
      auVar40 = NEON_ushl(auVar40,auVar28,4);
      iVar29 = CONCAT13(bStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
      auVar25._0_5_ =
           CONCAT14(cVar3 + (char)((ulong)_DAT_00002f30 >> 0x20),
                    (uint)(cVar3 + (char)_DAT_00002f30 & 7)) & 0x700ffffff;
      auVar25._5_3_ = 0;
      auVar25[8] = cVar3 + (char)uRam0000000000002f38 & 7;
      auVar25._9_3_ = 0;
      auVar25[0xc] = cVar3 + (char)((ulong)uRam0000000000002f38 >> 0x20) & 7;
      auVar25._13_3_ = 0;
      auVar32._0_5_ =
           CONCAT14(cVar3 + (char)((ulong)_DAT_00002f40 >> 0x20),
                    (uint)(cVar3 + (char)_DAT_00002f40 & 7)) & 0x700ffffff;
      auVar32._5_3_ = 0;
      auVar32[8] = cVar3 + (char)uRam0000000000002f48 & 7;
      auVar32._9_3_ = 0;
      auVar32[0xc] = cVar3 + (char)((ulong)uRam0000000000002f48 >> 0x20) & 7;
      auVar32._13_3_ = 0;
      auVar31 = NEON_neg(auVar30,4);
      uVar17 = *(undefined8 *)(lVar11 + 8);
      local_60._0_2_ =
           CONCAT11(auVar40[9] ^ (byte)((uint)iStack_68 >> 8),auVar40[8] ^ (byte)iStack_68);
      local_60._0_3_ = CONCAT12(auVar40[10] ^ (byte)((uint)iStack_68 >> 0x10),(undefined2)local_60);
      local_60 = CONCAT13(auVar40[0xb] ^ (byte)((uint)iStack_68 >> 0x18),(undefined3)local_60);
      uStack_5c._0_2_ =
           CONCAT11(auVar40[0xd] ^ (byte)((uint)iStack_64 >> 8),auVar40[0xc] ^ (byte)iStack_64);
      uStack_5c._0_3_ =
           CONCAT12(auVar40[0xe] ^ (byte)((uint)iStack_64 >> 0x10),(undefined2)uStack_5c);
      uStack_5c = CONCAT13(auVar40[0xf] ^ (byte)((uint)iStack_64 >> 0x18),(undefined3)uStack_5c);
      local_70 = CONCAT13(auVar40[3] ^ (byte)((uint)iVar41 >> 0x18),
                          CONCAT12(auVar40[2] ^ (byte)((uint)iVar41 >> 0x10),
                                   CONCAT11(auVar40[1] ^ (byte)((uint)iVar41 >> 8),
                                            auVar40[0] ^ (byte)iVar41)));
      uStack_6c = CONCAT13(auVar40[7] ^ (byte)((uint)iVar42 >> 0x18),
                           CONCAT12(auVar40[6] ^ (byte)((uint)iVar42 >> 0x10),
                                    CONCAT11(auVar40[5] ^ (byte)((uint)iVar42 >> 8),
                                             auVar40[4] ^ (byte)iVar42)));
      auVar33._0_5_ =
           CONCAT14(cVar3 + (char)((ulong)_DAT_00002f50 >> 0x20),
                    (uint)(cVar3 + (char)_DAT_00002f50 & 7)) & 0x700ffffff;
      auVar33._5_3_ = 0;
      auVar33[8] = cVar3 + (char)uRam0000000000002f58 & 7;
      auVar33._9_3_ = 0;
      auVar33[0xc] = cVar3 + (char)((ulong)uRam0000000000002f58 >> 0x20) & 7;
      auVar33._13_3_ = 0;
      auVar26 = NEON_neg(auVar25,4);
      auVar40 = NEON_neg(auVar32,4);
      auVar28._4_4_ = uVar1;
      auVar28._0_4_ = uVar1;
      auVar28._8_4_ = uVar1;
      auVar28._12_4_ = uVar1;
      auVar32 = NEON_ushl(auVar28,auVar31,4);
      auVar34 = NEON_neg(auVar33,4);
      auVar31._4_4_ = uVar1;
      auVar31._0_4_ = uVar1;
      auVar31._8_4_ = uVar1;
      auVar31._12_4_ = uVar1;
      auVar28 = NEON_ushl(auVar31,auVar26,4);
      iVar41 = iVar8 - iVar20;
      iVar8 = (int)(CONCAT17(bStack_49,
                             CONCAT16(bStack_4a,CONCAT15(bStack_4b,CONCAT14(bStack_4c,iVar8)))) >>
                   0x20) - iVar21;
      iVar35 = iVar29 - iVar20;
      iVar36 = (int)(CONCAT17(bStack_29,
                              CONCAT16(bStack_2a,CONCAT15(bStack_2b,CONCAT14(bStack_2c,iVar29)))) >>
                    0x20) - iVar21;
      iVar37 = (int)uStack_28 - iVar22;
      iVar38 = (int)((ulong)uStack_28 >> 0x20) - iVar23;
      iVar29 = local_60 - iVar20;
      iVar42 = uStack_5c - iVar21;
      auVar26._4_4_ = uVar1;
      auVar26._0_4_ = uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._12_4_ = uVar1;
      auVar40 = NEON_ushl(auVar26,auVar40,4);
      iVar20 = (int)local_40 - iVar20;
      iVar21 = (int)((ulong)local_40 >> 0x20) - iVar21;
      iVar22 = (int)uStack_38 - iVar22;
      iVar23 = (int)((ulong)uStack_38 >> 0x20) - iVar23;
      local_18 = uVar1 >> (uVar14 & 7) ^ local_18 - iVar7;
      auVar2._4_4_ = uVar1;
      auVar2._0_4_ = uVar1;
      auVar2._8_4_ = uVar1;
      auVar2._12_4_ = uVar1;
      auVar31 = NEON_ushl(auVar2,auVar34,4);
      local_50 = auVar28[0] ^ (byte)iVar41;
      bStack_4f = auVar28[1] ^ (byte)((uint)iVar41 >> 8);
      bStack_4e = auVar28[2] ^ (byte)((uint)iVar41 >> 0x10);
      bStack_4d = auVar28[3] ^ (byte)((uint)iVar41 >> 0x18);
      bStack_4c = auVar28[4] ^ (byte)iVar8;
      bStack_4b = auVar28[5] ^ (byte)((uint)iVar8 >> 8);
      bStack_4a = auVar28[6] ^ (byte)((uint)iVar8 >> 0x10);
      bStack_49 = auVar28[7] ^ (byte)((uint)iVar8 >> 0x18);
      auVar34._0_8_ =
           CONCAT17(auVar40[7] ^ (byte)((uint)iVar21 >> 0x18),
                    CONCAT16(auVar40[6] ^ (byte)((uint)iVar21 >> 0x10),
                             CONCAT15(auVar40[5] ^ (byte)((uint)iVar21 >> 8),
                                      CONCAT14(auVar40[4] ^ (byte)iVar21,
                                               CONCAT13(auVar40[3] ^ (byte)((uint)iVar20 >> 0x18),
                                                        CONCAT12(auVar40[2] ^
                                                                 (byte)((uint)iVar20 >> 0x10),
                                                                 CONCAT11(auVar40[1] ^
                                                                          (byte)((uint)iVar20 >> 8),
                                                                          auVar40[0] ^ (byte)iVar20)
                                                                ))))));
      auVar34[8] = auVar40[8] ^ (byte)iVar22;
      auVar34[9] = auVar40[9] ^ (byte)((uint)iVar22 >> 8);
      auVar34[10] = auVar40[10] ^ (byte)((uint)iVar22 >> 0x10);
      auVar34[0xb] = auVar40[0xb] ^ (byte)((uint)iVar22 >> 0x18);
      auVar34[0xc] = auVar40[0xc] ^ (byte)iVar23;
      auVar34[0xd] = auVar40[0xd] ^ (byte)((uint)iVar23 >> 8);
      auVar34[0xe] = auVar40[0xe] ^ (byte)((uint)iVar23 >> 0x10);
      auVar34[0xf] = auVar40[0xf] ^ (byte)((uint)iVar23 >> 0x18);
      local_30 = auVar31[0] ^ (byte)iVar35;
      bStack_2f = auVar31[1] ^ (byte)((uint)iVar35 >> 8);
      bStack_2e = auVar31[2] ^ (byte)((uint)iVar35 >> 0x10);
      bStack_2d = auVar31[3] ^ (byte)((uint)iVar35 >> 0x18);
      bStack_2c = auVar31[4] ^ (byte)iVar36;
      bStack_2b = auVar31[5] ^ (byte)((uint)iVar36 >> 8);
      bStack_2a = auVar31[6] ^ (byte)((uint)iVar36 >> 0x10);
      bStack_29 = auVar31[7] ^ (byte)((uint)iVar36 >> 0x18);
      local_60._0_2_ = CONCAT11(auVar32[1] ^ (byte)((uint)iVar29 >> 8),auVar32[0] ^ (byte)iVar29);
      local_60._0_3_ = CONCAT12(auVar32[2] ^ (byte)((uint)iVar29 >> 0x10),(undefined2)local_60);
      local_60 = CONCAT13(auVar32[3] ^ (byte)((uint)iVar29 >> 0x18),(undefined3)local_60);
      uStack_5c._0_2_ = CONCAT11(auVar32[5] ^ (byte)((uint)iVar42 >> 8),auVar32[4] ^ (byte)iVar42);
      uStack_5c._0_3_ = CONCAT12(auVar32[6] ^ (byte)((uint)iVar42 >> 0x10),(undefined2)uStack_5c);
      uStack_5c = CONCAT13(auVar32[7] ^ (byte)((uint)iVar42 >> 0x18),(undefined3)uStack_5c);
      uStack_38 = auVar34._8_8_;
      local_20 = CONCAT13(auVar31[0xb] ^ (byte)((uint)iVar37 >> 0x18),
                          CONCAT12(auVar31[10] ^ (byte)((uint)iVar37 >> 0x10),
                                   CONCAT11(auVar31[9] ^ (byte)((uint)iVar37 >> 8),
                                            auVar31[8] ^ (byte)iVar37)));
      local_1c = CONCAT13(auVar31[0xf] ^ (byte)((uint)iVar38 >> 0x18),
                          CONCAT12(auVar31[0xe] ^ (byte)((uint)iVar38 >> 0x10),
                                   CONCAT11(auVar31[0xd] ^ (byte)((uint)iVar38 >> 8),
                                            auVar31[0xc] ^ (byte)iVar38)));
      uVar9 = *(undefined4 *)(lVar11 + 0x10);
      local_40 = auVar34._0_8_;
    }
    lVar11 = FUN_00009f00(0x9e,uVar10);
    if (lVar11 == 0) {
      uVar12 = 0;
      puVar13 = (undefined4 *)0x0;
      lVar11 = 0;
      uVar19 = 0;
    }
    else {
      puVar18 = *(undefined4 **)(lVar11 + 8);
      puVar13 = puVar18 + 2;
      uVar19 = *puVar18;
      lVar11 = FUN_0000b630(uVar19,4,1);
      uVar12 = puVar18[1];
      lVar11 = (long)puVar18 + lVar11 + 8;
      FUN_0000b630(uVar12,4,1);
    }
    cVar3 = FUN_00002438(uVar15,uVar16,lVar11,uVar12,&local_70,uVar17,uVar9,puVar13,uVar19);
    FUN_0000a028(0x9d,uVar10,1);
    FUN_0000a028(0x9e,uVar10,1);
    *in_x5 = 1;
    if (cVar3 != '\0') goto LAB_00002bc8;
  }
  cVar6 = FUN_0000b730();
  cVar3 = '\0';
  if (cVar6 == '\0') {
    uVar9 = FUN_000022cc();
    cVar3 = FUN_0000baa8(0,0,uVar9,0xff,0x115,1,1,0,0,0);
  }
LAB_00002bc8:
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(cVar3);
}
