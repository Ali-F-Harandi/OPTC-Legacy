
long FUN_0000334c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_00003318(param_2,param_3,param_4,param_5,param_6,param_7,0,param_1);
  if (lVar1 + 0xffeU < 0xffe) {
    *(long *)PTR_DAT_00013ff8 = -lVar1;
    piVar2 = (int *)thunk_FUN_00000660();
    iVar3 = (int)lVar1;
    lVar1 = -1;
    *piVar2 = -iVar3;
  }
  return lVar1;
}
