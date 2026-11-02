
undefined8 FUN_00008894(void)

{
  undefined8 uVar1;
  
  if (DAT_000204b8 == Reset) {
    DAT_000204b8 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fea8);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_000204b8)();
  FUN_00009d54();
  return uVar1;
}
