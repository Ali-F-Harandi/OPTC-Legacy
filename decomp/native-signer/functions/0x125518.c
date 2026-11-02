// rea decompile_all
// name: FUN_00125518
// address: 0x125518
// body: available
// range: 0x125518-0x1268cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1268c8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00125518(long param_1,ulong param_2,short *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int unaff_w20;
  long unaff_x22;
  ulong local_100;
  ulong *local_f8;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar2 = 0xc86f6bb6a7d3e0ef;
  if (param_2 != 0) {
    uVar2 = 0x5d3a8da6cfe8ba7e;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar4 = uVar2;
  uVar5 = 0xc86f6bb6a7d3e0ef;
  uVar12 = 0x7a7015a18fa67589;
LAB_00125634:
  uVar13 = uVar12;
  uVar9 = uVar5;
  uVar11 = uVar4;
  uVar4 = uVar11;
  uVar5 = uVar9;
  uVar12 = uVar13;
  if ((long)uVar13 < 0xccdca2ce4327473) {
    if (-0x442c90d68db38e47 < (long)uVar13) {
      if ((long)uVar13 < -0x2f8f3be11752b7ff) {
        if ((long)uVar13 < -0x3c29f5948aa9434e) {
          if ((long)uVar13 < -0x42194fe07526bcdf) {
            uVar12 = 0xe43d83ef3a8ace85;
            if ((uVar13 != 0xbbd36f29724c71ba) && (uVar12 = uVar13, uVar13 == 0xbd31388873b5efa2)) {
              iVar8 = FUN_001e17a8(&local_d0,unaff_x22);
              bVar7 = iVar8 == 0;
              uVar11 = 0xb289fc7e5e6a1009;
              uVar12 = 0x54c769c3021ec19f;
LAB_001266e4:
              if (!bVar7) {
                uVar12 = uVar11;
              }
            }
          }
          else if (uVar13 == 0xbde6b01f8ad94321) {
            local_d8 = local_100 + 1;
            uVar12 = 0xa1ec365f420f9d82;
            if (*local_f8 <= local_d8) {
              uVar12 = 0xd7a1b6625f142969;
            }
          }
          else {
            uVar12 = 0xbde6b01f8ad94321;
            if ((uVar13 != 0xc1c49076dea404e6) && (uVar12 = uVar13, uVar13 == 0xbe9e5f96a0388a7a)) {
              if (*(long *)(lVar3 + 0x28) == local_70) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
        else if ((long)uVar13 < -0x343395c40d1ff58a) {
          uVar12 = 0xbde6b01f8ad94321;
          if ((uVar13 != 0xc3d60a6b7556bcb2) && (uVar12 = uVar13, uVar13 == 0xc86f6bb6a7d3e0ef)) {
LAB_00125c10:
            uVar12 = 0xbe9e5f96a0388a7a;
          }
        }
        else {
          if (uVar13 == 0xcbcc6a3bf2e00a76) {
            bVar6 = SBORROW4(unaff_w20,8);
            bVar7 = unaff_w20 + -8 < 0;
            uVar11 = 0xb667eed36d78c81a;
            uVar12 = 0x5232562426c21d68;
            goto LAB_00125628;
          }
          if (uVar13 == 0xcfbb8358c1ad0a6d) {
            uVar9 = FUN_00200c58(&local_d0,unaff_x22);
            uVar12 = 0x9c93e419e8805c98;
            uVar11 = 0x4f39e04f3a179cf5;
            bVar7 = (uVar9 & 1) == 0;
            goto LAB_00126094;
          }
        }
      }
      else if ((long)uVar13 < -0x2165f5aa3719cdf2) {
        if ((long)uVar13 < -0x22a9db933262e38f) {
          uVar4 = local_e0;
          uVar12 = 0xaa805af2771d314b;
          if ((uVar13 != 0xd070c41ee8ad4801) &&
             (uVar4 = uVar11, uVar12 = uVar13, uVar13 == 0xd7a1b6625f142969)) {
LAB_00125d24:
            uVar4 = uVar11;
            uVar12 = 0x5c0253c9f9f874fe;
          }
        }
        else {
          uVar12 = 0xe8e7d62ca66cbce9;
          if ((uVar13 != 0xdd56246ccd9d1c71) && (uVar12 = uVar13, uVar13 == 0xde501a6212f987af)) {
            uVar12 = FUN_00200de0(&local_d0,unaff_x22);
            bVar7 = (uVar12 & 1) == 0;
            uVar9 = 0xc3d60a6b7556bcb2;
            uVar12 = 0xdd56246ccd9d1c71;
            goto LAB_00126750;
          }
        }
      }
      else if ((long)uVar13 < -0x171829d359934317) {
        uVar12 = 0x4388cfd16e8487d3;
        if ((uVar13 != 0xde9a0a55c8e6320e) && (uVar12 = uVar13, uVar13 == 0xe43d83ef3a8ace85)) {
LAB_00125b88:
          uVar12 = 0x67a7fbb53e947bbf;
        }
      }
      else {
        uVar12 = 0xa404315beabc161a;
        if ((uVar13 != 0xe8e7d62ca66cbce9) && (uVar12 = uVar13, uVar13 == 0xcc72698eab9b425)) {
          uVar12 = 0xde9a0a55c8e6320e;
        }
      }
      goto LAB_00125634;
    }
    if ((long)uVar13 < -0x58d16c9175b1fafb) {
      if ((long)uVar13 < -0x5e13c9a0bdf0627e) {
        if ((long)uVar13 < -0x64cf3593ed5d151f) {
          if (uVar13 == 0x8f3019a57e3fa8af) {
            uVar5 = 0;
            uVar12 = 0xa7327c4923f109f0;
          }
          else if (uVar13 == 0x93e7bbec77c7a653) goto LAB_00125b88;
        }
        else {
          uVar12 = 0xf2bcc3a1629dbd7;
          if ((uVar13 != 0x9b30ca6c12a2eae1) && (uVar12 = uVar13, uVar13 == 0x9c93e419e8805c98)) {
            uVar12 = 0xf2bcc3a1629dbd7;
          }
        }
      }
      else if ((long)uVar13 < -0x5bfbcea41543e9e6) {
        uVar5 = local_d8;
        uVar12 = 0xa7327c4923f109f0;
        if ((uVar13 != 0xa1ec365f420f9d82) &&
           (uVar5 = uVar9, uVar12 = uVar13, uVar13 == 0xa25c62b5805bf785)) {
          uVar12 = 0x4e65493d8a1095e7;
        }
      }
      else {
        uVar12 = 0xe43d83ef3a8ace85;
        if ((uVar13 != 0xa404315beabc161a) && (uVar12 = uVar13, uVar13 == 0xa721ec37c45f3243)) {
          bVar6 = SBORROW4(unaff_w20,6);
          bVar7 = unaff_w20 + -6 < 0;
          uVar11 = 0x5850ed984d80a3b9;
          uVar12 = 0xacfac9b88cfe642c;
          goto LAB_00125628;
        }
      }
      goto LAB_00125634;
    }
    if (-0x502b917cfb8bdd0f < (long)uVar13) {
      if ((long)uVar13 < -0x4c4e0e5be1376e05) {
        uVar12 = 0xbde6b01f8ad94321;
        if ((uVar13 != 0xafd46e83047422f2) && (uVar12 = uVar13, uVar13 == 0xb289fc7e5e6a1009))
        goto LAB_0012632c;
      }
      else {
        uVar12 = 0x9b30ca6c12a2eae1;
        if ((uVar13 != 0xb3b1f1a41ec891fb) && (uVar12 = uVar13, uVar13 == 0xb667eed36d78c81a)) {
          uVar12 = 0x12a8597d4c4f2a3c;
          if (unaff_w20 != 8) {
            uVar12 = 0x4603874f2af04d2f;
          }
        }
      }
      goto LAB_00125634;
    }
    if ((long)uVar13 < -0x557fa50d88e2ceb5) {
      if (uVar13 == 0xa72e936e8a4e0505) {
        *param_3 = *param_3 + 1;
        uVar12 = 0x5c0253c9f9f874fe;
      }
      else if (uVar13 == 0xa7327c4923f109f0) {
        lVar10 = param_1 + local_e8 * 0x100;
        unaff_w20 = *(int *)(lVar10 + uVar9 * 4 + 0xa8);
        unaff_x22 = *(long *)(lVar10 + uVar9 * 8 + 8);
        uVar12 = 0xa25c62b5805bf785;
        local_100 = uVar9;
        if (unaff_w20 != 8 && unaff_x22 == 0) {
          uVar12 = 0x55fed587f697adc1;
        }
      }
      goto LAB_00125634;
    }
    if (uVar13 == 0xaa805af2771d314b) {
      puVar1 = (undefined8 *)(param_1 + uVar11 * 0x100);
      FUN_001b0700(*puVar1,&local_d0);
      local_f8 = puVar1 + 0x1f;
      uVar12 = 0x57d81d665f63feb6;
      local_e8 = uVar11;
      if (*local_f8 != 0) {
        uVar12 = 0x8f3019a57e3fa8af;
      }
      goto LAB_00125634;
    }
    if (uVar13 != 0xacfac9b88cfe642c) goto LAB_00125634;
    bVar6 = SBORROW4(unaff_w20,5);
    bVar7 = unaff_w20 + -5 < 0;
    uVar11 = 0x1d5b05dc06c7f45a;
    uVar12 = 0x587041dc0308cf99;
  }
  else {
    if (0x51ce20b34b7abded < (long)uVar13) {
      if ((long)uVar13 < 0x5c0253c9f9f874fe) {
        if (0x56d393c933e6b22f < (long)uVar13) {
          if ((long)uVar13 < 0x5850ed984d80a3b9) {
            uVar12 = 0xe8e7d62ca66cbce9;
            if ((uVar13 != 0x56d393c933e6b230) && (uVar12 = uVar13, uVar13 == 0x57d81d665f63feb6))
            goto LAB_00125d24;
          }
          else {
            if (uVar13 == 0x5850ed984d80a3b9) {
              bVar6 = SBORROW4(unaff_w20,7);
              bVar7 = unaff_w20 + -7 < 0;
              uVar11 = 0xcbcc6a3bf2e00a76;
              uVar12 = 0x1f278b27356b5c38;
              goto LAB_00125628;
            }
            if (uVar13 == 0x587041dc0308cf99) {
              iVar8 = FUN_001e2ed0(&local_d0,unaff_x22);
              uVar12 = 0x93e7bbec77c7a653;
              if (iVar8 != 0) {
                uVar12 = 0xafd46e83047422f2;
              }
            }
          }
          goto LAB_00125634;
        }
        if ((long)uVar13 < 0x54c769c3021ec19f) {
          uVar12 = 0xbde6b01f8ad94321;
          if ((uVar13 != 0x51ce20b34b7abdee) && (uVar12 = uVar13, uVar13 == 0x5232562426c21d68)) {
            uVar12 = FUN_002009b8(&local_d0,unaff_x22);
            bVar7 = (uVar12 & 1) == 0;
            uVar12 = 0xb3b1f1a41ec891fb;
            uVar11 = 0xccdca2ce4327473;
LAB_00126094:
            if (bVar7) {
              uVar12 = uVar11;
            }
          }
          goto LAB_00125634;
        }
        uVar12 = 0xde9a0a55c8e6320e;
        if ((uVar13 == 0x54c769c3021ec19f) || (uVar12 = uVar13, uVar13 != 0x55fed587f697adc1))
        goto LAB_00125634;
      }
      else if ((long)uVar13 < 0x67a7fbb53e947bbf) {
        if ((long)uVar13 < 0x64be4ab1a22798fa) {
          if (uVar13 == 0x5c0253c9f9f874fe) {
            FUN_001e38f8(&local_d0,0,0x5c);
            local_e0 = local_e8 + 1;
            uVar12 = 0x3fb5bae899a03e2e;
            if (local_e0 != param_2) {
              uVar12 = 0xd070c41ee8ad4801;
            }
          }
          else if (uVar13 == 0x5d3a8da6cfe8ba7e) {
            uVar4 = 0;
            uVar12 = 0xaa805af2771d314b;
          }
          goto LAB_00125634;
        }
        if (uVar13 == 0x64be4ab1a22798fa) {
          uVar12 = 0xcfbb8358c1ad0a6d;
          if (2 < unaff_w20) {
            uVar12 = 0xde501a6212f987af;
          }
          goto LAB_00125634;
        }
        if (uVar13 != 0x664b7490a4469cb9) goto LAB_00125634;
      }
      else {
        if (0x6dd297abc4210390 < (long)uVar13) {
          uVar12 = 0x4388cfd16e8487d3;
          if ((uVar13 != 0x6dd297abc4210391) && (uVar12 = uVar13, uVar13 == 0x7a7015a18fa67589)) {
            uVar12 = uVar2;
          }
          goto LAB_00125634;
        }
        uVar12 = 0x9b30ca6c12a2eae1;
        if ((uVar13 == 0x67a7fbb53e947bbf) || (uVar12 = uVar13, uVar13 != 0x6a5fbd9c4dfcc1fc))
        goto LAB_00125634;
      }
LAB_0012632c:
      uVar12 = 0xbde6b01f8ad94321;
      goto LAB_00125634;
    }
    if ((long)uVar13 < 0x3734b5ad4a2f797c) {
      if ((long)uVar13 < 0x1cfddd916887bb1f) {
        if ((long)uVar13 < 0x12a8597d4c4f2a3c) {
          uVar12 = 0xbde6b01f8ad94321;
          if ((uVar13 != 0xccdca2ce4327473) && (uVar12 = uVar13, uVar13 == 0xf2bcc3a1629dbd7)) {
LAB_00125dac:
            uVar12 = 0xcc72698eab9b425;
          }
          goto LAB_00125634;
        }
        if (uVar13 == 0x12a8597d4c4f2a3c) {
          lVar10 = FUN_001e16c4(&local_d0);
          uVar11 = 0x56d393c933e6b230;
          uVar12 = 0x51ce20b34b7abdee;
          bVar7 = lVar10 == 0;
          goto LAB_001266e4;
        }
        if (uVar13 != 0x140fe0ec13d3d2b3) goto LAB_00125634;
        bVar6 = SBORROW4(unaff_w20,2);
        bVar7 = unaff_w20 + -2 < 0;
        uVar11 = 0x64be4ab1a22798fa;
        uVar12 = 0x1cfddd916887bb1f;
      }
      else {
        if (0x1f278b27356b5c37 < (long)uVar13) {
          if (uVar13 == 0x1f278b27356b5c38) {
            uVar12 = FUN_00200830(&local_d0,unaff_x22);
            bVar7 = (uVar12 & 1) == 0;
            uVar9 = 0xc1c49076dea404e6;
            uVar12 = 0x2735a1034df1e2aa;
            goto LAB_00126750;
          }
          if (uVar13 == 0x2735a1034df1e2aa) {
            uVar12 = 0xa404315beabc161a;
          }
          goto LAB_00125634;
        }
        if (uVar13 != 0x1cfddd916887bb1f) {
          if (uVar13 == 0x1d5b05dc06c7f45a) {
            uVar12 = FUN_002006ac(&local_d0,unaff_x22);
            bVar7 = (uVar12 & 1) == 0;
            uVar12 = 0xbbd36f29724c71ba;
            uVar11 = 0x6a5fbd9c4dfcc1fc;
            goto LAB_00126094;
          }
          goto LAB_00125634;
        }
        bVar6 = SBORROW4(unaff_w20,1);
        bVar7 = unaff_w20 + -1 < 0;
        uVar11 = 0x3734b5ad4a2f797c;
        uVar12 = 0x454369ab9017066f;
      }
    }
    else {
      if ((long)uVar13 < 0x4603874f2af04d2f) {
        if ((long)uVar13 < 0x4388cfd16e8487d3) {
          if (uVar13 == 0x3734b5ad4a2f797c) {
            uVar11 = FUN_00200ad4(&local_d0,unaff_x22);
            uVar9 = 0x664b7490a4469cb9;
            uVar12 = 0x4bed40b469a391e0;
            bVar7 = (uVar11 & 1) == 0;
LAB_00126750:
            if (bVar7) {
              uVar12 = uVar9;
            }
          }
          else if (uVar13 == 0x3fb5bae899a03e2e) goto LAB_00125c10;
        }
        else {
          uVar12 = 0xa72e936e8a4e0505;
          if ((uVar13 != 0x4388cfd16e8487d3) && (uVar12 = uVar13, uVar13 == 0x454369ab9017066f)) {
            uVar12 = 0xbd31388873b5efa2;
            if (unaff_w20 != 0) {
              uVar12 = 0x6dd297abc4210391;
            }
          }
        }
        goto LAB_00125634;
      }
      if ((long)uVar13 < 0x4e65493d8a1095e7) {
        uVar12 = 0xa72e936e8a4e0505;
        if ((uVar13 != 0x4603874f2af04d2f) && (uVar12 = uVar13, uVar13 == 0x4bed40b469a391e0))
        goto LAB_00125dac;
        goto LAB_00125634;
      }
      if (uVar13 != 0x4e65493d8a1095e7) {
        if (uVar13 == 0x4f39e04f3a179cf5) goto LAB_0012632c;
        goto LAB_00125634;
      }
      bVar6 = SBORROW4(unaff_w20,4);
      bVar7 = unaff_w20 + -4 < 0;
      uVar11 = 0xa721ec37c45f3243;
      uVar12 = 0x140fe0ec13d3d2b3;
    }
  }
LAB_00125628:
  if (bVar7 == bVar6) {
    uVar12 = uVar11;
  }
  goto LAB_00125634;
}

