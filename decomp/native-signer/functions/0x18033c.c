// rea decompile_all
// name: FUN_0018033c
// address: 0x18033c
// body: available
// range: 0x18033c-0x18117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018033c(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long local_c0;
  long local_a8;
  int local_9c;
  long local_90;
  int local_84;
  int local_74;
  long local_70;
  long local_68;
  
  lVar1 = -0x2e86f8262ad304e4;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x3f1d3768cf06784d;
  }
  lVar2 = lVar1;
  lVar6 = -0x148fef7dd3f3ba45;
LAB_0018043c:
  lVar7 = lVar6;
  lVar5 = lVar2;
  lVar6 = lVar7;
  lVar2 = lVar5;
  if (lVar7 < 0x105288b97b221284) {
    if (-0x1be3bb16c74d18a8 < lVar7) {
      if (lVar7 < -0x5a4542d0374932a) {
        if (lVar7 < -0x14d28ede0695770a) {
          if (lVar7 == -0x1be3bb16c74d18a7) {
            lVar6 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_a8,unaff_x20);
            *param_5 = lVar6;
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar6 = -0x6723f046c01d6d6c;
            if (lVar5 != 0) {
              lVar6 = 0x73e14054b040d534;
            }
          }
          else if (lVar7 == -0x169e5de8b5b34eaa) {
            lVar6 = 0x54a3aeab5af66f56;
          }
        }
        else {
          lVar6 = -0x2111fd8668cabe65;
          if (((lVar7 != -0x14d28ede0695770a) && (lVar6 = lVar1, lVar7 != -0x148fef7dd3f3ba45)) &&
             (lVar6 = lVar7, lVar7 == -0x7faf6ff04766bbe)) {
            DAT_0021dda1 = DAT_0021dda1 ^ 0x89;
            DAT_0021dda2 = DAT_0021dda2 ^ 0x89;
            DAT_0021dda0 = DAT_0021dda0 ^ 0x89;
            DAT_0021dda4 = DAT_0021dda4 ^ 0x89;
            DAT_0021dda5 = DAT_0021dda5 ^ 0x89;
            _DAT_0021dd70 = _DAT_0021dd70 ^ 0x8989898989898989;
            uRam000000000021dd78 = uRam000000000021dd78 ^ 0x8989898989898989;
            DAT_0021dda3 = DAT_0021dda3 ^ 0x89;
            _DAT_0021dd80 = _DAT_0021dd80 ^ 0x8989898989898989;
            uRam000000000021dd88 = uRam000000000021dd88 ^ 0x8989898989898989;
            _DAT_0021dd90 = _DAT_0021dd90 ^ 0x8989898989898989;
            uRam000000000021dd98 = uRam000000000021dd98 ^ 0x8989898989898989;
            DAT_0021f9eb = '\x01';
            lVar6 = 0x54a3aeab5af66f56;
          }
        }
        goto LAB_0018043c;
      }
      if (lVar7 < 0x136744913631228) {
        if (lVar7 == -0x5a4542d0374932a) {
          lVar6 = -0x21ae77b745f40c1d;
          if (DAT_0021f9ea == '\0') {
            lVar6 = -0x22ea30f1a32f3c73;
          }
          goto LAB_0018043c;
        }
        if (lVar7 == -0x1a74c2b48399993) {
          lVar6 = -0x318d4506729b2d57;
          if (local_a8 != 0) {
            lVar6 = 0x3de750a009e6c9b3;
          }
          goto LAB_0018043c;
        }
        if (lVar7 != -0x10b99b2534a8162) goto LAB_0018043c;
      }
      else {
        if (lVar7 == 0x136744913631228) {
          local_90 = 0;
          local_84 = 0x11;
          lVar6 = 0x6670d371c1449894;
          goto LAB_0018043c;
        }
        if (lVar7 == 0xb833f5bfd455921) {
          lVar2 = 0;
          lVar6 = 0x579cfa6b70cd4f84;
          goto LAB_0018043c;
        }
        if (lVar7 != 0x10146ef07cbd8c0b) goto LAB_0018043c;
      }
      lVar6 = 0x369ba09d5d0a62b2;
      goto LAB_0018043c;
    }
    if (lVar7 < -0x3f1d3768cf06784d) {
      if (lVar7 < -0x68fd099714d73b0f) {
        if (lVar7 == -0x7badd5647b20e843) {
          *param_1 = local_74;
          lVar2 = local_70;
          lVar6 = 0x579cfa6b70cd4f84;
          goto LAB_0018043c;
        }
        if (lVar7 != -0x70849a05dd3fb1b1) goto LAB_0018043c;
        lVar6 = 0x109492baab331277;
        bVar3 = *param_1 == 0;
        lVar5 = 0x10146ef07cbd8c0b;
      }
      else if (lVar7 == -0x68fd099714d73b0f) {
        bVar3 = local_68 == 0;
        lVar6 = 0x303158640ab3d4cb;
        lVar5 = 0x2838a2ef0a868f0e;
      }
      else {
        if (lVar7 != -0x6723f046c01d6d6c) {
          if (lVar7 == -0x62b5556008739667) {
            *param_1 = local_9c;
            lVar6 = 0x369ba09d5d0a62b2;
          }
          goto LAB_0018043c;
        }
        lVar6 = 0x2bc75a8f247b8672;
        bVar3 = *param_5 == 0;
        lVar5 = 0x2bdebd7966b0772c;
      }
LAB_00180434:
      if (!bVar3) {
        lVar6 = lVar5;
      }
      goto LAB_0018043c;
    }
    if (-0x22ea30f1a32f3c74 < lVar7) {
      if (lVar7 == -0x22ea30f1a32f3c73) {
        DAT_0021dd60 = DAT_0021dd60 ^ 0x42;
        DAT_0021dd61 = DAT_0021dd61 ^ 0x42;
        DAT_0021dd62 = DAT_0021dd62 ^ 0x42;
        DAT_0021dd63 = DAT_0021dd63 ^ 0x42;
        _DAT_0021dd50 = _DAT_0021dd50 ^ 0x4242424242424242;
        uRam000000000021dd58 = uRam000000000021dd58 ^ 0x4242424242424242;
        DAT_0021f9ea = '\x01';
        lVar6 = 0x29be0a2244b3fc65;
      }
      else {
        lVar6 = 0x29be0a2244b3fc65;
        if ((lVar7 != -0x21ae77b745f40c1d) && (lVar6 = lVar7, lVar7 == -0x2111fd8668cabe65)) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f888);
          lVar6 = 0x4d125807a33a4c80;
          if (iVar4 != 0) {
            lVar6 = -0x14d28ede0695770a;
          }
        }
      }
      goto LAB_0018043c;
    }
    if (lVar7 == -0x3f1d3768cf06784d) {
      local_9c = 3;
      goto LAB_00180fac;
    }
    if (lVar7 != -0x318d4506729b2d57) {
      if (lVar7 == -0x2e86f8262ad304e4) {
        local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = -0x68fd099714d73b0f;
        if (lVar5 != 0) {
          lVar6 = 0x7bd6326186813957;
        }
      }
      goto LAB_0018043c;
    }
    local_70 = 0;
    local_74 = 0x11;
  }
  else {
    if (0x370651321b939f84 < lVar7) {
      if (lVar7 < 0x579cfa6b70cd4f84) {
        if (lVar7 < 0x44f5c44a12f7af6d) {
          if (lVar7 == 0x370651321b939f85) {
            local_84 = 0x21;
            goto LAB_00181008;
          }
          if (lVar7 == 0x3de750a009e6c9b3) {
            unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar6 = 0x44f5c44a12f7af6d;
            if (lVar5 != 0) {
              lVar6 = 0x370651321b939f85;
            }
          }
          else if (lVar7 == 0x3c5d98bd1176cc0a) {
            return;
          }
        }
        else {
          if (lVar7 == 0x44f5c44a12f7af6d) {
            lVar5 = -0x1be3bb16c74d18a7;
            lVar6 = 0x19d59a6c6692205a;
            bVar3 = unaff_x20 == 0;
            goto LAB_00180434;
          }
          if (lVar7 == 0x4d125807a33a4c80) {
            lVar6 = -0x169e5de8b5b34eaa;
            if (DAT_0021f9eb == '\0') {
              lVar6 = -0x7faf6ff04766bbe;
            }
          }
          else if (lVar7 == 0x54a3aeab5af66f56) {
            DAT_0021f888 = 0;
            lVar6 = 0x105288b97b221284;
          }
        }
      }
      else if (lVar7 < 0x6670d371c1449894) {
        if (lVar7 == 0x579cfa6b70cd4f84) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_68);
          lVar6 = 0x5de43884d7e33d71;
          local_c0 = lVar5;
          if (lVar5 != 0) {
            lVar6 = 0x1953a628a98e49d0;
          }
        }
        else if (lVar7 == 0x5de43884d7e33d71) {
LAB_00180ed8:
          lVar6 = -0x70849a05dd3fb1b1;
        }
      }
      else if (lVar7 == 0x6670d371c1449894) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_70 = local_90;
        local_74 = local_84;
        lVar6 = -0x7badd5647b20e843;
      }
      else if (lVar7 == 0x73e14054b040d534) {
        local_84 = 0x1b;
LAB_00181008:
        lVar6 = 0x6670d371c1449894;
        local_90 = unaff_x20;
      }
      else if (lVar7 == 0x7bd6326186813957) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar6 = -0x10b99b2534a8162;
        if (local_68 != 0) {
          lVar6 = 0xb833f5bfd455921;
        }
        *param_1 = 0x11;
      }
      goto LAB_0018043c;
    }
    if (lVar7 < 0x2838a2ef0a868f0e) {
      if (lVar7 < 0x16b83d185a0215ae) {
        if (lVar7 == 0x105288b97b221284) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f884);
          lVar6 = -0x5a4542d0374932a;
          if (iVar4 != 0) {
            lVar6 = 0x16b83d185a0215ae;
          }
        }
        else if (lVar7 == 0x109492baab331277) {
          lVar6 = 0x3c5d98bd1176cc0a;
        }
      }
      else {
        lVar6 = 0x105288b97b221284;
        if (lVar7 != 0x16b83d185a0215ae) {
          if (lVar7 == 0x1953a628a98e49d0) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
            goto LAB_00180ed8;
          }
          lVar6 = lVar7;
          if (lVar7 == 0x19d59a6c6692205a) {
            local_74 = 0x21;
            local_70 = unaff_x20;
            goto LAB_00180d40;
          }
        }
      }
      goto LAB_0018043c;
    }
    if (0x2bdebd7966b0772b < lVar7) {
      lVar2 = unaff_x20;
      lVar6 = 0x579cfa6b70cd4f84;
      if (lVar7 != 0x2bdebd7966b0772c) {
        if (lVar7 == 0x303158640ab3d4cb) {
          local_9c = 0x11;
LAB_00180fac:
          lVar2 = lVar5;
          lVar6 = -0x62b5556008739667;
        }
        else {
          lVar2 = lVar5;
          lVar6 = lVar7;
          if (lVar7 == 0x369ba09d5d0a62b2) {
            *param_5 = 0;
            lVar6 = 0x3c5d98bd1176cc0a;
          }
        }
      }
      goto LAB_0018043c;
    }
    lVar6 = -0x2111fd8668cabe65;
    if (lVar7 == 0x2838a2ef0a868f0e) goto LAB_0018043c;
    if (lVar7 == 0x29be0a2244b3fc65) {
      DAT_0021f884 = 0;
      local_a8 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_0021dd50,&DAT_0021dd70);
      lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar6 = -0x1a74c2b48399993;
      if (lVar5 != 0) {
        lVar6 = 0x136744913631228;
      }
      goto LAB_0018043c;
    }
    lVar6 = lVar7;
    if (lVar7 != 0x2bc75a8f247b8672) goto LAB_0018043c;
    local_74 = 0x1b;
    local_70 = unaff_x20;
  }
LAB_00180d40:
  lVar6 = -0x7badd5647b20e843;
  goto LAB_0018043c;
}

