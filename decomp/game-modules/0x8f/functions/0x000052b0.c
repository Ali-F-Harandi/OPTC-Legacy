
char FUN_000052b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *in_x5;
  
  cVar1 = FUN_00003374();
  if ((cVar1 != '\0') && (cVar1 = FUN_00004958(), cVar1 != '\0')) {
    FUN_00001d7c(param_1[1]);
    cVar1 = FUN_00001dbc();
    if (cVar1 != '\0') {
      uVar2 = FUN_00009be8(0xb2,0,0,0,0,0,0);
      cVar1 = FUN_00004dd4(uVar2,*param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00002428();
        *in_x5 = 0;
        if (cVar1 != '\0') {
          return cVar1;
        }
      }
    }
  }
  *in_x5 = 1;
  return '\0';
}
