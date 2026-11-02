
undefined1 FUN_00004450(long *param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_0000b630(param_3,8,1);
  uVar3 = uVar3 >> 3;
  lVar4 = FUN_0000a0cc(uVar3);
  if (lVar4 == 0) {
    uVar2 = FUN_00004914();
    cVar1 = FUN_0000baa8(0,0,uVar2,1,0x25,1,1,uVar3 & 0xffffffff,0,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar2 = 0xff;
  if (param_4 == '\0') {
    uVar2 = 0;
  }
  FUN_0000aa04(lVar4,uVar2,uVar3);
  *param_1 = lVar4;
  param_1[1] = uVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = 0;
  return 1;
}
