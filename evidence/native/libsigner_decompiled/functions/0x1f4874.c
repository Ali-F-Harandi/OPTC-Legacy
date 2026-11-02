// rea decompile_all
// name: FUN_001f4874
// address: 0x1f4874
// body: available
// range: 0x1f4874-0x1f4c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f4874(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong unaff_10000019;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint in_w10;
  ulong uVar8;
  long lVar9;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long local_68;
  
  lVar2 = -0x3768c81d078975fb;
  if (param_3 != 0) {
    lVar2 = 0x52cde6c2dea1be4;
  }
  uVar6 = param_2;
  lVar4 = -0x3768c81d078975fb;
  lVar3 = 0x312910f1547c7c77;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          lVar9 = lVar3;
          uVar8 = unaff_10000019;
          lVar7 = lVar4;
          uVar5 = uVar6 & 0xffffffff;
          uVar6 = uVar5;
          lVar4 = lVar7;
          if (0x5039187a35dab08c < lVar9) break;
          if (lVar9 < 0x52cde6c2dea1be4) {
            unaff_10000019 = (ulong)in_w10;
            lVar3 = 0x5039187a35dab08d;
            if ((lVar9 != -0x579a549dca8d1ccf) &&
               (unaff_10000019 = (ulong)in_w10, lVar3 = lVar9, lVar9 == -0x3768c81d078975fb)) {
              unaff_10000019 = (ulong)in_w10;
              lVar3 = 0x5039187a35dab08d;
            }
          }
          else if (lVar9 == 0x52cde6c2dea1be4) {
            in_w10 = *(uint *)(param_1 + 0x40);
            lVar4 = 0;
            unaff_10000019 = (ulong)in_w10;
            lVar3 = 0x49b9b00eeff4c15a;
          }
          else {
            unaff_10000019 = (ulong)in_w10;
            lVar3 = lVar2;
            if ((lVar9 != 0x312910f1547c7c77) &&
               (unaff_10000019 = (ulong)in_w10, lVar3 = lVar9, lVar9 == 0x49b9b00eeff4c15a)) {
              *(undefined1 *)(param_1 + (ulong)in_w10) = *(undefined1 *)(param_2 + lVar7);
              uVar1 = *(int *)(param_1 + 0x40) + 1;
              unaff_x25 = (ulong)uVar1;
              lVar3 = 0x58b842c6f86d5804;
              if (uVar1 != 0x40) {
                lVar3 = 0x5ece82223eee3411;
              }
              *(uint *)(param_1 + 0x40) = uVar1;
              unaff_10000019 = (ulong)in_w10;
              local_68 = lVar7;
            }
          }
        }
        if (lVar9 < 0x75df443d79079721) break;
        in_w10 = (uint)unaff_x24;
        lVar4 = unaff_x26;
        unaff_10000019 = unaff_x24 & 0xffffffff;
        lVar3 = 0x49b9b00eeff4c15a;
        if ((lVar9 != 0x75df443d79079721) &&
           (in_w10 = (uint)uVar8, lVar4 = lVar7, unaff_10000019 = uVar8 & 0xffffffff, lVar3 = lVar9,
           lVar9 == 0x7e713fa43f38c582)) {
          unaff_x26 = local_68 + 1;
          unaff_10000019 = uVar8 & 0xffffffff;
          lVar3 = -0x579a549dca8d1ccf;
          unaff_x24 = uVar5;
          if (unaff_x26 != param_3) {
            lVar3 = 0x75df443d79079721;
          }
        }
      }
      if (lVar9 != 0x58b842c6f86d5804) break;
      FUN_001f3c78(param_1,param_1);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x200;
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar6 = 0;
      unaff_10000019 = uVar8 & 0xffffffff;
      lVar3 = 0x7e713fa43f38c582;
    }
    uVar6 = unaff_x25 & 0xffffffff;
    unaff_10000019 = (ulong)in_w10;
    lVar3 = 0x7e713fa43f38c582;
  } while ((lVar9 == 0x5ece82223eee3411) ||
          (uVar6 = uVar5, unaff_10000019 = (ulong)in_w10, lVar3 = lVar9, lVar9 != 0x5039187a35dab08d
          ));
  return;
}

