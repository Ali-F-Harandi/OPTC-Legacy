
void FUN_00005c60(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_00029e38;
  lVar2 = *(long *)PTR_DAT_00029e38;
  FUN_00005b28();
  if (lVar2 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(0);
}
