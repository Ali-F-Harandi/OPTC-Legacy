// M3b: SD159_vm1_unique @ 0x1ef415c (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD159_vm1_unique(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = lRam000000000419a170 + 0x10;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
    param_1[4] = 0;
  }
  if ((param_1[6] != 0) && (param_1[5] != 0)) {
    nanosleep();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  lVar2 = lRam000000000419a168;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  *param_1 = lVar2 + 0x10;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar1)();
}
