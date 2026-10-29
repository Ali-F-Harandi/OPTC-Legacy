// rea decompile_all
// name: FUN_0018eb84
// address: 0x18eb84
// body: available
// range: 0x18eb84-0x18f45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018eb84(int *param_1,long *param_2,long param_3,long param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x26;
  int local_74;
  long local_70;
  int local_68;
  int local_64;
  
  lVar1 = 0x519e6f958aa306ab;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x1dd02cdcdc50fab5;
  }
  lVar2 = -0x59f39cb721bbb66e;
LAB_0018ec9c:
  while (lVar5 = lVar2, lVar2 = lVar5, -0x1a19f2a673a7adf1 < lVar5) {
    if (lVar5 < 0x28715ec84f62fe61) {
      if (lVar5 < 0x11faa86c0d9270ce) {
        if (lVar5 == -0x1a19f2a673a7adf0) {
          DAT_0021f8f0 = 0;
          local_70 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x26,param_4,&DAT_0021e074);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = 0x75dc0a2d02d07853;
          if (lVar5 != 0) {
            lVar2 = 0x1c4ee7792617f77d;
          }
        }
        else if (lVar5 == -0x9695c9bfa406593) {
          lVar2 = -0x59007367243a666b;
          if (unaff_x26 != 0) {
            lVar2 = -0x515fda2498152fe5;
          }
        }
        else if (lVar5 == -0x1ebe24b5dde71a7) {
          local_74 = 0x11;
LAB_0018ec88:
          lVar2 = 0x28715ec84f62fe61;
        }
      }
      else if (lVar5 < 0x1b2779a63ff90a9e) {
        if (lVar5 == 0x11faa86c0d9270ce) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f8f0);
          lVar2 = 0x1b2779a63ff90a9e;
          if (iVar4 != 0) {
            lVar2 = 0x152c4648dd0209d6;
          }
        }
        else if (lVar5 == 0x152c4648dd0209d6) {
          lVar2 = 0x11faa86c0d9270ce;
        }
      }
      else if (lVar5 == 0x1b2779a63ff90a9e) {
        lVar2 = -0x40337ee37fda7022;
        if (DAT_0021f8f1 == '\0') {
          lVar2 = -0x55c131ac1e8abcf7;
        }
      }
      else if (lVar5 == 0x1c4ee7792617f77d) {
        local_68 = 0x11;
LAB_0018f168:
        lVar2 = -0x457ff8ad0b7cd09a;
      }
    }
    else if (lVar5 < 0x699690ac9466f1d5) {
      if (lVar5 < 0x592e18e318d186e5) {
        if (lVar5 == 0x28715ec84f62fe61) {
          *param_1 = local_74;
          lVar2 = -0x3103df6b5484e873;
        }
        else if (lVar5 == 0x519e6f958aa306ab) {
          unaff_x26 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = -0x9695c9bfa406593;
          if (lVar5 != 0) {
            lVar2 = 0x699690ac9466f1d5;
          }
        }
      }
      else {
        lVar2 = -0x3103df6b5484e873;
        if ((lVar5 != 0x592e18e318d186e5) && (lVar2 = lVar5, lVar5 == 0x6909be1db095571d)) {
          return;
        }
      }
    }
    else if (lVar5 < 0x75dc0a2d02d07853) {
      if (lVar5 == 0x699690ac9466f1d5) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar2 = -0x3fe37f86e044b8b3;
        if (unaff_x26 != 0) {
          lVar2 = -0x6e7c5b485ee17cc8;
        }
        *param_1 = 0x11;
      }
      else if (lVar5 == 0x70b8c9173e81aeff) {
        *param_1 = local_64;
        lVar2 = -0x54acd627d032b29e;
      }
    }
    else if (lVar5 == 0x75dc0a2d02d07853) {
      lVar2 = -0x1ebe24b5dde71a7;
      if (local_70 != 0) {
        lVar2 = 0x76c9285310b1bfee;
      }
    }
    else if (lVar5 == 0x76c9285310b1bfee) {
      uVar3 = (**(code **)(*param_2 + 800))(param_2,param_3,local_70);
      pcVar6 = *(code **)(*param_2 + 0x78);
      *param_5 = uVar3;
      lVar5 = (*pcVar6)(param_2);
      lVar2 = 0x592e18e318d186e5;
      if (lVar5 != 0) {
        lVar2 = -0x2a6d75822584bc5c;
      }
    }
  }
  if (lVar5 < -0x457ff8ad0b7cd09a) {
    if (lVar5 < -0x59007367243a666b) {
      lVar2 = -0x54acd627d032b29e;
      if (((lVar5 != -0x767e871b2012785e) &&
          (lVar2 = -0x3103df6b5484e873, lVar5 != -0x6e7c5b485ee17cc8)) &&
         (lVar2 = lVar5, lVar5 == -0x59f39cb721bbb66e)) {
        lVar2 = lVar1;
      }
      goto LAB_0018ec9c;
    }
    if (-0x54acd627d032b29f < lVar5) {
      if (lVar5 == -0x54acd627d032b29e) {
        *param_5 = 0;
        lVar2 = 0x6909be1db095571d;
      }
      else if (lVar5 == -0x515fda2498152fe5) {
        lVar2 = 0x11faa86c0d9270ce;
      }
      goto LAB_0018ec9c;
    }
    if (lVar5 != -0x59007367243a666b) {
      if (lVar5 == -0x55c131ac1e8abcf7) {
        DAT_0021e074 = DAT_0021e074 ^ 0x10;
        DAT_0021e075 = DAT_0021e075 ^ 0x10;
        DAT_0021f8f1 = '\x01';
        lVar2 = -0x1a19f2a673a7adf0;
      }
      goto LAB_0018ec9c;
    }
    local_64 = 0x11;
  }
  else {
    if (lVar5 < -0x3103df6b5484e873) {
      if (lVar5 == -0x457ff8ad0b7cd09a) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_68;
        goto LAB_0018ec88;
      }
      lVar2 = -0x1a19f2a673a7adf0;
      if ((lVar5 != -0x40337ee37fda7022) && (lVar2 = lVar5, lVar5 == -0x3fe37f86e044b8b3)) {
        lVar2 = -0x54acd627d032b29e;
      }
      goto LAB_0018ec9c;
    }
    if (lVar5 < -0x1dd02cdcdc50fab5) {
      if (lVar5 == -0x3103df6b5484e873) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
        lVar2 = -0x1a21e7b68b9ca32e;
        if (*param_1 != 0) {
          lVar2 = -0x767e871b2012785e;
        }
      }
      else if (lVar5 == -0x2a6d75822584bc5c) {
        local_68 = 0x1b;
        goto LAB_0018f168;
      }
      goto LAB_0018ec9c;
    }
    if (lVar5 != -0x1dd02cdcdc50fab5) {
      if (lVar5 == -0x1a21e7b68b9ca32e) {
        lVar2 = 0x6909be1db095571d;
      }
      goto LAB_0018ec9c;
    }
    local_64 = 3;
  }
  lVar2 = 0x70b8c9173e81aeff;
  goto LAB_0018ec9c;
}

