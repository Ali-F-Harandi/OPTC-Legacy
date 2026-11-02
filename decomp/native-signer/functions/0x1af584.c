// rea decompile_all
// name: FUN_001af584
// address: 0x1af584
// body: available
// range: 0x1af584-0x1afb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1afb48 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001af584(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *__ptr;
  int *piVar6;
  long lVar7;
  void *unaff_x22;
  int unaff_w23;
  int *unaff_x24;
  int *local_88;
  int *local_80;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __ptr = (int *)FUN_001aece4();
  lVar1 = 0x2ea5ec9aa4903e5;
  if (__ptr != (int *)0x0) {
    lVar1 = 0x5f1d0a7f6212d984;
  }
  lVar2 = 0xf8f9546f45fbb47;
  if (*param_1 != 0) {
    lVar2 = -0x22526e95d736601f;
  }
  piVar4 = __ptr;
  lVar5 = 0x2352f2d6b10786ab;
LAB_001af6c4:
  while (lVar7 = lVar5, piVar6 = piVar4, piVar4 = piVar6, lVar5 = lVar7, 0x41a203875b031c2 < lVar7)
  {
    if (lVar7 < 0x3c2595d6266c5998) {
      if (lVar7 < 0xf8f9546f45fbb47) {
        if (lVar7 == 0x41a203875b031c3) {
          lVar5 = -0x1d6a050721dd3e21;
          if (1 < (long)unaff_x22 + 1U) {
            lVar5 = -0x56bb61885886ae54;
          }
        }
        else if (lVar7 == 0xdc8188db88ec11b) {
          unaff_w23 = *__ptr;
          lVar5 = 0x7ededfa0c0eeb47a;
          if (unaff_w23 < 0) {
            lVar5 = -0x220211bfb882d8f5;
          }
        }
      }
      else if (lVar7 == 0xf8f9546f45fbb47) {
        unaff_x24 = calloc(1,0x30);
        lVar5 = 0x5127e420c2beb41f;
        if (unaff_x24 != (int *)0x0) {
          lVar5 = -0x38b0832f7743f2b8;
        }
      }
      else {
        lVar5 = lVar2;
        if ((lVar7 != 0x2352f2d6b10786ab) && (lVar5 = lVar7, lVar7 == 0x3132af798d39a4e3)) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_80;
        }
      }
    }
    else if (lVar7 < 0x5f1d0a7f6212d984) {
      piVar4 = unaff_x24;
      lVar5 = -0x1600a62692a3eebb;
      if ((lVar7 != 0x3c2595d6266c5998) &&
         (piVar4 = piVar6, lVar5 = lVar7, lVar7 == 0x5127e420c2beb41f)) {
        *param_1 = 2;
        lVar5 = 0x719dbab015af25c6;
      }
    }
    else if (lVar7 == 0x5f1d0a7f6212d984) {
LAB_001afa64:
      piVar4 = (int *)0x0;
      lVar5 = -0x1600a62692a3eebb;
    }
    else {
      lVar5 = lVar1;
      if ((lVar7 != 0x719dbab015af25c6) && (lVar5 = lVar7, lVar7 == 0x7ededfa0c0eeb47a)) {
        FUN_001f3aa0(unaff_w23);
        lVar5 = -0x5bdd334f52bdd63b;
      }
    }
  }
  if (lVar7 < -0x220211bfb882d8f5) {
    if (-0x38b0832f7743f2b9 < lVar7) {
      if (lVar7 == -0x38b0832f7743f2b8) {
        local_70 = *(long *)(__ptr + 2) + (ulong)(uint)__ptr[0xb];
        FUN_001adf20(param_1,__ptr,&local_70,unaff_x24);
        lVar5 = 0x3c2595d6266c5998;
        if (*param_1 != 0) {
          lVar5 = -0xf8d0ba03b2e0b85;
        }
      }
      else if (lVar7 == -0x22526e95d736601f) {
        lVar5 = 0x719dbab015af25c6;
      }
      goto LAB_001af6c4;
    }
    if (lVar7 == -0x5bdd334f52bdd63b) {
      free(__ptr);
      local_80 = local_88;
      goto LAB_001afa44;
    }
    if (lVar7 != -0x56bb61885886ae54) goto LAB_001af6c4;
    munmap(unaff_x22,*(size_t *)(__ptr + 4));
  }
  else {
    if (-0x1600a62692a3eebc < lVar7) {
      if (lVar7 == -0x1600a62692a3eebb) {
        unaff_x22 = *(void **)(__ptr + 2);
        lVar5 = 0x41a203875b031c3;
        local_88 = piVar6;
      }
      else {
        if (lVar7 == -0xf8d0ba03b2e0b85) {
          free(unaff_x24);
          goto LAB_001afa64;
        }
        if (lVar7 == 0x2ea5ec9aa4903e5) {
          local_80 = (int *)0x0;
LAB_001afa44:
          lVar5 = 0x3132af798d39a4e3;
        }
      }
      goto LAB_001af6c4;
    }
    lVar5 = -0x5bdd334f52bdd63b;
    if ((lVar7 == -0x220211bfb882d8f5) || (lVar5 = lVar7, lVar7 != -0x1d6a050721dd3e21))
    goto LAB_001af6c4;
  }
  lVar5 = 0xdc8188db88ec11b;
  goto LAB_001af6c4;
}

