
void FUN_00003374(void)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  char local_19;
  long *local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = (long *)0x0;
  local_10 = 0;
  local_19 = '\0';
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar2 = FUN_00002c80(3,&local_18,&local_10,&local_19);
  if (cVar2 == '\0') {
LAB_0000345c:
    cVar2 = '\0';
  }
  else {
    plVar6 = local_18;
    if (local_19 == '\0') {
      DAT_00020ac0 = &DAT_00020ac8;
      cVar3 = FUN_00002e04(3,&DAT_00020ab0,0x40);
      if (cVar3 == '\0') goto LAB_0000345c;
      iVar4 = thunk_FUN_00001400(DAT_00020ac0,0);
      plVar6 = &DAT_00020ab0;
      if (iVar4 != 0) {
        uVar5 = FUN_0000159c();
        cVar3 = FUN_00009700(0,0,uVar5,0x32,0x5f,1,1,0,0,0);
        if (cVar3 == '\0') goto LAB_0000345c;
      }
    }
    if ((*plVar6 == -1) &&
       (lVar1 = plVar6[1], iVar4 = FUN_00009be8(0xb2,0,0,0,0,0,0), (int)lVar1 == iVar4))
    goto LAB_00003460;
    iVar4 = thunk_FUN_00001400(plVar6[2]);
    if (iVar4 != 0) {
      uVar5 = FUN_0000159c();
      cVar3 = FUN_00009700(0,0,uVar5,0x32,0x72,1,2,0,0,0);
      if (cVar3 == '\0') goto LAB_0000345c;
    }
    *plVar6 = -1;
    DAT_00020af0 = DAT_00020af0 + 1;
    uVar5 = FUN_00009be8(0xb2,0,0,0,0,0,0);
    *(undefined4 *)(plVar6 + 1) = uVar5;
  }
LAB_00003460:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar2);
  }
  return;
}
