
undefined1 FUN_0000324c(uint param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (0xff < param_1) {
    uVar3 = FUN_0000159c();
    cVar2 = FUN_00009700(0,0,uVar3,0x36,0x51,1,2,(ulong)param_1,0,0);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  lVar1 = (ulong)param_1 * 8;
  if (param_2 == 0) {
    uVar3 = *(undefined4 *)(&DAT_000202b0 + lVar1);
  }
  else {
    uVar3 = 0;
    if (param_2 == 1) {
      uVar3 = *(undefined4 *)(&DAT_000202b4 + lVar1);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  return 1;
}
