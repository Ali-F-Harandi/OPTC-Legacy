
void FUN_000039fc(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_14;
  long local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  cVar1 = FUN_00008870(0x200000);
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    local_10 = 0;
    uVar3 = FUN_000088e8(1);
    cVar2 = FUN_00003d2c(uVar3,&local_10);
    if (local_10 != 0) {
      if (cVar2 != '\0') {
        local_14 = 0;
        cVar2 = FUN_00004920(*(long *)(local_10 + 0x18) + *(long *)(local_10 + 0x28),
                             *(undefined8 *)(local_10 + 0x30),&local_14);
        if (cVar2 != '\0') {
          *(undefined4 *)(local_10 + 0x38) = local_14;
          local_14 = 0;
          cVar2 = FUN_00003f9c(0,&local_14,*(undefined8 *)(local_10 + 8),
                               *(undefined8 *)(local_10 + 0x18),*(undefined8 *)(local_10 + 0x28),
                               *(undefined8 *)(local_10 + 0x30));
          if (cVar2 != '\0') {
            *(undefined4 *)(local_10 + 0x3c) = local_14;
          }
        }
        if (local_10 == 0) goto LAB_00003a2c;
      }
      FUN_00003f1c(local_10);
    }
  }
LAB_00003a2c:
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(cVar2);
  }
  return;
}
