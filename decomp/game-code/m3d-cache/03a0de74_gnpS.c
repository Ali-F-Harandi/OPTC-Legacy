// M3d: gnpS @ 0x3a0de74 (Ghidra decompile, true address)
#

void m3d_3a0de74(float param_1,float param_2,float *param_3,float *param_4,float *param_5,
                float *param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 uVar18;
  code *UNRECOVERED_JUMPTABLE;
  float *unaff_x23;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_160 [8];
  long lStack_158;
  undefined1 ***pppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  float *pfStack_e0;
  float *pfStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  long lStack_b8;
  float *pfStack_a8;
  float *pfStack_a0;
  undefined8 uStack_98;
  float *pfStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  pcVar17 = (char *)param_5;
  pfVar6 = (float *)func_0x03f0b340();
  if (pfVar6 != (float *)0x0) {
    pcVar17 = (char *)0x10004;
    (**(code **)(*(long *)pfVar6 + 0x30))(pfVar6,&plStack_80);
    unaff_x23 = pfVar6;
    if (plStack_80 == (long *)0x0) {
      pfVar6 = (float *)0x0;
    }
    else {
      pcVar17 = (char *)0x0;
      (**(code **)(*(long *)pfVar6 + 0x20))(pfVar6,&plStack_80);
      pfVar7 = (float *)(**(code **)(*plStack_80 + 0x30))
                                  (plStack_80,s_jp_co_drecom_bisque_lib_BQFontUt_0137c010);
      pfVar6 = pfVar7;
      if (pfVar7 != (float *)0x0) {
        pcVar17 = s_getDrawSize_0141f194;
        pfVar8 = (float *)(**(code **)(*plStack_80 + 0x388))
                                    (plStack_80,pfVar7,s_getDrawSize_0141f194,
                                     s__Ljava_lang_String_Ljava_lang_St_0132422f);
        pfVar6 = pfVar8;
        unaff_x23 = pfVar7;
        if ((pfVar8 != (float *)0x0) &&
           (pfVar9 = (float *)(**(code **)(*plStack_80 + 0x538))(plStack_80,param_6),
           pfVar6 = pfVar9, pfVar9 != (float *)0x0)) {
          pfVar6 = (float *)func_0x03f0b2d0(param_7);
          if ((float *)0xfffffffffffffff7 < pfVar6) {
            if (*(long *)(lVar2 + 0x28) == lStack_78) {
              param_4 = (float *)func_0x01a77edc(&uStack_98);
              pfVar6 = param_4;
              if ((uStack_98 & 1) != 0) {
                pfVar6 = (float *)func_0x03f0b310(uStack_88);
              }
              if (*(long *)(lVar2 + 0x28) == lStack_78) {
                pfVar6 = (float *)func_0x03f072dc(param_4);
              }
            }
            goto code_r0x03a0e294;
          }
          pfStack_a0 = param_5;
          if (pfVar6 < (float *)0x17) {
            uVar19 = (ulong)&uStack_98 | 1;
            uStack_98 = CONCAT71(uStack_98._1_7_,(char)((int)pfVar6 << 1));
            if (pfVar6 != (float *)0x0) goto code_r0x03a0e00c;
          }
          else {
            uVar1 = ((ulong)pfVar6 & 0xfffffffffffffff8) + 8;
            if (((ulong)pfVar6 | 7) != 0x17) {
              uVar1 = (ulong)pfVar6 | 7;
            }
            uVar19 = func_0x03f0b2e0(uVar1 + 1);
            uStack_98 = uVar1 + 1 | 1;
            pfStack_90 = pfVar6;
            uStack_88 = uVar19;
code_r0x03a0e00c:
            pcVar17 = (char *)pfVar6;
            func_0x03f0b910(uVar19,param_7);
          }
          *(char *)(uVar19 + (long)pfVar6) = '\0';
          plVar10 = (long *)func_0x03f2df60();
          lVar11 = (**(code **)(*plVar10 + 0x18))(plVar10,param_7);
          if (lVar11 != 0) {
            func_0x03f0bd30(&uStack_98);
          }
          uVar1 = uStack_88;
          if ((uStack_98 & 1) == 0) {
            uVar1 = (long)&uStack_98 + 1;
          }
          lVar11 = (**(code **)(*plStack_80 + 0x538))(plStack_80,uVar1);
          if (((lVar11 == 0) ||
              (lVar12 = func_0x03f134f0((double)param_1,(double)param_2,plStack_80,pfVar7,pfVar8,
                                        pfVar9,lVar11), pcVar17 = (char *)pfVar8, lVar12 == 0)) ||
             (lVar13 = (**(code **)(*plStack_80 + 0xf8))(plStack_80,lVar12),
             pcVar17 = (char *)pfVar8, lVar13 == 0)) {
code_r0x03a0e214:
            pfVar6 = (float *)0x0;
          }
          else {
            pcVar17 = s_m_width_0136fb41;
            lVar14 = (**(code **)(*plStack_80 + 0x2f0))
                               (plStack_80,lVar13,s_m_width_0136fb41,s_I_0143e57f);
            if (lVar14 == 0) goto code_r0x03a0e214;
            pcVar17 = s_m_height_013fdcc7;
            lVar15 = (**(code **)(*plStack_80 + 0x2f0))
                               (plStack_80,lVar13,s_m_height_013fdcc7,s_I_0143e57f);
            if (lVar15 == 0) goto code_r0x03a0e214;
            pcVar17 = s_m_stringLength_013c969e;
            pfVar6 = (float *)(**(code **)(*plStack_80 + 0x2f0))
                                        (plStack_80,lVar13,s_m_stringLength_013c969e,s_I_0143e57f);
            if (pfVar6 == (float *)0x0) goto code_r0x03a0e214;
            pfStack_a8 = pfVar6;
            iVar4 = (**(code **)(*plStack_80 + 800))(plStack_80,lVar12,lVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(*plStack_80 + 800);
            *param_3 = (float)iVar4;
            iVar4 = (*UNRECOVERED_JUMPTABLE)(plStack_80,lVar12,lVar15);
            UNRECOVERED_JUMPTABLE = *(code **)(*plStack_80 + 800);
            *param_4 = (float)iVar4;
            pcVar17 = (char *)pfStack_a8;
            fVar5 = (float)(*UNRECOVERED_JUMPTABLE)(plStack_80,lVar12);
            lVar14 = *plStack_80;
            *pfStack_a0 = fVar5;
            (**(code **)(lVar14 + 0xb8))(plStack_80,pfVar7);
            (**(code **)(*plStack_80 + 0xb8))(plStack_80,lVar13);
            (**(code **)(*plStack_80 + 0xb8))(plStack_80,lVar12);
            (**(code **)(*plStack_80 + 0xb8))(plStack_80,lVar11);
            (**(code **)(*plStack_80 + 0xb8))(plStack_80,pfVar9);
            pfVar6 = (float *)0x1;
          }
          param_6 = pfVar9;
          if ((uStack_98 & 1) != 0) {
            func_0x03f0b310(uStack_88);
            param_4 = pfVar6;
          }
        }
      }
    }
  }
  pfVar9 = param_6;
  pfVar7 = unaff_x23;
  if (*(long *)(lVar2 + 0x28) == lStack_78) {
    return;
  }
code_r0x03a0e294:
  auVar20 = func_0x03f0b330(pfVar6);
  uVar18 = auVar20._0_8_;
  uStack_e8 = 0x3a0e298;
  lVar11 = tpidr_el0;
  lStack_f8 = *(long *)(lVar11 + 0x28);
  puStack_f0 = &stack0xffffffffffffffa0;
  pfStack_e0 = pfVar7;
  pfStack_d0 = param_3;
  pfStack_c8 = pfVar9;
  pfStack_c0 = param_4;
  lStack_b8 = lVar2;
  plVar10 = (long *)func_0x03f0b340();
  (**(code **)(*plVar10 + 0x30))(plVar10,&plStack_100,0x10004);
  (**(code **)(*plVar10 + 0x20))(plVar10,&plStack_100,0);
  puVar3 = puRam00000000041833c8;
  uVar16 = (**(code **)(*plStack_100 + 0x388))
                     (plStack_100,*puRam00000000041833c8,s_handlerPost_013dd8ae,s__JJI_V_01344a93);
  func_0x03f0cad0(plStack_100,*puVar3,uVar16,uVar18,auVar20._8_8_,(ulong)pcVar17 & 0xffffffff);
  if (*(long *)(lVar11 + 0x28) == lStack_f8) {
    return;
  }
  func_0x03f0b330();
  uStack_118 = 0x3a0e378;
  lVar2 = tpidr_el0;
  lStack_128 = *(long *)(lVar2 + 0x28);
  ppuStack_120 = &puStack_f0;
  uStack_110 = auVar20._8_8_;
  uStack_108 = (ulong)pcVar17 & 0xffffffff;
  plVar10 = (long *)func_0x03f0b340();
  (**(code **)(*plVar10 + 0x30))(plVar10,auStack_130,0x10004);
  (**(code **)(*plVar10 + 0x20))(plVar10,auStack_130,0);
  if (*(long *)(lVar2 + 0x28) != lStack_128) {
    func_0x03f0b330();
    uStack_148 = 0x3a0e3f0;
    lVar11 = tpidr_el0;
    lStack_158 = *(long *)(lVar11 + 0x28);
    pppuStack_150 = &ppuStack_120;
    lStack_140 = lVar2;
    plStack_138 = plVar10;
    plVar10 = (long *)func_0x03f0b340();
    UNRECOVERED_JUMPTABLE = (code *)0x10004;
    (**(code **)(*plVar10 + 0x30))(plVar10,auStack_160);
    (**(code **)(*plVar10 + 0x28))(plVar10);
    if (*(long *)(lVar11 + 0x28) != lStack_158) {
      func_0x03f0b330();
                    /* WARNING: Could not recover jumptable at 0x03a0e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar18);
      return;
    }
    return;
  }
  return;
}


