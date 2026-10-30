
void FUN_0000a6f8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [4];
  undefined4 local_20 [2];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  iVar2 = FUN_00009934(param_1 + 0x34,param_1 + 0x38,param_2);
  puVar1 = PTR_DAT_00029fa8;
  if (iVar2 < 0) {
    iVar2 = *(int *)PTR_DAT_00029fa8;
    *(undefined4 *)PTR_DAT_00029f18 = 0x3f2;
    if (iVar2 == 0) {
      *(undefined4 *)puVar1 = 0x3f2;
    }
  }
  else {
    uVar3 = FUN_0000a024(param_1,param_2,auStack_24,local_20,auStack_18,auStack_10,0,0);
    if ((int)uVar3 == 0) {
      *param_3 = local_20[0];
      goto LAB_0000a768;
    }
  }
  uVar3 = 0xffffffff;
LAB_0000a768:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar3);
}
