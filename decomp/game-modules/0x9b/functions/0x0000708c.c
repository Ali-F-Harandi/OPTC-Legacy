
char FUN_0000708c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,char param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (DAT_00020050 == '\0') {
    uVar5 = 0;
    lVar4 = 0;
    if (DAT_00020318 != 0) goto LAB_000070d8;
LAB_000071dc:
    iVar1 = DAT_00020318;
    uVar3 = FUN_00007ab0();
    cVar2 = FUN_0000baa8(0,0,uVar3,1,0x82,1,2,iVar1,0,iVar1);
    if (cVar2 != '\0') goto LAB_000070d8;
  }
  else {
    uVar5 = param_4 + 0x10;
    lVar4 = FUN_0000a0cc(uVar5);
    if (lVar4 == 0) {
      uVar3 = FUN_00007ab0();
      cVar2 = FUN_0000baa8(0,0,uVar3,1,0x75,1,1,uVar5 & 0xffffffff,0,0);
      if (cVar2 == '\0') {
        cVar2 = '\0';
        goto LAB_00007138;
      }
    }
    FUN_0000ab28(lVar4,param_3,param_4);
    param_3 = lVar4;
    if (DAT_00020318 == 0) goto LAB_000071dc;
LAB_000070d8:
    cVar2 = FUN_00007928(DAT_00020318,param_3,param_4);
    if (cVar2 != '\0') {
      if (param_5 == '\0') {
        if (DAT_00020214 == 0) {
          uVar3 = FUN_00007ab0();
          cVar2 = FUN_0000baa8(0,0,uVar3,1,0x8d,1,3,0,0,0);
          if (cVar2 == '\0') goto LAB_000071a0;
        }
        cVar2 = FUN_00004ec4(param_3,param_4,&DAT_00020218,DAT_00020214);
        if (cVar2 == '\0') goto LAB_00007138;
      }
      cVar2 = FUN_000079e4(param_1,param_2,param_3,param_4 & 0xffffffff);
      goto LAB_00007138;
    }
  }
LAB_000071a0:
  cVar2 = '\0';
LAB_00007138:
  if (lVar4 != 0) {
    FUN_0000a128(lVar4,uVar5);
  }
  return cVar2;
}
