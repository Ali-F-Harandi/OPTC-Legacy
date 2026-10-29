// rea decompile_all
// name: FUN_0017b6a4
// address: 0x17b6a4
// body: available
// range: 0x17b6a4-0x17cf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017b6a4(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  undefined4 *unaff_x24;
  undefined4 *local_120;
  long *local_100;
  long *local_f8;
  undefined4 *local_f0;
  long local_e8;
  long local_e0;
  undefined4 *local_d8;
  long *local_d0;
  long local_c8;
  undefined4 *local_c0;
  long *local_b8;
  long local_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  long *local_98;
  long local_90;
  long local_88;
  
  lVar1 = -0x6e8bfbccbadfbcb4;
  if (param_4 != 0) {
    lVar1 = 0x7dcf737b2adf3002;
  }
  lVar2 = -0x1ff8c9c596900baa;
  if (param_3 != 0) {
    lVar2 = 0x157086f9ee3133f8;
  }
  puVar3 = param_1;
  plVar4 = param_2;
  lVar5 = -0x1ff8c9c596900baa;
  lVar12 = -0x4349f36fd7187ba2;
LAB_0017b7e8:
  lVar11 = lVar12;
  lVar9 = lVar5;
  plVar10 = plVar4;
  puVar8 = puVar3;
  lVar12 = lVar11;
  puVar3 = puVar8;
  plVar4 = plVar10;
  lVar5 = lVar9;
  if (lVar11 < -0x86c811434081476) {
    if (lVar11 < -0x43cb51ac6f10ad5a) {
      if (lVar11 < -0x5dc8661fe70bb191) {
        if (lVar11 < -0x7313e7a66a3bbc40) {
          if (lVar11 < -0x7684a385383e45a2) {
            if (lVar11 == -0x795f117d2acf5896) {
              *param_1 = 0x11;
              puVar3 = (undefined4 *)0x0;
              plVar4 = (long *)0x0;
              lVar12 = -0x7684a385383e45a2;
            }
            else if (lVar11 == -0x78ade21811686803) {
              local_d0 = local_f8;
              local_d8 = local_f0;
LAB_0017cce0:
              lVar12 = 0x2871ea9107cedd69;
            }
          }
          else if (lVar11 == -0x7684a385383e45a2) {
            lVar12 = -0x78ade21811686803;
            local_f8 = plVar10;
            local_f0 = puVar8;
            if (local_88 != 0) {
              lVar12 = -0x4358e346d27e0c4b;
            }
          }
          else if (lVar11 == -0x75dbffb39709e92e) goto LAB_0017c414;
          goto LAB_0017b7e8;
        }
        if (lVar11 < -0x60cd3c82222442fc) {
          lVar12 = 0x4d201dca34f9057d;
          if ((lVar11 != -0x7313e7a66a3bbc40) && (lVar12 = lVar11, lVar11 == -0x6e8bfbccbadfbcb4)) {
LAB_0017bf68:
            lVar12 = 0x4aca3f16e97412ac;
          }
          goto LAB_0017b7e8;
        }
        if (lVar11 == -0x60cd3c82222442fc) {
          DAT_0021f858 = 0;
          local_88 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021db90);
          lVar12 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar6 = lVar12 == 0;
          lVar11 = 0x7442e424f0576cd;
          lVar12 = -0x4896bab554a0dae9;
        }
        else {
          if (lVar11 != -0x5e7eec544003c7b6) goto LAB_0017b7e8;
          (**(code **)(local_e8 + 0xb8))(param_2,local_90);
          local_b0 = local_e0 + 1;
          bVar6 = local_b0 == param_4;
          lVar11 = -0x4cdcd6fb7877a002;
          lVar12 = 0x325182182b17a69e;
        }
      }
      else if (lVar11 < -0x4cdcd6fb7877a002) {
        if (lVar11 < -0x59e7be80602c42a7) {
          if (lVar11 == -0x5dc8661fe70bb191) goto LAB_0017ca58;
          if (lVar11 == -0x5a02aba064e491c4) {
            DAT_0021dc08 = DAT_0021dc08 ^ 0x27;
            _DAT_0021dbc0 = _DAT_0021dbc0 ^ 0x2727272727272727;
            uRam000000000021dbc8 = uRam000000000021dbc8 ^ 0x2727272727272727;
            DAT_0021dc09 = DAT_0021dc09 ^ 0x27;
            _DAT_0021dbd0 = _DAT_0021dbd0 ^ 0x2727272727272727;
            uRam000000000021dbd8 = uRam000000000021dbd8 ^ 0x2727272727272727;
            DAT_0021dc0a = DAT_0021dc0a ^ 0x27;
            DAT_0021dc0b = DAT_0021dc0b ^ 0x27;
            _DAT_0021dbe0 = _DAT_0021dbe0 ^ 0x2727272727272727;
            uRam000000000021dbe8 = uRam000000000021dbe8 ^ 0x2727272727272727;
            DAT_0021dc0c = DAT_0021dc0c ^ 0x27;
            _DAT_0021dbf0 = _DAT_0021dbf0 ^ 0x2727272727272727;
            uRam000000000021dbf8 = uRam000000000021dbf8 ^ 0x2727272727272727;
            DAT_0021dc00 = DAT_0021dc00 ^ 0x2727272727272727;
            DAT_0021f9e1 = '\x01';
            lVar12 = 0x4d201dca34f9057d;
          }
          goto LAB_0017b7e8;
        }
        if (lVar11 == -0x59e7be80602c42a7) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_88);
          local_d0 = local_b8;
          local_d8 = local_c0;
          goto LAB_0017cce0;
        }
        if (lVar11 != -0x58d4a1ff99370983) goto LAB_0017b7e8;
        lVar11 = 0x10c09a7e26c7bc45;
        lVar12 = -0x123a1d4e94934922;
        bVar6 = unaff_x24 == (undefined4 *)0x0;
      }
      else {
        if (lVar11 < -0x4a8e958f50cb2936) {
          lVar5 = local_b0;
          lVar12 = 0x343897bece408525;
          if ((lVar11 != -0x4cdcd6fb7877a002) &&
             (lVar5 = lVar9, lVar12 = lVar11, lVar11 == -0x4b9986a7dfdad2f0)) {
            DAT_0021dbb0 = DAT_0021dbb0 ^ 0xe1;
            DAT_0021dbb1 = DAT_0021dbb1 ^ 0xe1;
            DAT_0021dbb2 = DAT_0021dbb2 ^ 0xe1;
            DAT_0021dba8 = DAT_0021dba8 ^ 0xe1e1e1e1e1e1e1e1;
            DAT_0021f9e0 = '\x01';
            lVar12 = 0x2745f1d09246953f;
          }
          goto LAB_0017b7e8;
        }
        lVar12 = -0x360208aa015ed5da;
        if ((lVar11 == -0x4a8e958f50cb2936) || (lVar12 = lVar11, lVar11 != -0x4896bab554a0dae9))
        goto LAB_0017b7e8;
        bVar6 = local_88 == 0;
        lVar12 = -0x86c811434081476;
        lVar11 = 0x11c6687713f96334;
      }
    }
    else {
      if (lVar11 < -0x38a37251ff50f43c) {
        if (lVar11 < -0x3efc2da3496f0afd) {
          if (lVar11 < -0x4349f36fd7187ba2) {
            if (lVar11 == -0x43cb51ac6f10ad5a) {
              lVar12 = -0x7313e7a66a3bbc40;
              if (DAT_0021f9e1 == '\0') {
                lVar12 = -0x5a02aba064e491c4;
              }
            }
            else if (lVar11 == -0x4358e346d27e0c4b) {
              local_b8 = local_f8;
              local_c0 = local_f0;
              lVar12 = -0x59e7be80602c42a7;
            }
          }
          else {
            lVar12 = lVar2;
            if ((lVar11 != -0x4349f36fd7187ba2) && (lVar12 = lVar11, lVar11 == -0x416128ec12d809db))
            {
              (**(code **)(local_e8 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              *param_1 = 0x1b;
              (**(code **)(*param_2 + 0xb8))(param_2,local_90);
              puVar3 = unaff_x24;
              plVar4 = unaff_x20;
              lVar12 = -0x7684a385383e45a2;
            }
          }
        }
        else if (lVar11 < -0x3c75933e8918a886) {
          lVar12 = 0x373719e29df8005e;
          if ((lVar11 != -0x3efc2da3496f0afd) && (lVar12 = lVar11, lVar11 == -0x3d02ae5e9a21a1e4)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
LAB_0017c414:
            lVar12 = -0x249f7fc26b918e59;
          }
        }
        else if (lVar11 == -0x3c75933e8918a886) {
          lVar12 = 0x31b4adc2285646dc;
          if (DAT_0021f9df == '\0') {
            lVar12 = 0xf43df37eaa34fc3;
          }
        }
        else if (lVar11 == -0x39a3d296cdd14fd1) {
          local_a0 = 0x1b;
          local_a8 = unaff_x20;
LAB_0017ca60:
          lVar12 = -0x5bc40c228c222b9;
        }
        goto LAB_0017b7e8;
      }
      if (-0x1ff8c9c596900bab < lVar11) {
        if (lVar11 < -0x1ab7d7cee959a11d) {
          if (lVar11 == -0x1ff8c9c596900baa) {
            *param_1 = 3;
            lVar12 = 0x4b015c885ed63430;
          }
          else if (lVar11 == -0x1d27ce34dec29fc7) {
            lVar12 = 0x1652343901a79906;
            if (DAT_0021f9e0 == '\0') {
              lVar12 = -0x4b9986a7dfdad2f0;
            }
          }
          goto LAB_0017b7e8;
        }
        if (lVar11 != -0x1ab7d7cee959a11d) {
          if (lVar11 == -0x16a5855aa2da3a5d) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_100);
            goto LAB_0017ca98;
          }
          if (lVar11 != -0x123a1d4e94934922) goto LAB_0017b7e8;
        }
        local_9c = 0x11;
        local_98 = (long *)0x0;
        goto LAB_0017ce20;
      }
      if (lVar11 < -0x32ead494ef7d212b) {
        if (lVar11 == -0x38a37251ff50f43c) {
          lVar12 = -0x75dbffb39709e92e;
          if (local_90 != 0) {
            lVar12 = 0xb342b2cda2804e9;
          }
          goto LAB_0017b7e8;
        }
        if (lVar11 != -0x360208aa015ed5da) goto LAB_0017b7e8;
        iVar7 = FUN_00212730(0,1,&DAT_0021f860);
        bVar6 = iVar7 == 0;
        lVar11 = -0x4a8e958f50cb2936;
        lVar12 = -0x43cb51ac6f10ad5a;
      }
      else {
        if (lVar11 != -0x32ead494ef7d212b) {
          if (lVar11 == -0x249f7fc26b918e59) {
            *param_1 = 0x21;
            puVar3 = unaff_x24;
            plVar4 = unaff_x20;
            lVar12 = -0x7684a385383e45a2;
          }
          goto LAB_0017b7e8;
        }
        unaff_x20 = (long *)(**(code **)(*param_2 + 0x560))(param_2,param_4,local_88,0);
        lVar12 = (**(code **)(*param_2 + 0x78))(param_2);
        bVar6 = lVar12 == 0;
        lVar11 = -0x39a3d296cdd14fd1;
        lVar12 = 0x46c1bbde0911dd5e;
      }
    }
  }
  else if (lVar11 < 0x31b4adc2285646dc) {
    if (lVar11 < 0x10c09a7e26c7bc45) {
      if (lVar11 < 0xb342b2cda2804e9) {
        if (0x23258f4ff3a4840 < lVar11) {
          puVar3 = unaff_x24;
          plVar4 = unaff_x20;
          lVar12 = -0x7684a385383e45a2;
          if ((lVar11 != 0x23258f4ff3a4841) &&
             (puVar3 = puVar8, plVar4 = plVar10, lVar12 = lVar11, lVar11 == 0x7442e424f0576cd)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar12 = -0x795f117d2acf5896;
          }
          goto LAB_0017b7e8;
        }
        lVar12 = -0x795f117d2acf5896;
        if ((lVar11 == -0x86c811434081476) || (lVar12 = lVar11, lVar11 != -0x5bc40c228c222b9))
        goto LAB_0017b7e8;
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_9c = local_a0;
        local_98 = local_a8;
      }
      else {
        if (lVar11 < 0xd13689237f469f0) {
          if (lVar11 == 0xb342b2cda2804e9) {
            (**(code **)(*param_2 + 0x570))(param_2,unaff_x20,local_e0,local_90);
            lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
            local_e8 = *param_2;
            lVar12 = -0x5e7eec544003c7b6;
            if (lVar9 != 0) {
              lVar12 = -0x416128ec12d809db;
            }
          }
          else if (lVar11 == 0xc1c0014a1a704db) {
            iVar7 = FUN_00212730(0,1,&DAT_0021f858);
            lVar12 = -0x3c75933e8918a886;
            if (iVar7 != 0) {
              lVar12 = 0x4d931f56eb957c5a;
            }
          }
          goto LAB_0017b7e8;
        }
        if (lVar11 != 0xd13689237f469f0) {
          if (lVar11 == 0xf43df37eaa34fc3) {
            DAT_0021dba0 = DAT_0021dba0 ^ 0x47;
            _DAT_0021db90 = _DAT_0021db90 ^ 0x4747474747474747;
            uRam000000000021db98 = uRam000000000021db98 ^ 0x4747474747474747;
            DAT_0021f9df = '\x01';
            lVar12 = -0x60cd3c82222442fc;
          }
          goto LAB_0017b7e8;
        }
        local_9c = 0x1b;
        local_98 = unaff_x20;
      }
LAB_0017ce20:
      lVar12 = 0x4ab9a3d3d82e6640;
      goto LAB_0017b7e8;
    }
    if (lVar11 < 0x1652343901a79906) {
      if (lVar11 < 0x12e9a821eda1e176) {
        lVar12 = -0x360208aa015ed5da;
        if ((lVar11 != 0x10c09a7e26c7bc45) && (lVar12 = lVar11, lVar11 == 0x11c6687713f96334)) {
          unaff_x24 = (undefined4 *)(**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar12 = -0x58d4a1ff99370983;
          if (lVar9 != 0) {
            lVar12 = 0x6553b286c8407477;
          }
        }
      }
      else {
        if (lVar11 == 0x12e9a821eda1e176) {
          bVar6 = local_c8 == 0;
          lVar12 = -0x1ab7d7cee959a11d;
          lVar11 = -0x32ead494ef7d212b;
          goto LAB_0017b7dc;
        }
        if (lVar11 == 0x157086f9ee3133f8) {
          lVar12 = 0xc1c0014a1a704db;
        }
      }
      goto LAB_0017b7e8;
    }
    if (0x2871ea9107cedd68 < lVar11) {
      if (lVar11 == 0x2871ea9107cedd69) {
        local_120 = local_d8;
        lVar12 = 0x556097f8a89a3555;
        if (local_d8 != (undefined4 *)0x0) {
          lVar12 = 0x2e213870a196e7c4;
        }
        local_100 = local_d0;
      }
      else if (lVar11 == 0x2e213870a196e7c4) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_120);
        goto LAB_0017ca38;
      }
      goto LAB_0017b7e8;
    }
    lVar12 = 0x2745f1d09246953f;
    if ((lVar11 == 0x1652343901a79906) || (lVar12 = lVar11, lVar11 != 0x2745f1d09246953f))
    goto LAB_0017b7e8;
    DAT_0021f85c = 0;
    local_c8 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x24,&DAT_0021dba8,&DAT_0021dbc0);
    lVar12 = (**(code **)(*param_2 + 0x78))(param_2);
    bVar6 = lVar12 == 0;
    lVar11 = -0x5dc8661fe70bb191;
    lVar12 = 0x12e9a821eda1e176;
  }
  else {
    if (0x4aca3f16e97412ab < lVar11) {
      if (lVar11 < 0x6553b286c8407477) {
        if (lVar11 < 0x4d931f56eb957c5a) {
          if (lVar11 == 0x4aca3f16e97412ac) {
            (**(code **)(*param_2 + 0x110))(param_2,param_3,local_c8,unaff_x20);
            lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar12 = 0x23258f4ff3a4841;
            if (lVar9 != 0) {
              lVar12 = 0x44deba006d2d4801;
            }
          }
          else if (lVar11 == 0x4d201dca34f9057d) {
            DAT_0021f860 = 0;
            lVar12 = 0x373719e29df8005e;
          }
          else if (lVar11 == 0x4b015c885ed63430) {
            return;
          }
        }
        else {
          lVar12 = 0xc1c0014a1a704db;
          if ((lVar11 != 0x4d931f56eb957c5a) && (lVar12 = lVar11, lVar11 == 0x556097f8a89a3555)) {
LAB_0017ca38:
            lVar12 = 0x4523145fd7464f61;
          }
        }
      }
      else if (lVar11 < 0x7dcf737b2adf3002) {
        if (lVar11 == 0x6553b286c8407477) {
LAB_0017ca58:
          local_a0 = 0x11;
          local_a8 = (long *)0x0;
          goto LAB_0017ca60;
        }
        if (lVar11 == 0x7333431cb1ef57ea) {
          lVar12 = lVar1;
        }
      }
      else if (lVar11 == 0x7dcf737b2adf3002) {
        lVar5 = 0;
        lVar12 = 0x343897bece408525;
      }
      else if (lVar11 == 0x7e21a329f993f1d3) {
LAB_0017ca98:
        lVar12 = 0x4b015c885ed63430;
      }
      goto LAB_0017b7e8;
    }
    if (lVar11 < 0x44deba006d2d4801) {
      if (lVar11 < 0x343897bece408525) {
        lVar12 = -0x60cd3c82222442fc;
        if ((lVar11 != 0x31b4adc2285646dc) && (lVar12 = lVar11, lVar11 == 0x325182182b17a69e))
        goto LAB_0017bf68;
        goto LAB_0017b7e8;
      }
      if (lVar11 == 0x343897bece408525) {
        local_90 = (**(code **)(*param_2 + 0x538))(param_2,*(undefined8 *)(param_5 + lVar9 * 8));
        lVar12 = (**(code **)(*param_2 + 0x78))(param_2);
        bVar6 = lVar12 == 0;
        lVar11 = -0x3d02ae5e9a21a1e4;
        lVar12 = -0x38a37251ff50f43c;
        local_e0 = lVar9;
        goto LAB_0017b7dc;
      }
      if (lVar11 != 0x373719e29df8005e) goto LAB_0017b7e8;
      iVar7 = FUN_00212730(0,1,&DAT_0021f85c);
      bVar6 = iVar7 == 0;
      lVar11 = -0x3efc2da3496f0afd;
      lVar12 = -0x1d27ce34dec29fc7;
    }
    else {
      if (0x46c1bbde0911dd5d < lVar11) {
        if (lVar11 == 0x46c1bbde0911dd5e) {
          lVar12 = 0xd13689237f469f0;
          if (unaff_x20 != (long *)0x0) {
            lVar12 = 0x7333431cb1ef57ea;
          }
        }
        else if (lVar11 == 0x4ab9a3d3d82e6640) {
          local_b8 = local_98;
          *param_1 = local_9c;
          lVar12 = -0x59e7be80602c42a7;
          local_c0 = unaff_x24;
        }
        goto LAB_0017b7e8;
      }
      if (lVar11 == 0x44deba006d2d4801) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        *param_1 = 0x1b;
        puVar3 = unaff_x24;
        plVar4 = unaff_x20;
        lVar12 = -0x7684a385383e45a2;
        goto LAB_0017b7e8;
      }
      if (lVar11 != 0x4523145fd7464f61) goto LAB_0017b7e8;
      bVar6 = local_100 == (long *)0x0;
      lVar12 = 0x7e21a329f993f1d3;
      lVar11 = -0x16a5855aa2da3a5d;
    }
  }
LAB_0017b7dc:
  if (!bVar6) {
    lVar12 = lVar11;
  }
  goto LAB_0017b7e8;
}

