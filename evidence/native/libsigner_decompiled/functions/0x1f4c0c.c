// rea decompile_all
// name: FUN_001f4c0c
// address: 0x1f4c0c
// body: available
// range: 0x1f4c0c-0x1f4fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f4c0c(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 8);
  puVar2 = (undefined1 *)((long)param_1 + (ulong)uVar6);
  uVar1 = uVar6 + 1;
  lVar3 = 0x77f0428eaa711148;
  if (0x37 < uVar6) {
    lVar3 = 0x418b7d3c908df894;
  }
  lVar4 = -0x69f7a720f4f21bbf;
  if (0x3f < uVar1) {
    lVar4 = -0x71c5c29ef27b8351;
  }
  lVar5 = -0x45704382c9dcec73;
  if (0x37 < uVar1) {
    lVar5 = 0x7d8bf94548220fb8;
  }
  *puVar2 = 0x80;
  lVar7 = -0x124103c739306402;
  do {
    while( true ) {
      while( true ) {
        while (lVar8 = lVar7, 0x36f07785a64d7583 < lVar8) {
          if (lVar8 < 0x77f0428eaa711148) {
            if (lVar8 == 0x36f07785a64d7584) {
              FUN_001f3c78(param_1,param_1);
              param_1[6] = 0;
              param_1[3] = 0;
              param_1[2] = 0;
              param_1[5] = 0;
              param_1[4] = 0;
              param_1[1] = 0;
              *param_1 = 0;
              lVar7 = -0x378643ce451a44ec;
            }
            else {
              lVar7 = lVar8;
              if (lVar8 == 0x418b7d3c908df894) {
                lVar7 = lVar4;
              }
            }
          }
          else {
            lVar7 = lVar5;
            if ((lVar8 != 0x77f0428eaa711148) && (lVar7 = lVar8, lVar8 == 0x7d8bf94548220fb8)) {
              lVar7 = -0x378643ce451a44ec;
            }
          }
        }
        if (-0x45704382c9dcec74 < lVar8) break;
        lVar7 = 0x36f07785a64d7584;
        if ((lVar8 != -0x71c5c29ef27b8351) && (lVar7 = lVar8, lVar8 == -0x69f7a720f4f21bbf)) {
          memset((void *)((long)param_1 + (ulong)uVar1),0,(ulong)(0x3e - uVar6) + 1);
          lVar7 = 0x36f07785a64d7584;
        }
      }
      if (lVar8 != -0x45704382c9dcec73) break;
      memset(puVar2 + 1,0,0x37 - (ulong)uVar6);
      lVar7 = -0x378643ce451a44ec;
    }
    lVar7 = lVar3;
  } while ((lVar8 == -0x124103c739306402) || (lVar7 = lVar8, lVar8 != -0x378643ce451a44ec));
  lVar3 = param_1[9] + (ulong)(uint)(*(int *)(param_1 + 8) << 3);
  param_1[9] = lVar3;
  *(char *)((long)param_1 + 0x3e) = (char)((ulong)lVar3 >> 8);
  *(char *)((long)param_1 + 0x3d) = (char)((ulong)lVar3 >> 0x10);
  *(char *)((long)param_1 + 0x3f) = (char)lVar3;
  *(char *)((long)param_1 + 0x3b) = (char)((ulong)lVar3 >> 0x20);
  *(char *)((long)param_1 + 0x3c) = (char)((ulong)lVar3 >> 0x18);
  *(char *)((long)param_1 + 0x3a) = (char)((ulong)lVar3 >> 0x28);
  *(char *)((long)param_1 + 0x39) = (char)((ulong)lVar3 >> 0x30);
  *(char *)(param_1 + 7) = (char)((ulong)lVar3 >> 0x38);
  FUN_001f3c78(param_1,param_1);
  *param_2 = *(undefined1 *)((long)param_1 + 0x53);
  param_2[4] = *(undefined1 *)((long)param_1 + 0x57);
  param_2[8] = *(undefined1 *)((long)param_1 + 0x5b);
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0x5f);
  param_2[0x10] = *(undefined1 *)((long)param_1 + 99);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 0x52);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 0x56);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x5a);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0x5e);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x62);
  param_2[2] = (char)((uint)*(undefined4 *)(param_1 + 10) >> 8);
  param_2[6] = (char)((uint)*(undefined4 *)((long)param_1 + 0x54) >> 8);
  param_2[10] = (char)((uint)*(undefined4 *)(param_1 + 0xb) >> 8);
  param_2[0xe] = (char)((uint)*(undefined4 *)((long)param_1 + 0x5c) >> 8);
  param_2[0x12] = (char)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
  param_2[3] = (char)*(undefined4 *)(param_1 + 10);
  param_2[7] = (char)*(undefined4 *)((long)param_1 + 0x54);
  param_2[0xb] = (char)*(undefined4 *)(param_1 + 0xb);
  param_2[0xf] = (char)*(undefined4 *)((long)param_1 + 0x5c);
  param_2[0x13] = (char)*(undefined4 *)(param_1 + 0xc);
  return;
}

