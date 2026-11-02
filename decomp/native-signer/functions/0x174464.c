// rea decompile_all
// name: FUN_00174464
// address: 0x174464
// body: available
// range: 0x174464-0x174c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00174464(int *param_1,long *param_2,long param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  int unaff_w20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long local_78;
  int local_68;
  int local_64;
  
  lVar1 = -0x41f7f0095884c7b;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x2d2fed4469d16fde;
  }
  lVar2 = 0x6e518c29e4d03e45;
LAB_00174530:
  while (lVar4 = lVar2, lVar2 = lVar4, 0x18fdc9591ff1c47f < lVar4) {
    if (lVar4 < 0x632d2718836e34f1) {
      if (lVar4 < 0x4ee6d1fabee14214) {
        if (lVar4 == 0x18fdc9591ff1c480) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_78);
          lVar2 = 0x51c02d96c2cc98f2;
        }
        else if (lVar4 == 0x24abbbfc5d2aac7f) {
          *param_5 = 0;
          lVar2 = 0x64a4671c7146738b;
        }
        else if (lVar4 == 0x2d2fed4469d16fde) {
          local_64 = 3;
LAB_00174b40:
          lVar2 = -0x552bac5ad212f1cf;
        }
      }
      else if (lVar4 == 0x4ee6d1fabee14214) {
        unaff_x26 = 0;
        lVar2 = 0x144b21bcbeb71cd5;
      }
      else if (lVar4 == 0x51c02d96c2cc98f2) {
        lVar2 = -0x5e0244a9590fe586;
        if (*param_1 != 0) {
          lVar2 = 0x521b22f75783dd1d;
        }
      }
      else if (lVar4 == 0x521b22f75783dd1d) {
        lVar2 = 0x24abbbfc5d2aac7f;
      }
    }
    else if (lVar4 < 0x7b3d77c4935dca95) {
      if (lVar4 < 0x68a258a9cce7e66b) {
        if (lVar4 == 0x632d2718836e34f1) {
          lVar2 = 0x7b7e2b085a916946;
          if (unaff_x24 != 0) {
            lVar2 = 0x68a258a9cce7e66b;
          }
        }
        else if (lVar4 == 0x64a4671c7146738b) {
          return;
        }
      }
      else if (lVar4 == 0x68a258a9cce7e66b) {
        unaff_x25 = (**(code **)(*param_2 + 0x30))(param_2,param_4);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = 0xc1c2badab0be0de;
        if (lVar4 != 0) {
          lVar2 = -0x1583528f277a144d;
        }
      }
      else if (lVar4 == 0x6e518c29e4d03e45) {
        lVar2 = lVar1;
      }
    }
    else if (lVar4 == 0x7b3d77c4935dca95) {
      unaff_w20 = 0x11;
      lVar2 = -0x342c3064ebb3f072;
    }
    else {
      if (lVar4 == 0x7b7e2b085a916946) {
        local_64 = 0x11;
        goto LAB_00174b40;
      }
      if (lVar4 == 0x7cdba208eacd72d0) {
        cVar3 = (**(code **)(*param_2 + 0x58))(param_2,unaff_x24,unaff_x25);
        pcVar5 = *(code **)(*param_2 + 0x78);
        *param_5 = cVar3 != '\0';
        lVar4 = (*pcVar5)(param_2);
        lVar2 = -0x63395203aad93369;
        if (lVar4 != 0) {
          lVar2 = -0x6dba2dd18d641b5c;
        }
      }
    }
  }
  if (lVar4 < -0x32d8232145aea952) {
    if (-0x5e0244a9590fe587 < lVar4) {
      lVar2 = 0x64a4671c7146738b;
      if (lVar4 != -0x5e0244a9590fe586) {
        if (lVar4 == -0x552bac5ad212f1cf) {
          *param_1 = local_64;
          lVar2 = 0x24abbbfc5d2aac7f;
        }
        else {
          lVar2 = lVar4;
          if (lVar4 == -0x342c3064ebb3f072) {
            *param_1 = unaff_w20;
            lVar2 = 0x144b21bcbeb71cd5;
            unaff_x26 = unaff_x25;
          }
        }
      }
      goto LAB_00174530;
    }
    if (lVar4 != -0x6dba2dd18d641b5c) {
      if (lVar4 == -0x67a01045c33eebde) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar2 = -0x342c3064ebb3f072;
        unaff_w20 = local_68;
      }
      else if (lVar4 == -0x63395203aad93369) {
        lVar2 = 0x144b21bcbeb71cd5;
        unaff_x26 = unaff_x25;
      }
      goto LAB_00174530;
    }
    local_68 = 0x1b;
  }
  else {
    if (-0x6879c2958cba2e9 < lVar4) {
      if (lVar4 < 0xc1c2badab0be0de) {
        lVar2 = 0x51c02d96c2cc98f2;
        if ((lVar4 != -0x6879c2958cba2e8) && (lVar2 = lVar4, lVar4 == -0x41f7f0095884c7b)) {
          unaff_x24 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = 0x632d2718836e34f1;
          if (lVar4 != 0) {
            lVar2 = -0x32d8232145aea952;
          }
        }
      }
      else if (lVar4 == 0xc1c2badab0be0de) {
        lVar2 = 0x7b3d77c4935dca95;
        if (unaff_x25 != 0) {
          lVar2 = 0x7cdba208eacd72d0;
        }
      }
      else if (lVar4 == 0x144b21bcbeb71cd5) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x24);
        lVar2 = -0x6879c2958cba2e8;
        local_78 = unaff_x26;
        if (unaff_x26 != 0) {
          lVar2 = 0x18fdc9591ff1c480;
        }
      }
      goto LAB_00174530;
    }
    if (lVar4 == -0x32d8232145aea952) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar2 = -0x3142dac40f10d563;
      if (unaff_x24 != 0) {
        lVar2 = 0x4ee6d1fabee14214;
      }
      *param_1 = 0x11;
      goto LAB_00174530;
    }
    lVar2 = 0x24abbbfc5d2aac7f;
    if ((lVar4 == -0x3142dac40f10d563) || (lVar2 = lVar4, lVar4 != -0x1583528f277a144d))
    goto LAB_00174530;
    local_68 = 0x11;
  }
  lVar2 = -0x67a01045c33eebde;
  goto LAB_00174530;
}

