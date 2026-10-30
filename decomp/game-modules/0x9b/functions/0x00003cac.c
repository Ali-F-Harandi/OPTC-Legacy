
void FUN_00003cac(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  local_10 = 0;
  local_19 = 0;
  local_8 = *(long *)PTR_DAT_0001fe30;
  cVar2 = FUN_000092b0(4,&local_18,&local_10,&local_19);
  uVar1 = local_18;
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uVar1;
  }
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54();
}
