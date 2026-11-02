// rea decompile_all
// name: FUN_00178270
// address: 0x178270
// body: available
// range: 0x178270-0x178dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00178270(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0x279ec6686ef78dc7;
  if (param_3 != 0) {
    lVar1 = -0x1ae8faa2f14c4ad8;
  }
  lVar3 = -0x248efbab039ee777;
LAB_00178374:
  lVar4 = lVar3;
  lVar3 = lVar4;
  if (lVar4 < -0x1444b5cce6f35eae) {
    if (-0x44f265b911991ae9 < lVar4) {
      if (lVar4 < -0x343395c40d1ff58a) {
        if (-0x37909449582c1f12 < lVar4) {
          lVar3 = -0x5da39d4a7fa4087b;
          if ((lVar4 != -0x37909449582c1f11) && (lVar3 = lVar4, lVar4 == -0x36e4cdbc7cc71415)) {
            lVar3 = -0x32d703b40f5d730;
          }
          goto LAB_00178374;
        }
        if (lVar4 == -0x44f265b911991ae8) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f83c);
          lVar3 = -0x343395c40d1ff58a;
          if (iVar2 != 0) {
            lVar3 = 0x162b6d1217ca8b80;
          }
          goto LAB_00178374;
        }
        if (lVar4 != -0x4161a0695fc77586) goto LAB_00178374;
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
      }
      else {
        if (lVar4 < -0x22f14540dee57f60) {
          if (lVar4 == -0x343395c40d1ff58a) {
            lVar3 = -0x4998112c928737e6;
            if (DAT_0021f9d8 == '\0') {
              lVar3 = -0x22f14540dee57f60;
            }
          }
          else if (lVar4 == -0x248efbab039ee777) {
            lVar3 = lVar1;
          }
          goto LAB_00178374;
        }
        if (lVar4 == -0x22f14540dee57f60) {
          DAT_0021da80 = DAT_0021da80 ^ 0xb3;
          DAT_0021da78 = DAT_0021da78 ^ 0xb3b3b3b3b3b3b3b3;
          DAT_0021f9d8 = '\x01';
          lVar3 = 0x34635787a9c7ccb;
          goto LAB_00178374;
        }
        if (lVar4 != -0x1b60f53f68465216) {
          if (lVar4 == -0x1ae8faa2f14c4ad8) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x6f8d7fffc25548a2;
            if (lVar4 != 0) {
              lVar3 = 0x7a7015a18fa67589;
            }
          }
          goto LAB_00178374;
        }
        local_74 = 0x1b;
      }
LAB_00178360:
      lVar3 = -0x557fa50d88e2ceb5;
      goto LAB_00178374;
    }
    if (lVar4 < -0x58cd83b6dc0ef610) {
      if (lVar4 < -0x5da39d4a7fa4087b) {
        if (lVar4 == -0x70cfe65a81c05751) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar3 = -0x58cd83b6dc0ef610;
          if (*param_1 != 0) {
            lVar3 = 0x57d81d665f63feb6;
          }
        }
        else if (lVar4 == -0x6f8d7fffc25548a2) {
          lVar3 = 0x2eb1b3fa991fd0c3;
          if (unaff_x27 != 0) {
            lVar3 = 0x5a56e7690d0d7c54;
          }
        }
      }
      else if (lVar4 == -0x5da39d4a7fa4087b) {
        *param_4 = 0;
        lVar3 = 0x4e65493d8a1095e7;
      }
      else if (lVar4 == -0x58de13c83ba0cdbd) {
        lVar3 = 0x5850ed984d80a3b9;
        if (DAT_0021f9c6 == '\0') {
          lVar3 = 0x445951b18d5b174b;
        }
      }
    }
    else if (lVar4 < -0x4d4dcbd80fd19894) {
      lVar3 = 0x4e65493d8a1095e7;
      if ((lVar4 != -0x58cd83b6dc0ef610) && (lVar3 = lVar4, lVar4 == -0x557fa50d88e2ceb5)) {
        *param_1 = local_74;
        lVar3 = -0x70cfe65a81c05751;
      }
    }
    else if (lVar4 == -0x4d4dcbd80fd19894) {
      DAT_0021f7f4 = 0;
      local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021da78,&DAT_0021d8c4);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = -0x4a22762196dcf52b;
      if (lVar4 != 0) {
        lVar3 = 0x938f423e0738fad;
      }
    }
    else if (lVar4 == -0x4a22762196dcf52b) {
      lVar3 = 0xa75b20cda966d6f;
      if (local_90 != 0) {
        lVar3 = 0x481cca618a76367;
      }
    }
    else if (lVar4 == -0x4998112c928737e6) {
      lVar3 = 0x34635787a9c7ccb;
    }
    goto LAB_00178374;
  }
  if (0x2eb1b3fa991fd0c2 < lVar4) {
    if (lVar4 < 0x57d81d665f63feb6) {
      if (lVar4 < 0x445951b18d5b174b) {
        if (lVar4 == 0x2eb1b3fa991fd0c3) {
          local_84 = 0x11;
LAB_00178d34:
          lVar3 = 0x55fed587f697adc1;
        }
        else if (lVar4 == 0x43e0716434a8db96) {
          lVar3 = -0x1b60f53f68465216;
          if (*param_4 != 0) {
            lVar3 = -0x1444b5cce6f35eae;
          }
        }
      }
      else if (lVar4 == 0x445951b18d5b174b) {
        DAT_0021d8c4 = DAT_0021d8c4 ^ 0x9c;
        DAT_0021d8c5 = DAT_0021d8c5 ^ 0x9c;
        DAT_0021d8c6 = DAT_0021d8c6 ^ 0x9c;
        DAT_0021d8c7 = DAT_0021d8c7 ^ 0x9c;
        DAT_0021d8c8 = DAT_0021d8c8 ^ 0x9c;
        DAT_0021f9c6 = '\x01';
        lVar3 = -0x4d4dcbd80fd19894;
      }
      else if (lVar4 == 0x55fed587f697adc1) {
        *param_1 = local_84;
        lVar3 = -0x5da39d4a7fa4087b;
      }
      else if (lVar4 == 0x4e65493d8a1095e7) {
        return;
      }
    }
    else if (lVar4 < 0x5a56e7690d0d7c54) {
      lVar3 = -0x5da39d4a7fa4087b;
      if ((lVar4 != 0x57d81d665f63feb6) && (lVar3 = lVar4, lVar4 == 0x5850ed984d80a3b9)) {
        lVar3 = -0x4d4dcbd80fd19894;
      }
    }
    else {
      lVar3 = -0x44f265b911991ae8;
      if (((lVar4 != 0x5a56e7690d0d7c54) &&
          (lVar3 = -0x70cfe65a81c05751, lVar4 != 0x5d3a8da6cfe8ba7e)) &&
         (lVar3 = lVar4, lVar4 == 0x7a7015a18fa67589)) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x37909449582c1f11;
        if (unaff_x27 != 0) {
          lVar3 = 0x5d3a8da6cfe8ba7e;
        }
        *param_1 = 0x11;
      }
    }
    goto LAB_00178374;
  }
  if (lVar4 < 0x938f423e0738fad) {
    if (lVar4 < 0x34635787a9c7ccb) {
      lVar3 = -0x70cfe65a81c05751;
      if ((lVar4 != -0x1444b5cce6f35eae) && (lVar3 = lVar4, lVar4 == -0x32d703b40f5d730)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f7f4);
        lVar3 = -0x58de13c83ba0cdbd;
        if (iVar2 != 0) {
          lVar3 = -0x36e4cdbc7cc71415;
        }
      }
    }
    else if (lVar4 == 0x34635787a9c7ccb) {
      DAT_0021f83c = 0;
      lVar3 = -0x32d703b40f5d730;
    }
    else if (lVar4 == 0x481cca618a76367) {
      lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
      *param_4 = lVar3;
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x43e0716434a8db96;
      if (lVar4 != 0) {
        lVar3 = 0x2a013c5b8fe43319;
      }
    }
    goto LAB_00178374;
  }
  if (lVar4 < 0x162b6d1217ca8b80) {
    if (lVar4 != 0x938f423e0738fad) {
      if (lVar4 == 0xa75b20cda966d6f) {
        local_74 = 0x11;
        goto LAB_00178360;
      }
      goto LAB_00178374;
    }
    local_88 = 0x11;
  }
  else {
    lVar3 = -0x44f265b911991ae8;
    if (lVar4 == 0x162b6d1217ca8b80) goto LAB_00178374;
    if (lVar4 == 0x279ec6686ef78dc7) {
      local_84 = 3;
      goto LAB_00178d34;
    }
    lVar3 = lVar4;
    if (lVar4 != 0x2a013c5b8fe43319) goto LAB_00178374;
    local_88 = 0x1b;
  }
  lVar3 = -0x4161a0695fc77586;
  goto LAB_00178374;
}

