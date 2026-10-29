// rea decompile_all
// name: FUN_001e1068
// address: 0x1e1068
// body: available
// range: 0x1e1068-0x1e16c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001e1068(byte *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint unaff_10000010;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint in_w7;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *in_x11;
  byte *pbVar9;
  int in_w13;
  int in_w15;
  byte *in_x16;
  byte *in_x17;
  uint unaff_w20;
  uint uVar10;
  uint uVar11;
  uint unaff_w22;
  byte *unaff_x24;
  uint unaff_w28;
  byte *unaff_x29;
  uint unaff_w30;
  int local_74;
  byte *local_70;
  
  uVar7 = 0x2ce2edddaf334d81;
  uVar2 = 0xd222672a639a1d2e;
  if (param_1 != (byte *)0x0) {
    uVar2 = uVar7;
  }
  uVar8 = 0;
  uVar11 = 0;
  pbVar4 = param_1;
  uVar3 = 0x353e7cd16df664a2;
LAB_001e1154:
  uVar6 = unaff_10000010;
  pbVar9 = in_x16;
  uVar5 = uVar3;
  uVar3 = uVar5;
  in_x16 = pbVar9;
  unaff_10000010 = uVar6;
  if ((long)uVar5 < 0x2ce2edddaf334d81) {
    if ((long)uVar5 < -0x2ddd98d59c65e2d2) {
      if ((long)uVar5 < -0x408ee13b050179d2) {
        if (uVar5 == 0xa865ab623572e331) {
          uVar1 = -in_w7;
          if (local_74 != 0) {
            uVar1 = in_w7;
          }
          uVar7 = (ulong)uVar1;
          goto LAB_001e1664;
        }
        in_w7 = uVar6;
        if (uVar5 == 0xaa46adf0a78af8c7) {
          in_x17 = pbVar9 + 1;
          uVar8 = (uint)*pbVar9;
          pbVar4 = pbVar9;
          uVar3 = 0xf54c5df74fcabc41;
          if (0xfffffffa < uVar8 - 0xe || uVar8 == 0x20) {
            uVar3 = 0xf63b36e7a9d9f670;
          }
        }
        goto LAB_001e1154;
      }
      if (uVar5 == 0xbf711ec4fafe862e) {
        uVar3 = 0x3b36a7a007b21166;
        if (uVar8 != 0x2b) {
          uVar3 = 0x1cba5f82f77e481f;
        }
        goto LAB_001e1154;
      }
      if (uVar5 == 0xc23f84056fd30bd6) {
        uVar3 = 0xbf711ec4fafe862e;
        if (',' < (char)uVar8) {
          uVar3 = 0xf6c71d76f8b48eb9;
        }
        goto LAB_001e1154;
      }
      in_w7 = uVar6;
      if (uVar5 != 0xc89737e2f8768a05) goto LAB_001e1154;
      uVar11 = (uint)*in_x17;
      unaff_x29 = in_x17;
      in_w13 = in_w15;
    }
    else {
      if ((long)uVar5 < -0x938e289074b7147) {
        if (uVar5 == 0xd222672a639a1d2e) {
          uVar7 = 0;
LAB_001e1664:
          uVar3 = 0x5039187a35dab08d;
          in_w7 = uVar6;
        }
        else if (uVar5 == 0xf54c5df74fcabc41) {
          uVar3 = 0xc23f84056fd30bd6;
        }
        else {
          unaff_10000010 = in_w7;
          if (uVar5 == 0xf63b36e7a9d9f670) {
            uVar3 = 0xaa46adf0a78af8c7;
            in_x16 = in_x17;
          }
        }
        goto LAB_001e1154;
      }
      if (uVar5 == 0xf6c71d76f8b48eb9) {
        uVar3 = 0x312910f1547c7c77;
        if (uVar8 != 0x2d) {
          uVar3 = 0x6b5051bf1aed633d;
        }
        goto LAB_001e1154;
      }
      if (uVar5 == 0x52cde6c2dea1be4) {
        unaff_w30 = uVar11 - 0x30;
        uVar3 = 0x5ece82223eee3411;
        in_w7 = uVar6;
        local_74 = in_w13;
        local_70 = unaff_x29;
        if (unaff_w30 < 10) {
          uVar3 = 0x49b9b00eeff4c15a;
        }
        goto LAB_001e1154;
      }
      in_w7 = uVar6;
      if (uVar5 != 0x1cba5f82f77e481f) goto LAB_001e1154;
LAB_001e13c8:
      unaff_x29 = pbVar4;
      uVar11 = uVar8;
      in_w13 = 0;
    }
    uVar3 = 0x52cde6c2dea1be4;
    in_w7 = uVar6;
    goto LAB_001e1154;
  }
  if (0x5039187a35dab08c < (long)uVar5) {
    if ((long)uVar5 < 0x6b5051bf1aed633d) {
      if (uVar5 == 0x58b842c6f86d5804) {
        unaff_x24 = in_x11 + 1;
        unaff_w22 = *unaff_x24 - 0x30;
        param_3 = unaff_w20 * 10 - unaff_w28;
        uVar3 = 0x75df443d79079721;
        if (unaff_w22 < 10) {
          uVar3 = 0x7e713fa43f38c582;
        }
      }
      else if (uVar5 == 0x5ece82223eee3411) {
        uVar3 = 0xa865ab623572e331;
        in_w7 = 0;
        unaff_10000010 = 0;
      }
      else {
        in_w7 = uVar6;
        if (uVar5 == 0x5039187a35dab08d) {
          return uVar7 & 0xffffffff;
        }
      }
    }
    else {
      if (uVar5 == 0x6b5051bf1aed633d) goto LAB_001e13c8;
      uVar3 = 0xa865ab623572e331;
      in_w7 = param_3;
      unaff_10000010 = param_3;
      if ((uVar5 != 0x75df443d79079721) &&
         (uVar3 = uVar5, pbVar9 = unaff_x24, in_w7 = uVar6, unaff_10000010 = uVar6, uVar10 = param_3
         , uVar1 = unaff_w22, uVar5 == 0x7e713fa43f38c582)) {
LAB_001e1358:
        uVar3 = 0x58b842c6f86d5804;
        in_x11 = pbVar9;
        in_w7 = uVar6;
        unaff_10000010 = uVar6;
        unaff_w20 = uVar10;
        unaff_w28 = uVar1;
      }
    }
    goto LAB_001e1154;
  }
  if ((long)uVar5 < 0x353e7cd16df664a2) {
    uVar3 = 0xaa46adf0a78af8c7;
    in_x16 = param_1;
    in_w7 = uVar6;
    if ((uVar5 == 0x2ce2edddaf334d81) ||
       (uVar3 = uVar5, in_x16 = pbVar9, uVar5 != 0x312910f1547c7c77)) goto LAB_001e1154;
    in_w15 = 1;
  }
  else {
    uVar3 = uVar2;
    in_w7 = uVar6;
    if (uVar5 == 0x353e7cd16df664a2) goto LAB_001e1154;
    if (uVar5 != 0x3b36a7a007b21166) {
      uVar3 = uVar5;
      if (uVar5 == 0x49b9b00eeff4c15a) {
        pbVar9 = local_70;
        uVar10 = 0;
        uVar1 = unaff_w30;
        goto LAB_001e1358;
      }
      goto LAB_001e1154;
    }
    in_w15 = 0;
  }
  uVar3 = 0xc89737e2f8768a05;
  in_x16 = pbVar9;
  in_w7 = uVar6;
  goto LAB_001e1154;
}

