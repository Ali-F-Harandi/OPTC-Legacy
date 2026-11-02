
void FUN_0000367c(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  char local_b1;
  long *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ulong local_88 [16];
  long local_8;
  
  local_b0 = (long *)0x0;
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_88[0] = 0;
  local_b1 = '\0';
  cVar6 = FUN_00002c80(3,&local_b0,local_88,&local_b1);
  if (local_b1 == '\0') {
    uVar9 = FUN_0000159c();
    cVar6 = FUN_00009700(0,0,uVar9,0x32,0x100,1,5,0,0,0);
    if (cVar6 != '\0') {
      if (local_b1 == '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1000,0x37f8);
        (*pcVar4)();
      }
      goto LAB_0000375c;
    }
  }
  else if (cVar6 != '\0') {
LAB_0000375c:
    plVar2 = local_b0;
    iVar8 = thunk_FUN_00001400();
    if ((int)plVar2[1] != iVar8) {
      lVar11 = *plVar2;
      do {
        if (lVar11 != -1) {
          cVar6 = FUN_00006604(local_88);
          if ((cVar6 == '\0') ||
             (cVar6 = FUN_00006500(local_88), uVar3 = local_88[0], cVar6 == '\0'))
          goto LAB_000036dc;
          lVar11 = *plVar2;
          if (DAT_00020af4 == '\0') {
            DAT_00020af4 = '\x01';
            iVar8 = FUN_00002224();
            bVar5 = false;
            if (2 < iVar8 - 3U) {
              local_94 = 0x4c7eac8c;
              local_a8 = 0x4c245c86;
              local_a4 = 0x6e84cc5c;
              local_a0 = 0x6edcac9c;
              local_9c = 0xa4dcac9c;
              local_98 = 0x9ccc4c84;
              local_90 = 0x84;
              uVar10 = FUN_000091ec(&local_a8,0x1c);
              iVar8 = FUN_00009be8(0x4f,0xffffffffffffff9c,uVar10,local_88,0,0,0);
              bVar5 = iVar8 == 0;
              FUN_00009234(uVar10);
            }
            DAT_00020af5 = bVar5;
            if (bVar5 == false) goto LAB_000037c8;
LAB_000038ac:
            local_88[0] = local_88[0] & 0xffffffffffffff00;
            cVar7 = FUN_00003a94(local_88);
            lVar1 = 3;
            if ((char)local_88[0] == '\0') {
              lVar1 = 0x3c;
            }
            if (cVar7 == '\0') goto LAB_000036dc;
            lVar11 = lVar1 + lVar11;
          }
          else {
            if (DAT_00020af5 != '\0') goto LAB_000038ac;
LAB_000037c8:
            lVar11 = lVar11 + 3;
          }
          if (lVar11 < (long)uVar3) goto LAB_000038e0;
        }
        FUN_00009c98(1);
        lVar11 = *plVar2;
      } while( true );
    }
    cVar6 = '\x01';
    goto LAB_000036e0;
  }
LAB_000036dc:
  cVar6 = '\0';
LAB_000036e0:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar6);
  }
  return;
LAB_000038e0:
  iVar8 = thunk_FUN_00001400(plVar2[2]);
  if (iVar8 != 0) {
    uVar9 = FUN_0000159c();
    cVar7 = FUN_00009700(0,0,uVar9,0x32,0x140,1,6,0,0,0);
    if (cVar7 == '\0') goto LAB_000036dc;
  }
  DAT_00020af0 = DAT_00020af0 + 1;
  goto LAB_000036e0;
}
