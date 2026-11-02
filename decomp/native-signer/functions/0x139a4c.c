// rea decompile_all
// name: FUN_00139a4c
// address: 0x139a4c
// body: available
// range: 0x139a4c-0x13a037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00139a4c(undefined4 *param_1,long param_2,size_t param_3,undefined8 *param_4,long *param_5,
                 size_t param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long extraout_x1;
  long lVar6;
  long lVar7;
  long extraout_x12;
  long lVar8;
  long extraout_x13;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  size_t unaff_x22;
  size_t unaff_x24;
  size_t sVar11;
  long unaff_x25;
  
  pvVar5 = calloc(param_3,8);
  lVar1 = 0x610faed26f32a93a;
  if (param_3 != 0) {
    lVar1 = 0x3d10e1b8cc520d17;
  }
  lVar2 = -0x2ae297a736a21c2d;
  if (pvVar5 == (void *)0x0) {
    lVar2 = 0x4cefb809a3e7d9f3;
  }
  lVar6 = extraout_x1;
  lVar3 = 0x7fb28ed9417ae248;
  lVar8 = extraout_x12;
  lVar4 = extraout_x13;
LAB_00139be8:
  while (sVar11 = unaff_x24, lVar10 = unaff_x21, lVar9 = lVar4, lVar7 = lVar3, lVar3 = lVar7,
        lVar4 = lVar9, unaff_x21 = lVar10, unaff_x24 = sVar11, 0xd8b7472d7b4043 < lVar7) {
    if (lVar7 < 0x4cefb809a3e7d9f3) {
      if (lVar7 < 0x2fc946685a6eb2a9) {
        if (lVar7 == 0xd8b7472d7b4044) {
          lVar3 = 0x1a66e6eb9abbd794;
          if (*(long *)(unaff_x20 + 0x18) != 0) {
            lVar3 = 0x5528f56aeed253f8;
          }
        }
        else if ((lVar7 == 0x1a66e6eb9abbd794) &&
                (lVar3 = -0x126fdcbddaaa89c1, *(long *)(unaff_x20 + 0x20) != 0)) {
          lVar3 = -0x27a6ecafdb214d20;
        }
      }
      else {
        lVar3 = -0x7b2cb4980176d2bf;
        lVar4 = lVar8;
        unaff_x24 = unaff_x22;
        if (lVar7 != 0x3780312734d49f35) {
          if (lVar7 == 0x3d10e1b8cc520d17) {
            lVar4 = 0;
            unaff_x24 = 0;
          }
          else {
            lVar3 = lVar7;
            lVar4 = lVar9;
            unaff_x24 = sVar11;
            if (lVar7 == 0x2fc946685a6eb2a9) {
              return pvVar5 != (void *)0x0;
            }
          }
        }
      }
    }
    else if (lVar7 < 0x610faed26f32a93a) {
      if (lVar7 == 0x4cefb809a3e7d9f3) {
        *param_1 = 2;
        lVar3 = 0x2fc946685a6eb2a9;
      }
      else if (lVar7 == 0x5528f56aeed253f8) goto LAB_00139ecc;
    }
    else if (lVar7 == 0x610faed26f32a93a) {
      lVar3 = 0x598be0cfe2805d;
      unaff_x21 = 0;
    }
    else {
      lVar3 = 0x598be0cfe2805d;
      unaff_x21 = lVar8;
      if ((lVar7 != 0x682a093298f73402) &&
         (lVar3 = lVar7, unaff_x21 = lVar10, lVar7 == 0x7fb28ed9417ae248)) {
        lVar3 = lVar2;
      }
    }
  }
  if (lVar7 < -0x2ae297a736a21c2d) {
    if (lVar7 < -0x497fe4234525e96c) {
      if (lVar7 == -0x7b2cb4980176d2bf) {
        unaff_x20 = *(long *)(param_2 + sVar11 * 8);
        param_6 = sVar11;
        lVar3 = 0xd8b7472d7b4044;
        unaff_x25 = lVar9;
        if (*(long *)(unaff_x20 + 8) != 0) {
          lVar3 = -0x4aa1198e7308fed2;
        }
        goto LAB_00139be8;
      }
      if (lVar7 != -0x4aa1198e7308fed2) goto LAB_00139be8;
    }
    else {
      if (lVar7 == -0x497fe4234525e96c) {
        unaff_x22 = param_6 + 1;
        lVar3 = 0x682a093298f73402;
        lVar8 = lVar6;
        if (unaff_x22 != param_3) {
          lVar3 = 0x3780312734d49f35;
        }
        goto LAB_00139be8;
      }
      if (lVar7 != -0x45df3d6d9e01d42f) goto LAB_00139be8;
    }
  }
  else {
    if (-0x2357dad5578612c7 < lVar7) {
      if (lVar7 == -0x2357dad5578612c6) {
        lVar6 = unaff_x25 + 1;
        *(long *)((long)pvVar5 + unaff_x25 * 8) = unaff_x20;
        lVar3 = -0x497fe4234525e96c;
      }
      else if (lVar7 == -0x126fdcbddaaa89c1) {
        lVar3 = -0x2357dad5578612c6;
        if (*(long *)(unaff_x20 + 0x28) != 10) {
          lVar3 = -0x45df3d6d9e01d42f;
        }
      }
      else if (lVar7 == 0x598be0cfe2805d) {
        *param_4 = pvVar5;
        *param_5 = lVar10;
        lVar3 = 0x2fc946685a6eb2a9;
      }
      goto LAB_00139be8;
    }
    lVar3 = lVar1;
    if ((lVar7 == -0x2ae297a736a21c2d) || (lVar3 = lVar7, lVar7 != -0x27a6ecafdb214d20))
    goto LAB_00139be8;
  }
LAB_00139ecc:
  lVar6 = unaff_x25;
  lVar3 = -0x497fe4234525e96c;
  goto LAB_00139be8;
}

