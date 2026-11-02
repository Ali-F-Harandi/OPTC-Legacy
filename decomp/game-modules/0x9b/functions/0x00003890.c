
undefined1 FUN_00003890(undefined8 *param_1,ulong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_00009ebc();
  lVar4 = FUN_00009f00(0xb9,uVar3);
  if (lVar4 == 0) {
    if (param_3 != '\0') {
      uVar2 = FUN_00003888();
      cVar1 = FUN_0000baa8(0,0,uVar2,0x10,0x27,1,1,0,0,0);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 8);
    uVar5 = (ulong)*(uint *)(lVar4 + 0x10);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uVar3;
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = uVar5;
  }
  return 1;
}
