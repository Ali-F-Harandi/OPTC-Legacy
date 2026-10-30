
undefined4 FUN_00004dec(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_00020468 == Reset) {
    DAT_00020468 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fed8);
  }
  FUN_0000b718();
  FUN_000050fc();
  uVar1 = (*DAT_00020468)(param_1);
  FUN_00005164();
  return uVar1;
}
