
char FUN_00006e98(long param_1)

{
  char cVar1;
  
  if ((*(long *)(param_1 + 0x88) == 0) && (*(long *)(param_1 + 0x98) == 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = FUN_00003e74();
    if (cVar1 == '\0') {
      cVar1 = FUN_000056a8(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00006da0(1,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_00006da0(0,param_1);
          FUN_000059f8();
          return cVar1;
        }
      }
      FUN_000059f8();
    }
    else {
      FUN_00008370();
      cVar1 = FUN_000056a8(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00006da0(1,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_00006da0(0,param_1);
        }
      }
      FUN_000059f8();
      FUN_000083d4();
    }
  }
  return cVar1;
}
