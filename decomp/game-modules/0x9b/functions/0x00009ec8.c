
long FUN_00009ec8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_00009f00(*param_3,DAT_00020658);
  return *(long *)(lVar1 + 8) + (ulong)(uint)param_3[1];
}
