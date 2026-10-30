
undefined8 FUN_00007690(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00006df0(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
    }
    FUN_00008020(param_1,0,0x28);
  }
  return 1;
}
