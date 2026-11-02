
void FUN_00001674(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_18;
  char local_17;
  long local_8;
  
  cVar2 = s_com_namcobandaigames_spmoja010E_0001d020[0];
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (s_com_namcobandaigames_spmoja010E_0001d020[0] == '\0') {
    local_24 = 0x9c8cd494;
    local_30 = 0x6c5c7486;
    local_2c = 0xbc547ee4;
    local_28 = 0xcc76c49c;
    local_20 = 0xcc8c;
    uVar4 = FUN_000091ec(&local_30,0x14);
    local_17 = cVar2;
    local_18 = 0x72;
    lVar5 = thunk_FUN_00001400(uVar4,&local_18);
    if (lVar5 == 0) {
      uVar3 = FUN_0000159c();
      cVar2 = FUN_00009700(0,0,uVar3,1,0x34,1,1,0,uVar4,0);
      FUN_00009234(uVar4);
      if ((cVar2 == '\0') ||
         (lVar5 = thunk_FUN_00001400(s_com_namcobandaigames_spmoja010E_0001d020,0x1000,0),
         lVar5 == 0)) goto LAB_000016a8;
    }
    else {
      FUN_00009234(uVar4);
      lVar6 = thunk_FUN_00001400(s_com_namcobandaigames_spmoja010E_0001d020,0x1000,lVar5);
      if (lVar6 == 0) {
        thunk_FUN_00001400(lVar5);
        goto LAB_000016a8;
      }
      thunk_FUN_00001400(lVar5);
    }
    uVar7 = FUN_00008214(s_com_namcobandaigames_spmoja010E_0001d020);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        bVar1 = s_com_namcobandaigames_spmoja010E_0001d020[uVar8];
        if ((((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (9 < (byte)(bVar1 - 0x30))) &&
            (bVar1 != 0x24)) && (bVar1 != 0x5f && bVar1 != 0x2e)) {
          s_com_namcobandaigames_spmoja010E_0001d020[uVar8] = bVar1 == 0x5f || bVar1 == 0x2e;
          break;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < uVar7);
    }
  }
LAB_000016a8:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(s_com_namcobandaigames_spmoja010E_0001d020);
  }
  return;
}
