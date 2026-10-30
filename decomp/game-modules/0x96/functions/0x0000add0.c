
undefined8 FUN_0000add0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x58);
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    iVar5 = 0;
    plVar2 = plVar1;
    do {
      lVar4 = lVar4 + 1;
      plVar3 = plVar2;
      if (*plVar1 != param_2) {
        iVar5 = iVar5 + 1;
        plVar3 = plVar2 + 2;
        if (plVar1 != plVar2) {
          FUN_00010a04(plVar2,plVar1);
        }
      }
      plVar1 = plVar1 + 2;
      plVar2 = plVar3;
    } while (lVar4 != lVar6);
    lVar4 = (long)iVar5;
    plVar1 = plVar3;
  }
  FUN_000108e0(plVar1,0,(lVar6 - lVar4) * 0x10);
  return 1;
}
