
undefined8 FUN_00008d20(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = DAT_0002a658;
  puVar1 = PTR_LAB_00029fe0;
  if (DAT_0002a658 == (undefined *)0x0) {
    DAT_0002a658 = PTR_LAB_00029fe0;
    uVar3 = FUN_00008cdc();
    FUN_00010a04(param_1,puVar1,uVar3);
  }
  else {
    uVar3 = FUN_00008cdc();
    FUN_00010a04(param_1,puVar2,uVar3);
  }
  if (DAT_0002a658 == (undefined *)0x0) {
    DAT_0002a658 = PTR_LAB_00029fe0;
  }
  puVar1 = DAT_0002a658;
  *(undefined4 *)(PTR_DAT_00029e00 + (param_1 - (long)DAT_0002a658)) = *param_2;
  *(undefined4 *)(PTR_DAT_00029fd0 + (param_1 - (long)puVar1)) = param_2[1];
  *(undefined8 *)(PTR_DAT_00029e28 + (param_1 - (long)puVar1)) = param_3;
  return 1;
}
