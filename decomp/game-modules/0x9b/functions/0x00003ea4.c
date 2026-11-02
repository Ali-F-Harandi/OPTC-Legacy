
void FUN_00003ea4(long param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  local_10 = 0;
  local_8 = *(long *)PTR_DAT_0001fe30;
  cVar1 = *(char *)(param_1 + 1);
  while (cVar1 != '\0') {
    FUN_0000bf1c(&local_18,0);
    cVar1 = *(char *)(param_1 + 1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54();
  }
  return;
}
