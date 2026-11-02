// rea decompile_all
// name: FUN_0019d29c
// address: 0x19d29c
// body: available
// range: 0x19d29c-0x19e4ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019d29c(long *param_1,long *param_2,long param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x21;
  long *unaff_x25;
  long local_100;
  long *local_e0;
  long local_d8;
  int local_cc;
  long *local_b8;
  long local_b0;
  long *plStack_a8;
  int local_9c;
  long local_98;
  long *local_90;
  int local_84;
  long local_80;
  
  lVar1 = -0x7d2e1f0f1045297e;
  if (param_5 != 0) {
    lVar1 = -0x2cd0e93b0486a31e;
  }
  lVar2 = 0x3f77fd5722478c7e;
  if (param_4 == 0 || param_3 == 0) {
    lVar2 = 0x70c6075b045fb041;
  }
  plVar3 = param_1;
  plVar4 = param_2;
  lVar5 = lVar2;
  lVar13 = 0x7098b9b30b41a103;
LAB_0019d3b8:
  lVar12 = lVar13;
  lVar10 = lVar5;
  plVar11 = plVar4;
  plVar8 = plVar3;
  lVar13 = lVar12;
  plVar3 = plVar8;
  plVar4 = plVar11;
  lVar5 = lVar10;
  if (lVar12 < 0x249978005e98911) {
    if (lVar12 < -0x3c8ea0a4b4ff2dcc) {
      if (lVar12 < -0x6175291167365900) {
        if (lVar12 < -0x66cf17030d9c4292) {
          lVar13 = lVar1;
          if (lVar12 != -0x7dbf64c91b994c99) {
            if (lVar12 == -0x7d2e1f0f1045297e) {
              plVar3 = (long *)0x0;
              lVar13 = -0x2d20808d1c8876a7;
            }
            else {
              lVar13 = lVar12;
              if (lVar12 == -0x6e9e95dac18523a6) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_80);
                lVar13 = 0x2bb4ebafb57d1c9;
                local_100 = lVar10;
                local_e0 = plVar11;
                if (lVar10 != 0) {
                  lVar13 = 0x249978005e98911;
                }
              }
            }
          }
        }
        else if (lVar12 < -0x63fcecda7eee7247) {
          if (lVar12 == -0x66cf17030d9c4292) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_98 = local_b0;
            local_90 = plStack_a8;
            local_9c = local_84;
            goto LAB_0019e1a8;
          }
          if (lVar12 == -0x649056e7d03287b6) {
            return;
          }
        }
        else {
          lVar13 = 0x530424d3359cdc96;
          if ((lVar12 != -0x63fcecda7eee7247) && (lVar13 = lVar12, lVar12 == -0x627480394918dc9c)) {
            bVar6 = local_80 == 0;
            lVar13 = 0x600ae6dec4255729;
            lVar12 = 0xcbe8113030f0b89;
            goto LAB_0019d3ac;
          }
        }
        goto LAB_0019d3b8;
      }
      if (lVar12 < -0x55866d9ac3a2799b) {
        plVar3 = unaff_x25;
        lVar13 = -0x2d20808d1c8876a7;
        if (lVar12 != -0x6175291167365900) {
          if (lVar12 == -0x5e62397a20e1c4a6) {
            bVar6 = local_d8 == 0;
            lVar13 = -0xa4272655a3e4897;
            lVar12 = -0x1e6520e9492005bd;
            goto LAB_0019d3ac;
          }
          plVar3 = plVar8;
          lVar13 = lVar12;
          if (lVar12 == -0x56832ed0c2762ffa) {
            lVar13 = -0x10b455e27643aaa7;
          }
        }
        goto LAB_0019d3b8;
      }
      if (lVar12 != -0x55866d9ac3a2799b) {
        if (lVar12 == -0x5307ff707cb48279) {
          plStack_a8 = (long *)0x0;
          local_84 = 0x21;
          local_b0 = unaff_x21;
          goto LAB_0019e3fc;
        }
        if (lVar12 == -0x3f36d91187d3df03) {
          local_90 = (long *)0x0;
          plVar8 = local_90;
          goto LAB_0019e198;
        }
        goto LAB_0019d3b8;
      }
      bVar6 = unaff_x25 == (long *)0x0;
      lVar12 = -0x6175291167365900;
      lVar13 = 0x1d784674e59cd0c2;
    }
    else {
      if (lVar12 < -0x1e6520e9492005bd) {
        if (lVar12 < -0x2cd0e93b0486a31e) {
          lVar13 = 0x2e00fc75c4d51ccf;
          if (((lVar12 != -0x3c8ea0a4b4ff2dcc) &&
              (lVar13 = -0x2c2c6e2d944b2038, lVar12 != -0x32b3d72e91961d32)) &&
             (lVar13 = lVar12, lVar12 == -0x2d20808d1c8876a7)) {
            uVar9 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_d8,unaff_x21,plVar8);
            *param_6 = uVar9;
            lVar10 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar13 = 0x2b744d9ba586aac4;
            local_b8 = plVar8;
            if (lVar10 != 0) {
              lVar13 = 0x2fa15c8f4c162347;
            }
          }
        }
        else if (lVar12 == -0x2cd0e93b0486a31e) {
          unaff_x25 = (long *)(**(code **)(*param_2 + 0x538))(param_2,param_5);
          lVar10 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar13 = -0x55866d9ac3a2799b;
          if (lVar10 != 0) {
            lVar13 = 0x30f7d7f608f79971;
          }
        }
        else if (lVar12 == -0x2c2c6e2d944b2038) {
          *param_6 = 0;
          lVar13 = -0x649056e7d03287b6;
        }
        else if (lVar12 == -0x1f55568df4cb0735) {
          lVar12 = -0x7dbf64c91b994c99;
          lVar13 = -0x3f36d91187d3df03;
          bVar6 = unaff_x21 == 0;
          goto LAB_0019d3ac;
        }
        goto LAB_0019d3b8;
      }
      if (-0x10b455e27643aaa8 < lVar12) {
        if (lVar12 < -0xda878123d0938fa) {
          if (lVar12 == -0x10b455e27643aaa7) {
            DAT_0021f97c = 0;
            local_d8 = (**(code **)(*param_2 + 0x108))(param_2,local_80,&DAT_0021e4b8,&DAT_0021e4d0)
            ;
            lVar10 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar13 = -0x5e62397a20e1c4a6;
            if (lVar10 != 0) {
              lVar13 = 0x4f5255e56777f274;
            }
          }
          else if (lVar12 == -0x10315efbc95f3d8e) {
            lVar13 = 0x11eb90f0f7ce048a;
            if (DAT_0021fa27 == '\0') {
              lVar13 = 0x1adc2fa2b92b4b24;
            }
          }
        }
        else if (lVar12 == -0xda878123d0938fa) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar13 = -0x32b3d72e91961d32;
          if (local_80 != 0) {
            lVar13 = -0x1709258ef6f74fa8;
          }
          *(int *)param_1 = 0x11;
        }
        else if (lVar12 == -0xa4272655a3e4897) {
          local_98 = 0;
          local_90 = (long *)0x0;
          local_9c = 0x11;
LAB_0019e1a8:
          lVar13 = 0x7b952dd6a4dfbd42;
        }
        goto LAB_0019d3b8;
      }
      if (lVar12 != -0x1e6520e9492005bd) {
        if (lVar12 == -0x1709258ef6f74fa8) {
          plVar4 = (long *)0x0;
          lVar5 = 0;
          lVar13 = -0x6e9e95dac18523a6;
        }
        else if (lVar12 == -0x11d9f1dd4bc8f1d6) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_e0);
          lVar13 = 0x2e00fc75c4d51ccf;
        }
        goto LAB_0019d3b8;
      }
      unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
      lVar13 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar6 = lVar13 == 0;
      lVar12 = -0x5307ff707cb48279;
      lVar13 = -0x1f55568df4cb0735;
    }
  }
  else if (lVar12 < 0x3277e6730e7ad8bb) {
    if (lVar12 < 0x1adc2fa2b92b4b24) {
      if (lVar12 < 0x3f2de3246b8848e) {
        if (lVar12 == 0x249978005e98911) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_100);
          lVar13 = 0x3f2de3246b8848e;
        }
        else {
          lVar13 = 0x3f2de3246b8848e;
          if ((lVar12 != 0x2bb4ebafb57d1c9) && (lVar13 = lVar12, lVar12 == 0x3ee779252719cb8)) {
            DAT_0021e4c0 = DAT_0021e4c0 ^ 0x33;
            DAT_0021e4c1 = DAT_0021e4c1 ^ 0x33;
            DAT_0021e4b8 = DAT_0021e4b8 ^ 0x3333333333333333;
            DAT_0021fa26 = '\x01';
            lVar13 = -0x10b455e27643aaa7;
          }
        }
      }
      else if (lVar12 == 0x3f2de3246b8848e) {
        lVar13 = -0x3c8ea0a4b4ff2dcc;
        if (local_e0 != (long *)0x0) {
          lVar13 = -0x11d9f1dd4bc8f1d6;
        }
      }
      else {
        lVar13 = 0x530424d3359cdc96;
        if ((lVar12 != 0xcbe8113030f0b89) && (lVar13 = lVar12, lVar12 == 0x11eb90f0f7ce048a)) {
          lVar13 = 0x5743f2987dcbc082;
        }
      }
      goto LAB_0019d3b8;
    }
    if (lVar12 < 0x2b744d9ba586aac4) {
      if (lVar12 == 0x1adc2fa2b92b4b24) {
        _DAT_0021e4d0 = _DAT_0021e4d0 ^ 0x2727272727272727;
        uRam000000000021e4d8 = uRam000000000021e4d8 ^ 0x2727272727272727;
        _DAT_0021e4e0 = _DAT_0021e4e0 ^ 0x2727272727272727;
        uRam000000000021e4e8 = uRam000000000021e4e8 ^ 0x2727272727272727;
        DAT_0021e508 = DAT_0021e508 ^ 0x27;
        _DAT_0021e4f0 = _DAT_0021e4f0 ^ 0x2727272727272727;
        uRam000000000021e4f8 = uRam000000000021e4f8 ^ 0x2727272727272727;
        DAT_0021e500 = DAT_0021e500 ^ 0x2727272727272727;
        DAT_0021fa27 = '\x01';
        lVar13 = 0x5743f2987dcbc082;
      }
      else {
        plVar8 = unaff_x25;
        if (lVar12 == 0x1d784674e59cd0c2) {
LAB_0019e198:
          local_90 = plVar8;
          local_9c = 0x21;
          local_98 = unaff_x21;
          goto LAB_0019e1a8;
        }
        if (lVar12 == 0x20da01d7196efb1a) {
          lVar13 = -0x56832ed0c2762ffa;
          if (DAT_0021fa26 == '\0') {
            lVar13 = 0x3ee779252719cb8;
          }
        }
      }
      goto LAB_0019d3b8;
    }
    if (0x2fa15c8f4c162346 < lVar12) {
      if (lVar12 == 0x2fa15c8f4c162347) {
        plStack_a8 = local_b8;
        local_84 = 0x1b;
        local_b0 = unaff_x21;
      }
      else {
        if (lVar12 != 0x30f7d7f608f79971) goto LAB_0019d3b8;
        local_84 = 0x21;
        local_b0 = unaff_x21;
        plStack_a8 = unaff_x25;
      }
LAB_0019e3fc:
      lVar13 = -0x66cf17030d9c4292;
      goto LAB_0019d3b8;
    }
    plVar4 = local_b8;
    lVar5 = unaff_x21;
    lVar13 = -0x6e9e95dac18523a6;
    if ((lVar12 == 0x2b744d9ba586aac4) ||
       (plVar4 = plVar11, lVar5 = lVar10, lVar13 = lVar12, lVar12 != 0x2e00fc75c4d51ccf))
    goto LAB_0019d3b8;
    lVar13 = 0x7d3ca24dae973643;
    bVar6 = (int)*param_1 == 0;
    lVar12 = 0x6621ce2e7dc4164f;
  }
  else {
    if (0x598f5a77fb239e5d < lVar12) {
      if (lVar12 < 0x7098b9b30b41a103) {
        if (lVar12 == 0x598f5a77fb239e5e) {
          iVar7 = FUN_00212730(0,1,&DAT_0021f97c);
          lVar13 = 0x20da01d7196efb1a;
          if (iVar7 != 0) {
            lVar13 = 0x4df6f2b549209293;
          }
          goto LAB_0019d3b8;
        }
        if (lVar12 != 0x600ae6dec4255729) {
          if (lVar12 == 0x6621ce2e7dc4164f) {
            lVar13 = -0x2c2c6e2d944b2038;
          }
          goto LAB_0019d3b8;
        }
        local_cc = 0x11;
      }
      else {
        if (0x7b952dd6a4dfbd41 < lVar12) {
          if (lVar12 == 0x7b952dd6a4dfbd42) {
            *(int *)param_1 = local_9c;
            plVar4 = local_90;
            lVar5 = local_98;
            lVar13 = -0x6e9e95dac18523a6;
          }
          else if (lVar12 == 0x7d3ca24dae973643) {
            lVar13 = -0x649056e7d03287b6;
          }
          goto LAB_0019d3b8;
        }
        lVar13 = lVar2;
        if ((lVar12 == 0x7098b9b30b41a103) || (lVar13 = lVar12, lVar12 != 0x70c6075b045fb041))
        goto LAB_0019d3b8;
        local_cc = 3;
      }
      lVar13 = 0x3277e6730e7ad8bb;
      goto LAB_0019d3b8;
    }
    if (lVar12 < 0x4f5255e56777f274) {
      if (lVar12 == 0x3277e6730e7ad8bb) {
        *(int *)param_1 = local_cc;
        lVar13 = -0x2c2c6e2d944b2038;
      }
      else if (lVar12 == 0x3f77fd5722478c7e) {
        local_80 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar10 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar13 = -0x627480394918dc9c;
        if (lVar10 != 0) {
          lVar13 = -0xda878123d0938fa;
        }
      }
      else if (lVar12 == 0x4df6f2b549209293) {
        lVar13 = 0x598f5a77fb239e5e;
      }
      goto LAB_0019d3b8;
    }
    if (lVar12 == 0x4f5255e56777f274) {
      local_b0 = 0;
      plStack_a8 = (long *)0x0;
      local_84 = 0x11;
      goto LAB_0019e3fc;
    }
    if (lVar12 != 0x530424d3359cdc96) {
      if (lVar12 == 0x5743f2987dcbc082) {
        DAT_0021f980 = 0;
        lVar13 = 0x598f5a77fb239e5e;
      }
      goto LAB_0019d3b8;
    }
    iVar7 = FUN_00212730(0,1,&DAT_0021f980);
    bVar6 = iVar7 == 0;
    lVar12 = -0x63fcecda7eee7247;
    lVar13 = -0x10315efbc95f3d8e;
  }
LAB_0019d3ac:
  plVar3 = plVar8;
  plVar4 = plVar11;
  lVar5 = lVar10;
  if (!bVar6) {
    lVar13 = lVar12;
  }
  goto LAB_0019d3b8;
}

