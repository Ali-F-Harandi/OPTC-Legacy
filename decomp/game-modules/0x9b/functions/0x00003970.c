
/* WARNING: Removing unreachable block (ram,0x000039d8) */
/* WARNING: Removing unreachable block (ram,0x000039e0) */

void FUN_00003970(void)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_0001fe30;
  cVar1 = FUN_00008870(0x200000);
  uVar2 = 1;
  if (cVar1 != '\0') {
    FUN_000088e8(1);
    uVar2 = FUN_00003d2c();
  }
  if (lVar3 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(uVar2);
  }
  return;
}
