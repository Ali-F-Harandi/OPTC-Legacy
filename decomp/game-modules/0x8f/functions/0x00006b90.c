
long FUN_00006b90(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_00006bc8(*param_3,DAT_00023598);
  return *(long *)(lVar1 + 8) + (ulong)(uint)param_3[1];
}
