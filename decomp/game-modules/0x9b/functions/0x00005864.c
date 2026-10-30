
void FUN_00005864(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char local_9;
  long local_8;
  
  local_9 = '\0';
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar4 = *(long *)(param_1 + 0x20);
  lVar1 = FUN_0000542c(param_1,0x6ffffff0,&local_9,0);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (local_9 == '\0') {
    lVar3 = 0;
    lVar4 = 0;
    lVar1 = lVar3;
  }
  else {
    lVar4 = lVar4 + lVar1;
    lVar3 = *(long *)(param_1 + 0xb0) << 1;
    lVar1 = *(long *)(param_1 + 0xb0);
  }
  *(long *)(param_1 + 200) = lVar4;
  *(long *)(param_1 + 0xd0) = lVar1;
  *(long *)(param_1 + 0xd8) = lVar3;
  local_9 = '\0';
  lVar4 = *(long *)(param_1 + 0x20);
  lVar1 = FUN_0000542c(param_1,0x6ffffffc,&local_9,0);
  if (lVar1 == 0) {
    if (local_9 != '\0') {
      lVar1 = 0;
      goto LAB_0000599c;
    }
  }
  else {
    lVar1 = *(long *)(lVar1 + 8);
    if (local_9 != '\0') {
LAB_0000599c:
      lVar4 = lVar4 + lVar1;
      lVar1 = FUN_0000542c(param_1,0x6ffffffd,0,0);
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar1 + 8);
      }
      uVar2 = FUN_00005740(lVar4,uVar5);
      goto LAB_0000590c;
    }
  }
  uVar2 = 0;
  lVar4 = 0;
  uVar5 = uVar2;
LAB_0000590c:
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  *(long *)(param_1 + 0xe0) = lVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  local_9 = '\0';
  lVar4 = *(long *)(param_1 + 0x20);
  lVar1 = FUN_0000542c(param_1,0x6ffffffe,&local_9,0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (local_9 == '\0') {
    uVar2 = 0;
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 + lVar1;
    lVar1 = FUN_0000542c(param_1,0x6fffffff,0,0);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 8);
    }
    uVar2 = FUN_000057c0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(long *)(param_1 + 0xf8) = lVar4;
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(1);
}
