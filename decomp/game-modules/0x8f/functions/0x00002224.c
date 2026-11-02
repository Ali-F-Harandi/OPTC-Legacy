
void FUN_00002224(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined1 auStack_88 [128];
  long local_8;
  
  bVar1 = DAT_00020174;
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (DAT_00020174 != 0) goto LAB_00002254;
  local_c8 = 0xbc76c49c;
  local_d0 = 0x6c5c7486;
  local_cc = 0xbc547ee4;
  local_c4 = 0xcc3c;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (uint)DAT_00020174;
  uVar3 = FUN_000091ec(&local_d0,0x10);
  iVar2 = FUN_00009be8(0x4f,0xffffffffffffff9c,uVar3,auStack_88,0,0,0);
  if ((iVar2 < 0) || (iVar2 = FUN_00009c54(uVar3,0,bVar1), iVar2 < 0)) {
LAB_000023a8:
    FUN_00009234(uVar3);
  }
  else {
    lVar5 = (long)iVar2;
    lVar4 = FUN_00009be8(0x3f,lVar5,&local_c0,0x34,0,0,0);
    if (lVar4 < 0) {
      FUN_00009be8(0x39,lVar5,0,0,0,0,0);
      goto LAB_000023a8;
    }
    FUN_00009be8(0x39,lVar5,0,0,0,0,0);
    FUN_00009234(uVar3);
    if (local_b0._2_2_ == 10) {
LAB_000023e8:
      DAT_00020170 = 6;
LAB_000023f0:
      DAT_00020174 = 1;
      goto LAB_00002254;
    }
    if (10 < local_b0._2_2_) {
      if (local_b0._2_2_ == 0x3e) {
        DAT_00020170 = 2;
      }
      else if (local_b0._2_2_ == 0xb7) {
        DAT_00020170 = 5;
      }
      else {
        if (local_b0._2_2_ != 0x28) goto LAB_000023d8;
        DAT_00020170 = 3;
      }
      goto LAB_000023f0;
    }
    if (local_b0._2_2_ == 3) {
      DAT_00020170 = 1;
      goto LAB_000023f0;
    }
    if (local_b0._2_2_ == 8) goto LAB_000023e8;
LAB_000023d8:
    DAT_00020170 = 0;
  }
  DAT_00020174 = 0;
  DAT_00020174 = FUN_00001f24();
LAB_00002254:
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(DAT_00020170);
}
