// rea decompile_all
// name: FUN_001f56b0
// address: 0x1f56b0
// body: available
// range: 0x1f56b0-0x1f5c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f56b0(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *unaff_x19;
  size_t unaff_x24;
  void *unaff_x25;
  
  pvVar2 = calloc(1,0x18);
  puVar1 = (undefined1 *)0x7e713fa43f38c582;
  if (pvVar2 != (void *)0x0) {
    puVar1 = (undefined1 *)0x58b842c6f86d5804;
  }
  puVar5 = (undefined1 *)0x5ece82223eee3411;
LAB_001f57ac:
  do {
    while (puVar4 = puVar5, puVar5 = puVar4, 0x36f07785a64d7583 < (long)puVar4) {
      if ((long)puVar4 < 0x5ece82223eee3411) {
        if ((long)puVar4 < 0x5039187a35dab08d) {
          if (puVar4 == (undefined1 *)0x36f07785a64d7584) {
            *param_1 = 8;
            puVar5 = (undefined1 *)0xc0f51250277e5cfd;
          }
          else if (puVar4 == (undefined1 *)0x418b7d3c908df894) {
            uVar3 = FUN_001f4fdc(param_1,(uint *)((long)pvVar2 + 4),4,1,param_4);
            puVar5 = (undefined1 *)0x960858df0b0de441;
            if ((uVar3 & 1) == 0) {
              puVar5 = (undefined1 *)0x8e3a3d610d847caf;
            }
          }
        }
        else if (puVar4 == (undefined1 *)0x5039187a35dab08d) {
          puVar5 = (undefined1 *)0xedbefc38c6cf9bfe;
          unaff_x19 = (long *)param_2[1];
        }
        else if (puVar4 == (undefined1 *)0x58b842c6f86d5804) {
          puVar5 = (undefined1 *)0x75df443d79079721;
        }
      }
      else if ((long)puVar4 < 0x77f0428eaa711148) {
        puVar5 = puVar1;
        if ((puVar4 != (undefined1 *)0x5ece82223eee3411) &&
           (puVar5 = puVar4, puVar4 == (undefined1 *)0x75df443d79079721)) {
          puVar5 = (undefined1 *)0xa865ab623572e331;
          if (*param_2 != 0) {
            puVar5 = (undefined1 *)0x5039187a35dab08d;
          }
        }
      }
      else {
        puVar5 = (undefined1 *)0xc0f51250277e5cfd;
        if (puVar4 != (undefined1 *)0x77f0428eaa711148) {
          if (puVar4 == (undefined1 *)0x7d8bf94548220fb8) {
            uVar3 = FUN_001f4fdc(param_1,pvVar2,4,1,param_4);
            puVar5 = (undefined1 *)0x418b7d3c908df894;
            if ((uVar3 & 1) == 0) {
              puVar5 = (undefined1 *)0xba8fbc7d3623138d;
            }
          }
          else {
            puVar5 = puVar4;
            if (puVar4 == (undefined1 *)0x7e713fa43f38c582) {
              puVar5 = (undefined1 *)0x75df443d79079721;
LAB_001f58a8:
              *param_1 = 1;
            }
          }
        }
      }
    }
    if (-0x45704382c9dcec74 < (long)puVar4) {
      if ((long)puVar4 < -0x378643ce451a44ec) {
        puVar5 = (undefined1 *)0xc0f51250277e5cfd;
        if (puVar4 != (undefined1 *)0xba8fbc7d3623138d) {
          if (puVar4 == &DAT_c45038db124ae016) {
            puVar5 = (undefined1 *)0xc0f51250277e5cfd;
            goto LAB_001f58a8;
          }
          puVar5 = puVar4;
          if (puVar4 == (undefined1 *)0xc0f51250277e5cfd) {
            return;
          }
        }
      }
      else if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
        unaff_x25 = calloc(1,unaff_x24);
        puVar5 = &DAT_c45038db124ae016;
        if (unaff_x25 != (void *)0x0) {
          puVar5 = (undefined1 *)0x8500be9b057d300e;
        }
        *(void **)((long)pvVar2 + 8) = unaff_x25;
      }
      else if (puVar4 == (undefined1 *)0xedbefc38c6cf9bfe) {
        *unaff_x19 = (long)pvVar2;
        param_2[1] = (long)pvVar2 + 0x10;
        puVar5 = (undefined1 *)0x7d8bf94548220fb8;
        if (*param_1 != 0) {
          puVar5 = (undefined1 *)0x77f0428eaa711148;
        }
      }
      goto LAB_001f57ac;
    }
    if ((long)puVar4 < -0x69f7a720f4f21bbf) {
      if (puVar4 == (undefined1 *)0x8500be9b057d300e) {
        FUN_001f4fdc(param_1,unaff_x25,unaff_x24,1,param_4);
        puVar5 = (undefined1 *)0xc0f51250277e5cfd;
      }
      else if (puVar4 == (undefined1 *)0x8e3a3d610d847caf) {
        puVar5 = (undefined1 *)0xc0f51250277e5cfd;
      }
    }
    else if (puVar4 == (undefined1 *)0x960858df0b0de441) {
      unaff_x24 = (size_t)*(uint *)((long)pvVar2 + 4);
      puVar5 = (undefined1 *)0xc879bc31bae5bb14;
      if (unaff_x24 + 8 != (ulong)param_3) {
        puVar5 = (undefined1 *)0x36f07785a64d7584;
      }
    }
    else if (puVar4 == (undefined1 *)0xa865ab623572e331) {
      puVar5 = (undefined1 *)0xedbefc38c6cf9bfe;
      unaff_x19 = param_2;
    }
  } while( true );
}

