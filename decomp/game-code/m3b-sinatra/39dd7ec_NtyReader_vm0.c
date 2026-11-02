// M3b: NtyReader_vm0 @ 0x39dd7ec (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void _20ProficiencyPopupItem4initER22MstLimitBreakItemModeli(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = param_1 + 0x93;
  plVar4 = (long *)param_1[0x93];
  plVar7 = (long *)param_1[0x94];
  plVar2 = param_1 + 0x94;
  *param_1 = lRam000000000419a180 + 0x10;
  plVar6 = (long *)*plVar4;
  if (plVar1 != (long *)plVar4[1] || plVar7 != plVar6) {
    do {
      if ((long *)plVar7[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[1] + 8))();
        plVar4 = (long *)*plVar1;
        plVar6 = (long *)*plVar4;
      }
      plVar7 = (long *)plVar7[2];
    } while ((plVar1 != (long *)plVar4[1]) || (plVar7 != plVar6));
    plVar7 = (long *)*plVar2;
  }
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)plVar7[2];
    (**(code **)(*plVar7 + 8))(plVar7);
    plVar7 = plVar6;
  }
  *plVar2 = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  SUB_39e0ac4(param_1 + 0x97);
  param_1[5] = 0;
  ayer16explanationShow4Ev(param_1 + 2);
  SUB_39e0964(param_1 + 0x97);
  plVar6 = (long *)*plVar2;
  while (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    plVar6 = (long *)plVar6[2];
    (**(code **)(lVar5 + 8))();
  }
  *plVar2 = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  if (*plVar1 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar3)();
}
