// rea decompile_all
// name: FUN_00208640
// address: 0x208640
// body: available
// range: 0x208640-0x20ead7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20ead4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00208640(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                 ulong param_6,long param_7,long param_8,undefined4 *param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  void *__ptr;
  long lVar28;
  ulong uVar29;
  size_t sVar30;
  byte bVar31;
  undefined1 *puVar32;
  ulong local_4d8;
  long *local_4d0;
  long local_4c8;
  ulong *local_4b8;
  ulong local_4b0;
  size_t local_478;
  byte local_470;
  byte local_46c;
  ulong local_468;
  undefined8 local_460;
  undefined8 local_458;
  ulong local_448;
  undefined8 local_440;
  undefined8 *local_430;
  ulong local_428;
  ulong local_418;
  ulong local_400;
  ulong local_3f0;
  ulong local_3e8;
  undefined8 *local_3d8;
  ulong local_3c8;
  ulong local_3b8;
  ulong local_3b0;
  long local_3a8;
  ulong local_3a0;
  long local_398;
  ulong local_390;
  byte local_384;
  undefined8 *local_378;
  ulong local_370;
  undefined8 local_368;
  ulong local_358;
  long local_350;
  ulong local_340;
  ulong local_338;
  ulong local_328;
  undefined8 local_320;
  ulong local_318;
  void *local_310;
  ulong local_300;
  ulong local_2f0;
  ulong local_2e8;
  ulong local_2d0;
  undefined8 *local_2c8;
  ulong local_2c0;
  ulong local_2a8;
  byte local_29c;
  ulong local_298;
  ulong local_178;
  ulong local_168;
  ulong local_160;
  ulong local_150;
  ulong local_140;
  ulong local_130;
  ulong local_120;
  undefined8 *local_118;
  long local_110;
  long local_108;
  long local_100;
  ulong local_f8;
  undefined8 *local_f0;
  ulong local_e8;
  undefined8 *local_e0;
  ulong local_d0;
  ulong local_c0;
  ulong local_b0;
  ulong local_a0;
  ulong local_98;
  ulong local_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_78 = 0;
  local_80 = 0;
  __ptr = (void *)FUN_001e5154(param_2);
  puVar1 = (undefined1 *)0xe7622641fcb090c6;
  if (param_6 != 0) {
    puVar1 = (undefined1 *)0x87b1ff2df68e38ae;
  }
  puVar2 = (undefined1 *)0x58b842c6f86d5804;
  if (param_4 != 0) {
    puVar2 = (undefined1 *)0x7e713fa43f38c582;
  }
  puVar3 = (undefined1 *)0x353e7cd16df664a2;
  if (param_8 != 0) {
    puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  puVar4 = &DAT_f615808441b1dafc;
  if (__ptr != (void *)0x0) {
    puVar4 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar5 = (undefined1 *)0x887e73b2c28c6a1;
LAB_00208a20:
  while( true ) {
    puVar32 = puVar5;
    uVar29 = local_88;
    uVar26 = local_98;
    uVar25 = local_a0;
    uVar24 = local_b0;
    uVar23 = local_c0;
    uVar22 = local_d0;
    puVar21 = local_e0;
    uVar20 = local_e8;
    puVar19 = local_f0;
    uVar18 = local_f8;
    lVar17 = local_100;
    lVar16 = local_108;
    lVar15 = local_110;
    puVar14 = local_118;
    uVar13 = local_120;
    uVar6 = local_130;
    uVar12 = local_140;
    uVar11 = local_150;
    uVar10 = local_160;
    uVar9 = local_168;
    uVar8 = local_178;
    puVar5 = puVar32;
    local_150 = uVar11;
    local_140 = uVar12;
    local_130 = uVar6;
    local_88 = uVar29;
    bVar31 = local_470;
    if (0x887e73b2c28c6a0 < (long)puVar32) break;
    if ((long)puVar32 < -0x34ce59f19df9112f) {
      if ((long)puVar32 < -0x45704382c9dcec73) {
        if ((long)puVar32 < -0x69f7a720f4f21bbf) {
          if ((long)puVar32 < -0x71c5c29ef27b8351) {
            if (puVar32 == (undefined1 *)0x8500be9b057d300e) {
              local_430 = local_118;
              local_460 = local_80;
              local_468 = (ulong)local_78;
LAB_0020e0f4:
              puVar5 = (undefined1 *)0xc0f51250277e5cfd;
              local_178 = uVar8;
              local_168 = uVar9;
              local_160 = uVar10;
              local_120 = uVar13;
              local_118 = puVar14;
              local_110 = lVar15;
              local_108 = lVar16;
              local_100 = lVar17;
              local_f8 = uVar18;
              local_f0 = puVar19;
              local_e8 = uVar20;
              local_e0 = puVar21;
              local_d0 = uVar22;
              local_c0 = uVar23;
              local_b0 = uVar24;
              local_a0 = uVar25;
              local_98 = uVar26;
            }
            else {
              local_178 = uVar8;
              local_168 = uVar9;
              local_160 = uVar10;
              local_120 = uVar13;
              local_118 = puVar14;
              local_110 = lVar15;
              local_108 = lVar16;
              local_100 = lVar17;
              local_f8 = uVar18;
              local_f0 = puVar19;
              local_e8 = uVar20;
              local_e0 = puVar21;
              local_d0 = uVar22;
              local_c0 = uVar23;
              local_b0 = uVar24;
              local_a0 = uVar25;
              local_98 = uVar26;
              if (puVar32 == (undefined1 *)0x87b1ff2df68e38ae) {
                local_88 = 0;
                puVar5 = (undefined1 *)0x34ee749c3dc3cf5c;
              }
            }
          }
          else {
            local_e0 = local_2c8;
            puVar5 = &DAT_c45038db124ae016;
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if ((puVar32 != (undefined1 *)0x8e3a3d610d847caf) &&
               (puVar5 = puVar32, local_e0 = puVar21, puVar32 == (undefined1 *)0x940bdddd24f52ce3))
            {
              local_98 = local_4b0;
              local_a0 = local_2d0;
              local_b0 = local_2c0;
              puVar5 = (undefined1 *)0x31b9d74c89a90fe3;
            }
          }
        }
        else if ((long)puVar32 < -0x56ad058abb7434bf) {
          if (puVar32 == (undefined1 *)0x960858df0b0de441) {
            local_390 = local_428 + 1;
            puVar5 = (undefined1 *)0xc879bc31bae5bb14;
            local_3c8 = local_e8;
            local_3b8 = local_f8;
            local_3b0 = local_d0;
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (local_390 != param_4) {
              puVar5 = (undefined1 *)0x36f07785a64d7584;
            }
          }
          else {
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (puVar32 == (undefined1 *)0xa865ab623572e331) {
              local_300 = local_340 & 0xffffffff00000000 | local_318;
              iVar27 = FUN_00201cf8(local_320,local_300,local_440);
              puVar5 = (undefined1 *)0xedbefc38c6cf9bfe;
              if (iVar27 < 0) {
                puVar5 = (undefined1 *)0x5039187a35dab08d;
              }
            }
          }
        }
        else {
          puVar5 = (undefined1 *)0x3b36a7a007b21166;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (((puVar32 != (undefined1 *)0xa952fa75448bcb41) &&
              (puVar5 = (undefined1 *)0x52cde6c2dea1be4, puVar32 != (undefined1 *)0xaa46adf0a78af8c7
              )) && (puVar5 = puVar32, puVar32 == (undefined1 *)0xabed3acad0e23c86)) {
            if (*(long *)(lVar7 + 0x28) == local_70) {
              return local_384 & 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
      else if ((long)puVar32 < -0x3dc07bfa902cf42a) {
        if ((long)puVar32 < -0x405b680ffecd4131) {
          if (puVar32 == (undefined1 *)0xba8fbc7d3623138d) {
            local_418 = local_2a8 & 0xffffffff00000000 | local_318;
            uVar29 = FUN_00201f60(local_320,local_418,local_440);
            puVar5 = (undefined1 *)0x8e3a3d610d847caf;
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if ((uVar29 & 1) == 0) {
              puVar5 = (undefined1 *)0x418b7d3c908df894;
            }
          }
          else {
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (puVar32 == (undefined1 *)0xbf711ec4fafe862e) goto LAB_0020d774;
          }
        }
        else if (puVar32 == (undefined1 *)0xbfa497f00132becf) {
          local_4b8 = local_f0 + 3;
          local_4d0 = local_f0 + 2;
          puVar5 = (undefined1 *)0xd108a90e38b691a1;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (*local_4b8 != 0) {
            puVar5 = (undefined1 *)0x5eda44100212fa2c;
          }
        }
        else {
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0xc0f51250277e5cfd) {
            local_370 = local_468;
            local_368 = local_460;
            local_378 = local_430;
            puVar5 = puVar1;
          }
        }
      }
      else if ((long)puVar32 < -0x3bafc724edb51fea) {
        local_108 = local_350;
        local_110 = local_3a8;
        puVar5 = (undefined1 *)0xf54c5df74fcabc41;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if ((puVar32 != (undefined1 *)0xc23f84056fd30bd6) &&
           (puVar5 = puVar32, local_110 = lVar15, local_108 = lVar16,
           puVar32 == (undefined1 *)0xc33cd820d1133e3a)) goto LAB_00208a0c;
      }
      else {
        local_118 = local_e0;
        puVar5 = (undefined1 *)0x8500be9b057d300e;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 != &DAT_c45038db124ae016) {
          if (puVar32 == (undefined1 *)0xc879bc31bae5bb14) {
            local_e0 = (undefined8 *)0x0;
            puVar5 = &DAT_c45038db124ae016;
            local_118 = puVar14;
          }
          else {
            puVar5 = puVar32;
            local_118 = puVar14;
            if (puVar32 == (undefined1 *)0xc89737e2f8768a05) {
              puVar5 = (undefined1 *)0x52cde6c2dea1be4;
            }
          }
        }
      }
    }
    else if ((long)puVar32 < -0x12e0f8e15901e122) {
      if ((long)puVar32 < -0x2e5d71d46d443370) {
        if ((long)puVar32 < -0x2ef756f1c7496e5f) {
          if (puVar32 == (undefined1 *)0xcb31a60e6206eed1) {
            local_338 = local_4d8 + 1;
            puVar5 = (undefined1 *)0xd6afb11c30d2a9cd;
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (*local_4b8 <= local_338) {
              puVar5 = (undefined1 *)0x483dcbc36ada42c4;
            }
          }
          else {
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (puVar32 == (undefined1 *)0xce95d05271a8da34) {
              puVar5 = (undefined1 *)0x65536dc2a8308acd;
            }
          }
        }
        else if (puVar32 == (undefined1 *)0xd108a90e38b691a1) {
          local_29c = 0;
          puVar5 = (undefined1 *)0x54c2b837d86711b8;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
        }
        else {
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0xd14700cedc0a1544) goto LAB_0020e050;
        }
      }
      else if ((long)puVar32 < -0x29504ee3cf2d5633) {
        if (puVar32 == (undefined1 *)0xd1a28e2b92bbcc90) {
          puVar5 = (undefined1 *)0xa952fa75448bcb41;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (DAT_0021fb75 == '\0') {
            puVar5 = (undefined1 *)0x1cba5f82f77e481f;
          }
        }
        else {
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0xd222672a639a1d2e) {
            local_310 = calloc(local_478,1);
            puVar5 = (undefined1 *)0xf63b36e7a9d9f670;
            if (local_310 == (void *)0x0 || param_8 == 0) {
              puVar5 = (undefined1 *)0xaa46adf0a78af8c7;
            }
          }
        }
      }
      else {
        local_c0 = local_338;
        puVar5 = (undefined1 *)0x1db468c64d6a7ed0;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 != (undefined1 *)0xd6afb11c30d2a9cd) {
          if (puVar32 == (undefined1 *)0xe48eaf6f29f5caa2) {
            local_4b0 = local_298 & 0xffffffff00000000 | local_370;
            iVar27 = FUN_00201cf8(local_368,local_4b0,
                                  *(undefined8 *)(param_5 + local_448 * 0x20 + 0x20));
            puVar5 = (undefined1 *)0x3007aa9d32d99be8;
            local_c0 = uVar23;
            if (-1 < iVar27) {
              puVar5 = (undefined1 *)0x940bdddd24f52ce3;
            }
          }
          else {
            puVar5 = puVar32;
            local_c0 = uVar23;
            if (puVar32 == (undefined1 *)0xe7622641fcb090c6) {
              puVar5 = (undefined1 *)0x65536dc2a8308acd;
            }
          }
        }
      }
    }
    else if ((long)puVar32 < -0x9c4c91856260990) {
      if ((long)puVar32 < -0xab3a208b03543bf) {
        local_f0 = local_3d8;
        puVar5 = (undefined1 *)0xbfa497f00132becf;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if ((puVar32 != (undefined1 *)0xed1f071ea6fe1ede) &&
           (puVar5 = puVar32, local_f0 = puVar19, puVar32 == (undefined1 *)0xedbefc38c6cf9bfe)) {
          local_358 = local_2e8 & 0xffffffff00000000 | local_318;
          iVar27 = FUN_00201cf8(local_320,local_358,
                                *(undefined8 *)(param_3 + local_428 * 0x20 + 0x20));
          puVar5 = (undefined1 *)0x7d8bf94548220fb8;
          if (-1 < iVar27) {
            puVar5 = (undefined1 *)0x77f0428eaa711148;
          }
        }
      }
      else if (puVar32 == (undefined1 *)0xf54c5df74fcabc41) {
        sVar30 = strlen(*(char **)(param_7 + local_110 * 8));
        local_350 = local_108 + sVar30 + 1;
        local_3a8 = local_110 + 1;
        puVar5 = (undefined1 *)0x2ce2edddaf334d81;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (local_3a8 != param_8) {
          puVar5 = (undefined1 *)0xc23f84056fd30bd6;
        }
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == &DAT_f615808441b1dafc) {
          local_384 = 0;
          *param_9 = 2;
          puVar5 = (undefined1 *)0xabed3acad0e23c86;
        }
      }
    }
    else if ((long)puVar32 < -0x25a3e9f6f44c50c) {
      if (puVar32 == (undefined1 *)0xf63b36e7a9d9f670) {
        local_100 = 0;
        puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0xf6c71d76f8b48eb9) {
          local_4c8 = local_100;
LAB_0020d774:
          puVar5 = (undefined1 *)0x6b5051bf1aed633d;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
        }
      }
    }
    else {
      local_98 = local_298;
      local_a0 = local_2f0;
      local_b0 = local_328;
      puVar5 = (undefined1 *)0x31b9d74c89a90fe3;
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      if (((puVar32 != (undefined1 *)0xfda5c16090bb3af4) &&
          (puVar5 = (undefined1 *)0x3b16db62a3c2f4fb, local_b0 = uVar24, local_a0 = uVar25,
          local_98 = uVar26, puVar32 != (undefined1 *)0xfeee7e65b66b0f06)) &&
         (puVar5 = puVar32, puVar32 == (undefined1 *)0x52cde6c2dea1be4)) {
        uVar29 = FUN_00200efc(__ptr,param_1,&local_80);
        puVar5 = (undefined1 *)0x5ece82223eee3411;
        if ((uVar29 & 1) == 0) {
          puVar5 = (undefined1 *)0x49b9b00eeff4c15a;
        }
      }
    }
  }
  if (0x3b16db62a3c2f4fa < (long)puVar32) {
    if ((long)puVar32 < 0x5ece82223eee3411) {
      if ((long)puVar32 < 0x49b9b00eeff4c15a) {
        if ((long)puVar32 < 0x418b7d3c908df894) {
          if (puVar32 == (undefined1 *)0x3b16db62a3c2f4fb) {
            puVar5 = (undefined1 *)0xed1f071ea6fe1ede;
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (local_378 != (undefined8 *)0x0) {
              puVar5 = (undefined1 *)0x3ace195dd3930386;
            }
          }
          else {
            local_178 = uVar8;
            local_168 = uVar9;
            local_160 = uVar10;
            local_120 = uVar13;
            local_118 = puVar14;
            local_110 = lVar15;
            local_108 = lVar16;
            local_100 = lVar17;
            local_f8 = uVar18;
            local_f0 = puVar19;
            local_e8 = uVar20;
            local_e0 = puVar21;
            local_d0 = uVar22;
            local_c0 = uVar23;
            local_b0 = uVar24;
            local_a0 = uVar25;
            local_98 = uVar26;
            if (puVar32 == (undefined1 *)0x3b36a7a007b21166) {
              DAT_0021fb74 = 0;
              FUN_001e8fd4(local_310,*(undefined8 *)(param_7 + local_4c8 * 8));
              FUN_001e8fd4(local_310,&DAT_0021f0d8);
              local_398 = local_4c8 + 1;
              puVar5 = (undefined1 *)0xc89737e2f8768a05;
              if (local_398 != param_8) {
                puVar5 = (undefined1 *)0x312910f1547c7c77;
              }
            }
          }
        }
        else {
          local_d0 = local_2e8;
          local_f8 = local_340;
          local_e8 = local_418;
          puVar5 = (undefined1 *)0x960858df0b0de441;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f0 = puVar19;
          local_e0 = puVar21;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if ((puVar32 != (undefined1 *)0x418b7d3c908df894) &&
             (puVar5 = puVar32, local_f8 = uVar18, local_e8 = uVar20, local_d0 = uVar22,
             puVar32 == (undefined1 *)0x483dcbc36ada42c4)) goto LAB_00208a0c;
        }
      }
      else if ((long)puVar32 < 0x54c2b837d86711b8) {
        if (puVar32 == (undefined1 *)0x49b9b00eeff4c15a) {
          local_29c = 0;
          *param_9 = 5;
          puVar5 = (undefined1 *)0x54c2b837d86711b8;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
        }
        else {
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0x5039187a35dab08d) {
            local_d0 = local_2e8;
            local_f8 = local_300;
            local_e8 = local_2a8;
            puVar5 = (undefined1 *)0x960858df0b0de441;
          }
        }
      }
      else if (puVar32 == (undefined1 *)0x54c2b837d86711b8) {
        free(__ptr);
        puVar5 = (undefined1 *)0xd14700cedc0a1544;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        local_46c = local_29c;
        if (local_310 != (void *)0x0) {
          puVar5 = (undefined1 *)0x55dcd19dee737a1a;
        }
      }
      else if (puVar32 == (undefined1 *)0x55dcd19dee737a1a) {
        free(local_310);
LAB_0020e050:
        puVar5 = (undefined1 *)0xabed3acad0e23c86;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        local_384 = local_46c;
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0x58b842c6f86d5804) {
          local_460 = local_320;
          local_430 = (undefined8 *)0x0;
          local_468 = local_318;
          goto LAB_0020e0f4;
        }
      }
    }
    else if ((long)puVar32 < 0x6b5051bf1aed633d) {
      if ((long)puVar32 < 0x65536dc2a8308acd) {
        if (puVar32 == (undefined1 *)0x5ece82223eee3411) {
          local_320 = local_80;
          local_318 = (ulong)local_78;
          puVar5 = puVar2;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
        }
        else {
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0x5eda44100212fa2c) {
            local_c0 = 0;
            puVar5 = (undefined1 *)0x1db468c64d6a7ed0;
          }
        }
      }
      else if (puVar32 == (undefined1 *)0x65536dc2a8308acd) {
        puVar5 = (undefined1 *)0x27963d1423e000f6;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (local_378 != (undefined8 *)0x0) {
          puVar5 = (undefined1 *)0xc7bf249d1db72b2;
        }
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0x696b554ab6b2c8c5) {
          local_110 = 0;
          local_108 = 0;
          puVar5 = (undefined1 *)0xf54c5df74fcabc41;
        }
      }
    }
    else if ((long)puVar32 < 0x77f0428eaa711148) {
      if (puVar32 == (undefined1 *)0x6b5051bf1aed633d) {
        iVar27 = FUN_00212730(0,1,&DAT_0021fb74);
        puVar5 = (undefined1 *)0xd1a28e2b92bbcc90;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (iVar27 != 0) {
          puVar5 = (undefined1 *)0xbf711ec4fafe862e;
        }
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0x75df443d79079721) {
          local_2c8 = (undefined8 *)(param_3 + local_120 * 0x20);
          local_440 = *local_2c8;
          local_2a8 = local_178;
          puVar5 = (undefined1 *)0xa865ab623572e331;
          if (param_4 - 1 <= local_120) {
            puVar5 = (undefined1 *)0xba8fbc7d3623138d;
          }
          local_340 = local_160;
          local_2e8 = local_168;
          local_428 = local_120;
        }
      }
    }
    else {
      local_d0 = local_358;
      local_f8 = local_300;
      local_e8 = local_2a8;
      puVar5 = (undefined1 *)0x960858df0b0de441;
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f0 = puVar19;
      local_e0 = puVar21;
      local_c0 = uVar23;
      local_b0 = uVar24;
      local_a0 = uVar25;
      local_98 = uVar26;
      if (puVar32 != (undefined1 *)0x77f0428eaa711148) {
        local_118 = local_2c8;
        puVar5 = (undefined1 *)0x8500be9b057d300e;
        local_f8 = uVar18;
        local_e8 = uVar20;
        local_d0 = uVar22;
        if ((puVar32 != (undefined1 *)0x7d8bf94548220fb8) &&
           (puVar5 = puVar32, local_118 = puVar14, puVar32 == (undefined1 *)0x7e713fa43f38c582)) {
          local_120 = 0;
          puVar5 = (undefined1 *)0x75df443d79079721;
        }
      }
    }
    goto LAB_00208a20;
  }
  if ((long)puVar32 < 0x2ce2edddaf334d81) {
    if ((long)puVar32 < 0x1cba5f82f77e481f) {
      if ((long)puVar32 < 0xfb13253120e52d5) {
        puVar5 = puVar4;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if ((puVar32 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar5 = puVar32, puVar32 == (undefined1 *)0xc7bf249d1db72b2)) {
          local_f0 = local_378;
          puVar5 = (undefined1 *)0xbfa497f00132becf;
        }
      }
      else if (puVar32 == (undefined1 *)0xfb13253120e52d5) {
        local_328 = local_2c0 & 0xffffffff00000000 | local_370;
        uVar29 = FUN_00201f60(local_368,local_328,local_458);
        puVar5 = (undefined1 *)0xfeee7e65b66b0f06;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if ((uVar29 & 1) == 0) {
          puVar5 = (undefined1 *)0xfda5c16090bb3af4;
        }
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0x125dd2cc844aecb4) {
          puVar5 = puVar3;
        }
      }
    }
    else if ((long)puVar32 < 0x22f3f9cf91cbb9a6) {
      if (puVar32 == (undefined1 *)0x1cba5f82f77e481f) {
        DAT_0021f0d8 = DAT_0021f0d8 ^ 0x6a;
        DAT_0021f0d9 = DAT_0021f0d9 ^ 0x6a;
        DAT_0021fb75 = '\x01';
        puVar5 = (undefined1 *)0x3b36a7a007b21166;
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
      }
      else {
        local_178 = uVar8;
        local_168 = uVar9;
        local_160 = uVar10;
        local_120 = uVar13;
        local_118 = puVar14;
        local_110 = lVar15;
        local_108 = lVar16;
        local_100 = lVar17;
        local_f8 = uVar18;
        local_f0 = puVar19;
        local_e8 = uVar20;
        local_e0 = puVar21;
        local_d0 = uVar22;
        local_c0 = uVar23;
        local_b0 = uVar24;
        local_a0 = uVar25;
        local_98 = uVar26;
        if (puVar32 == (undefined1 *)0x1db468c64d6a7ed0) {
          lVar28 = FUN_001e238c(local_310,*(undefined8 *)(*local_4d0 + local_c0 * 8));
          local_470 = lVar28 == 0;
          puVar5 = (undefined1 *)0xc33cd820d1133e3a;
          if (!(bool)local_470) {
            puVar5 = (undefined1 *)0xcb31a60e6206eed1;
          }
          local_4d8 = local_c0;
        }
      }
    }
    else {
      puVar5 = (undefined1 *)0x31b9d74c89a90fe3;
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      local_b0 = local_2c0;
      local_a0 = local_2d0;
      local_98 = local_298;
      if (puVar32 != (undefined1 *)0x22f3f9cf91cbb9a6) {
        if (puVar32 == (undefined1 *)0x27963d1423e000f6) {
LAB_0020df20:
          bVar31 = 1;
LAB_00208a0c:
          puVar5 = (undefined1 *)0x54c2b837d86711b8;
          local_178 = uVar8;
          local_168 = uVar9;
          local_160 = uVar10;
          local_120 = uVar13;
          local_118 = puVar14;
          local_110 = lVar15;
          local_108 = lVar16;
          local_100 = lVar17;
          local_f8 = uVar18;
          local_f0 = puVar19;
          local_e8 = uVar20;
          local_e0 = puVar21;
          local_d0 = uVar22;
          local_c0 = uVar23;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          local_29c = bVar31;
        }
        else {
          puVar5 = puVar32;
          local_b0 = uVar24;
          local_a0 = uVar25;
          local_98 = uVar26;
          if (puVar32 == (undefined1 *)0x29ff0ff794febe2e) {
            local_2d0 = local_2f0 & 0xffffffff00000000 | local_370;
            iVar27 = FUN_00201cf8(local_368,local_2d0,local_458);
            puVar5 = (undefined1 *)0xe48eaf6f29f5caa2;
            if (iVar27 < 0) {
              puVar5 = (undefined1 *)0x22f3f9cf91cbb9a6;
            }
          }
        }
      }
    }
    goto LAB_00208a20;
  }
  if ((long)puVar32 < 0x32f4713bcaf93571) {
    if (0x312910f1547c7c76 < (long)puVar32) {
      local_100 = local_398;
      puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      local_b0 = uVar24;
      local_a0 = uVar25;
      local_98 = uVar26;
      if ((puVar32 != (undefined1 *)0x312910f1547c7c77) &&
         (puVar5 = puVar32, local_100 = lVar17, puVar32 == (undefined1 *)0x31b9d74c89a90fe3)) {
        local_3a0 = local_448 + 1;
        puVar5 = (undefined1 *)0xce95d05271a8da34;
        if (local_3a0 != param_6) {
          puVar5 = (undefined1 *)0x32f4713bcaf93571;
        }
        local_3e8 = local_98;
        local_400 = local_b0;
        local_3f0 = local_a0;
      }
      goto LAB_00208a20;
    }
    if (puVar32 != (undefined1 *)0x2ce2edddaf334d81) {
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      local_b0 = uVar24;
      local_a0 = uVar25;
      local_98 = uVar26;
      if (puVar32 == (undefined1 *)0x3007aa9d32d99be8) {
        puVar5 = (undefined1 *)0x3b16db62a3c2f4fb;
      }
      goto LAB_00208a20;
    }
    local_478 = local_350 + 1;
  }
  else {
    if ((long)puVar32 < 0x353e7cd16df664a2) {
      local_88 = local_3a0;
      local_130 = local_400;
      local_150 = local_3f0;
      local_140 = local_3e8;
      puVar5 = (undefined1 *)0x34ee749c3dc3cf5c;
      local_178 = uVar8;
      local_168 = uVar9;
      local_160 = uVar10;
      local_120 = uVar13;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      local_b0 = uVar24;
      local_a0 = uVar25;
      local_98 = uVar26;
      if ((puVar32 != (undefined1 *)0x32f4713bcaf93571) &&
         (puVar5 = puVar32, local_150 = uVar11, local_140 = uVar12, local_130 = uVar6,
         local_88 = uVar29, puVar32 == (undefined1 *)0x34ee749c3dc3cf5c)) {
        local_3d8 = (undefined8 *)(param_5 + uVar29 * 0x20);
        local_458 = *local_3d8;
        puVar5 = (undefined1 *)0x29ff0ff794febe2e;
        if (param_6 - 1 <= uVar29) {
          puVar5 = (undefined1 *)0xfb13253120e52d5;
        }
        local_2f0 = uVar11;
        local_298 = uVar12;
        local_448 = uVar29;
        local_2c0 = uVar6;
      }
      goto LAB_00208a20;
    }
    if (puVar32 != (undefined1 *)0x353e7cd16df664a2) {
      local_160 = local_3b8;
      local_168 = local_3b0;
      local_178 = local_3c8;
      local_120 = local_390;
      puVar5 = (undefined1 *)0x75df443d79079721;
      local_118 = puVar14;
      local_110 = lVar15;
      local_108 = lVar16;
      local_100 = lVar17;
      local_f8 = uVar18;
      local_f0 = puVar19;
      local_e8 = uVar20;
      local_e0 = puVar21;
      local_d0 = uVar22;
      local_c0 = uVar23;
      local_b0 = uVar24;
      local_a0 = uVar25;
      local_98 = uVar26;
      if ((puVar32 != (undefined1 *)0x36f07785a64d7584) &&
         (puVar5 = puVar32, local_178 = uVar8, local_168 = uVar9, local_160 = uVar10,
         local_120 = uVar13, puVar32 == (undefined1 *)0x3ace195dd3930386)) goto LAB_0020df20;
      goto LAB_00208a20;
    }
    local_478 = 1;
  }
  puVar5 = (undefined1 *)0xd222672a639a1d2e;
  local_178 = uVar8;
  local_168 = uVar9;
  local_160 = uVar10;
  local_120 = uVar13;
  local_118 = puVar14;
  local_110 = lVar15;
  local_108 = lVar16;
  local_100 = lVar17;
  local_f8 = uVar18;
  local_f0 = puVar19;
  local_e8 = uVar20;
  local_e0 = puVar21;
  local_d0 = uVar22;
  local_c0 = uVar23;
  local_b0 = uVar24;
  local_a0 = uVar25;
  local_98 = uVar26;
  goto LAB_00208a20;
}

