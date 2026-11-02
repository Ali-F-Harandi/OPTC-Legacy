// M3b: SD40SE_vm3 @ 0x1ef4758 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

int SD40SE_vm3(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                      (*(long **)(param_1 + 0x18),param_1 + 0x58);
    if (0 < iVar3) {
      ectorIP25MultiQuestRoomDataForListNS3_9allocatorIS6_EEEEbRNS4_IiNS7_IiEEEE
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_1 + 0x58,param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if ((int)param_3 < 1) {
    lVar4 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    uVar2 = *(ulong *)(param_1 + 0x38);
    uVar7 = *(long *)(param_1 + 0x48) + (ulong)param_3;
    uVar5 = uVar7 & 0xfffffffffffffff8;
    uVar1 = uVar5 + 8;
    if ((lVar4 == 0) || (uVar2 <= uVar1)) {
      if (lVar4 == 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        if ((lVar4 == 0) || (uVar2 < uVar1)) {
          lVar4 = glActiveTexture(uVar5 + 0x10);
          *(ulong *)(param_1 + 0x38) = uVar1;
          *(long *)(param_1 + 0x28) = lVar4;
        }
        *(long *)(param_1 + 0x30) = lVar4;
      }
      else {
        lVar4 = glActiveTexture(uVar5 + 8);
        lVar6 = *(long *)(param_1 + 0x28);
        strtoull(lVar4,lVar6,uVar2);
        if (lVar6 != 0) {
          nanosleep(lVar6);
          uVar7 = *(long *)(param_1 + 0x48) + (ulong)param_3;
        }
        *(long *)(param_1 + 0x28) = lVar4;
        *(long *)(param_1 + 0x30) = lVar4;
        *(ulong *)(param_1 + 0x38) = uVar1;
      }
    }
    *(ulong *)(param_1 + 0x48) = uVar7;
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                    (*(long **)(param_1 + 0x18),lVar4,param_3);
  if (-1 < iVar3) {
    ectorIP25MultiQuestRoomDataForListNS3_9allocatorIS6_EEEEbRNS4_IiNS7_IiEEEE
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),*(undefined8 *)(param_1 + 0x30),
               param_2,iVar3);
  }
  return iVar3;
}
