// rea decompile_all
// name: FUN_001e17a8
// address: 0x1e17a8
// body: available
// range: 0x1e17a8-0x1e1c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001e17a8(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *in_x7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *in_x15;
  byte *pbVar12;
  uint in_w16;
  uint uVar13;
  byte *pbVar14;
  byte *unaff_x24;
  byte *unaff_x30;
  byte *pbVar15;
  
  uVar8 = 0;
  uVar9 = 0;
  uVar7 = 0;
  pbVar2 = (byte *)0xd222672a639a1d2e;
  if (*param_1 != 0) {
    pbVar2 = (byte *)0x2ce2edddaf334d81;
  }
  pbVar4 = (byte *)0x2ce2edddaf334d81;
  pbVar5 = (byte *)0x353e7cd16df664a2;
  uVar6 = 0;
  uVar13 = 0;
LAB_001e1920:
  uVar10 = uVar6;
  pbVar15 = unaff_x30;
  pbVar14 = pbVar5;
  pbVar11 = pbVar4;
  pbVar4 = pbVar11;
  pbVar12 = unaff_x24;
  pbVar5 = pbVar14;
  unaff_x30 = pbVar15;
  uVar1 = uVar13;
  uVar6 = uVar10;
  if ((long)pbVar14 < -0x938e289074b7147) {
    if ((long)pbVar14 < -0x3768c81d078975fb) {
      if (pbVar14 == (byte *)0xaa46adf0a78af8c7) {
        uVar9 = (uint)*pbVar15;
        in_x7 = pbVar11;
        pbVar5 = (byte *)0xf63b36e7a9d9f670;
        unaff_x24 = pbVar15;
        uVar13 = uVar10;
        in_w16 = uVar10;
        if (uVar9 != 0) {
          pbVar5 = (byte *)0xf54c5df74fcabc41;
        }
      }
      else {
        pbVar5 = (byte *)0x1cba5f82f77e481f;
        if ((pbVar14 != (byte *)0xbf711ec4fafe862e) &&
           (pbVar5 = pbVar14, pbVar14 == (byte *)0xc23f84056fd30bd6)) {
          pbVar5 = (byte *)0x1cba5f82f77e481f;
        }
      }
      goto LAB_001e1920;
    }
    if ((long)pbVar14 < -0xab3a208b03543bf) {
      if (pbVar14 == (byte *)0xd222672a639a1d2e) {
        pbVar12 = param_2;
        uVar1 = 0;
        goto LAB_001e190c;
      }
      if (pbVar14 == (byte *)0xc89737e2f8768a05) {
        bVar3 = *in_x15;
        if (0xffffffe5 < uVar8 - 0x5b) {
          uVar8 = uVar8 | 0x20;
        }
        uVar7 = (uint)bVar3;
        if (0xffffffe5 < bVar3 - 0x5b) {
          uVar7 = bVar3 | 0x20;
        }
        return uVar8 - uVar7;
      }
      goto LAB_001e1920;
    }
    if (pbVar14 == (byte *)0xf54c5df74fcabc41) {
      pbVar5 = (byte *)0xc23f84056fd30bd6;
      if (uVar13 != uVar9) {
        pbVar5 = (byte *)0xf6c71d76f8b48eb9;
      }
      goto LAB_001e1920;
    }
    if (pbVar14 != (byte *)0xf63b36e7a9d9f670) goto LAB_001e1920;
  }
  else {
    if ((long)pbVar14 < 0x312910f1547c7c77) {
      if (pbVar14 == (byte *)0xf6c71d76f8b48eb9) {
        uVar1 = in_w16;
        if (0xffffffe5 < in_w16 - 0x5b) {
          uVar1 = in_w16 | 0x20;
        }
        uVar10 = uVar9;
        if (0xffffffe5 < uVar9 - 0x5b) {
          uVar10 = uVar9 | 0x20;
        }
        pbVar5 = (byte *)0xbf711ec4fafe862e;
        if (uVar1 != uVar10) {
          pbVar5 = (byte *)0x6b5051bf1aed633d;
        }
      }
      else if (pbVar14 == (byte *)0x1cba5f82f77e481f) {
        param_3 = unaff_x24 + 1;
        param_4 = in_x7 + 1;
        uVar7 = (uint)*param_4;
        pbVar5 = (byte *)0x312910f1547c7c77;
        if (uVar7 != 0) {
          pbVar5 = (byte *)0x3b36a7a007b21166;
        }
      }
      else if (pbVar14 == (byte *)0x2ce2edddaf334d81) {
        pbVar4 = param_1;
        pbVar5 = (byte *)0xaa46adf0a78af8c7;
        unaff_x30 = param_2;
        uVar6 = (uint)*param_1;
      }
      goto LAB_001e1920;
    }
    if ((long)pbVar14 < 0x3b36a7a007b21166) {
      if (pbVar14 == (byte *)0x312910f1547c7c77) {
        pbVar12 = param_3;
        uVar1 = 0;
        goto LAB_001e190c;
      }
      if (pbVar14 == (byte *)0x353e7cd16df664a2) {
        pbVar5 = pbVar2;
      }
      goto LAB_001e1920;
    }
    pbVar4 = param_4;
    pbVar5 = (byte *)0xaa46adf0a78af8c7;
    unaff_x30 = param_3;
    uVar6 = uVar7;
    if ((pbVar14 == (byte *)0x3b36a7a007b21166) ||
       (pbVar4 = pbVar11, pbVar5 = pbVar14, unaff_x30 = pbVar15, uVar6 = uVar10,
       pbVar14 != (byte *)0x6b5051bf1aed633d)) goto LAB_001e1920;
  }
LAB_001e190c:
  uVar8 = uVar1;
  pbVar4 = pbVar11;
  in_x15 = pbVar12;
  pbVar5 = (byte *)0xc89737e2f8768a05;
  unaff_x30 = pbVar15;
  uVar6 = uVar10;
  goto LAB_001e1920;
}

