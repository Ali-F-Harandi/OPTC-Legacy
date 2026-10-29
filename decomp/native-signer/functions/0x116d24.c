// rea decompile_all
// name: FUN_00116d24
// address: 0x116d24
// body: available
// range: 0x116d24-0x117efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x117ef8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00116d24(double *param_1)

{
  double *pdVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  bool bVar7;
  int iVar8;
  double *pdVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  double *in_x11;
  double *__ptr;
  double *in_x12;
  double *pdVar13;
  double *pdVar14;
  double *in_x14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *in_x16;
  double *pdVar18;
  double unaff_d9;
  void *local_110;
  void *local_108;
  double *local_100;
  double local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  double *local_b8;
  double *local_b0;
  double *local_a8;
  double *local_a0;
  undefined4 local_94;
  long local_90;
  long local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_94 = 0;
  pdVar1 = (double *)0xccdca2ce4327473;
  if (*(char *)(param_1 + 1) != '\0') {
    pdVar1 = (double *)0x5232562426c21d68;
  }
  local_a0 = (double *)0x0;
  pdVar3 = param_1;
  pdVar4 = pdVar1;
  pdVar5 = (double *)0xccdca2ce4327473;
  pdVar6 = param_1 + 4;
  pdVar14 = (double *)0x9c93e419e8805c98;
LAB_00116e14:
  do {
    while (pdVar18 = in_x16, pdVar17 = pdVar14, pdVar15 = in_x14, pdVar13 = in_x12, __ptr = in_x11,
          pdVar12 = pdVar6, pdVar16 = pdVar5, pdVar11 = pdVar4, pdVar9 = pdVar3, pdVar14 = pdVar17,
          pdVar3 = pdVar9, pdVar4 = pdVar11, pdVar5 = pdVar16, pdVar6 = pdVar12, in_x11 = __ptr,
          in_x12 = pdVar13, in_x14 = pdVar15, in_x16 = pdVar18, (long)pdVar17 < -0x171829d359934317)
    {
      if ((long)pdVar17 < -0x442c90d68db38e46) {
        if ((long)pdVar17 < -0x5e13c9a0bdf0627e) {
          if ((long)pdVar17 < -0x64cf3593ed5d151f) {
            pdVar14 = (double *)0x1f278b27356b5c38;
            if ((pdVar17 != (double *)0x8e65153a3d056d43) &&
               (pdVar14 = pdVar17, pdVar17 == (double *)0x93e7bbec77c7a653)) {
LAB_00117488:
              pdVar3 = pdVar9;
              pdVar4 = pdVar11;
              in_x12 = pdVar13;
              pdVar14 = (double *)0x1d5b05dc06c7f45a;
            }
          }
          else if (pdVar17 == (double *)0x9b30ca6c12a2eae1) {
            pdVar3 = local_100;
            pdVar4 = (double *)0x0;
            in_x12 = local_b8;
            pdVar14 = (double *)0x4388cfd16e8487d3;
          }
          else if (pdVar17 == (double *)0x9c93e419e8805c98) {
            pdVar14 = pdVar1;
          }
        }
        else if ((long)pdVar17 < -0x58d16c9175b1fafb) {
          in_x14 = local_a8;
          pdVar14 = (double *)0xcc72698eab9b425;
          if ((pdVar17 != (double *)0xa1ec365f420f9d82) &&
             (in_x14 = pdVar15, pdVar14 = pdVar17, pdVar17 == (double *)0xa404315beabc161a)) {
LAB_00117aec:
            in_x14 = pdVar15;
            pdVar14 = (double *)0xf5d92d89664e60c2;
          }
        }
        else {
          pdVar5 = local_c0;
          pdVar6 = local_c8;
          pdVar14 = (double *)0xd7a1b6625f142969;
          if (pdVar17 != (double *)0xa72e936e8a4e0505) {
            if (pdVar17 == (double *)0xafd46e83047422f2) {
              *param_1 = unaff_d9;
              pdVar5 = pdVar16;
              pdVar6 = pdVar12;
              pdVar14 = (double *)0x93e7bbec77c7a653;
            }
            else {
              pdVar5 = pdVar16;
              pdVar6 = pdVar12;
              pdVar14 = pdVar17;
              if (pdVar17 == (double *)0xb3b1f1a41ec891fb) {
                pdVar14 = (double *)0xafd46e83047422f2;
              }
            }
          }
        }
      }
      else if ((long)pdVar17 < -0x285e499da0ebd697) {
        if ((long)pdVar17 < -0x3e3b6f89215bfb1a) {
          if (pdVar17 == (double *)0xbbd36f29724c71ba) {
            DAT_0021be70 = DAT_0021be70 ^ 0x8d;
            DAT_0021be71 = DAT_0021be71 ^ 0x8d;
            DAT_0021be72 = DAT_0021be72 ^ 0x8d;
            DAT_0021be73 = DAT_0021be73 ^ 0x8d;
            DAT_0021be74 = DAT_0021be74 ^ 0x8d;
            DAT_0021be68 = DAT_0021be68 ^ 0x8d8d8d8d8d8d8d8d;
            DAT_0021be75 = DAT_0021be75 ^ 0x8d;
            DAT_0021f0f9 = '\x01';
            pdVar14 = (double *)0x1f278b27356b5c38;
          }
          else if (pdVar17 == (double *)0xbde6b01f8ad94321) {
            free(local_110);
            *(undefined8 *)((long)local_a0[1] + (long)local_f0 * 8) = 0;
            pdVar5 = (double *)*local_a0;
            pdVar6 = local_a0;
            pdVar14 = (double *)0xd7a1b6625f142969;
          }
        }
        else if (pdVar17 == (double *)0xc1c49076dea404e6) {
          FUN_002083ac(param_1 + 4,0x32);
          param_1[0x47] = (double)((ulong)param_1[0x47] | 1);
          pdVar14 = (double *)0xdd56246ccd9d1c71;
        }
        else if (pdVar17 == (double *)0xc3d60a6b7556bcb2) {
          FUN_00118500(local_a0[1],*local_a0,param_1);
          pdVar14 = (double *)0xdd56246ccd9d1c71;
        }
        else if (pdVar17 == (double *)0xd070c41ee8ad4801) {
          free(local_108);
          local_a0[1] = 0.0;
          in_x11 = local_a0;
          pdVar14 = (double *)0x3fb5bae899a03e2e;
        }
      }
      else if ((long)pdVar17 < -0x21afe59ded067851) {
        if (pdVar17 == (double *)0xd7a1b6625f142969) {
          local_b0 = (double *)((long)local_f0 + 1);
          pdVar14 = (double *)0x5c0253c9f9f874fe;
          local_d0 = pdVar16;
          local_a8 = pdVar12;
          if (pdVar16 <= local_b0) {
            pdVar14 = (double *)0xa1ec365f420f9d82;
          }
        }
        else if (pdVar17 == (double *)0xdd56246ccd9d1c71) {
          local_e0 = local_a0;
          pdVar14 = (double *)0xa404315beabc161a;
          if (local_a0 != (double *)0x0) {
            pdVar14 = (double *)0xe8e7d62ca66cbce9;
          }
          param_1[0x47] = (double)((ulong)param_1[0x47] | 0x4000000000410);
        }
      }
      else {
        pdVar14 = (double *)0xdd56246ccd9d1c71;
        if (((pdVar17 != (double *)0xde501a6212f987af) &&
            (in_x11 = local_e8, pdVar14 = (double *)0x3fb5bae899a03e2e,
            pdVar17 != (double *)0xde9a0a55c8e6320e)) &&
           (in_x11 = __ptr, pdVar14 = pdVar17, pdVar17 == (double *)0xe43d83ef3a8ace85)) {
          param_1[0x47] = (double)((ulong)param_1[0x47] | 0x4000000000410);
          pdVar14 = (double *)0x67a7fbb53e947bbf;
          in_x16 = local_d8;
        }
      }
    }
    if (0x3fb5bae899a03e2d < (long)pdVar17) {
      if ((long)pdVar17 < 0x56d393c933e6b230) {
        if (0x51ce20b34b7abded < (long)pdVar17) {
          if (pdVar17 == (double *)0x51ce20b34b7abdee) {
            uVar10 = FUN_00117f30(local_d8[1],local_f8,param_1);
            pdVar14 = (double *)0xc3d60a6b7556bcb2;
            if ((uVar10 & 1) == 0) {
              pdVar14 = (double *)0xde501a6212f987af;
            }
          }
          else if (pdVar17 == (double *)0x5232562426c21d68) {
            pdVar14 = (double *)0x93e7bbec77c7a653;
          }
          goto LAB_00116e14;
        }
        if (pdVar17 == (double *)0x3fb5bae899a03e2e) {
          free(__ptr);
          goto LAB_00117aec;
        }
        if (pdVar17 != (double *)0x4388cfd16e8487d3) goto LAB_00116e14;
        local_110 = *(void **)((long)pdVar13[1] + (long)pdVar11 * 8);
        bVar7 = local_110 == (void *)0x0;
        pdVar16 = (double *)0xbde6b01f8ad94321;
        pdVar14 = (double *)0xa72e936e8a4e0505;
        local_f0 = pdVar11;
        local_c8 = pdVar13;
        local_c0 = pdVar9;
      }
      else {
        if (0x5c0253c9f9f874fd < (long)pdVar17) {
          pdVar3 = local_d0;
          pdVar4 = local_b0;
          in_x12 = local_a8;
          pdVar14 = (double *)0x4388cfd16e8487d3;
          if (pdVar17 != (double *)0x5c0253c9f9f874fe) {
            if (pdVar17 == (double *)0x67a7fbb53e947bbf) {
              local_100 = (double *)*pdVar18;
              pdVar3 = pdVar9;
              pdVar4 = pdVar11;
              in_x12 = pdVar13;
              pdVar14 = (double *)0xf2bcc3a1629dbd7;
              local_b8 = pdVar18;
              if (local_100 != (double *)0x0) {
                pdVar14 = (double *)0x9b30ca6c12a2eae1;
              }
            }
            else {
              pdVar3 = pdVar9;
              pdVar4 = pdVar11;
              in_x12 = pdVar13;
              pdVar14 = pdVar17;
              if (pdVar17 == (double *)0x6a5fbd9c4dfcc1fc) goto LAB_00117488;
            }
          }
          goto LAB_00116e14;
        }
        if (pdVar17 != (double *)0x56d393c933e6b230) {
          if (pdVar17 == (double *)0x587041dc0308cf99) {
            *(undefined1 *)(param_1 + 1) = 1;
            pdVar14 = (double *)0xafd46e83047422f2;
          }
          goto LAB_00116e14;
        }
        local_f8 = *local_d8;
        pdVar16 = (double *)0x51ce20b34b7abdee;
        bVar7 = local_f8 == 0.0;
        pdVar14 = (double *)0xe43d83ef3a8ace85;
      }
LAB_00116e08:
      if (!bVar7) {
        pdVar14 = pdVar16;
      }
      goto LAB_00116e14;
    }
    if ((long)pdVar17 < 0xf2bcc3a1629dbd7) {
      if ((long)pdVar17 < 0xcc72698eab9b425) {
        pdVar14 = (double *)0x67a7fbb53e947bbf;
        in_x16 = local_e0;
        if (pdVar17 != (double *)0xe8e7d62ca66cbce9) {
          if (pdVar17 == (double *)0x452d53eeea4fae6) {
            pdVar14 = (double *)0x8e65153a3d056d43;
            in_x16 = pdVar18;
            if (DAT_0021f0f9 == '\0') {
              pdVar14 = (double *)0xbbd36f29724c71ba;
            }
          }
          else {
            pdVar14 = pdVar17;
            in_x16 = pdVar18;
            if (pdVar17 == (double *)0xf5d92d89664e60c2) {
              if (*(long *)(lVar2 + 0x28) == local_80) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
      else if (pdVar17 == (double *)0xcc72698eab9b425) {
        local_108 = (void *)pdVar15[1];
        pdVar14 = (double *)0xde9a0a55c8e6320e;
        local_e8 = pdVar15;
        if (local_108 != (void *)0x0) {
          pdVar14 = (double *)0xd070c41ee8ad4801;
        }
      }
      else if (pdVar17 == (double *)0xccdca2ce4327473) {
        local_90 = 0;
        local_88 = 0;
        FUN_001f3abc(0,&local_90);
        unaff_d9 = (double)local_88 / 1000000.0 + (double)local_90 * 1000.0;
        pdVar14 = (double *)0x587041dc0308cf99;
        if (unaff_d9 - *param_1 <= 15000.0) {
          pdVar14 = (double *)0xb3b1f1a41ec891fb;
        }
      }
    }
    else if ((long)pdVar17 < 0x1d5b05dc06c7f45a) {
      in_x14 = local_b8;
      pdVar14 = (double *)0xcc72698eab9b425;
      if ((pdVar17 != (double *)0xf2bcc3a1629dbd7) &&
         (in_x14 = pdVar15, pdVar14 = pdVar17, pdVar17 == (double *)0x12a8597d4c4f2a3c)) {
        param_1[0x47] = (double)((ulong)param_1[0x47] | 0x4000000000410);
        pdVar14 = (double *)0xf5d92d89664e60c2;
      }
    }
    else if (pdVar17 == (double *)0x1d5b05dc06c7f45a) {
      iVar8 = FUN_00212730(0,1,&DAT_0021f0f8);
      pdVar14 = (double *)0x452d53eeea4fae6;
      if (iVar8 != 0) {
        pdVar14 = (double *)0x6a5fbd9c4dfcc1fc;
      }
    }
    else if (pdVar17 == (double *)0x1f278b27356b5c38) {
      DAT_0021f0f8 = 0;
      uVar10 = FUN_001ab9a0(&local_94,&local_a0,&DAT_0021be68);
      pdVar14 = (double *)0x2735a1034df1e2aa;
      if ((uVar10 & 1) == 0) {
        pdVar14 = (double *)0xc1c49076dea404e6;
      }
    }
    else if (pdVar17 == (double *)0x2735a1034df1e2aa) {
      local_d8 = local_a0;
      bVar7 = local_a0 == (double *)0x0;
      pdVar14 = (double *)0x12a8597d4c4f2a3c;
      pdVar16 = (double *)0x56d393c933e6b230;
      goto LAB_00116e08;
    }
  } while( true );
}

