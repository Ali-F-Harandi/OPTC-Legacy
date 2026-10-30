
void FUN_00003278(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,char *param_6,char param_7)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  bool local_1089;
  char local_1088 [32];
  undefined1 auStack_1068 [1072];
  int *local_c38 [2];
  long local_c28;
  uint local_c20;
  undefined1 auStack_c0c [1028];
  undefined1 auStack_808 [1024];
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_1089 = false;
  do {
    cVar2 = FUN_00003130(param_1,param_3,auStack_808,&local_1089);
    cVar3 = local_1089;
    if (local_1089 == false) goto LAB_00003338;
    if (cVar2 == '\0') {
      cVar3 = true;
      break;
    }
    cVar3 = FUN_0000fe78(auStack_808,auStack_408,0x400);
    if (cVar3 == '\0') {
LAB_000033f4:
      local_1089 = false;
      cVar3 = local_1089;
      break;
    }
    if (param_2 == 0) {
      cVar4 = FUN_0000df24();
    }
    else {
      cVar4 = FUN_0000f8d8(param_2);
    }
    if (cVar4 == '\0') goto LAB_000033f4;
    cVar3 = FUN_0000d388();
LAB_000033cc:
    if (param_2 == 0) goto LAB_00003534;
LAB_000033dc:
    local_1088[0] = '\0';
    cVar2 = FUN_0000f3b4(local_1088,local_c38,param_2);
    if (local_1088[0] == '\0') {
      do {
        if (cVar2 == '\0') goto LAB_000033f4;
        if (((local_c28 != 0) || ((local_c20 >> 2 & 1) == 0)) ||
           (iVar5 = FUN_00010b64(auStack_c0c,auStack_408), iVar5 != 0)) goto LAB_000033cc;
        if ((cVar3 != '\0') || ((local_c20 & 1) != 0)) {
LAB_0000342c:
          cVar3 = true;
          FUN_00010a04(auStack_1068,local_c38,0x430);
          goto joined_r0x0000354c;
        }
        if (*local_c38[0] != 0x464c457f) goto LAB_000033cc;
        if (param_7 != '\0') {
          iVar5 = thunk_FUN_000027d0(local_c38[0],local_1088);
          if (iVar5 != 0) goto LAB_0000342c;
          goto LAB_000033cc;
        }
        lVar6 = *(long *)(local_c38[0] + 8);
        if (*(ushort *)(local_c38[0] + 0xe) == 0) goto LAB_000033cc;
        piVar7 = (int *)((long)local_c38[0] + lVar6);
        if (*(int *)((long)local_c38[0] + lVar6) != 1) {
          piVar1 = (int *)((long)local_c38[0] + lVar6 + 0x38);
          do {
            piVar7 = piVar1;
            if (piVar7 == (int *)((long)local_c38[0] +
                                 lVar6 + 0x38 + (ulong)(*(ushort *)(local_c38[0] + 0xe) - 1) * 0x38)
               ) goto LAB_000033cc;
            piVar1 = piVar7 + 0xe;
          } while (*piVar7 != 1);
        }
        if ((piVar7[1] & 1U) == 0) goto LAB_0000342c;
        if (param_2 != 0) goto LAB_000033dc;
LAB_00003534:
        local_1088[0] = '\0';
        cVar2 = FUN_0000df88();
        if (local_1088[0] != '\0') break;
      } while( true );
    }
    if (cVar2 == '\0') {
      cVar3 = false;
      local_1089 = (bool)cVar3;
      break;
    }
    cVar3 = false;
joined_r0x0000354c:
    if (param_2 == 0) {
      cVar2 = FUN_0000df24();
    }
    else {
      cVar2 = FUN_0000f8d8(param_2);
    }
    local_1089 = (bool)cVar3;
    if ((bool)cVar3) {
      FUN_00010a04(local_c38,auStack_1068,0x430);
      cVar3 = local_1089;
      if ((cVar2 != '\0') && (local_1089 != false)) {
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = local_c38[0];
        }
        cVar2 = cVar4;
        if (param_5 == 0) {
          cVar3 = '\x01';
        }
        else {
          FUN_00010f38(param_5,auStack_c0c);
          cVar3 = '\x01';
        }
      }
      goto LAB_00003338;
    }
  } while (cVar2 != '\0');
  cVar2 = '\0';
LAB_00003338:
  if (param_6 != (char *)0x0) {
    *param_6 = cVar3;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar2);
}
