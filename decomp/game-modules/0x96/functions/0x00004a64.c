
void FUN_00004a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = *(long *)PTR_DAT_00029e38;
  cVar2 = FUN_000048b4();
  if (cVar2 != '\0') {
    FUN_00004624(param_1,param_2,param_3,param_4,&local_c,0);
  }
  iVar1 = local_c;
  if (local_c == 0) {
    uVar3 = FUN_000029ec();
    cVar2 = FUN_00012354(0,0,uVar3,0x40,0x108,1,1,0,0,0);
    if (cVar2 == '\0') {
      uVar5 = 0;
      goto LAB_00004b1c;
    }
  }
  uVar6 = (long)iVar1 * 0x518;
  lVar4 = FUN_0000ef9c(uVar6);
  if (lVar4 == 0) {
    uVar3 = FUN_000029ec();
    cVar2 = FUN_00012354(0,0,uVar3,0x40,0x113,1,2,uVar6 & 0xffffffff,0,0);
    if (cVar2 == '\0') {
      uVar5 = 0;
      goto LAB_00004b1c;
    }
  }
  local_c = 0;
  cVar2 = FUN_000048b4(param_1,param_2,param_3,&local_c,lVar4);
  if (cVar2 != '\0') {
    FUN_00004624(param_1,param_2,param_3,param_4,&local_c,lVar4);
  }
  if (param_5 != (long *)0x0) {
    *param_5 = lVar4;
  }
  if (param_6 == (int *)0x0) {
    uVar5 = 1;
  }
  else {
    *param_6 = iVar1;
    uVar5 = 1;
  }
LAB_00004b1c:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar5);
}
