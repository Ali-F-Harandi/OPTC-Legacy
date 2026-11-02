// rea decompile_all
// name: FUN_0016acc8
// address: 0x16acc8
// body: available
// range: 0x16acc8-0x16b793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016acc8(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *__ptr;
  long lVar4;
  long lVar5;
  long unaff_x23;
  long *unaff_x28;
  void *local_c0;
  long *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  long local_70;
  long *local_68;
  
  lVar1 = 0x694d3cede530d163;
  if (param_1 != (long *)0x0) {
    lVar1 = 0x191f861a5a17c807;
  }
  plVar2 = param_1;
  lVar4 = -0x5b6720ac489a8680;
LAB_0016adc0:
  lVar5 = lVar4;
  __ptr = plVar2;
  lVar4 = lVar5;
  plVar2 = __ptr;
  if (lVar5 < 0xb823e654d4fbab0) {
    if (-0x40cdedb6ff381dce < lVar5) {
      if (lVar5 < -0x1d7cef9487c2879e) {
        if (lVar5 < -0x1f6bdc5c7dd519ae) {
          plVar2 = local_68;
          lVar4 = 0x7b373983557d6845;
          if ((lVar5 != -0x40cdedb6ff381dcd) &&
             (plVar2 = __ptr, lVar4 = lVar5, lVar5 == -0x379272ecb161167a)) {
            lVar4 = 0x551c040f10106fa1;
          }
          goto LAB_0016adc0;
        }
        if (lVar5 != -0x1f6bdc5c7dd519ae) {
          if (lVar5 == -0x1dd3d29a116605c2) {
            free(local_98);
            param_1[6] = 0;
            lVar4 = 0x31b9ecf89f48d353;
          }
          goto LAB_0016adc0;
        }
        local_a8 = (void *)param_1[2];
        bVar3 = local_a8 == (void *)0x0;
        lVar5 = 0x1199c93948e560f2;
        lVar4 = -0x791c7f1ad233d1d1;
      }
      else {
        if (0x8a7864c2d25180e < lVar5) {
          if (lVar5 == 0x8a7864c2d25180f) {
            free(local_78);
            param_1[1] = 0;
            lVar4 = -0x180218060377a0a;
          }
          else if (lVar5 == 0xa8f13ca00408062) {
            free(local_90);
            *param_1 = 0;
            lVar4 = -0x1d7cef9487c2879e;
          }
          else if (lVar5 == 0xaa692ab8975b390) {
            lVar4 = 0xb823e654d4fbab0;
          }
          goto LAB_0016adc0;
        }
        if (lVar5 == -0x1d7cef9487c2879e) {
          local_98 = (void *)param_1[6];
          bVar3 = local_98 == (void *)0x0;
          lVar5 = -0x1dd3d29a116605c2;
          lVar4 = -0x5dd34072bfc4b29f;
        }
        else {
          if (lVar5 != -0x180218060377a0a) goto LAB_0016adc0;
          local_80 = (void *)param_1[3];
          bVar3 = local_80 == (void *)0x0;
          lVar5 = 0x23be5cfccae0ce43;
          lVar4 = -0x379272ecb161167a;
        }
      }
LAB_0016adb8:
      if (!bVar3) {
        lVar4 = lVar5;
      }
      goto LAB_0016adc0;
    }
    if (-0x5dd34072bfc4b2a0 < lVar5) {
      if (lVar5 < -0x589f7252e792e72f) {
        lVar4 = 0x31b9ecf89f48d353;
        if ((lVar5 != -0x5dd34072bfc4b29f) && (lVar4 = lVar5, lVar5 == -0x5b6720ac489a8680)) {
          lVar4 = lVar1;
        }
      }
      else {
        lVar4 = -0x180218060377a0a;
        if (lVar5 != -0x589f7252e792e72f) {
          if (lVar5 == -0x46d0a82ced6ffa26) {
            local_68 = (long *)param_1[unaff_x23 * 2 + 0xf];
            lVar4 = 0x47574b492eafebba;
            bVar3 = local_68 == (long *)0x0;
            lVar5 = -0x40cdedb6ff381dcd;
            goto LAB_0016b608;
          }
          lVar4 = lVar5;
          if (lVar5 == -0x42c1d1fc8b3d3caa) {
            local_90 = (void *)*param_1;
            bVar3 = local_90 == (void *)0x0;
            lVar5 = 0xa8f13ca00408062;
            lVar4 = -0x7b0783e9c74503d3;
            goto LAB_0016adb8;
          }
        }
      }
      goto LAB_0016adc0;
    }
    if (lVar5 < -0x6fe4aabc4845c9bd) {
      lVar4 = -0x1d7cef9487c2879e;
      if ((lVar5 != -0x7b0783e9c74503d3) && (lVar4 = lVar5, lVar5 == -0x791c7f1ad233d1d1)) {
        lVar4 = 0x2c03734ec9bbcac9;
      }
      goto LAB_0016adc0;
    }
    if (lVar5 == -0x6fe4aabc4845c9bd) {
      free(local_a0);
      param_1[7] = 0;
      lVar4 = -0x1f6bdc5c7dd519ae;
      goto LAB_0016adc0;
    }
    if (lVar5 != -0x62deba426717426e) goto LAB_0016adc0;
    local_b8 = param_1 + local_70 * 2 + 0xe;
    local_c0 = (void *)*local_b8;
    bVar3 = local_c0 == (void *)0x0;
    lVar5 = 0x38a25eb0a47ff838;
    lVar4 = -0x46d0a82ced6ffa26;
    unaff_x23 = local_70;
  }
  else {
    if (0x31da1546d9fb203d < lVar5) {
      if (lVar5 < 0x54e4c68ec7baa963) {
        if (lVar5 < 0x46cec0900bc9d0c6) {
          if (lVar5 == 0x38a25eb0a47ff838) {
            free(local_c0);
            unaff_x28 = (long *)param_1[unaff_x23 * 2 + 0xf];
            lVar4 = 0xaa692ab8975b390;
            if (unaff_x28 != (long *)0x0) {
              lVar4 = 0x2ce83c478803dc23;
            }
            *local_b8 = 0;
          }
          else {
            lVar4 = 0x30252f3958b42337;
            if ((lVar5 != 0x434ecf7c97ff3643) && (lVar4 = lVar5, lVar5 == 0x31da1546d9fb203e)) {
              return;
            }
          }
        }
        else if (lVar5 == 0x46cec0900bc9d0c6) {
          free(local_b0);
          param_1[10] = 0;
          lVar4 = 0x30252f3958b42337;
        }
        else if (lVar5 == 0x47574b492eafebba) {
          lVar4 = 0x31da1546d9fb203e;
        }
      }
      else if (lVar5 < 0x564342adc61c0c99) {
        lVar4 = -0x1f6bdc5c7dd519ae;
        if ((lVar5 != 0x54e4c68ec7baa963) && (lVar4 = lVar5, lVar5 == 0x551c040f10106fa1)) {
          local_88 = (void *)param_1[4];
          bVar3 = local_88 == (void *)0x0;
          lVar5 = 0x564342adc61c0c99;
          lVar4 = 0x250a73bbedfea971;
          goto LAB_0016adb8;
        }
      }
      else if (lVar5 == 0x564342adc61c0c99) {
        free(local_88);
        param_1[4] = 0;
        lVar4 = -0x42c1d1fc8b3d3caa;
      }
      else {
        lVar4 = 0x31da1546d9fb203e;
        if ((lVar5 != 0x694d3cede530d163) && (lVar4 = lVar5, lVar5 == 0x7b373983557d6845)) {
          free(__ptr);
          param_1[unaff_x23 * 2 + 0xf] = 0;
          lVar4 = 0xb823e654d4fbab0;
        }
      }
      goto LAB_0016adc0;
    }
    if (lVar5 < 0x250a73bbedfea971) {
      if (lVar5 < 0x191f861a5a17c807) {
        if (lVar5 == 0xb823e654d4fbab0) {
          local_70 = unaff_x23 + 1;
LAB_0016b6b4:
          plVar2 = __ptr;
          lVar4 = -0x62deba426717426e;
        }
        else if (lVar5 == 0x1199c93948e560f2) {
          free(local_a8);
          param_1[2] = 0;
          lVar4 = 0x2c03734ec9bbcac9;
        }
      }
      else {
        if (lVar5 == 0x191f861a5a17c807) {
          local_78 = (void *)param_1[1];
          bVar3 = local_78 == (void *)0x0;
          lVar5 = 0x8a7864c2d25180f;
          lVar4 = -0x589f7252e792e72f;
          goto LAB_0016adb8;
        }
        if (lVar5 == 0x23be5cfccae0ce43) {
          free(local_80);
          param_1[3] = 0;
          lVar4 = 0x551c040f10106fa1;
        }
      }
      goto LAB_0016adc0;
    }
    if (lVar5 < 0x2ce83c478803dc23) {
      lVar4 = -0x42c1d1fc8b3d3caa;
      if ((lVar5 == 0x250a73bbedfea971) || (lVar4 = lVar5, lVar5 != 0x2c03734ec9bbcac9))
      goto LAB_0016adc0;
      local_b0 = (void *)param_1[10];
      bVar3 = local_b0 == (void *)0x0;
      lVar4 = 0x434ecf7c97ff3643;
      lVar5 = 0x46cec0900bc9d0c6;
    }
    else {
      plVar2 = unaff_x28;
      lVar4 = 0x7b373983557d6845;
      if (lVar5 == 0x2ce83c478803dc23) goto LAB_0016adc0;
      if (lVar5 == 0x30252f3958b42337) {
        local_70 = 0;
        goto LAB_0016b6b4;
      }
      plVar2 = __ptr;
      lVar4 = lVar5;
      if (lVar5 != 0x31b9ecf89f48d353) goto LAB_0016adc0;
      local_a0 = (void *)param_1[7];
      bVar3 = local_a0 == (void *)0x0;
      lVar4 = 0x54e4c68ec7baa963;
      lVar5 = -0x6fe4aabc4845c9bd;
    }
  }
LAB_0016b608:
  plVar2 = __ptr;
  if (!bVar3) {
    lVar4 = lVar5;
  }
  goto LAB_0016adc0;
}

