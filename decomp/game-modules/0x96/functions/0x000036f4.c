
void FUN_000036f4(undefined4 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 local_ca8;
  long local_ca0;
  char local_c98 [32];
  undefined8 local_c78 [134];
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 local_840;
  long local_838;
  uint local_830;
  undefined1 auStack_81c [1028];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  uVar8 = FUN_0000d120();
  thunk_FUN_000108e0(auStack_408,0,0x400);
  local_418 = 0;
  uStack_410 = 0;
  FUN_00011f30(param_1,&local_418);
  uStack_844 = 0xbe765cd6;
  local_848 = 0x6edcac9c;
  local_840 = 100;
  uVar9 = FUN_000117fc(&local_848,0xc);
  cVar5 = FUN_0000ebc8(auStack_408,0x400,uVar9,&local_418,param_2);
  FUN_00011844(uVar9);
  if (cVar5 == '\0') goto LAB_000037c4;
  local_c98[0] = '\0';
  cVar5 = FUN_000093e0(uVar8,auStack_408,local_c98);
  if (local_c98[0] == '\0') goto LAB_000037d4;
  local_ca0 = 0;
  local_ca8 = 0;
  if ((cVar5 == '\0') ||
     (cVar5 = FUN_000095a0(uVar8,auStack_408,&local_ca8,&local_ca0), lVar2 = local_ca0,
     cVar5 == '\0')) {
LAB_000037c4:
    uVar12 = 0;
    cVar5 = '\0';
  }
  else {
    uVar8 = FUN_0000d120();
    if (param_3 == 0) {
      cVar5 = FUN_0000df24();
    }
    else {
      cVar5 = FUN_0000f8d8(param_3);
    }
    if (cVar5 == '\0') goto LAB_000037c4;
LAB_00003880:
    do {
      do {
        do {
          local_c98[0] = '\0';
          if (param_3 == 0) {
            cVar5 = FUN_0000df88(local_c98,&local_848);
          }
          else {
            cVar5 = FUN_0000f3b4(local_c98,&local_848,param_3);
          }
          if (local_c98[0] != '\0') {
            uVar12 = 0;
            bVar4 = false;
            if (cVar5 != '\0') goto LAB_000038f4;
            uVar12 = 0;
            cVar5 = '\0';
            goto LAB_000037cc;
          }
          if (cVar5 == '\0') goto LAB_000037c4;
        } while (((lVar2 != local_838) || ((local_830 >> 2 & 1) == 0)) ||
                (iVar6 = FUN_00010b64(auStack_81c,uVar8), iVar6 != 0));
        uVar7 = local_830 & 1;
        if ((local_830 & 1) != 0) goto LAB_000038d8;
        piVar1 = (int *)CONCAT44(uStack_844,local_848);
      } while (*piVar1 != 0x464c457f);
      iVar6 = FUN_0000e600(5,uVar7,uVar7,uVar7);
      if (iVar6 < 0) {
        lVar11 = *(long *)(piVar1 + 8);
        if (*(ushort *)(piVar1 + 0xe) == 0) goto LAB_00003880;
        piVar10 = (int *)((long)piVar1 + lVar11);
        if (*(int *)((long)piVar1 + lVar11) != 1) {
          piVar3 = (int *)((long)piVar1 + lVar11 + 0x38);
          do {
            piVar10 = piVar3;
            if (piVar10 ==
                (int *)((long)piVar1 + lVar11 + 0x38 + (ulong)(*(ushort *)(piVar1 + 0xe) - 1) * 0x38
                       )) goto LAB_00003880;
            piVar3 = piVar10 + 0xe;
          } while (*piVar10 != 1);
        }
        uVar7 = piVar10[1] & 1;
      }
      else {
        uVar7 = thunk_FUN_000027d0(CONCAT44(uStack_844,local_848),local_c98);
      }
    } while (uVar7 != 0);
LAB_000038d8:
    uVar12 = 1;
    FUN_00010a04(local_c78,&local_848,0x430);
    bVar4 = param_4 != (undefined8 *)0x0;
LAB_000038f4:
    if (param_3 == 0) {
      cVar5 = FUN_0000df24();
    }
    else {
      cVar5 = FUN_0000f8d8(param_3);
    }
    if (bVar4) {
      *param_4 = local_c78[0];
    }
  }
LAB_000037cc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
LAB_000037d4:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar5);
}
