
code * FUN_00005ca8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar4 = FUN_0000c2d8(param_1);
  if (lVar4 == 0) {
    pcVar5 = Reset;
  }
  else {
    iVar3 = (int)(uint)*(byte *)(lVar4 + 4) >> 4;
    uVar1 = (undefined1)iVar3;
    if (iVar3 == 0) {
      pcVar5 = Reset;
    }
    else if (*(long *)(lVar4 + 8) == 0) {
      uVar1 = 0;
      pcVar5 = Reset;
    }
    else {
      uVar1 = 1;
      pcVar5 = (code *)FUN_0000c258(param_1);
    }
    iVar3 = FUN_0000e600(5,0,0,0);
    if (-1 < iVar3) {
      cVar2 = FUN_000035ec();
      if ((cVar2 == '\0') && ((*(byte *)(lVar4 + 4) & 0xf) == 10)) {
        iVar3 = FUN_0000e600(0xc,0,0,0);
        if (iVar3 < 0) {
          pcVar5 = (code *)(*pcVar5)();
          uVar1 = pcVar5 != Reset;
        }
        else {
          pcVar5 = Reset;
          uVar1 = 0;
        }
      }
    }
    if (param_3 == (undefined1 *)0x0) {
      return pcVar5;
    }
    *param_3 = uVar1;
  }
  return pcVar5;
}
