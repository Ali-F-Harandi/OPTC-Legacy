
code * FUN_00005db8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  iVar3 = FUN_0000e600(0xc,0,0,0);
  if ((iVar3 < 0) || (cVar2 = FUN_000035ec(), cVar2 != '\0')) {
    return Reset;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar4 = FUN_0000c2d8(param_1,param_2);
  if (lVar4 == 0) {
    return Reset;
  }
  iVar3 = (int)(uint)*(byte *)(lVar4 + 4) >> 4;
  uVar1 = (undefined1)iVar3;
  if (iVar3 == 0) {
LAB_00005e60:
    pcVar5 = Reset;
    if ((*(byte *)(lVar4 + 4) & 0xf) != 10) goto LAB_00005e40;
  }
  else {
    if (*(long *)(lVar4 + 8) == 0) {
      uVar1 = 0;
      goto LAB_00005e60;
    }
    pcVar5 = (code *)FUN_0000c258(param_1);
    uVar1 = 1;
    if ((*(byte *)(lVar4 + 4) & 0xf) != 10) goto LAB_00005e40;
  }
  pcVar5 = (code *)(*pcVar5)();
  uVar1 = pcVar5 != Reset;
LAB_00005e40:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar1;
  }
  return pcVar5;
}
