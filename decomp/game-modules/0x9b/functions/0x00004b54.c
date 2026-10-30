
void FUN_00004b54(undefined1 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  if (param_6 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_6;
  }
  if (param_7 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_7;
  }
  DAT_00020458 = param_1;
  if (((*(int *)(param_3 + 0xc) == 0) ||
      (local_18 = uVar3, local_10 = uVar2,
      cVar1 = FUN_000072b0(param_1,param_4 + (ulong)*(uint *)(param_3 + 8),*(int *)(param_3 + 0xc),
                           &local_18,&local_10), uVar2 = local_10, uVar3 = local_18, cVar1 != '\0'))
     && (cVar1 = FUN_00004a40(param_2,*(undefined4 *)(param_3 + 0x10),
                              *(undefined4 *)(param_3 + 0x14),param_4,uVar3,uVar2,param_8),
        cVar1 != '\0')) {
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = uVar3;
    }
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = uVar2;
    }
  }
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54();
  }
  return;
}
