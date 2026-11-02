
void FUN_0000b8fc(long param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_0000b7e8(1,param_1,&local_18,&local_10);
  *(undefined8 *)(param_1 + 0x88) = local_18;
  *(undefined8 *)(param_1 + 0x90) = local_10;
  if (cVar1 != '\0') {
    local_18 = 0;
    local_10 = 0;
    cVar1 = FUN_0000b7e8(0,param_1,&local_18,&local_10);
    *(undefined8 *)(param_1 + 0x98) = local_18;
    *(undefined8 *)(param_1 + 0xa0) = local_10;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
