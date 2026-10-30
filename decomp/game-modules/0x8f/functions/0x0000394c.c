
/* WARNING: Type propagation algorithm not settling */

void FUN_0000394c(void)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char local_19;
  long local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_19 = '\0';
  local_18[2] = *(long *)PTR_DAT_0001cfe0;
  cVar3 = FUN_00002c80(3,local_18,local_18 + 1,&local_19);
  if (local_19 == '\0') {
    uVar5 = FUN_0000159c();
    cVar3 = FUN_00009700(0,0,uVar5,0x32,0x156,1,7,0,0,0);
    if (cVar3 != '\0') {
      if (local_19 == '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1000,0x3a4c);
        (*pcVar2)();
      }
      goto LAB_00003a04;
    }
  }
  else if (cVar3 != '\0') {
LAB_00003a04:
    lVar1 = local_18[0];
    iVar4 = thunk_FUN_00001400();
    if (*(int *)(lVar1 + 8) == iVar4) {
      cVar3 = '\x01';
    }
    else {
      iVar4 = thunk_FUN_00001400(*(undefined8 *)(lVar1 + 0x10));
      if (iVar4 != 0) {
        uVar5 = FUN_0000159c();
        cVar3 = FUN_00009700(0,0,uVar5,0x32,0x165,1,8,0,0,0);
        if (cVar3 == '\0') goto LAB_0000399c;
      }
      cVar3 = '\x01';
      DAT_00020af0 = DAT_00020af0 + -1;
    }
    goto LAB_0000399c;
  }
  cVar3 = '\0';
LAB_0000399c:
  if (local_18[2] != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar3);
  }
  return;
}
