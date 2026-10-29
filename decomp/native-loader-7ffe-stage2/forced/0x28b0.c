
/* WARNING: Removing unreachable block (ram,0x0000295c) */
/* WARNING: Removing unreachable block (ram,0x0000296c) */
/* WARNING: Removing unreachable block (ram,0x00002980) */
/* WARNING: Removing unreachable block (ram,0x00002990) */

undefined1
FORCED_0x28b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined1 uStack000000000000000f;
  undefined1 *puStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack000000000000000f = param_7;
  puStack0000000000000010 = param_6;
  uStack0000000000000018 = param_5;
  uStack0000000000000020 = param_4;
  uStack0000000000000028 = param_3;
  uStack0000000000000030 = param_2;
  uStack0000000000000038 = param_1;
  uVar1 = FUN_00002754(param_1,param_2,param_3,&stack0x00000048,&stack0x0000047f,param_7);
  if (puStack0000000000000010 != (undefined1 *)0x0) {
    *puStack0000000000000010 = 0;
  }
  return uVar1;
}


