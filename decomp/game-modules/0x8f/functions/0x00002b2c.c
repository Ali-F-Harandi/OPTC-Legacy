
void FUN_00002b2c(int param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  int *piVar2;
  int local_14;
  int *local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  local_10 = (int *)0x0;
  local_14 = 0;
  cVar1 = FUN_000028d4(&local_10,&local_14);
  if ((cVar1 != '\0') && (local_14 != 0)) {
    piVar2 = local_10;
    if (*local_10 != param_1) {
      do {
        piVar2 = piVar2 + 6;
        if (piVar2 == local_10 + ((ulong)(local_14 - 1) + 1) * 6) goto LAB_00002bcc;
      } while (*piVar2 != param_1);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = piVar2;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
  }
LAB_00002bcc:
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac();
}
