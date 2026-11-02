
void FUN_00011f68(long param_1)

{
  undefined *puVar1;
  undefined4 local_c;
  long local_8;
  
  puVar1 = PTR_DAT_00029e38;
  local_c = 0;
  local_8 = *(long *)PTR_DAT_00029e38;
  FUN_00011980(2,&local_c,0,param_1 + 0x12,param_1 + 4);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(local_c);
}
