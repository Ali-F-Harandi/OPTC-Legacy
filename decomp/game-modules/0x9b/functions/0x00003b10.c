
undefined8 FUN_00003b10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  uVar1 = FUN_0000894c();
  FUN_0000b05c(param_1,uVar1);
  puVar2 = (undefined1 *)FUN_0000af00(param_1,0x2f);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return 1;
}
