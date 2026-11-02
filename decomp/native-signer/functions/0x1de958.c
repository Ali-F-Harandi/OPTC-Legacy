// rea decompile_all
// name: FUN_001de958
// address: 0x1de958
// body: available
// range: 0x1de958-0x1e0783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e0780 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001de958(undefined8 param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  time_t tVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 extraout_x13;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 extraout_x15;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 unaff_x25;
  undefined8 uVar37;
  void *local_228;
  uint local_21c;
  ulong local_218;
  undefined8 local_210;
  void *local_200;
  long local_1f8;
  void *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  undefined8 local_180;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  long local_d8;
  void *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  time_t tStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88 [2];
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_98 = 0;
  local_90 = 0;
  tVar19 = time(&tStack_a0);
  srand((uint)tVar19);
  pvVar20 = (void *)FUN_002116fc(&local_90,8,param_3 + 0x230);
  lVar1 = 0x55dcd19dee737a1a;
  if ((int)local_90 != 0) {
    lVar1 = -0x2eb8ff3123f5eabc;
  }
  pvVar21 = pvVar20;
  lVar29 = 0x54c2b837d86711b8;
  lVar30 = 0x55dcd19dee737a1a;
  lVar31 = param_3 + 0x240;
  uVar33 = extraout_x13;
  uVar35 = extraout_x15;
LAB_001deadc:
  uVar37 = unaff_x25;
  uVar36 = uVar35;
  uVar34 = uVar33;
  lVar32 = lVar31;
  lVar28 = lVar30;
  uVar27 = param_6;
  uVar26 = param_5;
  uVar25 = param_4;
  lVar24 = lVar29;
  pvVar22 = pvVar21;
  uVar17 = local_a8;
  uVar16 = local_b0;
  uVar15 = local_b8;
  uVar14 = local_c0;
  lVar13 = local_c8;
  pvVar12 = local_d0;
  lVar11 = local_d8;
  uVar10 = local_e0;
  pvVar9 = local_e8;
  uVar8 = local_f0;
  uVar7 = local_f8;
  pvVar6 = local_100;
  uVar5 = local_108;
  pvVar21 = pvVar22;
  lVar29 = lVar24;
  param_4 = uVar25;
  param_5 = uVar26;
  param_6 = uVar27;
  lVar30 = lVar28;
  lVar31 = lVar32;
  uVar33 = uVar34;
  uVar35 = uVar36;
  unaff_x25 = uVar37;
  if (-0x1f81af14a263eaa4 < lVar24) {
    if (lVar24 < 0x3cd27908c3b8e652) {
      if (lVar24 < 0xbccd62a0fc32d) {
        if (lVar24 < -0x12bc87502b2af86e) {
          if (lVar24 == -0x1f81af14a263eaa3) {
            FUN_00211958(local_c0);
            FUN_00211808(local_f0);
            FUN_00211808(local_e0);
            FUN_00211808(local_a8);
            FUN_00211808(local_d8);
            FUN_00211808(pvVar20);
            FUN_00211808(local_f8);
            FUN_00211808(local_c8);
            FUN_00211808(local_b8);
            FUN_00211808(local_b0);
            local_228 = local_d0;
            lVar29 = 0x7ffb850a0e6ed38d;
            local_200 = local_e8;
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar7;
            local_f0 = uVar8;
            local_e8 = pvVar9;
            local_e0 = uVar10;
            local_d8 = lVar11;
            local_d0 = pvVar12;
            local_c8 = lVar13;
            local_c0 = uVar14;
            local_b8 = uVar15;
            local_b0 = uVar16;
            local_a8 = uVar17;
            if (local_d0 != (void *)0x0) {
              lVar29 = 0x6bbc6b8cc56478f1;
            }
            goto LAB_001deadc;
          }
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 != -0x144ad6ddee249a62) goto LAB_001deadc;
          local_108 = 0;
          local_100 = (void *)0x0;
          pvVar21 = local_168;
          param_4 = local_180;
          param_5 = local_170;
          param_6 = local_160;
          lVar30 = local_190;
          lVar31 = local_198;
          uVar33 = local_1c8;
          uVar35 = local_1b8;
          unaff_x25 = local_1a0;
        }
        else {
          local_100 = local_1d0;
          local_108 = local_1b0;
          pvVar21 = local_168;
          lVar29 = 0x1b4ac2f1f22e2589;
          param_4 = local_180;
          param_5 = local_170;
          param_6 = local_160;
          lVar30 = local_190;
          lVar31 = local_198;
          uVar33 = local_1c8;
          uVar35 = local_1b8;
          unaff_x25 = local_1a0;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 == -0x12bc87502b2af86e) goto LAB_001deadc;
          if (lVar24 == -0x428109008685f48) {
            lVar29 = -0x59bab4f8732095e2;
            local_108 = uVar5;
            local_100 = pvVar6;
            goto LAB_001e0314;
          }
          pvVar21 = pvVar22;
          lVar29 = lVar24;
          param_4 = uVar25;
          param_5 = uVar26;
          param_6 = uVar27;
          lVar30 = lVar28;
          lVar31 = lVar32;
          uVar33 = uVar34;
          uVar35 = uVar36;
          unaff_x25 = uVar37;
          local_108 = uVar5;
          local_100 = pvVar6;
          if (lVar24 != -0x17196cb747ef8c5) goto LAB_001deadc;
          local_108 = 0;
          local_100 = (void *)0x0;
          pvVar21 = local_168;
          param_4 = local_180;
          param_5 = local_170;
          param_6 = local_160;
          lVar30 = local_190;
          lVar31 = local_198;
          uVar33 = 0;
          uVar35 = local_1b8;
          unaff_x25 = local_1a0;
        }
      }
      else {
        if (lVar24 < 0x1b4ac2f1f22e2589) {
          if (lVar24 == 0xbccd62a0fc32d) {
            local_1c8 = FUN_002116fc(&local_90,*(undefined4 *)(param_3 + 0x280),
                                     *(undefined8 *)(param_3 + 0x288));
            bVar18 = (int)local_90 == 0;
            lVar28 = -0x144ad6ddee249a62;
            lVar29 = 0x11389729d7590b94;
            goto LAB_001e0630;
          }
          if (lVar24 != 0xf111d00f6a8edda) {
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar7;
            local_f0 = uVar8;
            local_e8 = pvVar9;
            local_e0 = uVar10;
            local_d8 = lVar11;
            local_d0 = pvVar12;
            local_c8 = lVar13;
            local_c0 = uVar14;
            local_b8 = uVar15;
            local_b0 = uVar16;
            local_a8 = uVar17;
            if (lVar24 == 0x11389729d7590b94) {
              local_1b0 = FUN_00211a18(&local_90);
              lVar29 = -0x6e4a13fb3d707c87;
              if ((int)local_90 != 0) {
                lVar29 = -0x5587caf0ffc9f6c4;
              }
            }
            goto LAB_001deadc;
          }
          local_100 = local_1d0;
        }
        else {
          if (lVar24 == 0x1b4ac2f1f22e2589) {
            FUN_0010b370((long)&local_90 + 4,param_1,param_3);
            local_c0 = local_108;
            local_d0 = local_100;
            lVar29 = -0x1f81af14a263eaa3;
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar25;
            local_f0 = uVar26;
            local_e8 = pvVar22;
            local_e0 = uVar27;
            local_d8 = lVar32;
            local_c8 = lVar28;
            local_b8 = uVar34;
            local_b0 = uVar36;
            local_a8 = uVar37;
            goto LAB_001deadc;
          }
          if (lVar24 == 0x24e5eef263e81b7c) {
            local_108 = 0;
            local_100 = (void *)0x0;
            pvVar21 = local_168;
            param_4 = local_180;
            param_5 = local_170;
            param_6 = local_160;
            lVar30 = local_190;
            lVar31 = local_198;
            uVar33 = 0;
            uVar35 = 0;
            unaff_x25 = 0;
            goto LAB_001e0050;
          }
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 != 0x361985fb5d496b76) goto LAB_001deadc;
          local_100 = (void *)0x0;
        }
LAB_001e0028:
        local_108 = local_1b0;
        pvVar21 = local_168;
        param_4 = local_180;
        param_5 = local_170;
        param_6 = local_160;
        lVar30 = local_190;
        lVar31 = local_198;
        uVar33 = local_1c8;
        uVar35 = local_1b8;
        unaff_x25 = local_1a0;
      }
    }
    else {
      if (0x54cc8c62117e2257 < lVar24) {
        if (0x62ccc994e2cb7da2 < lVar24) {
          if (lVar24 == 0x62ccc994e2cb7da3) {
            local_21c = (uint)local_1f8;
            uVar3 = (local_21c & 0xff00ff00) >> 8 | (local_21c & 0xff00ff) << 8;
            local_98 = CONCAT44(uVar3 >> 0x10 | uVar3 << 0x10,(undefined4)local_98);
            local_198 = FUN_002116fc(&local_90,4,(long)&local_98 + 4);
            lVar29 = -0x400e37f3caa97ab4;
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar7;
            local_f0 = uVar8;
            local_e8 = pvVar9;
            local_e0 = uVar10;
            local_d8 = lVar11;
            local_d0 = pvVar12;
            local_c8 = lVar13;
            local_c0 = uVar14;
            local_b8 = uVar15;
            local_b0 = uVar16;
            local_a8 = uVar17;
            if ((int)local_90 != 0) {
              lVar29 = 0x24e5eef263e81b7c;
            }
          }
          else if (lVar24 == 0x6bbc6b8cc56478f1) {
            free(local_228);
            lVar29 = -0x3180ec1dafce7d52;
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar7;
            local_f0 = uVar8;
            local_e8 = pvVar9;
            local_e0 = uVar10;
            local_d8 = lVar11;
            local_d0 = pvVar12;
            local_c8 = lVar13;
            local_c0 = uVar14;
            local_b8 = uVar15;
            local_b0 = uVar16;
            local_a8 = uVar17;
          }
          else {
            local_108 = uVar5;
            local_100 = pvVar6;
            local_f8 = uVar7;
            local_f0 = uVar8;
            local_e8 = pvVar9;
            local_e0 = uVar10;
            local_d8 = lVar11;
            local_d0 = pvVar12;
            local_c8 = lVar13;
            local_c0 = uVar14;
            local_b8 = uVar15;
            local_b0 = uVar16;
            local_a8 = uVar17;
            if (lVar24 == 0x7ffb850a0e6ed38d) {
              lVar29 = -0x3180ec1dafce7d52;
            }
          }
          goto LAB_001deadc;
        }
        if (lVar24 == 0x54cc8c62117e2258) {
          local_168 = local_78;
          local_1f8 = local_88[0];
          local_170 = FUN_002116fc(&local_90,8,param_3 + 0x238);
          bVar18 = (int)local_90 == 0;
          lVar28 = -0x7447e788f4d32ac9;
          lVar29 = -0x50e54cd80f265318;
          goto LAB_001e0630;
        }
        if (lVar24 != 0x55dcd19dee737a1a) {
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 == 0x5ad71f292518d033) {
            lVar29 = -0x21c44217ce61bec8;
          }
          goto LAB_001deadc;
        }
        local_160 = FUN_002116fc(&local_90,0x28,param_3 + 0x240);
        bVar18 = (int)local_90 == 0;
        lVar29 = -0x2e5d71d46d443370;
        lVar28 = -0x5412c5352f1dc37a;
        goto LAB_001e0630;
      }
      if (0x4b73c4e968047987 < lVar24) {
        if (lVar24 == 0x4b73c4e968047988) {
          uVar23 = FUN_00211904(local_1b0);
          local_218 = uVar23 & 0xffffffff;
          local_1d0 = calloc(local_218,1);
          lVar29 = -0x429b7b8ddead7976;
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (local_1d0 != (void *)0x0) {
            lVar29 = -0x65a31e6327338728;
          }
        }
        else if (lVar24 == 0x53e14c28908eeeeb) {
          local_78 = calloc(local_88[0] + 1,1);
          lVar29 = -0x428109008685f48;
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (local_78 != (void *)0x0) {
            lVar29 = -0x244c08061ede3ca6;
          }
        }
        else {
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 == 0x54c2b837d86711b8) {
            lVar29 = lVar1;
          }
        }
        goto LAB_001deadc;
      }
      if (lVar24 != 0x3cd27908c3b8e652) {
        local_108 = uVar5;
        local_100 = pvVar6;
        local_f8 = uVar7;
        local_f0 = uVar8;
        local_e8 = pvVar9;
        local_e0 = uVar10;
        local_d8 = lVar11;
        local_d0 = pvVar12;
        local_c8 = lVar13;
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        local_a8 = uVar17;
        if (lVar24 == 0x4101bf80446bdc20) {
          lVar29 = -0x59bab4f8732095e2;
        }
        goto LAB_001deadc;
      }
      local_108 = 0;
      local_100 = (void *)0x0;
      pvVar21 = local_168;
      param_4 = local_180;
      param_5 = local_170;
      param_6 = local_160;
      lVar30 = local_190;
      lVar31 = local_198;
      uVar33 = 0;
      uVar35 = 0;
      unaff_x25 = local_1a0;
    }
LAB_001e0050:
    *param_2 = 4;
    lVar29 = 0x1b4ac2f1f22e2589;
    local_f8 = uVar7;
    local_f0 = uVar8;
    local_e8 = pvVar9;
    local_e0 = uVar10;
    local_d8 = lVar11;
    local_d0 = pvVar12;
    local_c8 = lVar13;
    local_c0 = uVar14;
    local_b8 = uVar15;
    local_b0 = uVar16;
    local_a8 = uVar17;
    goto LAB_001deadc;
  }
  if (-0x429b7b8ddead7977 < lVar24) {
    if (lVar24 < -0x2eb8ff3123f5eabc) {
      if (lVar24 < -0x361936ecac8b8986) {
        if (lVar24 == -0x429b7b8ddead7976) {
          local_100 = (void *)0x0;
          local_108 = local_1b0;
          lVar29 = 0x1b4ac2f1f22e2589;
          pvVar22 = local_168;
          uVar25 = local_180;
          uVar26 = local_170;
          uVar27 = local_160;
          lVar28 = local_190;
          lVar32 = local_198;
          uVar34 = local_1c8;
          uVar36 = local_1b8;
          uVar37 = local_1a0;
LAB_001e0314:
          *param_2 = 2;
          pvVar21 = pvVar22;
          param_4 = uVar25;
          param_5 = uVar26;
          param_6 = uVar27;
          lVar30 = lVar28;
          lVar31 = lVar32;
          uVar33 = uVar34;
          uVar35 = uVar36;
          unaff_x25 = uVar37;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
        }
        else {
          local_108 = uVar5;
          local_100 = pvVar6;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 == -0x400e37f3caa97ab4) {
            local_1a0 = FUN_002116fc(&local_90,local_21c,local_168);
            lVar29 = -0x361936ecac8b8986;
            if ((int)local_90 != 0) {
              lVar29 = 0x3cd27908c3b8e652;
            }
          }
        }
      }
      else {
        if (lVar24 == -0x361936ecac8b8986) {
          uVar3 = (*(uint *)(param_3 + 0x280) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_3 + 0x280) & 0xff00ff) << 8;
          local_98 = CONCAT44(local_98._4_4_,uVar3 >> 0x10 | uVar3 << 0x10);
          local_1b8 = FUN_002116fc(&local_90,4,&local_98);
          bVar18 = (int)local_90 == 0;
          lVar28 = -0x17196cb747ef8c5;
          lVar29 = 0xbccd62a0fc32d;
          goto LAB_001e0630;
        }
        if (lVar24 == -0x359d4e10b3bbbc3c) {
          local_108 = 0;
          local_100 = (void *)0x0;
          pvVar21 = local_168;
          param_4 = local_180;
          param_5 = local_170;
          param_6 = local_160;
          lVar30 = 0;
          lVar31 = 0;
          uVar33 = 0;
          uVar35 = 0;
          unaff_x25 = 0;
          goto LAB_001e0050;
        }
        local_108 = uVar5;
        local_100 = pvVar6;
        local_f8 = uVar7;
        local_f0 = uVar8;
        local_e8 = pvVar9;
        local_e0 = uVar10;
        local_d8 = lVar11;
        local_d0 = pvVar12;
        local_c8 = lVar13;
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        local_a8 = uVar17;
        if (lVar24 == -0x3180ec1dafce7d52) {
          lVar29 = 0x5ad71f292518d033;
          if (local_200 != (void *)0x0) {
            lVar29 = -0x2d23be9e4092ee55;
          }
        }
      }
    }
    else if (lVar24 < -0x2701f7b957916a96) {
      if (lVar24 == -0x2eb8ff3123f5eabc) {
        param_6 = 0;
        goto LAB_001dff90;
      }
      if (lVar24 == -0x2e5d71d46d443370) {
        local_210 = *(undefined8 *)(param_3 + 0x10);
        FUN_001e38f8(local_88,0,0x18);
        FUN_001dd488(param_2,param_1,local_210,FUN_001de550,local_88);
        iVar2 = *param_2;
        lVar28 = -0x56ad058abb7434bf;
        lVar29 = 0x53e14c28908eeeeb;
        goto LAB_001deaac;
      }
      local_108 = uVar5;
      local_100 = pvVar6;
      local_f8 = uVar7;
      local_f0 = uVar8;
      local_e8 = pvVar9;
      local_e0 = uVar10;
      local_d8 = lVar11;
      local_d0 = pvVar12;
      local_c8 = lVar13;
      local_c0 = uVar14;
      local_b8 = uVar15;
      local_b0 = uVar16;
      local_a8 = uVar17;
      if (lVar24 == -0x2d23be9e4092ee55) {
        free(local_200);
        lVar29 = -0x21c44217ce61bec8;
      }
    }
    else {
      local_f0 = local_170;
      local_f8 = local_180;
      local_c8 = local_190;
      local_d8 = local_198;
      local_a8 = local_1a0;
      local_b0 = local_1b8;
      local_b8 = local_1c8;
      local_c0 = local_1b0;
      local_d0 = local_1d0;
      local_e0 = local_160;
      local_e8 = local_168;
      lVar29 = -0x1f81af14a263eaa3;
      local_108 = uVar5;
      local_100 = pvVar6;
      if (lVar24 != -0x2701f7b957916a96) {
        if (lVar24 == -0x244c08061ede3ca6) {
          FUN_001dd488(param_2,param_1,local_210,FUN_001de688,local_88);
          lVar29 = 0x54cc8c62117e2258;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (*param_2 != 0) {
            lVar29 = 0x4101bf80446bdc20;
          }
        }
        else {
          lVar29 = lVar24;
          local_f8 = uVar7;
          local_f0 = uVar8;
          local_e8 = pvVar9;
          local_e0 = uVar10;
          local_d8 = lVar11;
          local_d0 = pvVar12;
          local_c8 = lVar13;
          local_c0 = uVar14;
          local_b8 = uVar15;
          local_b0 = uVar16;
          local_a8 = uVar17;
          if (lVar24 == -0x21c44217ce61bec8) {
            if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(*param_2 == 0);
            }
            return;
          }
        }
      }
    }
    goto LAB_001deadc;
  }
  if (-0x5f20efb5b92e6f75 < lVar24) {
    if (lVar24 < -0x5587caf0ffc9f6c4) {
      if (lVar24 == -0x5f20efb5b92e6f74) {
        FUN_0010bdd4(param_2,param_1,param_3,local_218,local_1d0);
        iVar2 = *param_2;
        lVar29 = -0x2701f7b957916a96;
        lVar28 = -0x12bc87502b2af86e;
LAB_001deaac:
        local_108 = uVar5;
        local_100 = pvVar6;
        local_f8 = uVar7;
        local_f0 = uVar8;
        local_e8 = pvVar9;
        local_e0 = uVar10;
        local_d8 = lVar11;
        local_d0 = pvVar12;
        local_c8 = lVar13;
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        local_a8 = uVar17;
        if (iVar2 != 0) {
          lVar29 = lVar28;
        }
      }
      else if (lVar24 == -0x59bab4f8732095e2) {
        local_108 = 0;
        local_100 = (void *)0x0;
        pvVar21 = (void *)0x0;
        lVar29 = 0x1b4ac2f1f22e2589;
        param_4 = 0;
        param_5 = 0;
        param_6 = local_160;
        lVar30 = 0;
        lVar31 = 0;
        uVar33 = 0;
        uVar35 = 0;
        unaff_x25 = 0;
        local_f8 = uVar7;
        local_f0 = uVar8;
        local_e8 = pvVar9;
        local_e0 = uVar10;
        local_d8 = lVar11;
        local_d0 = pvVar12;
        local_c8 = lVar13;
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        local_a8 = uVar17;
      }
      else {
        local_108 = uVar5;
        local_100 = pvVar6;
        local_f8 = uVar7;
        local_f0 = uVar8;
        local_e8 = pvVar9;
        local_e0 = uVar10;
        local_d8 = lVar11;
        local_d0 = pvVar12;
        local_c8 = lVar13;
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        local_a8 = uVar17;
        if (lVar24 == -0x56ad058abb7434bf) {
          lVar29 = -0x59bab4f8732095e2;
        }
      }
    }
    else {
      if (lVar24 == -0x5587caf0ffc9f6c4) {
        local_100 = (void *)0x0;
        goto LAB_001e0028;
      }
      param_6 = local_160;
      if (lVar24 == -0x5412c5352f1dc37a) {
LAB_001dff90:
        local_100 = (void *)0x0;
        local_108 = 0;
        pvVar21 = (void *)0x0;
        param_4 = 0;
        param_5 = 0;
        lVar30 = 0;
        lVar31 = 0;
        uVar33 = 0;
        uVar35 = 0;
        unaff_x25 = 0;
        goto LAB_001e0050;
      }
      param_6 = uVar27;
      local_108 = uVar5;
      local_100 = pvVar6;
      local_f8 = uVar7;
      local_f0 = uVar8;
      local_e8 = pvVar9;
      local_e0 = uVar10;
      local_d8 = lVar11;
      local_d0 = pvVar12;
      local_c8 = lVar13;
      local_c0 = uVar14;
      local_b8 = uVar15;
      local_b0 = uVar16;
      local_a8 = uVar17;
      if (lVar24 == -0x50e54cd80f265318) {
        local_180 = FUN_002116fc(&local_90,0x200,param_3 + 0x30);
        lVar29 = -0x7dbc322ed98e3afb;
        if ((int)local_90 != 0) {
          lVar29 = -0x359d4e10b3bbbc3c;
        }
      }
    }
    goto LAB_001deadc;
  }
  if (lVar24 < -0x7447e788f4d32ac9) {
    if (lVar24 != -0x7dbc322ed98e3afb) {
      local_108 = uVar5;
      local_100 = pvVar6;
      local_f8 = uVar7;
      local_f0 = uVar8;
      local_e8 = pvVar9;
      local_e0 = uVar10;
      local_d8 = lVar11;
      local_d0 = pvVar12;
      local_c8 = lVar13;
      local_c0 = uVar14;
      local_b8 = uVar15;
      local_b0 = uVar16;
      local_a8 = uVar17;
      if (lVar24 == -0x76ca62710947274b) {
        local_108 = 0;
        local_100 = (void *)0x0;
        pvVar21 = local_168;
        param_4 = local_180;
        param_5 = local_170;
        param_6 = local_160;
        lVar30 = local_190;
        lVar31 = 0;
        uVar33 = 0;
        uVar35 = 0;
        unaff_x25 = 0;
        goto LAB_001e0050;
      }
      goto LAB_001deadc;
    }
    local_190 = FUN_002116fc(&local_90,4,param_3 + 0x20);
    bVar18 = (int)local_90 == 0;
    lVar28 = -0x76ca62710947274b;
    lVar29 = 0x62ccc994e2cb7da3;
  }
  else {
    if (lVar24 == -0x7447e788f4d32ac9) {
      local_108 = 0;
      local_100 = (void *)0x0;
      pvVar21 = local_168;
      param_4 = 0;
      param_5 = local_170;
      param_6 = local_160;
      lVar30 = 0;
      lVar31 = 0;
      uVar33 = 0;
      uVar35 = 0;
      unaff_x25 = 0;
      goto LAB_001e0050;
    }
    if (lVar24 != -0x6e4a13fb3d707c87) {
      local_108 = uVar5;
      local_100 = pvVar6;
      local_f8 = uVar7;
      local_f0 = uVar8;
      local_e8 = pvVar9;
      local_e0 = uVar10;
      local_d8 = lVar11;
      local_d0 = pvVar12;
      local_c8 = lVar13;
      local_c0 = uVar14;
      local_b8 = uVar15;
      local_b0 = uVar16;
      local_a8 = uVar17;
      if (lVar24 == -0x65a31e6327338728) {
        FUN_00211910(uVar26,&local_90,local_1b0,local_1d0);
        lVar29 = -0x5f20efb5b92e6f74;
        if ((int)local_90 != 0) {
          lVar29 = 0xf111d00f6a8edda;
        }
      }
      goto LAB_001deadc;
    }
    FUN_001b6c50(&local_90,local_1b0,9,pvVar20,local_160,local_170,local_180,local_190,local_198,
                 local_1a0,local_1b8,local_1c8);
    bVar18 = (int)local_90 == 0;
    lVar28 = 0x361985fb5d496b76;
    lVar29 = 0x4b73c4e968047988;
  }
LAB_001e0630:
  local_108 = uVar5;
  local_100 = pvVar6;
  local_f8 = uVar7;
  local_f0 = uVar8;
  local_e8 = pvVar9;
  local_e0 = uVar10;
  local_d8 = lVar11;
  local_d0 = pvVar12;
  local_c8 = lVar13;
  local_c0 = uVar14;
  local_b8 = uVar15;
  local_b0 = uVar16;
  local_a8 = uVar17;
  if (!bVar18) {
    lVar29 = lVar28;
  }
  goto LAB_001deadc;
}

