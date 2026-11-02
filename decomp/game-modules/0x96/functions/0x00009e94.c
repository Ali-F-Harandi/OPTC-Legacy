
ulong FUN_00009e94(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar1 = PTR_DAT_00029f18;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)puVar1 = 0x155;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = thunk_FUN_000027d0(param_1,0x8000,0);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_000099ec(uVar2,param_1,param_2);
    return uVar3;
  }
  puVar4 = (uint *)thunk_FUN_000027d0();
  uVar3 = 0xffffffff;
  if (*puVar4 != 0) {
    uVar3 = (ulong)*puVar4;
  }
  *(undefined4 *)PTR_DAT_00029f18 = 0x15c;
  return uVar3;
}
