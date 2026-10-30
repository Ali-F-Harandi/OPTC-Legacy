
/* WARNING: Removing unreachable block (ram,0x00003d74) */
/* WARNING: Removing unreachable block (ram,0x00003d80) */
/* WARNING: Removing unreachable block (ram,0x00003d98) */
/* WARNING: Removing unreachable block (ram,0x00003da4) */
/* WARNING: Removing unreachable block (ram,0x00003d8c) */
/* WARNING: Removing unreachable block (ram,0x00003de4) */
/* WARNING: Removing unreachable block (ram,0x00003db0) */
/* WARNING: Removing unreachable block (ram,0x00003db4) */

void FUN_00003d2c(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_0001fe30;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00003cac();
  }
  if (lVar2 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(uVar1);
  }
  return;
}
