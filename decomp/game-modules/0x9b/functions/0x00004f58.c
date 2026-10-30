
undefined4
FUN_00004f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (DAT_00020480 == Reset) {
    DAT_00020480 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff08);
  }
  FUN_0000b718();
  FUN_000050fc();
  uVar1 = (*DAT_00020480)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00005164();
  return uVar1;
}
