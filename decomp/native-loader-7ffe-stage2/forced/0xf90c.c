
char FUN_0000f90c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char local_1;
  
  local_1 = '\x01';
  puVar2 = (undefined4 *)FUN_0000f850(0,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = FUN_0000fb2c();
    local_1 = FUN_000018dc(0,0,uVar1,0x10,0x3c,1,1,param_2,0,0);
  }
  if (local_1 != '\0') {
    FUN_0000bc40(puVar2,0,0x18);
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2[4] = param_4;
    if ((param_5 & 2) != 0) {
      puVar2[1] = puVar2[1] | 0x100;
    }
  }
  return local_1;
}


