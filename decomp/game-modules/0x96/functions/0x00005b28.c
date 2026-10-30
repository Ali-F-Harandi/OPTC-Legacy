
int * FUN_00005b28(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 != 0) {
    piVar3 = *(int **)(param_1 + 0xa8);
    uVar5 = (uint)*(undefined8 *)(param_1 + 0xb0);
    if ((uVar5 != 0) && (uVar4 = (uint)(piVar3 == (int *)0x0), piVar3 != (int *)0x0)) {
      lVar6 = *(long *)(param_1 + 0xb8);
      uVar7 = *(undefined8 *)(param_1 + 0xc0);
      if ((lVar6 != 0) && (0 < (int)uVar5)) {
        do {
          if (((*piVar3 != 0) && (lVar2 = FUN_0000cef8(*piVar3,lVar6,uVar7), lVar2 != 0)) &&
             (iVar1 = FUN_00010b64(param_2,lVar2), iVar1 == 0)) {
            if (param_3 == (uint *)0x0) {
              return piVar3;
            }
            *param_3 = uVar4;
            return piVar3;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 6;
        } while (uVar4 != uVar5);
      }
    }
  }
  return (int *)0x0;
}
