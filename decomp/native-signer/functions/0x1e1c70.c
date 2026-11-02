// rea decompile_all
// name: FUN_001e1c70
// address: 0x1e1c70
// body: available
// range: 0x1e1c70-0x1e238b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001e1c70(byte *param_1,byte *param_2,ulong param_3,byte *param_4,byte *param_5)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  byte *in_x15;
  ulong uVar17;
  byte *unaff_x21;
  uint unaff_w23;
  uint uVar18;
  byte *unaff_x25;
  byte *pbVar19;
  ulong unaff_x29;
  ulong uVar20;
  byte *local_70;
  
  uVar13 = 0x49b9b00eeff4c15a;
  uVar11 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar1 = uVar13;
  if (param_3 != 0) {
    uVar1 = 0x5ece82223eee3411;
  }
  pbVar3 = param_1;
  uVar10 = uVar1;
  uVar17 = 0x52cde6c2dea1be4;
  uVar4 = 0;
  uVar18 = 0;
  uVar5 = 0;
LAB_001e1d2c:
  while (uVar9 = uVar5, uVar12 = uVar4, uVar20 = unaff_x29, uVar16 = uVar17, pbVar19 = unaff_x25,
        pbVar8 = param_4, pbVar7 = pbVar3, pbVar3 = pbVar7, param_4 = pbVar8, unaff_x25 = unaff_x21,
        uVar17 = uVar16, unaff_x29 = uVar20, uVar4 = uVar12, uVar5 = uVar9,
        (long)uVar16 < 0x49b9b00eeff4c15a) {
    if ((long)uVar16 < -0x378643ce451a44ec) {
      if ((long)uVar16 < -0x579a549dca8d1ccf) {
        pbVar3 = param_5;
        param_4 = in_x15;
        unaff_x25 = pbVar19;
        uVar17 = 0x75df443d79079721;
        unaff_x29 = uVar13;
        uVar5 = uVar14;
        if ((uVar16 != 0x8e3a3d610d847caf) &&
           (pbVar3 = pbVar7, param_4 = pbVar8, pbVar19 = in_x15, uVar17 = uVar16, unaff_x29 = uVar20
           , uVar5 = uVar9, uVar16 == 0x960858df0b0de441)) {
LAB_001e2284:
          pbVar3 = pbVar7;
          param_4 = pbVar8;
          unaff_x25 = pbVar19;
          uVar17 = 0x36f07785a64d7584;
          unaff_x29 = uVar20;
          uVar4 = 0;
          uVar5 = uVar9;
        }
      }
      else {
        uVar17 = 0x36f07785a64d7584;
        uVar4 = uVar18;
        if ((uVar16 != 0xa865ab623572e331) &&
           (unaff_x25 = pbVar19, uVar17 = uVar16, uVar4 = uVar12, uVar16 == 0xba8fbc7d3623138d)) {
          uVar17 = 0x418b7d3c908df894;
        }
      }
    }
    else if ((long)uVar16 < 0x36f07785a64d7584) {
      unaff_x25 = pbVar19;
      uVar17 = 0x418b7d3c908df894;
      if (((uVar16 != 0xedbefc38c6cf9bfe) && (uVar17 = uVar1, uVar16 != 0x52cde6c2dea1be4)) &&
         (uVar17 = uVar16, uVar16 == 0xc879bc31bae5bb14)) {
        return uVar10 & 0xffffffff;
      }
    }
    else {
      if (uVar16 == 0x36f07785a64d7584) {
        bVar2 = *pbVar19;
        if (0xffffffe5 < uVar12 - 0x5b) {
          uVar12 = uVar12 | 0x20;
        }
        uVar9 = (uint)bVar2;
        if (0xffffffe5 < bVar2 - 0x5b) {
          uVar9 = bVar2 | 0x20;
        }
        uVar10 = (ulong)(uVar12 - uVar9);
        goto LAB_001e234c;
      }
      unaff_x25 = pbVar19;
      if (uVar16 == 0x418b7d3c908df894) {
        param_5 = local_70 + 1;
        uVar14 = (uint)*param_5;
        in_x15 = unaff_x21 + 1;
        uVar16 = 0x8e3a3d610d847caf;
        uVar17 = 0x960858df0b0de441;
        uVar12 = uVar14;
        goto LAB_001e1d20;
      }
    }
  }
  if ((long)uVar16 < 0x75df443d79079721) {
    if (0x58b842c6f86d5803 < (long)uVar16) {
      pbVar3 = param_1;
      param_4 = param_2;
      unaff_x25 = pbVar19;
      uVar17 = 0x75df443d79079721;
      unaff_x29 = param_3;
      uVar5 = uVar11;
      if ((uVar16 != 0x58b842c6f86d5804) &&
         (pbVar3 = pbVar7, param_4 = pbVar8, uVar17 = uVar16, unaff_x29 = uVar20, uVar5 = uVar9,
         uVar16 == 0x5ece82223eee3411)) {
        uVar11 = (uint)*param_1;
        uVar16 = 0x58b842c6f86d5804;
        uVar17 = 0x7e713fa43f38c582;
        uVar12 = uVar11;
LAB_001e1d20:
        pbVar3 = pbVar7;
        param_4 = pbVar8;
        unaff_x25 = pbVar19;
        unaff_x29 = uVar20;
        uVar5 = uVar9;
        if (uVar12 != 0) {
          uVar17 = uVar16;
        }
      }
      goto LAB_001e1d2c;
    }
    if (uVar16 == 0x49b9b00eeff4c15a) {
      uVar10 = 0;
LAB_001e234c:
      unaff_x25 = pbVar19;
      uVar17 = 0xc879bc31bae5bb14;
      goto LAB_001e1d2c;
    }
    unaff_x25 = pbVar19;
    if (uVar16 != 0x5039187a35dab08d) goto LAB_001e1d2c;
    uVar17 = 0xedbefc38c6cf9bfe;
    uVar16 = 0x77f0428eaa711148;
    bVar6 = uVar18 == uVar15;
  }
  else {
    if (0x7d8bf94548220fb7 < (long)uVar16) {
      uVar17 = 0x36f07785a64d7584;
      uVar4 = uVar18;
      if ((uVar16 != 0x7d8bf94548220fb8) &&
         (unaff_x25 = pbVar19, pbVar19 = param_2, uVar17 = uVar16, uVar4 = uVar12,
         uVar16 == 0x7e713fa43f38c582)) goto LAB_001e2284;
      goto LAB_001e1d2c;
    }
    if (uVar16 == 0x75df443d79079721) {
      uVar15 = (uint)*pbVar8;
      uVar13 = uVar20 - 1;
      unaff_x21 = pbVar8;
      unaff_x25 = pbVar19;
      uVar17 = 0x5039187a35dab08d;
      uVar18 = uVar9;
      local_70 = pbVar7;
      unaff_w23 = uVar9;
      if (uVar13 == 0 || uVar15 == 0) {
        uVar17 = 0xa865ab623572e331;
      }
      goto LAB_001e1d2c;
    }
    unaff_x25 = pbVar19;
    if (uVar16 != 0x77f0428eaa711148) goto LAB_001e1d2c;
    uVar12 = unaff_w23;
    if (0xffffffe5 < unaff_w23 - 0x5b) {
      uVar12 = unaff_w23 | 0x20;
    }
    uVar9 = uVar15;
    if (0xffffffe5 < uVar15 - 0x5b) {
      uVar9 = uVar15 | 0x20;
    }
    bVar6 = uVar12 == uVar9;
    uVar17 = 0xba8fbc7d3623138d;
    uVar16 = 0x7d8bf94548220fb8;
  }
  unaff_x25 = pbVar19;
  if (!bVar6) {
    uVar17 = uVar16;
  }
  goto LAB_001e1d2c;
}

