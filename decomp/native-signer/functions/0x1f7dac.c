// rea decompile_all
// name: FUN_001f7dac
// address: 0x1f7dac
// body: available
// range: 0x1f7dac-0x1f834f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f7dac(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  size_t unaff_x24;
  void *unaff_x25;
  
  pvVar4 = calloc(1,0x18);
  plVar1 = (long *)0xf237c2013c1c6fa2;
  if (pvVar4 != (void *)0x0) {
    plVar1 = (long *)&DAT_9e2090a1498a3988;
  }
  plVar2 = plVar1;
  plVar8 = (long *)0x5ef7b9568d6b3c0a;
LAB_001f7ebc:
  plVar7 = plVar8;
  plVar6 = plVar2;
  plVar8 = plVar7;
  plVar2 = plVar6;
  if (0x13c4fd347c136e7e < (long)plVar7) {
    if (0x3ad7c4eff58bcc66 < (long)plVar7) {
      if ((long)plVar7 < 0x616167e75f9c95a2) {
        if (plVar7 == (long *)0x548fc1c84959d43b) {
          FUN_001f4fdc(param_1,unaff_x25,unaff_x24,1,param_4);
          goto LAB_001f7ea8;
        }
        plVar8 = plVar1;
        if ((plVar7 != (long *)0x5ef7b9568d6b3c0a) &&
           (plVar8 = plVar7, plVar7 == (long *)0x3ad7c4eff58bcc67)) {
          return;
        }
      }
      else if (plVar7 == (long *)0x616167e75f9c95a2) {
        uVar5 = FUN_001f4fdc(param_1,(uint *)((long)pvVar4 + 4),4,1,param_4);
        plVar8 = (long *)0xb2ab5973a8393829;
        if ((uVar5 & 1) == 0) {
          plVar8 = (long *)0x14437797ebdb3d1c;
        }
      }
      else if (plVar7 == (long *)0x6b90417ce1ccb7ee) {
        uVar5 = FUN_001f4fdc(param_1,pvVar4,4,1,param_4);
        plVar8 = (long *)0x616167e75f9c95a2;
        if ((uVar5 & 1) == 0) {
          plVar8 = (long *)0xc2e6a1ba5783b696;
        }
      }
      goto LAB_001f7ebc;
    }
    if ((long)plVar7 < 0x225f8dd9081ebc43) {
      if (plVar7 == (long *)0x13c4fd347c136e7f) {
        plVar8 = (long *)0x3ad7c4eff58bcc67;
LAB_001f8288:
        *param_1 = 1;
        goto LAB_001f7ebc;
      }
      plVar6 = (long *)0x14437797ebdb3d1c;
    }
    else {
      if (plVar7 == (long *)0x225f8dd9081ebc43) {
        plVar8 = (long *)0x9069f9d096a544a9;
        if (*param_2 != 0) {
          plVar8 = (long *)0xc0982d9fe51200a2;
        }
        goto LAB_001f7ebc;
      }
      plVar6 = (long *)0x35d73c47b28080e6;
    }
LAB_001f7ea0:
    if (plVar7 == plVar6) {
LAB_001f7ea8:
      plVar8 = (long *)0x3ad7c4eff58bcc67;
    }
    goto LAB_001f7ebc;
  }
  if ((long)plVar7 < -0x3f67d2601aedff5e) {
    if ((long)plVar7 < -0x5efdaaaa05774414) {
      plVar2 = param_2;
      plVar8 = (long *)0xdc9ddaed2293c02d;
      if ((plVar7 != (long *)0x9069f9d096a544a9) &&
         (plVar2 = plVar6, plVar8 = plVar7, plVar7 == (long *)&DAT_9e2090a1498a3988)) {
        plVar8 = (long *)0x225f8dd9081ebc43;
      }
      goto LAB_001f7ebc;
    }
    if (plVar7 == (long *)0xa1025555fa88bbec) {
      *param_1 = 8;
      plVar8 = (long *)0x3ad7c4eff58bcc67;
      goto LAB_001f7ebc;
    }
    if (plVar7 != (long *)0xb2ab5973a8393829) goto LAB_001f7ebc;
    unaff_x24 = (size_t)*(uint *)((long)pvVar4 + 4);
    bVar3 = unaff_x24 + 8 == (ulong)param_3;
    plVar6 = (long *)0xa1025555fa88bbec;
    plVar8 = (long *)0xcb6b25853fe6fc06;
  }
  else {
    if ((long)plVar7 < -0x3494da7ac01903fa) {
      if (plVar7 != (long *)0xc0982d9fe51200a2) {
        plVar6 = (long *)0xc2e6a1ba5783b696;
        goto LAB_001f7ea0;
      }
      plVar2 = (long *)param_2[1];
      plVar8 = (long *)0xdc9ddaed2293c02d;
      goto LAB_001f7ebc;
    }
    if (plVar7 == (long *)0xcb6b25853fe6fc06) {
      unaff_x25 = calloc(1,unaff_x24);
      plVar8 = (long *)0x13c4fd347c136e7f;
      if (unaff_x25 != (void *)0x0) {
        plVar8 = (long *)0x548fc1c84959d43b;
      }
      *(void **)((long)pvVar4 + 8) = unaff_x25;
      goto LAB_001f7ebc;
    }
    if (plVar7 != (long *)0xdc9ddaed2293c02d) {
      if (plVar7 == (long *)0xf237c2013c1c6fa2) {
        plVar8 = (long *)0x225f8dd9081ebc43;
        goto LAB_001f8288;
      }
      goto LAB_001f7ebc;
    }
    *plVar6 = (long)pvVar4;
    param_2[1] = (long)pvVar4 + 0x10;
    plVar8 = (long *)0x6b90417ce1ccb7ee;
    bVar3 = *param_1 == 0;
    plVar6 = (long *)0x35d73c47b28080e6;
  }
  if (!bVar3) {
    plVar8 = plVar6;
  }
  goto LAB_001f7ebc;
}

