
void FUN_0000665c(long param_1,undefined8 param_2,uint param_3)

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
  long local_310;
  undefined8 local_308 [16];
  undefined8 local_288;
  undefined8 local_280;
  uint local_278;
  undefined4 local_274;
  uint local_270;
  undefined4 local_26c;
  long local_268;
  undefined8 local_260;
  undefined8 local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  long local_240;
  undefined8 local_238;
  undefined8 local_230;
  uint local_228;
  uint local_224;
  uint local_220;
  undefined4 local_21c;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  undefined4 local_1f4;
  long local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  uint local_184;
  uint local_180;
  undefined4 local_17c;
  long local_178;
  undefined8 local_170;
  undefined8 local_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  undefined4 local_154;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined4 local_12c;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined4 local_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  long local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  puVar6 = &local_288;
  uVar5 = FUN_0001175c(param_3,0x10,1);
  uVar8 = (uint)(uVar5 >> 4) & 0xfffffff;
  FUN_000108e0(puVar6,0,0x280);
  if (param_3 != 0) {
    local_288 = *(undefined8 *)(param_1 + 0x20);
    local_270 = param_3;
    if (uVar8 < param_3) {
      local_270 = uVar8;
    }
    local_26c = (undefined4)*(undefined8 *)(param_1 + 0xb0);
    local_274 = 0;
    if (uVar8 < param_3) {
      uVar4 = uVar8 * 2;
      local_248 = uVar4;
      if (param_3 < uVar4) {
        local_248 = param_3;
      }
      local_260 = local_288;
      local_258 = param_2;
      local_250 = param_3;
      local_24c = uVar8;
      local_244 = local_26c;
      local_240 = param_1;
      if (uVar4 < param_3) {
        uVar2 = uVar8 * 3;
        local_220 = uVar2;
        if (param_3 < uVar2) {
          local_220 = param_3;
        }
        local_238 = local_288;
        local_230 = param_2;
        local_228 = param_3;
        local_224 = uVar4;
        local_21c = local_26c;
        local_218 = param_1;
        if (uVar2 < param_3) {
          uVar4 = uVar8 * 4;
          local_1f8 = uVar4;
          if (param_3 < uVar4) {
            local_1f8 = param_3;
          }
          local_210 = local_288;
          local_208 = param_2;
          local_200 = param_3;
          local_1fc = uVar2;
          local_1f4 = local_26c;
          local_1f0 = param_1;
          if (uVar4 < param_3) {
            uVar2 = uVar8 * 5;
            local_1d0 = uVar2;
            if (param_3 < uVar2) {
              local_1d0 = param_3;
            }
            local_1e8 = local_288;
            local_1e0 = param_2;
            local_1d8 = param_3;
            local_1d4 = uVar4;
            local_1cc = local_26c;
            local_1c8 = param_1;
            if (uVar2 < param_3) {
              uVar4 = uVar8 * 6;
              local_1a8 = uVar4;
              if (param_3 < uVar4) {
                local_1a8 = param_3;
              }
              local_1c0 = local_288;
              local_1b8 = param_2;
              local_1b0 = param_3;
              local_1ac = uVar2;
              local_1a4 = local_26c;
              local_1a0 = param_1;
              if (uVar4 < param_3) {
                uVar2 = uVar8 * 7;
                local_180 = uVar2;
                if (param_3 < uVar2) {
                  local_180 = param_3;
                }
                local_198 = local_288;
                local_190 = param_2;
                local_188 = param_3;
                local_184 = uVar4;
                local_17c = local_26c;
                local_178 = param_1;
                if (uVar2 < param_3) {
                  uVar4 = uVar8 * 8;
                  local_158 = uVar4;
                  if (param_3 < uVar4) {
                    local_158 = param_3;
                  }
                  local_170 = local_288;
                  local_168 = param_2;
                  local_160 = param_3;
                  local_15c = uVar2;
                  local_154 = local_26c;
                  local_150 = param_1;
                  if (uVar4 < param_3) {
                    uVar2 = uVar8 * 9;
                    local_130 = uVar2;
                    if (param_3 < uVar2) {
                      local_130 = param_3;
                    }
                    local_148 = local_288;
                    local_140 = param_2;
                    local_138 = param_3;
                    local_134 = uVar4;
                    local_12c = local_26c;
                    local_128 = param_1;
                    if (uVar2 < param_3) {
                      uVar4 = uVar8 * 10;
                      local_108 = uVar4;
                      if (param_3 < uVar4) {
                        local_108 = param_3;
                      }
                      local_120 = local_288;
                      local_118 = param_2;
                      local_110 = param_3;
                      local_10c = uVar2;
                      local_104 = local_26c;
                      local_100 = param_1;
                      if (uVar4 < param_3) {
                        uVar2 = uVar8 * 0xb;
                        local_e0 = uVar2;
                        if (param_3 < uVar2) {
                          local_e0 = param_3;
                        }
                        local_f8 = local_288;
                        local_f0 = param_2;
                        local_e8 = param_3;
                        local_e4 = uVar4;
                        local_dc = local_26c;
                        local_d8 = param_1;
                        if (uVar2 < param_3) {
                          uVar4 = uVar8 * 0xc;
                          local_b8 = uVar4;
                          if (param_3 < uVar4) {
                            local_b8 = param_3;
                          }
                          local_d0 = local_288;
                          local_c8 = param_2;
                          local_c0 = param_3;
                          local_bc = uVar2;
                          local_b4 = local_26c;
                          local_b0 = param_1;
                          if (uVar4 < param_3) {
                            uVar2 = uVar8 * 0xd;
                            local_90 = uVar2;
                            if (param_3 < uVar2) {
                              local_90 = param_3;
                            }
                            local_a8 = local_288;
                            local_a0 = param_2;
                            local_98 = param_3;
                            local_94 = uVar4;
                            local_8c = local_26c;
                            local_88 = param_1;
                            if (uVar2 < param_3) {
                              uVar4 = uVar8 * 0xe;
                              local_68 = uVar4;
                              if (param_3 < uVar4) {
                                local_68 = param_3;
                              }
                              local_80 = local_288;
                              local_78 = param_2;
                              local_70 = param_3;
                              local_6c = uVar2;
                              local_64 = local_26c;
                              local_60 = param_1;
                              if (uVar4 < param_3) {
                                uVar2 = uVar8 * 0xf;
                                local_40 = uVar2;
                                if (param_3 < uVar2) {
                                  local_40 = param_3;
                                }
                                local_58 = local_288;
                                local_50 = param_2;
                                local_48 = param_3;
                                local_44 = uVar4;
                                local_3c = local_26c;
                                local_38 = param_1;
                                if (uVar2 < param_3) {
                                  local_18 = uVar8 * 0x10;
                                  if (param_3 < uVar8 * 0x10) {
                                    local_18 = param_3;
                                  }
                                  uVar8 = 0x10;
                                  local_30 = local_288;
                                  local_28 = param_2;
                                  local_20 = param_3;
                                  local_1c = uVar2;
                                  local_14 = local_26c;
                                  local_10 = param_1;
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
    puVar9 = local_308;
    local_280 = param_2;
    local_278 = param_3;
    local_268 = param_1;
    do {
      uVar2 = thunk_FUN_000027d0(puVar9,0,&LAB_00006e70,puVar6);
      if (uVar2 != 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,3,0x123,1,2,uVar2 & 0xffffff | uVar4 << 0x18,0,0);
        if (cVar1 == '\0') goto LAB_00006a48;
      }
      uVar4 = uVar4 + 1;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 5;
    } while (uVar4 != uVar8);
    lVar7 = 0;
    do {
      local_310 = 0;
      uVar4 = thunk_FUN_000027d0(local_308[lVar7],&local_310);
      if (uVar4 != 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,3,0x131,1,3,uVar4 & 0xffffff | (int)lVar7 << 0x18,0,0);
        if (cVar1 == '\0') {
          cVar1 = '\0';
          goto LAB_00006a48;
        }
      }
      if (local_310 == 0) {
        uVar3 = FUN_000029ec();
        cVar1 = FUN_00012354(0,0,uVar3,3,0x132,1,4,uVar4 & 0xffffff | (int)lVar7 << 0x18,0,0);
        if (cVar1 == '\0') {
          cVar1 = '\0';
          goto LAB_00006a48;
        }
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < uVar8);
  }
  cVar1 = '\x01';
LAB_00006a48:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
