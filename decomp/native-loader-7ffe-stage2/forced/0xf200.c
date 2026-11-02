
undefined8 FUN_0000f200(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 2) = (int)param_1[2] + param_2;
  iVar2 = (int)param_1[2];
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *param_1 = *param_1 + (long)(iVar1 >> 3);
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + (iVar1 >> 3);
  *(int *)(param_1 + 2) = (int)param_1[2] % 8;
  return 1;
}


