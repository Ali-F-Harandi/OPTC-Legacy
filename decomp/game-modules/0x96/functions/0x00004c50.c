
void FUN_00004c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long local_390;
  undefined8 local_388 [16];
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  uint local_288;
  uint local_284;
  uint local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  uint local_258;
  uint local_254;
  uint local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  uint local_228;
  uint local_224;
  uint local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  uint local_198;
  uint local_194;
  uint local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108;
  uint local_104;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  puVar6 = &local_308;
  uVar5 = FUN_0001175c(param_5,0x10,1);
  uVar8 = (uint)(uVar5 >> 4) & 0xfffffff;
  FUN_000108e0(puVar6,0,0x300);
  if (param_5 != 0) {
    local_2e0 = param_5;
    if (uVar8 < param_5) {
      local_2e0 = uVar8;
    }
    local_2e4 = 0;
    if (uVar8 < param_5) {
      uVar4 = uVar8 * 2;
      local_2b0 = uVar4;
      if (param_5 < uVar4) {
        local_2b0 = param_5;
      }
      local_2d8 = param_2;
      local_2d0 = param_3;
      local_2c8 = param_1;
      local_2c0 = param_4;
      local_2b8 = param_5;
      local_2b4 = uVar8;
      if (uVar4 < param_5) {
        uVar2 = uVar8 * 3;
        local_280 = uVar2;
        if (param_5 < uVar2) {
          local_280 = param_5;
        }
        local_2a8 = param_2;
        local_2a0 = param_3;
        local_298 = param_1;
        local_290 = param_4;
        local_288 = param_5;
        local_284 = uVar4;
        if (uVar2 < param_5) {
          uVar4 = uVar8 * 4;
          local_250 = uVar4;
          if (param_5 < uVar4) {
            local_250 = param_5;
          }
          local_278 = param_2;
          local_270 = param_3;
          local_268 = param_1;
          local_260 = param_4;
          local_258 = param_5;
          local_254 = uVar2;
          if (uVar4 < param_5) {
            uVar2 = uVar8 * 5;
            local_220 = uVar2;
            if (param_5 < uVar2) {
              local_220 = param_5;
            }
            local_248 = param_2;
            local_240 = param_3;
            local_238 = param_1;
            local_230 = param_4;
            local_228 = param_5;
            local_224 = uVar4;
            if (uVar2 < param_5) {
              uVar4 = uVar8 * 6;
              local_1f0 = uVar4;
              if (param_5 < uVar4) {
                local_1f0 = param_5;
              }
              local_218 = param_2;
              local_210 = param_3;
              local_208 = param_1;
              local_200 = param_4;
              local_1f8 = param_5;
              local_1f4 = uVar2;
              if (uVar4 < param_5) {
                uVar2 = uVar8 * 7;
                local_1c0 = uVar2;
                if (param_5 < uVar2) {
                  local_1c0 = param_5;
                }
                local_1e8 = param_2;
                local_1e0 = param_3;
                local_1d8 = param_1;
                local_1d0 = param_4;
                local_1c8 = param_5;
                local_1c4 = uVar4;
                if (uVar2 < param_5) {
                  uVar4 = uVar8 * 8;
                  local_190 = uVar4;
                  if (param_5 < uVar4) {
                    local_190 = param_5;
                  }
                  local_1b8 = param_2;
                  local_1b0 = param_3;
                  local_1a8 = param_1;
                  local_1a0 = param_4;
                  local_198 = param_5;
                  local_194 = uVar2;
                  if (uVar4 < param_5) {
                    uVar2 = uVar8 * 9;
                    local_160 = uVar2;
                    if (param_5 < uVar2) {
                      local_160 = param_5;
                    }
                    local_188 = param_2;
                    local_180 = param_3;
                    local_178 = param_1;
                    local_170 = param_4;
                    local_168 = param_5;
                    local_164 = uVar4;
                    if (uVar2 < param_5) {
                      uVar4 = uVar8 * 10;
                      local_130 = uVar4;
                      if (param_5 < uVar4) {
                        local_130 = param_5;
                      }
                      local_158 = param_2;
                      local_150 = param_3;
                      local_148 = param_1;
                      local_140 = param_4;
                      local_138 = param_5;
                      local_134 = uVar2;
                      if (uVar4 < param_5) {
                        uVar2 = uVar8 * 0xb;
                        local_100 = uVar2;
                        if (param_5 < uVar2) {
                          local_100 = param_5;
                        }
                        local_128 = param_2;
                        local_120 = param_3;
                        local_118 = param_1;
                        local_110 = param_4;
                        local_108 = param_5;
                        local_104 = uVar4;
                        if (uVar2 < param_5) {
                          uVar4 = uVar8 * 0xc;
                          local_d0 = uVar4;
                          if (param_5 < uVar4) {
                            local_d0 = param_5;
                          }
                          local_f8 = param_2;
                          local_f0 = param_3;
                          local_e8 = param_1;
                          local_e0 = param_4;
                          local_d8 = param_5;
                          local_d4 = uVar2;
                          if (uVar4 < param_5) {
                            uVar2 = uVar8 * 0xd;
                            local_a0 = uVar2;
                            if (param_5 < uVar2) {
                              local_a0 = param_5;
                            }
                            local_c8 = param_2;
                            local_c0 = param_3;
                            local_b8 = param_1;
                            local_b0 = param_4;
                            local_a8 = param_5;
                            local_a4 = uVar4;
                            if (uVar2 < param_5) {
                              uVar4 = uVar8 * 0xe;
                              local_70 = uVar4;
                              if (param_5 < uVar4) {
                                local_70 = param_5;
                              }
                              local_98 = param_2;
                              local_90 = param_3;
                              local_88 = param_1;
                              local_80 = param_4;
                              local_78 = param_5;
                              local_74 = uVar2;
                              if (uVar4 < param_5) {
                                uVar2 = uVar8 * 0xf;
                                local_40 = uVar2;
                                if (param_5 < uVar2) {
                                  local_40 = param_5;
                                }
                                local_68 = param_2;
                                local_60 = param_3;
                                local_58 = param_1;
                                local_50 = param_4;
                                local_48 = param_5;
                                local_44 = uVar4;
                                if (uVar2 < param_5) {
                                  local_10 = uVar8 * 0x10;
                                  if (param_5 < uVar8 * 0x10) {
                                    local_10 = param_5;
                                  }
                                  uVar8 = 0x10;
                                  local_38 = param_2;
                                  local_30 = param_3;
                                  local_28 = param_1;
                                  local_20 = param_4;
                                  local_18 = param_5;
                                  local_14 = uVar2;
                                }
                                else {
                                  uVar8 = 0xf;
                                }
                              }
                              else {
                                uVar8 = 0xe;
                              }
                            }
                            else {
                              uVar8 = 0xd;
                            }
                          }
                          else {
                            uVar8 = 0xc;
                          }
                        }
                        else {
                          uVar8 = 0xb;
                        }
                      }
                      else {
                        uVar8 = 10;
                      }
                    }
                    else {
                      uVar8 = 9;
                    }
                  }
                  else {
                    uVar8 = 8;
                  }
                }
                else {
                  uVar8 = 7;
                }
              }
              else {
                uVar8 = 6;
              }
            }
            else {
              uVar8 = 5;
            }
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 1;
    }
    uVar4 = 0;
    puVar9 = local_388;
    local_308 = param_2;
    local_300 = param_3;
    local_2f8 = param_1;
    local_2f0 = param_4;
    local_2e8 = param_5;
    do {
      uVar2 = thunk_FUN_000027d0(puVar9,0,&LAB_0000537c,puVar6);
      if (uVar2 != 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,0x18,0xf5,1,1,uVar2 & 0xffffff | uVar4 << 0x18,0,0);
        if (cVar1 == '\0') goto LAB_00005044;
      }
      uVar4 = uVar4 + 1;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar4 != uVar8);
    lVar7 = 0;
    do {
      local_390 = 0;
      uVar4 = thunk_FUN_000027d0(local_388[lVar7],&local_390);
      if (uVar4 != 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,0x18,0x103,1,2,uVar4 & 0xffffff | (int)lVar7 << 0x18,0,0);
        if (cVar1 == '\0') {
          cVar1 = '\0';
          goto LAB_00005044;
        }
      }
      if (local_390 == 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,0x18,0x104,1,3,uVar4 & 0xffffff | (int)lVar7 << 0x18,0,0);
        if (cVar1 == '\0') {
          cVar1 = '\0';
          goto LAB_00005044;
        }
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < uVar8);
  }
  cVar1 = '\x01';
LAB_00005044:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
