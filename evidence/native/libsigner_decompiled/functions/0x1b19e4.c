// rea decompile_all
// name: FUN_001b19e4
// address: 0x1b19e4
// body: available
// range: 0x1b19e4-0x1b208b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b2088 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_001b19e4(long *param_1,size_t *param_2,FILE *param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  size_t sVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  void *in_x12;
  void *pvVar12;
  void *unaff_x20;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  byte local_114;
  void *local_110;
  ulong local_108;
  undefined8 local_f8;
  char local_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  pvVar1 = (void *)0xc23f84056fd30bd6;
  if (lVar9 != 0) {
    pvVar1 = (void *)0xbf711ec4fafe862e;
  }
  local_f0[8] = '\0';
  local_f0[9] = '\0';
  local_f0[10] = '\0';
  local_f0[0xb] = '\0';
  local_f0[0xc] = '\0';
  local_f0[0xd] = '\0';
  local_f0[0xe] = '\0';
  local_f0[0xf] = '\0';
  local_f0[0] = '\0';
  local_f0[1] = '\0';
  local_f0[2] = '\0';
  local_f0[3] = '\0';
  local_f0[4] = '\0';
  local_f0[5] = '\0';
  local_f0[6] = '\0';
  local_f0[7] = '\0';
  local_f0[0x18] = '\0';
  local_f0[0x19] = '\0';
  local_f0[0x1a] = '\0';
  local_f0[0x1b] = '\0';
  local_f0[0x1c] = '\0';
  local_f0[0x1d] = '\0';
  local_f0[0x1e] = '\0';
  local_f0[0x1f] = '\0';
  local_f0[0x10] = '\0';
  local_f0[0x11] = '\0';
  local_f0[0x12] = '\0';
  local_f0[0x13] = '\0';
  local_f0[0x14] = '\0';
  local_f0[0x15] = '\0';
  local_f0[0x16] = '\0';
  local_f0[0x17] = '\0';
  local_f0[0x28] = '\0';
  local_f0[0x29] = '\0';
  local_f0[0x2a] = '\0';
  local_f0[0x2b] = '\0';
  local_f0[0x2c] = '\0';
  local_f0[0x2d] = '\0';
  local_f0[0x2e] = '\0';
  local_f0[0x2f] = '\0';
  local_f0[0x20] = '\0';
  local_f0[0x21] = '\0';
  local_f0[0x22] = '\0';
  local_f0[0x23] = '\0';
  local_f0[0x24] = '\0';
  local_f0[0x25] = '\0';
  local_f0[0x26] = '\0';
  local_f0[0x27] = '\0';
  local_f0[0x38] = '\0';
  local_f0[0x39] = '\0';
  local_f0[0x3a] = '\0';
  local_f0[0x3b] = '\0';
  local_f0[0x3c] = '\0';
  local_f0[0x3d] = '\0';
  local_f0[0x3e] = '\0';
  local_f0[0x3f] = '\0';
  local_f0[0x30] = '\0';
  local_f0[0x31] = '\0';
  local_f0[0x32] = '\0';
  local_f0[0x33] = '\0';
  local_f0[0x34] = '\0';
  local_f0[0x35] = '\0';
  local_f0[0x36] = '\0';
  local_f0[0x37] = '\0';
  local_f0[0x48] = '\0';
  local_f0[0x49] = '\0';
  local_f0[0x4a] = '\0';
  local_f0[0x4b] = '\0';
  local_f0[0x4c] = '\0';
  local_f0[0x4d] = '\0';
  local_f0[0x4e] = '\0';
  local_f0[0x4f] = '\0';
  local_f0[0x40] = '\0';
  local_f0[0x41] = '\0';
  local_f0[0x42] = '\0';
  local_f0[0x43] = '\0';
  local_f0[0x44] = '\0';
  local_f0[0x45] = '\0';
  local_f0[0x46] = '\0';
  local_f0[0x47] = '\0';
  local_f0[0x58] = '\0';
  local_f0[0x59] = '\0';
  local_f0[0x5a] = '\0';
  local_f0[0x5b] = '\0';
  local_f0[0x5c] = '\0';
  local_f0[0x5d] = '\0';
  local_f0[0x5e] = '\0';
  local_f0[0x5f] = '\0';
  local_f0[0x50] = '\0';
  local_f0[0x51] = '\0';
  local_f0[0x52] = '\0';
  local_f0[0x53] = '\0';
  local_f0[0x54] = '\0';
  local_f0[0x55] = '\0';
  local_f0[0x56] = '\0';
  local_f0[0x57] = '\0';
  local_f0[0x68] = '\0';
  local_f0[0x69] = '\0';
  local_f0[0x6a] = '\0';
  local_f0[0x6b] = '\0';
  local_f0[0x6c] = '\0';
  local_f0[0x6d] = '\0';
  local_f0[0x6e] = '\0';
  local_f0[0x6f] = '\0';
  local_f0[0x60] = '\0';
  local_f0[0x61] = '\0';
  local_f0[0x62] = '\0';
  local_f0[99] = '\0';
  local_f0[100] = '\0';
  local_f0[0x65] = '\0';
  local_f0[0x66] = '\0';
  local_f0[0x67] = '\0';
  local_f0[0x78] = '\0';
  local_f0[0x79] = '\0';
  local_f0[0x7a] = '\0';
  local_f0[0x7b] = '\0';
  local_f0[0x7c] = '\0';
  local_f0[0x7d] = '\0';
  local_f0[0x7e] = '\0';
  local_f0[0x7f] = '\0';
  local_f0[0x70] = '\0';
  local_f0[0x71] = '\0';
  local_f0[0x72] = '\0';
  local_f0[0x73] = '\0';
  local_f0[0x74] = '\0';
  local_f0[0x75] = '\0';
  local_f0[0x76] = '\0';
  local_f0[0x77] = '\0';
  pvVar3 = pvVar1;
  pvVar4 = (void *)0xc23f84056fd30bd6;
  pvVar5 = (void *)0xf54c5df74fcabc41;
  local_f8 = param_2;
LAB_001b1aa8:
  while (pvVar12 = in_x12, pvVar11 = pvVar5, pvVar10 = pvVar4, pvVar8 = pvVar3, pvVar3 = pvVar8,
        pvVar4 = pvVar10, pvVar5 = pvVar11, in_x12 = pvVar12, 0x312910f1547c7c76 < (long)pvVar11) {
    if ((long)pvVar11 < 0x5ece82223eee3411) {
      if ((long)pvVar11 < 0x49b9b00eeff4c15a) {
        pvVar3 = unaff_x20;
        pvVar5 = (void *)0x5039187a35dab08d;
        if ((pvVar11 != (void *)0x312910f1547c7c77) &&
           (pvVar3 = pvVar8, pvVar5 = pvVar11, pvVar11 == (void *)0x3b36a7a007b21166)) {
          pcVar6 = fgets(local_f0,0x80,param_3);
          pvVar5 = (void *)0x312910f1547c7c77;
          unaff_x20 = pvVar12;
          if (pcVar6 != (char *)0x0) {
            pvVar5 = (void *)0xc89737e2f8768a05;
          }
        }
      }
      else if (pvVar11 == (void *)0x49b9b00eeff4c15a) {
        sVar7 = (long)unaff_x26 + (0x81 - (local_108 & 0x7f));
        *local_f8 = sVar7;
        unaff_x23 = realloc((void *)*param_1,sVar7);
        *param_1 = (long)unaff_x23;
        pvVar5 = (void *)0x58b842c6f86d5804;
        if (unaff_x23 != (void *)0x0) {
          pvVar5 = (void *)0x5ece82223eee3411;
        }
      }
      else {
        if (pvVar11 == (void *)0x58b842c6f86d5804) goto LAB_001b1cdc;
        if (pvVar11 == (void *)0x5039187a35dab08d) {
          if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return pvVar8;
        }
      }
    }
    else if ((long)pvVar11 < 0x75df443d79079721) {
      pvVar4 = unaff_x23;
      pvVar5 = (void *)0x7e713fa43f38c582;
      if ((pvVar11 != (void *)0x5ece82223eee3411) &&
         (pvVar4 = pvVar10, pvVar5 = pvVar11, pvVar11 == (void *)0x6b5051bf1aed633d)) {
LAB_001b1cdc:
        pvVar3 = (void *)0xffffffffffffffff;
        pvVar4 = pvVar10;
        pvVar5 = (void *)0x5039187a35dab08d;
      }
    }
    else {
      pvVar5 = (void *)0x3b36a7a007b21166;
      in_x12 = unaff_x26;
      if ((pvVar11 != (void *)0x75df443d79079721) &&
         (pvVar5 = pvVar11, in_x12 = pvVar12, pvVar11 == (void *)0x7e713fa43f38c582)) {
        memcpy((void *)((long)pvVar10 + (long)local_110),local_f0,unaff_x24);
        *(undefined1 *)(*param_1 + (long)unaff_x26) = 0;
        pvVar5 = (void *)0xa865ab623572e331;
        if ((local_114 & 1) == 0) {
          pvVar5 = (void *)0x75df443d79079721;
        }
      }
    }
  }
  if ((long)pvVar11 < -0xab3a208b03543bf) {
    if (-0x3dc07bfa902cf42b < (long)pvVar11) {
      if (pvVar11 == (void *)0xc23f84056fd30bd6) {
        *local_f8 = 0x80;
        pvVar8 = calloc(0x80,1);
        *param_1 = (long)pvVar8;
        pvVar5 = (void *)0x6b5051bf1aed633d;
        if (pvVar8 != (void *)0x0) {
          pvVar5 = (void *)0xf6c71d76f8b48eb9;
        }
      }
      else if (pvVar11 == (void *)0xc89737e2f8768a05) {
        local_110 = (void *)0x0;
        if (unaff_x20 != (void *)0xffffffffffffffff) {
          local_110 = unaff_x20;
        }
        sVar7 = __strlen_chk(local_f0,0x80);
        local_114 = *(char *)((long)&local_f8 + sVar7 + 7) == '\n';
        unaff_x24 = sVar7 - 1;
        if (!(bool)local_114) {
          unaff_x24 = sVar7;
        }
        unaff_x26 = (void *)(unaff_x24 + (long)local_110);
        local_108 = (long)unaff_x26 + 1;
        pvVar5 = (void *)0x49b9b00eeff4c15a;
        if (local_108 <= *local_f8) {
          pvVar5 = (void *)0x52cde6c2dea1be4;
        }
      }
      goto LAB_001b1aa8;
    }
    pvVar3 = unaff_x26;
    pvVar5 = (void *)0x5039187a35dab08d;
    if ((pvVar11 == (void *)0xa865ab623572e331) ||
       (pvVar3 = pvVar8, pvVar5 = pvVar11, pvVar11 != (void *)0xbf711ec4fafe862e))
    goto LAB_001b1aa8;
    FUN_001e38f8(lVar9,0,*local_f8);
  }
  else {
    if (0x52cde6c2dea1be3 < (long)pvVar11) {
      if (pvVar11 == (void *)0x52cde6c2dea1be4) {
        pvVar4 = (void *)*param_1;
        pvVar5 = (void *)0x7e713fa43f38c582;
      }
      else if (pvVar11 == (void *)0x1cba5f82f77e481f) {
        pvVar5 = (void *)0x3b36a7a007b21166;
        in_x12 = (void *)0xffffffffffffffff;
      }
      goto LAB_001b1aa8;
    }
    pvVar5 = pvVar1;
    if ((pvVar11 == (void *)0xf54c5df74fcabc41) ||
       (pvVar5 = pvVar11, pvVar11 != (void *)0xf6c71d76f8b48eb9)) goto LAB_001b1aa8;
  }
  pvVar3 = pvVar8;
  pvVar5 = (void *)0x1cba5f82f77e481f;
  goto LAB_001b1aa8;
}

