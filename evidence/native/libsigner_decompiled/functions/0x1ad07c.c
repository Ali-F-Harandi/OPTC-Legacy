// rea decompile_all
// name: FUN_001ad07c
// address: 0x1ad07c
// body: available
// range: 0x1ad07c-0x1ad6cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ad07c(int *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  void *__ptr;
  uint *puVar6;
  long lVar7;
  long lVar8;
  void *unaff_x22;
  void *unaff_x24;
  undefined *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar6 = (uint *)*param_3;
  *param_3 = (long)(puVar6 + 2);
  auVar10 = FUN_001e53f4(*(long *)(param_2 + 8) + (ulong)*puVar6,puVar6[1]);
  pvVar5 = auVar10._0_8_;
  lVar1 = 0x6b5051bf1aed633d;
  if (pvVar5 != (void *)0x0) {
    lVar1 = -0x408ee13b050179d2;
  }
  uVar9 = 0;
  *param_4 = (long)pvVar5;
  pvVar3 = auVar10._8_8_;
  lVar8 = -0x938e289074b7147;
LAB_001ad170:
  do {
    while (lVar7 = lVar8, __ptr = pvVar3, lVar8 = lVar7, pvVar3 = __ptr, 0x418b7d3c908df893 < lVar7)
    {
      if (lVar7 < 0x6b5051bf1aed633d) {
        if (lVar7 < 0x5039187a35dab08d) {
          if (lVar7 == 0x418b7d3c908df894) {
            free(unaff_x24);
            param_4[1] = 0;
            lVar8 = -0x71c5c29ef27b8351;
          }
          else if (lVar7 == 0x49b9b00eeff4c15a) {
            lVar8 = 0x75df443d79079721;
          }
        }
        else {
          pvVar3 = unaff_x22;
          lVar8 = 0x77f0428eaa711148;
          if (((lVar7 != 0x5039187a35dab08d) &&
              (pvVar3 = __ptr, lVar8 = -0x579a549dca8d1ccf, lVar7 != 0x58b842c6f86d5804)) &&
             (lVar8 = lVar7, lVar7 == 0x5ece82223eee3411)) {
            lVar8 = 0x7e713fa43f38c582;
            bVar4 = *param_1 == 0;
            lVar7 = 0x58b842c6f86d5804;
LAB_001ad168:
            pvVar3 = __ptr;
            if (!bVar4) {
              lVar8 = lVar7;
            }
          }
        }
      }
      else if (lVar7 < 0x77f0428eaa711148) {
        lVar8 = 0x75df443d79079721;
        if ((lVar7 != 0x6b5051bf1aed633d) && (lVar8 = lVar7, lVar7 == 0x75df443d79079721)) {
          *param_1 = 2;
          lVar8 = -0x579a549dca8d1ccf;
        }
      }
      else if (lVar7 == 0x77f0428eaa711148) {
        free(__ptr);
        *param_4 = 0;
        lVar8 = 0x7d8bf94548220fb8;
      }
      else if (lVar7 == 0x7d8bf94548220fb8) {
        unaff_x24 = (void *)param_4[1];
        lVar8 = -0x45704382c9dcec73;
        if (unaff_x24 != (void *)0x0) {
          lVar8 = 0x418b7d3c908df894;
        }
      }
      else if (lVar7 == 0x7e713fa43f38c582) {
        lVar8 = -0x71c5c29ef27b8351;
      }
    }
    if (-0x938e289074b7148 < lVar7) {
      if (lVar7 < 0x1cba5f82f77e481f) {
        lVar8 = lVar1;
        if ((lVar7 != -0x938e289074b7147) && (lVar8 = lVar7, lVar7 == 0x52cde6c2dea1be4)) {
          lVar7 = FUN_001e5154(unaff_x25);
          lVar8 = 0x49b9b00eeff4c15a;
          if (lVar7 != 0) {
            lVar8 = 0x5ece82223eee3411;
          }
          param_4[1] = lVar7;
        }
      }
      else {
        pvVar3 = pvVar5;
        lVar8 = 0x77f0428eaa711148;
        if (lVar7 != 0x1cba5f82f77e481f) {
          if (lVar7 == 0x312910f1547c7c77) {
            unaff_x25 = &DAT_001030a0;
            pvVar3 = __ptr;
            lVar8 = 0x52cde6c2dea1be4;
          }
          else {
            pvVar3 = __ptr;
            lVar8 = lVar7;
            if (lVar7 == 0x3b36a7a007b21166) {
              uVar2 = *(uint *)*param_3;
              uVar9 = (ulong)uVar2;
              *param_3 = (long)((uint *)*param_3 + 1);
              lVar8 = 0x312910f1547c7c77;
              if (uVar2 != 0xffffffff) {
                lVar8 = -0x3768c81d078975fb;
              }
            }
          }
        }
      }
      goto LAB_001ad170;
    }
    if (lVar7 < -0x408ee13b050179d2) {
      if (lVar7 == -0x579a549dca8d1ccf) {
        unaff_x22 = (void *)*param_4;
        lVar7 = 0x5039187a35dab08d;
        lVar8 = -0x124103c739306402;
        bVar4 = unaff_x22 == (void *)0x0;
        goto LAB_001ad168;
      }
      lVar8 = -0x71c5c29ef27b8351;
      if ((lVar7 != -0x45704382c9dcec73) && (lVar8 = lVar7, lVar7 == -0x71c5c29ef27b8351)) {
        return;
      }
    }
    else {
      if (lVar7 == -0x408ee13b050179d2) {
        lVar8 = 0x3b36a7a007b21166;
        bVar4 = *param_1 == 0;
        lVar7 = 0x1cba5f82f77e481f;
        goto LAB_001ad168;
      }
      if (lVar7 == -0x3768c81d078975fb) {
        unaff_x25 = (undefined *)
                    (*(long *)(param_2 + 8) +
                    (ulong)*(uint *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x24) +
                                    uVar9 * 4));
        lVar8 = 0x52cde6c2dea1be4;
      }
      else if (lVar7 == -0x124103c739306402) {
        lVar8 = 0x7d8bf94548220fb8;
      }
    }
  } while( true );
}

