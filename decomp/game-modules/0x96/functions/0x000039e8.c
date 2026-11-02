
void FUN_000039e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_11;
  undefined8 local_10;
  long local_8;
  
  local_10 = 0;
  local_8 = *(long *)PTR_DAT_00029e38;
  DAT_0002a1e1 = '\0';
  DAT_0002a1e4 = 0;
  DAT_0002a1e8 = 0;
  DAT_0002a1e0 = 0;
  local_11 = '\0';
  uVar2 = FUN_000036e8();
  cVar1 = FUN_0000e45c();
  if (cVar1 == '\0') {
    cVar1 = FUN_000036f4(uVar2,param_1,param_2,&local_10,&local_11);
    if (cVar1 != '\0') goto LAB_00003a48;
LAB_00003ac4:
    if ((local_11 != '\0') || (iVar3 = FUN_000036e8(), iVar3 != 3)) goto LAB_00003a74;
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_00003a74;
    }
  }
  else {
LAB_00003a48:
    DAT_0002a1e0 = 1;
    DAT_0002a1e1 = local_11;
    if (local_11 != '\0') {
      cVar1 = '\x01';
      DAT_0002a1e8 = local_10;
      DAT_0002a1e4 = uVar2;
      FUN_00010f38(&DAT_0002a1f0,param_1);
      goto LAB_00003ac4;
    }
    iVar3 = FUN_000036e8();
    cVar1 = '\x01';
    if (iVar3 != 3) goto LAB_00003a74;
  }
  cVar1 = FUN_0000e45c();
  if ((cVar1 == '\0') &&
     (cVar1 = FUN_000036f4(4,param_1,param_2,&local_10,&local_11), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    DAT_0002a1e1 = local_11;
    DAT_0002a1e0 = 1;
    cVar1 = '\x01';
    if (local_11 != '\0') {
      DAT_0002a1e8 = local_10;
      cVar1 = '\x01';
      DAT_0002a1e4 = 4;
      FUN_00010f38(&DAT_0002a1f0,param_1);
    }
  }
LAB_00003a74:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
