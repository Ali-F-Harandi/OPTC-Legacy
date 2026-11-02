
void FUN_00002940(char *param_1,long *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00013ff0;
  if (param_1 != (char *)0x0) {
    while (iVar2 = FUN_00002830(*param_1), iVar2 != 0) {
      param_1 = param_1 + 1;
    }
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
      local_27 = 0;
      local_28 = 0x30;
      iVar2 = FUN_00001fc0(param_1,&local_28);
    }
    else {
      if (*param_1 == '-') {
        param_1 = param_1 + 1;
      }
      local_27 = 0;
      local_28 = 0x30;
      iVar2 = FUN_00001fc0(param_1,&local_28);
    }
    if (iVar2 != 0) {
      local_18 = 0x30;
      local_17 = 0x78;
      local_16 = 0;
      lVar4 = FUN_00001f30(&local_18);
      lVar3 = FUN_00001f30(&local_28);
      if (param_3 == 0) {
        iVar2 = FUN_000020f4(param_1,&local_18,lVar4);
        if (iVar2 == 0) goto LAB_00002af4;
        param_3 = 10;
        iVar2 = FUN_000020f4(param_1,&local_28,lVar3);
        if (iVar2 == 0) goto LAB_00002b3c;
      }
      else if (param_3 == 0x10) {
LAB_00002af4:
        iVar2 = FUN_000020f4(param_1,&local_18,lVar4);
        if (iVar2 == 0) {
          param_1 = param_1 + lVar4;
          param_3 = 0x10;
        }
        else {
          param_3 = 0x10;
        }
      }
      else if (param_3 == 8) {
LAB_00002b3c:
        iVar2 = FUN_000020f4(param_1,&local_28,lVar3);
        if (iVar2 == 0) {
          param_1 = param_1 + lVar3;
        }
        param_3 = 8;
      }
      lVar4 = 0;
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        uVar5 = (uint)(byte)(cVar1 - 0x30);
        if (9 < uVar5) {
          if ((byte)(cVar1 + 0x9fU) < 0x1a) {
            uVar5 = (uint)(byte)(cVar1 + 0xa9);
          }
          else {
            if (0x19 < (byte)(cVar1 + 0xbfU)) break;
            uVar5 = (uint)(byte)(cVar1 - 0x37);
          }
        }
        if (param_3 <= (int)uVar5) break;
        param_1 = param_1 + 1;
        lVar4 = (ulong)(byte)uVar5 + param_3 * lVar4;
        cVar1 = *param_1;
      }
      if (param_2 != (long *)0x0) {
        *param_2 = (long)param_1;
      }
      goto LAB_000029d0;
    }
    if (param_2 != (long *)0x0) {
      lVar4 = 0;
      *param_2 = (long)(param_1 + 1);
      goto LAB_000029d0;
    }
  }
  lVar4 = 0;
LAB_000029d0:
  if (local_8 != *(long *)PTR_DAT_00013ff0) {
                    /* WARNING: Subroutine does not return */
    FUN_00003310(lVar4);
  }
  return;
}
