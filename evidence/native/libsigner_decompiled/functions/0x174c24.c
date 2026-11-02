// rea decompile_all
// name: FUN_00174c24
// address: 0x174c24
// body: available
// range: 0x174c24-0x1758cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00174c24(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x28;
  long local_78;
  long local_70;
  
  lVar3 = -0xf42ba585e897368;
LAB_00174cf8:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, lVar2 < -0xae6bb07eec7bcf3) {
      if (lVar2 < -0x3136ee56265a3c6f) {
        if (lVar2 < -0x5aa64ba1dacf22c5) {
          if (lVar2 < -0x6dbe0b3d2d7a9ff1) {
            if (lVar2 == -0x74091218846a5104) {
              lVar3 = 0x61612b56ba58e895;
LAB_00174cec:
              *param_1 = 0x11;
            }
            else if (lVar2 == -0x7035e9702086dbee) {
              lVar3 = -0x74091218846a5104;
            }
          }
          else if (lVar2 == -0x6dbe0b3d2d7a9ff1) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar3 = -0x6342739c006cfe70;
          }
          else if (lVar2 == -0x6d49a2ba3fc929dc) {
            local_70 = (**(code **)(*param_2 + 0xe0))(param_2,unaff_x28,local_78);
            lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x3136ee56265a3c6f;
            if (lVar2 != 0) {
              lVar3 = -0x6dbe0b3d2d7a9ff1;
            }
          }
          else if (lVar2 == -0x6342739c006cfe70) {
            *param_1 = 0x20;
            lVar3 = 0x61612b56ba58e895;
          }
        }
        else if (lVar2 < -0x4689100bf65fd0ad) {
          lVar3 = -0x58b7102d8e8f33c;
          if ((lVar2 != -0x5aa64ba1dacf22c5) && (lVar3 = lVar2, lVar2 == -0x567b613dcbd338db)) {
            DAT_0021d9b0 = DAT_0021d9b0 ^ 0xe9;
            DAT_0021d9b1 = DAT_0021d9b1 ^ 0xe9;
            _DAT_0021d9a0 = _DAT_0021d9a0 ^ 0xe9e9e9e9e9e9e9e9;
            uRam000000000021d9a8 = uRam000000000021d9a8 ^ 0xe9e9e9e9e9e9e9e9;
            DAT_0021f9cf = '\x01';
            lVar3 = -0xb9bd60ca14c8c3d;
          }
        }
        else {
          lVar3 = -0xb9bd60ca14c8c3d;
          if (((lVar2 != -0x4689100bf65fd0ad) &&
              (lVar3 = 0x525d1afddf019d, lVar2 != -0x41ecdb8468f6741d)) &&
             (lVar3 = lVar2, lVar2 == -0x405792201464f5f7)) {
            DAT_0021f820 = 0;
            lVar3 = 0x525d1afddf019d;
          }
        }
      }
      else if (lVar2 < -0x1ea2d9a9bfdbcb59) {
        if (lVar2 < -0x26779b83f38bb8da) {
          if (lVar2 == -0x3136ee56265a3c6f) {
            lVar3 = 0x642e33ff2599bd5c;
            if (local_70 != 0) {
              lVar3 = 0x4ecc90aa236ea5b3;
            }
          }
          else if (lVar2 == -0x2d6c703c376e87a2) {
            DAT_0021d9bc = DAT_0021d9bc ^ 0xa4;
            DAT_0021d9bd = DAT_0021d9bd ^ 0xa4;
            DAT_0021d9be = DAT_0021d9be ^ 0xa4;
            DAT_0021d9bf = DAT_0021d9bf ^ 0xa4;
            DAT_0021f9d1 = '\x01';
            lVar3 = -0x405792201464f5f7;
          }
        }
        else if (lVar2 == -0x26779b83f38bb8da) {
          lVar3 = 0x4943753bf51688fc;
          if (DAT_0021f9d0 == '\0') {
            lVar3 = -0x3c3e86bf5c07f00;
          }
        }
        else if (lVar2 == -0x21d3b6805e25ceaa) {
          lVar3 = 0x6902adc5eda669f4;
          if (DAT_0021f9d1 == '\0') {
            lVar3 = -0x2d6c703c376e87a2;
          }
        }
        else if (lVar2 == -0x21b4e69c14fe541b) {
          DAT_0021f81c = 0;
          local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021d9b4,&DAT_0021d9bc);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0xae6bb07eec7bcf3;
          if (lVar2 != 0) {
            lVar3 = -0x1ea2d9a9bfdbcb59;
          }
        }
      }
      else if (lVar2 < -0xf42ba585e897368) {
        if (lVar2 == -0x1ea2d9a9bfdbcb59) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x74091218846a5104;
        }
        else if (lVar2 == -0x18f68c823630c7e6) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f820);
          lVar3 = -0x21d3b6805e25ceaa;
          if (iVar1 != 0) {
            lVar3 = -0xc85aa91f443b941;
          }
        }
      }
      else {
        lVar3 = -0x5278110e52f4ac4;
        if (((lVar2 != -0xf42ba585e897368) &&
            (lVar3 = -0x18f68c823630c7e6, lVar2 != -0xc85aa91f443b941)) &&
           (lVar3 = lVar2, lVar2 == -0xb9bd60ca14c8c3d)) {
          DAT_0021f818 = 0;
          unaff_x28 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021d9a0);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x4b1348ce8c76ace;
          if (lVar2 != 0) {
            lVar3 = 0x39090bd7ea11745f;
          }
        }
      }
    }
    if (0x4ecc90aa236ea5b2 < lVar2) {
      if (lVar2 < 0x706b8823a049caa0) {
        if (lVar2 < 0x642e33ff2599bd5c) {
          if (lVar2 == 0x4ecc90aa236ea5b3) {
            *param_3 = local_70;
            lVar3 = 0x61612b56ba58e895;
          }
          else if (lVar2 == 0x61612b56ba58e895) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
            lVar3 = 0x472980666c6a03ea;
            if (*param_1 != 0) {
              lVar3 = -0x5aa64ba1dacf22c5;
            }
          }
        }
        else {
          lVar3 = -0x6342739c006cfe70;
          if (((lVar2 != 0x642e33ff2599bd5c) &&
              (lVar3 = -0x405792201464f5f7, lVar2 != 0x6902adc5eda669f4)) &&
             (lVar3 = lVar2, lVar2 == 0x6af93846531afc11)) {
            lVar3 = -0x5278110e52f4ac4;
          }
        }
      }
      else if (lVar2 < 0x78c4c1a5edb48036) {
        lVar3 = -0x58b7102d8e8f33c;
        if ((lVar2 != 0x706b8823a049caa0) && (lVar3 = lVar2, lVar2 == 0x747d75e5c403e07e)) {
          lVar3 = -0x58b7102d8e8f33c;
          goto LAB_00174cec;
        }
      }
      else if (lVar2 == 0x78c4c1a5edb48036) {
        lVar3 = -0x4689100bf65fd0ad;
        if (DAT_0021f9cf == '\0') {
          lVar3 = -0x567b613dcbd338db;
        }
      }
      else {
        lVar3 = -0x18f68c823630c7e6;
        if ((lVar2 != 0x7cb93cf37aea7cf9) && (lVar3 = lVar2, lVar2 == 0x7c1ab6a8596fe588)) {
          return;
        }
      }
      goto LAB_00174cf8;
    }
    if (lVar2 < 0x525d1afddf019d) {
      if (lVar2 < -0x5278110e52f4ac4) {
        if (lVar2 == -0xae6bb07eec7bcf3) {
          lVar3 = -0x7035e9702086dbee;
          if (local_78 != 0) {
            lVar3 = -0x6d49a2ba3fc929dc;
          }
        }
        else if (lVar2 == -0x58b7102d8e8f33c) {
          *param_3 = 0;
          lVar3 = 0x7c1ab6a8596fe588;
        }
      }
      else if (lVar2 == -0x5278110e52f4ac4) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f818);
        lVar3 = 0x78c4c1a5edb48036;
        if (iVar1 != 0) {
          lVar3 = 0x6af93846531afc11;
        }
      }
      else if (lVar2 == -0x4b1348ce8c76ace) {
        lVar3 = 0x747d75e5c403e07e;
        if (unaff_x28 != 0) {
          lVar3 = 0x7cb93cf37aea7cf9;
        }
      }
      else if (lVar2 == -0x3c3e86bf5c07f00) {
        DAT_0021d9b4 = DAT_0021d9b4 ^ 0x4e;
        DAT_0021d9b5 = DAT_0021d9b5 ^ 0x4e;
        DAT_0021d9b6 = DAT_0021d9b6 ^ 0x4e;
        DAT_0021d9b8 = DAT_0021d9b8 ^ 0x4e;
        DAT_0021d9b9 = DAT_0021d9b9 ^ 0x4e;
        DAT_0021d9ba = DAT_0021d9ba ^ 0x4e;
        DAT_0021d9b7 = DAT_0021d9b7 ^ 0x4e;
        DAT_0021f9d0 = '\x01';
        lVar3 = -0x21b4e69c14fe541b;
      }
    }
    else if (lVar2 < 0x39090bd7ea11745f) {
      if (lVar2 == 0x525d1afddf019d) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f81c);
        lVar3 = -0x26779b83f38bb8da;
        if (iVar1 != 0) {
          lVar3 = -0x41ecdb8468f6741d;
        }
      }
      else if (lVar2 == 0x2ba48ce703af72ba) {
        lVar3 = 0x61612b56ba58e895;
      }
    }
    else {
      if (lVar2 == 0x39090bd7ea11745f) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x706b8823a049caa0;
        if (unaff_x28 != 0) {
          lVar3 = 0x2ba48ce703af72ba;
        }
        goto LAB_00174cec;
      }
      lVar3 = 0x7c1ab6a8596fe588;
      if ((lVar2 != 0x472980666c6a03ea) && (lVar3 = lVar2, lVar2 == 0x4943753bf51688fc)) {
        lVar3 = -0x21b4e69c14fe541b;
      }
    }
  } while( true );
}

