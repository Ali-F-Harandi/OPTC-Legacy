// rea decompile_all
// name: FUN_001e8fd4
// address: 0x1e8fd4
// body: available
// range: 0x1e8fd4-0x1ea677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_001e8fd4(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                    undefined8 param_6,ulong param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte bVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *in_x15;
  ulong *unaff_x19;
  ulong *unaff_x23;
  ulong *puVar26;
  ulong *puVar27;
  ulong *unaff_x25;
  ulong *puVar28;
  ulong unaff_x26;
  ulong *unaff_x28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *local_138;
  ulong *local_130;
  ulong *local_128;
  uint local_114;
  ulong local_108;
  ulong *local_100;
  ulong *puStack_f8;
  ulong *local_f0;
  ulong *local_e8;
  ulong *local_e0;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  uint local_9c;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  puVar1 = (ulong *)((long)param_2 + 7);
  puVar2 = (ulong *)((long)param_2 + 5);
  puVar8 = (ulong *)0xaeecb00ee63ecf71;
  if (((ulong)puVar1 & 7) != 0) {
    puVar8 = (ulong *)0x5c464faf1c134413;
  }
  puVar3 = (ulong *)((long)param_2 + 6);
  puVar9 = (ulong *)0x36080c4ea4d3b15;
  if (((ulong)puVar3 & 7) != 0) {
    puVar9 = (ulong *)0x4aec30ca31276d55;
  }
  puVar4 = (ulong *)((long)param_2 + 3);
  puVar10 = (ulong *)0x6902adc5eda669f4;
  if (((ulong)puVar2 & 7) != 0) {
    puVar10 = (ulong *)0x9a15b68e938724d3;
  }
  puVar5 = (ulong *)((long)param_2 + 4);
  puVar11 = (ulong *)0xb976eff409a02f53;
  if (((ulong)puVar5 & 7) != 0) {
    puVar11 = (ulong *)0xd988647c0c744726;
  }
  puVar6 = (ulong *)((long)param_2 + 1);
  puVar12 = (ulong *)0x472980666c6a03ea;
  if (((ulong)puVar4 & 7) != 0) {
    puVar12 = (ulong *)0xfa748efd27170cc4;
  }
  puVar7 = (ulong *)((long)param_2 + 2);
  puVar13 = (ulong *)0x9cbd8c63ff930190;
  if (((ulong)puVar7 & 7) != 0) {
    puVar13 = (ulong *)0x4ecc90aa236ea5b3;
  }
  puVar14 = (ulong *)0x92b65d45c036d624;
  if (((ulong)puVar6 & 7) != 0) {
    puVar14 = (ulong *)0x9241f4c2d285600f;
  }
  puVar15 = (ulong *)0xbe13247b97098be3;
  if (((ulong)param_2 & 7) != 0) {
    puVar15 = (ulong *)0xf51944f81138430d;
  }
  local_9c = 0;
  local_114 = 0;
  puVar25 = (ulong *)0x7cb93cf37aea7cf9;
  puVar17 = puVar15;
  puVar18 = (ulong *)0xbe13247b97098be3;
  puVar19 = puVar12;
  puVar20 = param_1;
LAB_001e926c:
  puVar29 = unaff_x28;
  puVar28 = unaff_x25;
  puVar26 = unaff_x23;
  puVar30 = puVar20;
  puVar27 = puVar19;
  puVar22 = puVar18;
  puVar21 = puVar17;
  uVar24 = param_7;
  puVar23 = puVar25;
  puVar25 = puVar23;
  param_7 = uVar24;
  puVar17 = puVar21;
  puVar18 = puVar22;
  puVar19 = puVar27;
  puVar20 = puVar30;
  unaff_x23 = puVar26;
  unaff_x25 = puVar28;
  unaff_x28 = puVar29;
  if ((long)puVar23 < -0x58b7102d8e8f33c) {
    if (-0x405792201464f5f8 < (long)puVar23) {
      if ((long)puVar23 < -0x20ffead854ca6e4e) {
        if ((long)puVar23 < -0x26779b83f38bb8da) {
          if (puVar23 != (ulong *)0xbfa86ddfeb9b0a09) {
            puVar25 = (ulong *)0xdf001527ab3591b2;
            if ((puVar23 != (ulong *)0xcec911a9d9a5c391) &&
               (puVar25 = puVar23, puVar23 == (ulong *)0xd2938fc3c891785e)) {
              local_80 = local_130;
              puVar25 = (ulong *)0x525d1afddf019d;
              if ((((uint)local_130 ^ (uint)param_2) & 7) != 0) {
                puVar25 = (ulong *)0xbfa86ddfeb9b0a09;
              }
            }
            goto LAB_001e926c;
          }
          local_9c = (uint)(byte)*param_2;
          local_b8 = local_80;
          local_c0 = param_2;
        }
        else {
          if (puVar23 == (ulong *)0xd988647c0c744726) {
            puVar25 = (ulong *)0x4943753bf51688fc;
            if (*(byte *)puVar5 != 0) {
              puVar25 = (ulong *)0xde2c497fa1da3156;
            }
            *(byte *)local_78 = *(byte *)puVar5;
            goto LAB_001e926c;
          }
          if (puVar23 == (ulong *)0xde2c497fa1da3156) {
            local_70 = (ulong *)((long)local_78 + 1);
            puVar25 = puVar10;
            goto LAB_001e926c;
          }
          if (puVar23 != (ulong *)0xde4b1963eb01abe5) goto LAB_001e926c;
          local_9c = local_114;
          local_b8 = local_e8;
          local_c0 = local_f0;
        }
LAB_001ea3e8:
        puVar25 = (ulong *)0x5b9133fd3f5b97f2;
        goto LAB_001e926c;
      }
      if ((long)puVar23 < -0xcdc5aee104269e7) {
        if ((long)puVar23 < -0x18f68c823630c7e6) {
          puVar25 = (ulong *)0x2e5d2c580e521a46;
          param_7 = local_108;
          puVar19 = local_f0;
          unaff_x25 = local_e8;
          if ((puVar23 != (ulong *)0xe15d2656402434a7) &&
             (puVar25 = puVar23, param_7 = uVar24, puVar19 = puVar27, unaff_x25 = puVar28,
             puVar23 == (ulong *)0xdf001527ab3591b2)) {
            return param_1;
          }
        }
        else if (puVar23 == (ulong *)0xe709737dc9cf381a) {
          local_e0 = (ulong *)((long)puVar30 + 1);
          puVar25 = (ulong *)0xd2938fc3c891785e;
          local_130 = puVar30;
          if ((byte)*puVar30 != 0) {
            puVar25 = (ulong *)0xf37a556e0bbc46bf;
          }
        }
        else if (puVar23 == (ulong *)0xeccfb1deb14b594e) goto LAB_001ea02c;
      }
      else {
        puVar25 = (ulong *)0xdf001527ab3591b2;
        if (((puVar23 != (ulong *)0xf323a511efbd9619) &&
            (puVar25 = (ulong *)0xe709737dc9cf381a, puVar20 = local_e0,
            puVar23 != (ulong *)0xf37a556e0bbc46bf)) &&
           (puVar25 = puVar23, puVar20 = puVar30, puVar23 == (ulong *)0xf51944f81138430d)) {
          puVar25 = (ulong *)0x8fca168fdf792412;
          if ((byte)*param_2 != 0) {
            puVar25 = (ulong *)0x8bf6ede77b95aefc;
          }
          *(byte *)local_80 = (byte)*param_2;
        }
      }
      goto LAB_001e926c;
    }
    if (-0x6531ea49607ac329 < (long)puVar23) {
      if ((long)puVar23 < -0x5370ef828278883b) {
        if (puVar23 == (ulong *)0x9ace15b69f853cd8) {
          local_128 = (ulong *)((long)puVar21 + 1);
          bVar16 = *(byte *)local_128;
          local_138 = (ulong *)((long)puVar22 + 1);
          *(byte *)local_138 = bVar16;
          puVar25 = (ulong *)0xeccfb1deb14b594e;
          if (bVar16 != 0) {
            puVar25 = (ulong *)0x6fec28429a53861a;
          }
        }
        else {
          puVar25 = (ulong *)0xfc3c17940a3f8100;
          unaff_x23 = puVar7;
          unaff_x28 = local_68;
          if ((puVar23 != (ulong *)0x9cbd8c63ff930190) &&
             (puVar25 = puVar23, unaff_x23 = puVar26, unaff_x28 = puVar29,
             puVar23 == (ulong *)0xa559b45e2530dd3b)) {
            local_a8 = (ulong *)((long)local_68 + 1);
            puVar25 = puVar12;
          }
        }
        goto LAB_001e926c;
      }
      if ((long)puVar23 < -0x4689100bf65fd0ad) {
        puVar25 = (ulong *)0x9ace15b69f853cd8;
        puVar17 = local_100;
        puVar18 = puStack_f8;
        if ((puVar23 == (ulong *)0xac8f107d7d8777c5) ||
           (puVar25 = puVar23, puVar17 = puVar21, puVar18 = puVar22, puVar27 = puVar1,
           puVar30 = local_b0, puVar23 != (ulong *)0xaeecb00ee63ecf71)) goto LAB_001e926c;
      }
      else {
        puVar25 = (ulong *)0xfc3c17940a3f8100;
        unaff_x23 = puVar5;
        unaff_x28 = local_78;
        if ((puVar23 == (ulong *)0xb976eff409a02f53) ||
           (puVar25 = puVar23, unaff_x23 = puVar26, puVar27 = param_2, unaff_x28 = puVar29,
           puVar30 = local_80, puVar23 != (ulong *)0xbe13247b97098be3)) goto LAB_001e926c;
      }
LAB_001ea0f8:
      puVar25 = (ulong *)0xfc3c17940a3f8100;
      puVar17 = puVar21;
      puVar18 = puVar22;
      unaff_x23 = puVar27;
      unaff_x28 = puVar30;
      goto LAB_001e926c;
    }
    if ((long)puVar23 < -0x6d49a2ba3fc929dc) {
      if (puVar23 == (ulong *)0x8bf6ede77b95aefc) {
        in_x15 = (ulong *)((long)local_80 + 1);
        puVar25 = puVar14;
      }
      else {
        puVar25 = (ulong *)0xdf001527ab3591b2;
        if ((puVar23 != (ulong *)0x8fca168fdf792412) &&
           (puVar25 = puVar23, puVar23 == (ulong *)0x9241f4c2d285600f)) {
          puVar25 = (ulong *)0xcec911a9d9a5c391;
          if (*(byte *)puVar6 != 0) {
            puVar25 = (ulong *)0x642e33ff2599bd5c;
          }
          *(byte *)in_x15 = *(byte *)puVar6;
        }
      }
    }
    else {
      puVar25 = (ulong *)0xfc3c17940a3f8100;
      unaff_x23 = puVar6;
      unaff_x28 = in_x15;
      if (puVar23 != (ulong *)0x92b65d45c036d624) {
        if (puVar23 == (ulong *)0x95350ad3b0c97039) {
          unaff_x23 = param_2 + 1;
          unaff_x28 = (ulong *)((long)local_b0 + 1);
        }
        else {
          puVar25 = puVar23;
          unaff_x23 = puVar26;
          unaff_x28 = puVar29;
          if (puVar23 == (ulong *)0x9a15b68e938724d3) {
            puVar25 = (ulong *)0x12f97563fe86189d;
            if (*(byte *)puVar2 != 0) {
              puVar25 = (ulong *)0x5a7966877bb5e856;
            }
            *(byte *)local_70 = *(byte *)puVar2;
          }
        }
      }
    }
    goto LAB_001e926c;
  }
  if (0x4ecc90aa236ea5b2 < (long)puVar23) {
    if ((long)puVar23 < 0x67e75d17e2cdd7d4) {
      if ((long)puVar23 < 0x5c464faf1c134413) {
        if (puVar23 == (ulong *)0x4ecc90aa236ea5b3) {
          puVar25 = (ulong *)0x61612b56ba58e895;
          if (*(byte *)puVar7 != 0) {
            puVar25 = (ulong *)0xa559b45e2530dd3b;
          }
          *(byte *)local_68 = *(byte *)puVar7;
        }
        else if (puVar23 == (ulong *)0x5a7966877bb5e856) {
          unaff_x19 = (ulong *)((long)local_70 + 1);
          puVar25 = puVar9;
        }
        else if (puVar23 == (ulong *)0x5b9133fd3f5b97f2) {
          local_100 = local_c0;
          puStack_f8 = local_b8;
          puVar25 = (ulong *)0x750b035df70dfd6b;
          if (local_9c != 0) {
            puVar25 = (ulong *)0xac8f107d7d8777c5;
          }
          *(byte *)local_b8 = (byte)local_9c;
        }
      }
      else if (puVar23 == (ulong *)0x5c464faf1c134413) {
        puVar25 = (ulong *)0x4df7063ff4f72d9f;
        if (*(byte *)puVar1 != 0) {
          puVar25 = (ulong *)0x95350ad3b0c97039;
        }
        *(byte *)local_b0 = *(byte *)puVar1;
      }
      else {
        puVar25 = (ulong *)0xdf001527ab3591b2;
        if ((puVar23 != (ulong *)0x61612b56ba58e895) &&
           (puVar25 = puVar23, puVar23 == (ulong *)0x642e33ff2599bd5c)) {
          local_68 = (ulong *)((long)in_x15 + 1);
          puVar25 = puVar13;
        }
      }
    }
    else if ((long)puVar23 < 0x750b035df70dfd6b) {
      puVar25 = (ulong *)0x2e5d2c580e521a46;
      param_7 = unaff_x26;
      puVar19 = param_3;
      unaff_x25 = param_5;
      if (((puVar23 != (ulong *)0x67e75d17e2cdd7d4) &&
          (puVar25 = (ulong *)0xfc3c17940a3f8100, param_7 = uVar24, puVar19 = puVar27,
          unaff_x23 = puVar2, unaff_x25 = puVar28, unaff_x28 = local_70,
          puVar23 != (ulong *)0x6902adc5eda669f4)) &&
         (puVar25 = puVar23, unaff_x23 = puVar26, unaff_x28 = puVar29,
         puVar23 == (ulong *)0x6fec28429a53861a)) {
        puVar25 = (ulong *)0x9ace15b69f853cd8;
        puVar17 = local_128;
        puVar18 = local_138;
      }
    }
    else if ((long)puVar23 < 0x7c1ab6a8596fe588) {
      puVar25 = (ulong *)0xdf001527ab3591b2;
      if ((puVar23 != (ulong *)0x750b035df70dfd6b) &&
         (puVar25 = puVar23, puVar23 == (ulong *)0x78c4c1a5edb48036)) {
        local_78 = (ulong *)((long)local_a8 + 1);
        puVar25 = puVar11;
      }
    }
    else {
      puVar25 = (ulong *)0xdf001527ab3591b2;
      if ((puVar23 != (ulong *)0x7c1ab6a8596fe588) &&
         (puVar25 = puVar23, puVar23 == (ulong *)0x7cb93cf37aea7cf9)) {
        puVar25 = (ulong *)0xe709737dc9cf381a;
      }
    }
    goto LAB_001e926c;
  }
  if ((long)puVar23 < 0x14e8afddeb5ba2d8) {
    if (0x36080c4ea4d3b14 < (long)puVar23) {
      puVar25 = (ulong *)0xfc3c17940a3f8100;
      unaff_x23 = puVar3;
      unaff_x28 = unaff_x19;
      if (((puVar23 != (ulong *)0x36080c4ea4d3b15) &&
          (puVar25 = (ulong *)0xdf001527ab3591b2, unaff_x23 = puVar26, unaff_x28 = puVar29,
          puVar23 != (ulong *)0x12f97563fe86189d)) &&
         (puVar25 = puVar23, puVar23 == (ulong *)0x13021144eb62c0db)) {
        local_b0 = (ulong *)((long)unaff_x19 + 1);
        puVar25 = puVar8;
      }
      goto LAB_001e926c;
    }
    if (puVar23 == (ulong *)0xfa748efd27170cc4) {
      puVar25 = (ulong *)0x7c1ab6a8596fe588;
      if (*(byte *)puVar4 != 0) {
        puVar25 = (ulong *)0x78c4c1a5edb48036;
      }
      *(byte *)local_a8 = *(byte *)puVar4;
      goto LAB_001e926c;
    }
    if (puVar23 != (ulong *)0xfc3c17940a3f8100) {
      if (puVar23 == (ulong *)0x525d1afddf019d) {
        puVar25 = puVar15;
      }
      goto LAB_001e926c;
    }
    local_108 = *puVar26;
    local_114 = (uint)local_108 & 0xff;
    uVar24 = local_108 + 0xfefefefefefefeff & (local_108 ^ 0xffffffffffffffff);
    puVar23 = (ulong *)0xde4b1963eb01abe5;
    puVar25 = (ulong *)0xe15d2656402434a7;
    local_f0 = puVar26;
    local_e8 = puVar29;
  }
  else {
    if (0x4943753bf51688fb < (long)puVar23) {
      puVar25 = (ulong *)0xdf001527ab3591b2;
      if (puVar23 != (ulong *)0x4943753bf51688fc) {
        if (puVar23 == (ulong *)0x4aec30ca31276d55) {
          puVar25 = (ulong *)0xf323a511efbd9619;
          if (*(byte *)puVar3 != 0) {
            puVar25 = (ulong *)0x13021144eb62c0db;
          }
          *(byte *)unaff_x19 = *(byte *)puVar3;
        }
        else {
          puVar25 = puVar23;
          if (puVar23 == (ulong *)0x4df7063ff4f72d9f) {
LAB_001ea02c:
            puVar25 = (ulong *)0xdf001527ab3591b2;
          }
        }
      }
      goto LAB_001e926c;
    }
    if (puVar23 == (ulong *)0x14e8afddeb5ba2d8) {
      local_9c = (uint)unaff_x26 & 0xff;
      local_c0 = param_3;
      local_b8 = param_5;
      goto LAB_001ea3e8;
    }
    if (puVar23 != (ulong *)0x2e5d2c580e521a46) {
      puVar27 = puVar4;
      puVar30 = local_a8;
      if (puVar23 == (ulong *)0x472980666c6a03ea) goto LAB_001ea0f8;
      goto LAB_001e926c;
    }
    param_5 = puVar28 + 1;
    *puVar28 = uVar24;
    param_3 = puVar27 + 1;
    unaff_x26 = *param_3;
    puVar23 = (ulong *)0x14e8afddeb5ba2d8;
    puVar25 = (ulong *)0x67e75d17e2cdd7d4;
    uVar24 = unaff_x26 + 0xfefefefefefefeff & (unaff_x26 ^ 0xffffffffffffffff);
  }
  if ((uVar24 & 0x8080808080808080) != 0) {
    puVar25 = puVar23;
  }
  goto LAB_001e926c;
}

