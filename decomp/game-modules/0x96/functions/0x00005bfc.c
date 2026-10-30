
undefined8 FUN_00005bfc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00005b28(param_1,param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((((int)(uint)*(byte *)(lVar1 + 4) >> 4 != 0) && (*(long *)(lVar1 + 8) != 0)) &&
       (uVar2 = FUN_0000c258(param_1), param_3 != (undefined1 *)0x0)) {
      *param_3 = 1;
    }
  }
  return uVar2;
}
