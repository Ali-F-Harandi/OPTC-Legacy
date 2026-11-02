
void FUN_00009774(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = DAT_000235f0;
    if (DAT_000235f0 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&DAT_000235a0;
    }
    if ((param_1 < puVar1 + 2) && (puVar1 < param_1 + 2)) {
      lVar2 = 0;
      do {
        *(undefined *)((long)param_1 + lVar2) = *(undefined *)((long)puVar1 + lVar2);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x50);
      return;
    }
    uVar3 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
    uVar3 = puVar1[2];
    param_1[3] = puVar1[3];
    param_1[2] = uVar3;
    uVar3 = puVar1[4];
    param_1[5] = puVar1[5];
    param_1[4] = uVar3;
    uVar3 = puVar1[6];
    param_1[7] = puVar1[7];
    param_1[6] = uVar3;
    uVar3 = puVar1[8];
    param_1[9] = puVar1[9];
    param_1[8] = uVar3;
  }
  return;
}
