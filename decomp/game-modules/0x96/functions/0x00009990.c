
void FUN_00009990(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)PTR_DAT_00029f18 = 0x18a;
  if (-1 < iVar1) {
    thunk_FUN_000027d0();
  }
  FUN_0000a980(param_1 + 4);
  thunk_FUN_000027d0(*(undefined8 *)(param_1 + 0xe));
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[2] = -1;
  param_1[3] = -1;
  *param_1 = -1;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  return;
}
