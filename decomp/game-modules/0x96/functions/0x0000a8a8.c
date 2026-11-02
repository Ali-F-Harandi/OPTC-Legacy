
undefined8 FUN_0000a8a8(undefined4 param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = thunk_FUN_000027d0(0x27);
  lVar4 = (long)iVar2;
  if (iVar2 == -1) {
    lVar4 = 0x1000;
  }
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = (int)(param_2 / lVar4);
  }
  lVar5 = (long)((int)param_2 - iVar2 * (int)lVar4);
  lVar4 = thunk_FUN_000027d0(0,lVar5 + param_3,1,1,param_1,param_2 - lVar5);
  puVar1 = PTR_DAT_00029fa8;
  if (lVar4 == -1) {
    iVar2 = *(int *)PTR_DAT_00029fa8;
    *(undefined4 *)PTR_DAT_00029f18 = 0x50;
    uVar3 = 0xffffffffffffffff;
    if (iVar2 == 0) {
      *(undefined4 *)puVar1 = 0x50;
    }
  }
  else {
    param_4[2] = lVar4;
    param_4[3] = lVar5 + param_3;
    *param_4 = lVar4 + lVar5;
    param_4[1] = param_3;
    uVar3 = 0;
    *(undefined4 *)PTR_DAT_00029f18 = 0x5c;
  }
  return uVar3;
}
