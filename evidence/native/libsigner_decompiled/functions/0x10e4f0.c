// rea decompile_all
// name: FUN_0010e4f0
// address: 0x10e4f0
// body: available
// range: 0x10e4f0-0x10eda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10eda4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010e4f0(double *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x27;
  double dVar9;
  double unaff_d8;
  double unaff_d9;
  undefined8 *local_c8;
  double local_c0;
  undefined8 *local_b0;
  undefined8 **local_a8;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_a8 = &local_b0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)0x8d9cde8a92cc3625;
  if (*(char *)(param_1 + 1) != '\0') {
    puVar1 = (undefined8 *)&DAT_c4c956bc7e2b1c5a;
  }
  local_b0 = (undefined8 *)0x0;
  local_9c = 0;
  puVar7 = (undefined8 *)0x939eea0b05eec05c;
  puVar3 = (undefined8 *)&DAT_c4c956bc7e2b1c5a;
LAB_0010e610:
  puVar8 = puVar3;
  puVar6 = puVar7;
  puVar7 = puVar6;
  puVar3 = puVar8;
  if (-0xdc83dfec3e3905f < (long)puVar6) {
    if (0x332dfd522f05c93b < (long)puVar6) {
      if ((long)puVar6 < 0x5f3fddf8e2fc9ebc) {
        if ((long)puVar6 < 0x5602aba7b2fd1776) {
          puVar7 = (undefined8 *)0xfaa36b650a651891;
          if ((puVar6 != (undefined8 *)0x332dfd522f05c93c) &&
             (puVar7 = puVar6, puVar6 == (undefined8 *)0x35d73c47b28080e6)) {
            param_1[0x47] = (double)((ulong)local_c0 | 0x80020000000000);
            FUN_0011cc58(&local_b0);
            if (*(long *)(lVar2 + 0x28) == local_78) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else {
          puVar7 = (undefined8 *)0x255edd958a6bac09;
          puVar3 = unaff_x20;
          if ((puVar6 != (undefined8 *)0x5602aba7b2fd1776) &&
             (puVar7 = puVar6, puVar3 = puVar8, puVar6 == (undefined8 *)0x5ef7b9568d6b3c0a)) {
            puVar7 = (undefined8 *)0x255edd958a6bac09;
            puVar3 = unaff_x27;
          }
        }
      }
      else {
        puVar7 = (undefined8 *)0xcbd3ad62bd885e21;
        if (((puVar6 != (undefined8 *)0x5f3fddf8e2fc9ebc) &&
            (puVar7 = (undefined8 *)0x225f8dd9081ebc43, puVar6 != (undefined8 *)0x700353e7f52f2541))
           && (puVar7 = puVar6, puVar6 == (undefined8 *)0x70aaef16e8748d67)) {
          FUN_0011bdb4(&local_9c,param_1[0x4e],&local_b0);
          bVar4 = local_9c == 0;
          puVar7 = (undefined8 *)0xe1040badb9b8aca8;
          puVar6 = (undefined8 *)0xc33d4c2e9c01bfd9;
          goto LAB_0010e608;
        }
      }
      goto LAB_0010e610;
    }
    if ((long)puVar6 < -0x55c949af59ae76f) {
      if (puVar6 == (undefined8 *)0xf237c2013c1c6fa2) {
        FUN_002083ac(param_1 + 4,0x29);
        param_1[0x47] = (double)((ulong)param_1[0x47] | 1);
        puVar7 = (undefined8 *)0x225f8dd9081ebc43;
      }
      else if (puVar6 == (undefined8 *)0xf57a82b25c35fe2a) {
        *param_1 = unaff_d8;
        puVar7 = (undefined8 *)0x70aaef16e8748d67;
      }
      else if (puVar6 == (undefined8 *)0xf7b3adcf918810f6) {
        puVar7 = (undefined8 *)0xf57a82b25c35fe2a;
      }
    }
    else {
      if (0x225f8dd9081ebc42 < (long)puVar6) {
        if (puVar6 == (undefined8 *)0x225f8dd9081ebc43) {
          bVar4 = local_9c == 0;
          puVar7 = (undefined8 *)0xc0982d9fe51200a2;
          puVar6 = (undefined8 *)0x9069f9d096a544a9;
        }
        else {
          if (puVar6 != (undefined8 *)0x255edd958a6bac09) goto LAB_0010e610;
          iVar5 = FUN_001e2ed0(param_1[0x4f],*puVar8);
          bVar4 = iVar5 == 0;
          puVar6 = (undefined8 *)0xb2d9bc6161ff7d2e;
          puVar7 = (undefined8 *)0x700353e7f52f2541;
          local_c8 = puVar8;
        }
LAB_0010e608:
        if (!bVar4) {
          puVar7 = puVar6;
        }
        goto LAB_0010e610;
      }
      if (puVar6 == (undefined8 *)0xfaa36b650a651891) {
        *param_1 = unaff_d9;
        puVar7 = (undefined8 *)0xcbd3ad62bd885e21;
      }
      else if (puVar6 == (undefined8 *)0x1f2c3b62b1679b) {
        puVar7 = (undefined8 *)0xf57a82b25c35fe2a;
LAB_0010e70c:
        *(undefined1 *)(param_1 + 1) = 1;
      }
    }
    goto LAB_0010e610;
  }
  if (-0x3f67d2601aedff5f < (long)puVar6) {
    if (-0x342c529d4277a1e0 < (long)puVar6) {
      if ((long)puVar6 < -0x23622512dd6c3fd3) {
        if (puVar6 != (undefined8 *)0xcbd3ad62bd885e21) {
          if (puVar6 == (undefined8 *)0xd746c07de834a28d) {
            puVar7 = (undefined8 *)0xfaa36b650a651891;
            goto LAB_0010e70c;
          }
          goto LAB_0010e610;
        }
        bVar4 = local_b0 == (undefined8 *)0x0;
        puVar7 = (undefined8 *)&DAT_9e2090a1498a3988;
        puVar6 = (undefined8 *)0x5602aba7b2fd1776;
        unaff_x20 = local_b0;
      }
      else {
        if (puVar6 == (undefined8 *)0xdc9ddaed2293c02d) {
          FUN_002083ac(param_1 + 4,0x37);
          local_c0 = (double)((ulong)param_1[0x47] | 1);
          goto LAB_0010ec14;
        }
        if (puVar6 != (undefined8 *)0xe1040badb9b8aca8) goto LAB_0010e610;
        bVar4 = *(char *)(param_1 + 1) == '\0';
        puVar6 = (undefined8 *)0x5f3fddf8e2fc9ebc;
        puVar7 = (undefined8 *)0xb5973310192f9ea8;
      }
      if (!bVar4) {
        puVar7 = puVar6;
      }
      goto LAB_0010e610;
    }
    if (puVar6 == (undefined8 *)0xc0982d9fe51200a2) {
      local_c0 = param_1[0x47];
LAB_0010ec14:
      puVar7 = (undefined8 *)0x35d73c47b28080e6;
    }
    else {
      puVar7 = (undefined8 *)0xdc9ddaed2293c02d;
      if ((puVar6 != (undefined8 *)0xc33d4c2e9c01bfd9) &&
         (puVar7 = puVar6, puVar6 == (undefined8 *)&DAT_c4c956bc7e2b1c5a)) {
        puVar7 = (undefined8 *)0x70aaef16e8748d67;
      }
    }
    goto LAB_0010e610;
  }
  if ((long)puVar6 < -0x61df6f5eb675c678) {
    if (puVar6 != (undefined8 *)0x8d9cde8a92cc3625) {
      puVar7 = (undefined8 *)0xdc9ddaed2293c02d;
      if ((puVar6 != (undefined8 *)0x9069f9d096a544a9) &&
         (puVar7 = puVar6, puVar6 == (undefined8 *)0x939eea0b05eec05c)) {
        puVar7 = puVar1;
      }
      goto LAB_0010e610;
    }
    local_98 = 0;
    local_90 = 0;
    FUN_001f3abc(0,&local_98);
    puVar7 = (undefined8 *)0x1f2c3b62b1679b;
    unaff_d8 = (double)local_90 / 1000000.0 + (double)local_98 * 1000.0;
    dVar9 = unaff_d8 - *param_1;
    puVar6 = (undefined8 *)0xf7b3adcf918810f6;
  }
  else {
    if (puVar6 == (undefined8 *)&DAT_9e2090a1498a3988) {
      local_9c = 1;
      puVar7 = (undefined8 *)0xdc9ddaed2293c02d;
      goto LAB_0010e610;
    }
    if (puVar6 == (undefined8 *)0xb2d9bc6161ff7d2e) {
      unaff_x27 = (undefined8 *)local_c8[1];
      puVar7 = (undefined8 *)0xf237c2013c1c6fa2;
      bVar4 = unaff_x27 == (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x5ef7b9568d6b3c0a;
      goto LAB_0010e608;
    }
    if (puVar6 != (undefined8 *)0xb5973310192f9ea8) goto LAB_0010e610;
    local_88 = 0;
    local_80 = 0;
    FUN_001f3abc(0,&local_88);
    puVar7 = (undefined8 *)0xd746c07de834a28d;
    unaff_d9 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
    dVar9 = unaff_d9 - *param_1;
    puVar6 = (undefined8 *)0x332dfd522f05c93c;
  }
  if (dVar9 <= 15000.0) {
    puVar7 = puVar6;
  }
  goto LAB_0010e610;
}

