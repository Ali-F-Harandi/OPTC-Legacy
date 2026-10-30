
void FUN_00001890(undefined1 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined4 local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  char local_4b8 [128];
  undefined1 auStack_438 [44];
  undefined1 auStack_40c [1028];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar1 = FUN_00004d00();
  uVar11 = 0;
  if (cVar1 != '\0') {
    thunk_FUN_00008020(auStack_438,0,0x430);
LAB_00001900:
    do {
      do {
        do {
          do {
            local_4b8[0] = '\0';
            cVar1 = FUN_00004d10(local_4b8,auStack_438);
            if ((local_4b8[0] != '\0') || (cVar1 == '\0')) {
              uVar11 = 0;
              goto LAB_00001924;
            }
            DAT_0001f940 = local_4b8[0];
            local_4bc = 0;
            local_4c0 = 0x8c6cec8e;
            uVar5 = FUN_000091ec(&local_4c0,8);
            iVar3 = FUN_00008450(auStack_40c,uVar5);
            FUN_00009234(uVar5);
          } while (iVar3 != 0);
          uVar5 = FUN_00001674();
          lVar6 = FUN_00008594(auStack_40c,uVar5);
        } while (lVar6 == 0);
        uVar4 = FUN_0000184c(*(undefined1 *)(lVar6 + -1));
      } while ((uVar4 & 0xff) != 0);
      local_4c8 = 0x8c6cec8e;
      local_4c4 = uVar4 & 0xff;
      uVar7 = FUN_000091ec(&local_4c8,8);
      lVar8 = FUN_00008214(uVar5);
      iVar3 = FUN_000082a4(lVar6 + lVar8,uVar7);
      if (iVar3 == 0) {
LAB_00001a18:
        FUN_00009234(uVar7);
      }
      else {
        cVar2 = FUN_0000184c(*(undefined1 *)(lVar6 + lVar8));
        if (cVar2 != '\0') {
          FUN_00009234(uVar7);
          goto LAB_00001900;
        }
        lVar8 = FUN_0000851c(auStack_40c,0x2f);
        if ((lVar8 != 0) && (lVar8 = lVar8 + 1, lVar6 == lVar8)) goto LAB_00001a18;
        local_4bc = 0xfc5c;
        local_4c0 = 0x9c8c7464;
        uVar5 = FUN_000091ec(&local_4c0,8);
        uVar10 = FUN_00008214();
        iVar3 = FUN_00008244(lVar8,uVar5,uVar10);
        FUN_00009234(uVar5);
        FUN_00009234(uVar7);
        if (iVar3 == 0) goto LAB_00001900;
      }
      iVar3 = FUN_00009be8(0x4f,0xffffffffffffff9c,auStack_40c,local_4b8,0,0,0);
    } while (iVar3 != 0);
    uVar9 = FUN_00008214(auStack_40c);
    if (0x3ff < uVar9) {
      uVar9 = 0x3ff;
    }
    FUN_000086e4(&DAT_0001f940,auStack_40c,uVar9);
    (&DAT_0001f940)[uVar9] = (char)iVar3;
    uVar11 = 1;
  }
LAB_00001924:
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = uVar11;
  }
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar1);
  }
  return;
}
