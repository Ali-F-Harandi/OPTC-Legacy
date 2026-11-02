
char FUN_0000b9b8(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_1 != 0) && (cVar2 = FUN_0000cf5c(param_1,0x40), cVar2 != '\0')) {
    cVar2 = FUN_0000cf74(param_1,0x40);
    if (cVar2 != '\0') {
      FUN_000108e0(param_3,0,0x518);
      uVar1 = *(ushort *)(param_1 + 0x12);
      *(undefined1 *)(param_3 + 0x22) = 0;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = param_1;
      param_3[3] = param_2;
      param_3[5] = param_1;
      *(uint *)((long)param_3 + 0x114) = (uint)uVar1;
      uVar4 = FUN_0000b280(param_1);
      lVar5 = *(long *)(param_1 + 0x20);
      param_3[4] = uVar4;
      if (lVar5 != 0) {
        param_3[7] = (ulong)*(ushort *)(param_1 + 0x38);
        param_3[6] = param_1 + lVar5;
      }
      cVar3 = FUN_0000aa14(param_3);
      if ((((cVar3 != '\0') && (cVar3 = FUN_0000b8fc(param_3), cVar3 != '\0')) &&
          (cVar3 = FUN_0000b48c(param_3), cVar3 != '\0')) &&
         (((cVar3 = FUN_0000b588(param_3), cVar3 != '\0' &&
           (cVar3 = FUN_0000b644(param_3), cVar3 != '\0')) &&
          (cVar3 = FUN_0000b0ac(param_3), cVar3 != '\0')))) {
        uVar4 = FUN_0000b2e0(param_3[5],param_3[6]);
        param_3[3] = uVar4;
        if (param_4 == 0) {
          return cVar2;
        }
        FUN_00010f38(param_3 + 0x23,param_4);
        return cVar2;
      }
    }
  }
  return '\0';
}
