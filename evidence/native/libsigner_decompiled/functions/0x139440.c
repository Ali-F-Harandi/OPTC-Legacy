// rea decompile_all
// name: FUN_00139440
// address: 0x139440
// body: available
// range: 0x139440-0x139a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00139440(long param_1,ulong param_2,long param_3,ulong param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  ulong unaff_1000001c;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long in_x10;
  uint in_w11;
  uint in_w12;
  ulong in_x13;
  ulong uVar8;
  long lVar9;
  ulong in_x15;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  uint uVar10;
  ulong unaff_x22;
  ulong unaff_x24;
  ulong uVar11;
  ulong unaff_x25;
  ulong uVar12;
  long local_68;
  
  lVar1 = -0x6c08bfbe3085a5cd;
  if (param_4 != 0 && param_2 != 0) {
    lVar1 = -0x1adc740f98df9e78;
  }
  uVar2 = param_2;
  uVar5 = param_4;
  lVar9 = -0x472a3cb215a6b92f;
LAB_0013952c:
  while( true ) {
    uVar6 = param_8;
    uVar11 = unaff_x24;
    lVar7 = lVar9;
    uVar8 = in_x13;
    uVar4 = uVar2;
    uVar12 = unaff_1000001c & 0xffffffff;
    param_8 = (uint)unaff_1000001c;
    uVar10 = (uint)in_x15;
    lVar9 = lVar7;
    unaff_1000001c = uVar12;
    in_x13 = uVar8;
    unaff_x24 = uVar11;
    if (-0x1c3f6e39f065974c < lVar7) break;
    if (lVar7 < -0x59f4ca36a0a38da8) {
      if (lVar7 < -0x7394b466da4b7ad7) {
        if (lVar7 == -0x7bfc44a9e4472ff7) {
          in_w11 = *(uint *)(in_x10 + 8);
          in_w12 = *(uint *)(in_x10 + 0x18);
          lVar7 = -0x1198fae64556e472;
          bVar3 = ((in_w12 ^ in_w11) & 0xffffff) == 0;
          lVar9 = -0x1c3f6e39f065974b;
LAB_001399ec:
          if (!bVar3) {
            lVar9 = lVar7;
          }
LAB_001399f0:
          uVar2 = uVar4 & 0xffffffff;
          unaff_1000001c = (ulong)uVar6;
          param_8 = uVar6;
        }
        else if (lVar7 == -0x7916592214a9d94f) {
          in_x10 = *(long *)(param_1 + uVar11 * 8);
          unaff_x22 = uVar4 & 0xffffffff;
          unaff_1000001c = (ulong)uVar6;
          uVar2 = uVar4 & 0xffffffff;
          uVar5 = uVar11;
          lVar9 = -0x59f4ca36a0a38da8;
          param_8 = uVar6;
          if (local_68 != *(long *)(in_x10 + 0x10)) {
            lVar9 = 0x3906d1aeb0ba19d9;
          }
        }
        else {
          uVar2 = uVar4 & 0xffffffff;
          unaff_1000001c = (ulong)uVar6;
          param_8 = uVar6;
          if (lVar7 == -0x7cd5c7039766471e) {
            return param_5;
          }
        }
      }
      else {
        uVar2 = uVar4 & 0xffffffff;
        unaff_1000001c = in_x15 & 0xffffffff;
        in_x13 = unaff_x25;
        lVar9 = 0xdbe81e303359102;
        param_8 = uVar10;
        if (lVar7 != -0x7394b466da4b7ad7) {
          uVar2 = uVar4 & 0xffffffff;
          unaff_1000001c = (ulong)uVar6;
          in_x13 = uVar8;
          lVar9 = lVar7;
          param_8 = uVar6;
          if (lVar7 == -0x6c08bfbe3085a5cd) {
            uVar10 = 0;
            goto LAB_00139514;
          }
        }
      }
    }
    else if (lVar7 < -0x472a3cb215a6b92f) {
      if (lVar7 == -0x59f4ca36a0a38da8) {
        lVar9 = -0x7bfc44a9e4472ff7;
        if (*(long *)(in_x10 + 0x28) != 1) {
          lVar9 = -0x1cebfd226cf095b9;
        }
        goto LAB_001399f0;
      }
      uVar2 = uVar4 & 0xffffffff;
      if (lVar7 == -0x55b7bb762bb7e4d5) {
LAB_00139514:
        uVar2 = uVar4 & 0xffffffff;
        unaff_1000001c = uVar12;
        in_x13 = uVar8;
        lVar9 = -0x7cd5c7039766471e;
        param_8 = uVar6;
        param_5 = uVar10;
      }
    }
    else {
      uVar2 = uVar4 & 0xffffffff;
      lVar9 = lVar1;
      if ((lVar7 != -0x472a3cb215a6b92f) &&
         (uVar2 = uVar4 & 0xffffffff, lVar9 = lVar7, lVar7 == -0x1cebfd226cf095b9))
      goto LAB_001398b0;
    }
  }
  if (lVar7 < -0xd6a2fcfd9a2562e) {
    if (-0x1a2edeb8faa25963 < lVar7) {
      uVar2 = in_x15 & 0xffffffff;
      lVar9 = -0x7916592214a9d94f;
      unaff_x24 = unaff_x21;
      if ((lVar7 != -0x1a2edeb8faa25962) &&
         (uVar2 = uVar4 & 0xffffffff, lVar9 = lVar7, unaff_x24 = uVar11,
         lVar7 == -0x1198fae64556e472)) goto LAB_001398b0;
      goto LAB_0013952c;
    }
    if (lVar7 != -0x1c3f6e39f065974b) {
      uVar2 = uVar4 & 0xffffffff;
      if (lVar7 == -0x1adc740f98df9e78) {
        uVar2 = uVar4 & 0xffffffff;
        unaff_1000001c = 0;
        in_x13 = 0;
        lVar9 = 0xdbe81e303359102;
        param_8 = 0;
      }
      goto LAB_0013952c;
    }
    uVar10 = (uint)unaff_x22;
    if (in_w11 >> 0x18 != 1 && in_w12 >> 0x18 == 1) {
      uVar10 = uVar10 + 1;
    }
    unaff_x20 = (ulong)uVar10;
  }
  else {
    if (lVar7 < 0x14763241a05b69cc) {
      if (lVar7 == -0xd6a2fcfd9a2562e) {
        unaff_x21 = uVar5 + 1;
        lVar9 = 0x14763241a05b69cc;
        if (unaff_x21 != param_2) {
          lVar9 = -0x1a2edeb8faa25962;
        }
        in_x15 = unaff_x20 & 0xffffffff;
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = uVar4 & 0xffffffff;
        if (lVar7 == 0xdbe81e303359102) {
          local_68 = *(long *)(*(long *)(param_3 + uVar8 * 8) + 0x10);
          uVar2 = (ulong)uVar6;
          lVar9 = -0x7916592214a9d94f;
          unaff_x19 = uVar8;
          unaff_x24 = 0;
        }
      }
      goto LAB_0013952c;
    }
    if (lVar7 == 0x14763241a05b69cc) {
      unaff_x25 = unaff_x19 + 1;
      bVar3 = unaff_x25 == param_4;
      lVar7 = -0x7394b466da4b7ad7;
      lVar9 = -0x55b7bb762bb7e4d5;
      goto LAB_001399ec;
    }
    uVar2 = uVar4 & 0xffffffff;
    if (lVar7 != 0x3906d1aeb0ba19d9) goto LAB_0013952c;
LAB_001398b0:
    unaff_x20 = unaff_x22 & 0xffffffff;
  }
  uVar2 = uVar4 & 0xffffffff;
  lVar9 = -0xd6a2fcfd9a2562e;
  unaff_x24 = uVar11;
  goto LAB_0013952c;
}

