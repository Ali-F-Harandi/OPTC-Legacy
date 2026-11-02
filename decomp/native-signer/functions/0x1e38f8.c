// rea decompile_all
// name: FUN_001e38f8
// address: 0x1e38f8
// body: available
// range: 0x1e38f8-0x1e43ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001e38f8(byte *param_1,byte param_2,byte *param_3,undefined8 param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *in_x17;
  byte *pbVar23;
  byte *unaff_x19;
  byte *pbVar24;
  undefined8 uVar25;
  byte *unaff_x28;
  byte *pbVar26;
  byte *unaff_x29;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  
  uVar15 = (ulong)(uint)-(int)param_1 & 3;
  iVar10 = (uint)param_2 * 0x1010101;
  pbVar1 = param_1 + uVar15;
  uVar15 = (long)param_3 - uVar15;
  uVar17 = uVar15 & 0xfffffffffffffffc;
  pbVar2 = (byte *)0x39a16bddf8dc82a2;
  if (8 < uVar17) {
    pbVar2 = (byte *)0x8bbf089cfffa99f4;
  }
  pbVar3 = (byte *)0x7bca060775e09e1e;
  if ((byte *)0x8 < param_3) {
    pbVar3 = (byte *)0x81c9619a76458719;
  }
  pbVar4 = (byte *)0x57cabee7967ab664;
  if ((byte *)0x6 < param_3) {
    pbVar4 = (byte *)0x6230bf87be098d5d;
  }
  uVar25 = CONCAT44(iVar10,iVar10);
  pbVar5 = (byte *)0xc15e99e5395e3b25;
  if ((byte *)0x2 < param_3) {
    pbVar5 = (byte *)0x3485297baf428faf;
  }
  pbVar6 = (byte *)0x8682509a6d1bddd3;
  if (param_3 != (byte *)0x0) {
    pbVar6 = (byte *)0x727aabeac1ff5013;
  }
  pbVar21 = (byte *)((ulong)pbVar1 & 4 | 0x18);
  uVar15 = (uVar15 - 0x38) - ((ulong)pbVar1 & 4);
  pbVar19 = (byte *)(uVar17 - (long)pbVar21);
  pbVar7 = (byte *)0x1552bb494d897f7e;
  if (pbVar19 < (byte *)0x20) {
    pbVar7 = (byte *)0xdcc6a561637b7cae;
  }
  pbVar8 = (byte *)0x4d5d50fcdd4992d2;
  if (0x18 < uVar17) {
    pbVar8 = (byte *)0x852983e999b1da06;
  }
  pbVar12 = param_3;
  pbVar9 = (byte *)0x78ac43fddd7c64db;
  pbVar11 = pbVar8;
  pbVar18 = param_3 + -4;
  pbVar20 = pbVar7;
  pbVar22 = pbVar21;
LAB_001e3b8c:
  while( true ) {
    while (pbVar26 = unaff_x28, pbVar24 = unaff_x19, pbVar23 = in_x17, pbVar16 = pbVar11,
          pbVar14 = pbVar9, pbVar13 = param_5, pbVar9 = pbVar14, param_5 = pbVar13,
          pbVar11 = pbVar16, in_x17 = pbVar23, unaff_x19 = pbVar24, unaff_x28 = pbVar26,
          0x1b91058c21da9ca6 < (long)pbVar14) {
      if ((long)pbVar14 < 0x57cabee7967ab664) {
        if ((long)pbVar14 < 0x39a16bddf8dc82a2) {
          if (pbVar14 == (byte *)0x1b91058c21da9ca7) {
            local_80 = pbVar12 + 0x18;
            pbVar20 = (byte *)((ulong)local_70 & 0xfffffffffffffffc);
            pbVar18 = pbVar19 + (long)pbVar20 * -0x20;
            pbVar22 = pbVar12 + (long)pbVar20 * 0x20;
            pbVar9 = (byte *)0xf8c8e906a9c05bfe;
            unaff_x28 = (byte *)0x0;
          }
          else {
            pbVar9 = (byte *)0xf8c8e906a9c05bfe;
            unaff_x28 = unaff_x29;
            if ((pbVar14 != (byte *)0x2352f2d6b10786ab) &&
               (pbVar9 = pbVar14, unaff_x28 = pbVar26, pbVar14 == (byte *)0x3485297baf428faf)) {
              param_1[1] = param_2;
              param_1[2] = param_2;
              param_3[(long)(param_1 + -2)] = param_2;
              param_3[(long)(param_1 + -3)] = param_2;
              pbVar9 = pbVar4;
            }
          }
        }
        else if ((long)pbVar14 < 0x4d5d50fcdd4992d2) {
          pbVar9 = (byte *)0x5f1d0a7f6212d984;
          if ((pbVar14 != (byte *)0x39a16bddf8dc82a2) &&
             (pbVar9 = pbVar14, pbVar14 == (byte *)0x3c2595d6266c5998)) {
            local_78 = pbVar16 + -0x20;
            local_88 = pbVar13 + 0x20;
            *(undefined8 *)pbVar13 = uVar25;
            *(undefined8 *)(pbVar13 + 8) = uVar25;
            pbVar9 = (byte *)0x719dbab015af25c6;
            if (local_78 < (byte *)0x20) {
              pbVar9 = (byte *)0xf072f45fc4d1f47b;
            }
            *(undefined8 *)(pbVar13 + 0x10) = uVar25;
            *(undefined8 *)(pbVar13 + 0x18) = uVar25;
          }
        }
        else {
          pbVar9 = (byte *)0x5f1d0a7f6212d984;
          if ((pbVar14 != (byte *)0x4d5d50fcdd4992d2) &&
             (pbVar9 = pbVar14, pbVar14 == (byte *)0x5127e420c2beb41f)) goto LAB_001e4180;
        }
      }
      else if ((long)pbVar14 < 0x727aabeac1ff5013) {
        if ((long)pbVar14 < 0x6230bf87be098d5d) {
          pbVar9 = (byte *)0x5f1d0a7f6212d984;
          if ((pbVar14 != (byte *)0x57cabee7967ab664) &&
             (pbVar9 = pbVar14, pbVar14 == (byte *)0x5f1d0a7f6212d984)) {
            return;
          }
        }
        else if (pbVar14 == (byte *)0x6230bf87be098d5d) {
          param_1[3] = param_2;
          param_1[(long)(param_3 + -4)] = param_2;
          pbVar9 = pbVar3;
        }
        else if (pbVar14 == (byte *)0x719dbab015af25c6) {
          param_5 = local_88;
          pbVar9 = (byte *)0x3c2595d6266c5998;
          pbVar11 = local_78;
        }
      }
      else if (pbVar14 == (byte *)0x727aabeac1ff5013) {
        *param_1 = param_2;
        param_3[(long)(param_1 + -1)] = param_2;
        pbVar9 = pbVar5;
      }
      else {
        pbVar9 = (byte *)0x5f1d0a7f6212d984;
        if ((pbVar14 != (byte *)0x7bca060775e09e1e) &&
           (pbVar9 = pbVar14, pbVar14 == (byte *)0x78ac43fddd7c64db)) {
          pbVar9 = pbVar6;
        }
      }
    }
    if ((long)pbVar14 < -0x38b0832f7743f2b8) break;
    if ((long)pbVar14 < -0xf8d0ba03b2e0b85) {
      param_5 = pbVar24;
      pbVar9 = (byte *)0x3c2595d6266c5998;
      pbVar11 = pbVar23;
      if (((pbVar14 != (byte *)0xc74f7cd088bc0d48) &&
          (param_5 = pbVar13, pbVar9 = (byte *)0x5f1d0a7f6212d984, pbVar11 = pbVar16,
          pbVar14 != (byte *)0xdcc6a561637b7cae)) &&
         (pbVar9 = pbVar14, pbVar14 == (byte *)0xddad916a28c99fe1)) {
        pbVar9 = (byte *)0x5127e420c2beb41f;
        if (local_70 != pbVar20) {
          pbVar9 = (byte *)0xf8f9546f45fbb47;
        }
      }
    }
    else if ((long)pbVar14 < 0xf8f9546f45fbb47) {
      pbVar9 = (byte *)0x5f1d0a7f6212d984;
      if ((pbVar14 != (byte *)0xf072f45fc4d1f47b) &&
         (pbVar9 = pbVar14, pbVar14 == (byte *)0xf8c8e906a9c05bfe)) {
        unaff_x29 = pbVar26 + 4;
        pbVar9 = local_80 + (long)pbVar26 * 0x20;
        pbVar13 = local_80 + ((long)pbVar26 * 0x20 | 0x40);
        *(undefined8 *)(pbVar9 + 0x10) = uVar25;
        *(undefined8 *)(pbVar9 + 8) = uVar25;
        *(undefined8 *)pbVar9 = uVar25;
        *(undefined8 *)(pbVar9 + -8) = uVar25;
        *(undefined8 *)(pbVar9 + -0x10) = uVar25;
        *(undefined8 *)(pbVar9 + -0x18) = uVar25;
        *(undefined8 *)(pbVar9 + 0x20) = uVar25;
        *(undefined8 *)(pbVar9 + 0x18) = uVar25;
        *(undefined8 *)(pbVar13 + 0x10) = uVar25;
        *(undefined8 *)(pbVar13 + 8) = uVar25;
        *(undefined8 *)(pbVar13 + 0x20) = uVar25;
        *(undefined8 *)(pbVar13 + 0x18) = uVar25;
        *(undefined8 *)(pbVar13 + -0x10) = uVar25;
        *(undefined8 *)(pbVar13 + -0x18) = uVar25;
        pbVar9 = (byte *)0xddad916a28c99fe1;
        if (unaff_x29 != pbVar20) {
          pbVar9 = (byte *)0x2352f2d6b10786ab;
        }
        *(undefined8 *)pbVar13 = uVar25;
        *(undefined8 *)(pbVar13 + -8) = uVar25;
      }
    }
    else {
      pbVar9 = (byte *)0xc74f7cd088bc0d48;
      in_x17 = pbVar18;
      unaff_x19 = pbVar22;
      if ((pbVar14 != (byte *)0xf8f9546f45fbb47) &&
         (pbVar9 = pbVar14, in_x17 = pbVar23, unaff_x19 = pbVar24,
         pbVar14 == (byte *)0x1552bb494d897f7e)) {
        pbVar12 = pbVar1 + (long)pbVar21;
        local_70 = (byte *)((uVar15 >> 5) + 1);
        pbVar9 = (byte *)0xafcefe1b733a78ce;
        if (0x5f < uVar15) {
          pbVar9 = (byte *)0x1b91058c21da9ca7;
        }
      }
    }
  }
  if ((long)pbVar14 < -0x7440f7630005660c) {
    if (pbVar14 == (byte *)0x81c9619a76458719) {
      *(int *)pbVar1 = iVar10;
      *(int *)(pbVar1 + (uVar17 - 4)) = iVar10;
      pbVar9 = pbVar2;
      goto LAB_001e3b8c;
    }
    if (pbVar14 == (byte *)0x852983e999b1da06) {
      *(ulong *)(pbVar1 + 0x14) = CONCAT44(iVar10,iVar10);
      *(ulong *)(pbVar1 + 0xc) = CONCAT44(iVar10,iVar10);
      *(ulong *)(pbVar1 + (uVar17 - 0x14)) = CONCAT44(iVar10,iVar10);
      *(ulong *)(pbVar1 + (uVar17 - 0x1c)) = CONCAT44(iVar10,iVar10);
      pbVar9 = pbVar7;
      goto LAB_001e3b8c;
    }
    if (pbVar14 != (byte *)0x8682509a6d1bddd3) goto LAB_001e3b8c;
  }
  else {
    if (pbVar14 == (byte *)0x8bbf089cfffa99f4) {
      *(int *)(pbVar1 + 4) = iVar10;
      *(int *)(pbVar1 + 8) = iVar10;
      *(int *)(pbVar1 + (uVar17 - 0xc)) = iVar10;
      *(int *)(pbVar1 + (uVar17 - 8)) = iVar10;
      pbVar9 = pbVar8;
      goto LAB_001e3b8c;
    }
    pbVar9 = (byte *)0xc74f7cd088bc0d48;
    in_x17 = pbVar19;
    unaff_x19 = pbVar12;
    if ((pbVar14 == (byte *)0xafcefe1b733a78ce) ||
       (pbVar9 = pbVar14, in_x17 = pbVar23, unaff_x19 = pbVar24,
       pbVar14 != (byte *)0xc15e99e5395e3b25)) goto LAB_001e3b8c;
  }
LAB_001e4180:
  pbVar9 = (byte *)0x5f1d0a7f6212d984;
  in_x17 = pbVar23;
  unaff_x19 = pbVar24;
  goto LAB_001e3b8c;
}

