
undefined8 FUN_00006368(char param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  
  if (param_1 == '\0') {
    plVar4 = *(long **)(param_2 + 0x98);
    iVar3 = *(int *)(param_2 + 0xa0);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x88);
    iVar3 = *(int *)(param_2 + 0x90);
  }
  if (0 < iVar3) {
    plVar1 = plVar4 + ((ulong)(iVar3 - 1) + 1) * 3;
    do {
      if (((ulong)*(uint *)((long)plVar4 + 0xc) != 0) && (*(uint *)((long)plVar4 + 0xc) == param_3))
      {
        if (*(short *)(param_2 + 0x114) == 0x3e) {
          cVar2 = FUN_00007070(plVar4);
        }
        else {
          if (*(short *)(param_2 + 0x114) != 0xb7) goto LAB_000063ac;
          cVar2 = FUN_00006ff4();
        }
        if (cVar2 != '\0') {
          return *(undefined8 *)(*(long *)(param_2 + 0x20) + *plVar4);
        }
      }
LAB_000063ac:
      plVar4 = plVar4 + 3;
    } while (plVar4 != plVar1);
  }
  return 0;
}
