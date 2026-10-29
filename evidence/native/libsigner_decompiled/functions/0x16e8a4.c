// rea decompile_all
// name: FUN_0016e8a4
// address: 0x16e8a4
// body: available
// range: 0x16e8a4-0x16f5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016e8a4(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0xfb13253120e52d5;
  if (param_3 != 0) {
    lVar1 = -0x25a3e9f6f44c50c;
  }
  lVar3 = 0x3007aa9d32d99be8;
LAB_0016e9a0:
  do {
    lVar4 = lVar3;
    lVar3 = lVar4;
    if (-0x111819a4994f0fb < lVar4) {
      if (lVar4 < 0x3b16db62a3c2f4fb) {
        if (lVar4 < 0x27963d1423e000f6) {
          if (lVar4 < 0xfb13253120e52d5) {
            lVar3 = 0x3b16db62a3c2f4fb;
            if ((lVar4 != -0x111819a4994f0fa) && (lVar3 = lVar4, lVar4 == 0xc7bf249d1db72b2)) {
              lVar3 = 0x27963d1423e000f6;
              if (unaff_x20 != 0) {
                lVar3 = -0x111819a4994f0fa;
              }
            }
            goto LAB_0016e9a0;
          }
          if (lVar4 != 0xfb13253120e52d5) {
            if (lVar4 == 0x1db468c64d6a7ed0) {
              lVar3 = -0x3cc327df2eecc1c6;
              if (local_90 != 0) {
                lVar3 = 0x54c2b837d86711b8;
              }
            }
            else if (lVar4 == 0x24e5eef263e81b7c) {
              lVar3 = -0x400e37f3caa97ab4;
              if (DAT_0021f9c2 == '\0') {
                lVar3 = -0x34ce59f19df9112f;
              }
            }
            goto LAB_0016e9a0;
          }
          local_84 = 3;
        }
        else {
          if (0x31b9d74c89a90fe2 < lVar4) {
            if (lVar4 == 0x31b9d74c89a90fe3) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f7e0);
              lVar3 = -0x76ca62710947274b;
              if (iVar2 != 0) {
                lVar3 = 0x32f4713bcaf93571;
              }
            }
            else {
              lVar3 = 0x31b9d74c89a90fe3;
              if ((lVar4 != 0x32f4713bcaf93571) && (lVar3 = lVar4, lVar4 == 0x3ace195dd3930386)) {
                lVar3 = 0x3b16db62a3c2f4fb;
              }
            }
            goto LAB_0016e9a0;
          }
          if (lVar4 != 0x27963d1423e000f6) {
            if (lVar4 == 0x3007aa9d32d99be8) {
              lVar3 = lVar1;
            }
            goto LAB_0016e9a0;
          }
          local_84 = 0x11;
        }
        lVar3 = -0x50e54cd80f265318;
        goto LAB_0016e9a0;
      }
      if (lVar4 < 0x54c2b837d86711b8) {
        if (lVar4 < 0x4101bf80446bdc20) {
          if (lVar4 == 0x3b16db62a3c2f4fb) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f7e8);
            lVar3 = 0x3cd27908c3b8e652;
            if (iVar2 != 0) {
              lVar3 = 0x3ace195dd3930386;
            }
          }
          else if (lVar4 == 0x3cd27908c3b8e652) {
            lVar3 = -0x361936ecac8b8986;
            if (DAT_0021f9c3 == '\0') {
              lVar3 = -0x12e0f8e15901e122;
            }
          }
        }
        else if (lVar4 == 0x4101bf80446bdc20) {
          *param_1 = local_74;
          lVar3 = -0x59bab4f8732095e2;
        }
        else if (lVar4 == 0x483dcbc36ada42c4) {
          DAT_0021f7e4 = 0;
          local_90 = (**(code **)(*param_2 + 0x388))(param_2,unaff_x20,&DAT_0021d894,&DAT_0021d8a0);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x1db468c64d6a7ed0;
          if (lVar4 != 0) {
            lVar3 = -0x29504ee3cf2d5633;
          }
        }
        else if (lVar4 == 0x53e14c28908eeeeb) {
          lVar3 = -0x59bab4f8732095e2;
        }
      }
      else if (lVar4 < 0x5eda44100212fa2c) {
        if (lVar4 == 0x54c2b837d86711b8) {
          lVar3 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x20,local_90,param_3,0);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x55dcd19dee737a1a;
          if (lVar4 != 0) {
            lVar3 = -0x2eb8ff3123f5eabc;
          }
        }
        else {
          lVar3 = -0x359d4e10b3bbbc3c;
          if ((lVar4 != 0x54cc8c62117e2258) && (lVar3 = lVar4, lVar4 == 0x55dcd19dee737a1a)) {
            lVar3 = -0x2e5d71d46d443370;
            if (*param_4 != 0) {
              lVar3 = -0x5412c5352f1dc37a;
            }
          }
        }
      }
      else if (lVar4 == 0x5eda44100212fa2c) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f7e4);
        lVar3 = 0x24e5eef263e81b7c;
        if (iVar2 != 0) {
          lVar3 = -0x2ef756f1c7496e5f;
        }
      }
      else {
        lVar3 = 0x65536dc2a8308acd;
        if ((lVar4 != 0x62ccc994e2cb7da3) && (lVar3 = lVar4, lVar4 == 0x65536dc2a8308acd)) {
          DAT_0021f7e0 = 0;
          unaff_x20 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021d880);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0xc7bf249d1db72b2;
          if (lVar4 != 0) {
            lVar3 = -0x56ad058abb7434bf;
          }
        }
      }
      goto LAB_0016e9a0;
    }
    if (-0x359d4e10b3bbbc3d < lVar4) {
      if (-0x2e5d71d46d443371 < lVar4) {
        if (-0x12e0f8e15901e123 < lVar4) {
          if (lVar4 == -0x12e0f8e15901e122) {
            _DAT_0021d8a0 = _DAT_0021d8a0 ^ 0xbdbdbdbdbdbdbdbd;
            uRam000000000021d8a8 = uRam000000000021d8a8 ^ 0xbdbdbdbdbdbdbdbd;
            DAT_0021d8b0 = DAT_0021d8b0 ^ 0xbdbdbdbdbdbdbdbd;
            DAT_0021f9c3 = '\x01';
            lVar3 = -0x405b680ffecd4131;
          }
          else {
            lVar3 = -0x359d4e10b3bbbc3c;
            if ((lVar4 != -0x428109008685f48) && (lVar3 = lVar4, lVar4 == -0x25a3e9f6f44c50c)) {
              lVar3 = 0x31b9d74c89a90fe3;
            }
          }
          goto LAB_0016e9a0;
        }
        if (lVar4 == -0x2e5d71d46d443370) {
          local_74 = 0x1b;
        }
        else {
          if (lVar4 == -0x29504ee3cf2d5633) {
            local_88 = 0x11;
            goto LAB_0016f1d0;
          }
          if (lVar4 != -0x244c08061ede3ca6) goto LAB_0016e9a0;
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
        }
LAB_0016e98c:
        lVar3 = 0x4101bf80446bdc20;
        goto LAB_0016e9a0;
      }
      if (lVar4 < -0x316a2fad8e5725cc) {
        if (lVar4 == -0x359d4e10b3bbbc3c) {
          *param_4 = 0;
          lVar3 = -0x7dbc322ed98e3afb;
        }
        else if (lVar4 == -0x34ce59f19df9112f) {
          DAT_0021d894 = DAT_0021d894 ^ 0x67;
          DAT_0021d895 = DAT_0021d895 ^ 0x67;
          DAT_0021d896 = DAT_0021d896 ^ 0x67;
          DAT_0021d898 = DAT_0021d898 ^ 0x67;
          DAT_0021d899 = DAT_0021d899 ^ 0x67;
          DAT_0021d89a = DAT_0021d89a ^ 0x67;
          DAT_0021d897 = DAT_0021d897 ^ 0x67;
          DAT_0021f9c2 = '\x01';
          lVar3 = 0x483dcbc36ada42c4;
        }
      }
      else if (lVar4 == -0x316a2fad8e5725cc) {
        DAT_0021d890 = DAT_0021d890 ^ 0x16;
        DAT_0021d891 = DAT_0021d891 ^ 0x16;
        DAT_0021d892 = DAT_0021d892 ^ 0x16;
        DAT_0021d893 = DAT_0021d893 ^ 0x16;
        _DAT_0021d880 = _DAT_0021d880 ^ 0x1616161616161616;
        uRam000000000021d888 = uRam000000000021d888 ^ 0x1616161616161616;
        DAT_0021f9c1 = '\x01';
        lVar3 = 0x65536dc2a8308acd;
      }
      else {
        lVar3 = 0x5eda44100212fa2c;
        if ((lVar4 != -0x2ef756f1c7496e5f) && (lVar3 = lVar4, lVar4 == -0x2eb8ff3123f5eabc)) {
          local_88 = 0x1b;
LAB_0016f1d0:
          lVar3 = -0x244c08061ede3ca6;
        }
      }
      goto LAB_0016e9a0;
    }
    if (lVar4 < -0x50e54cd80f265318) {
      if (lVar4 < -0x59bab4f8732095e2) {
        if (lVar4 == -0x76ca62710947274b) {
          lVar3 = 0x62ccc994e2cb7da3;
          if (DAT_0021f9c1 == '\0') {
            lVar3 = -0x316a2fad8e5725cc;
          }
        }
        else {
          lVar3 = -0x7dbc322ed98e3afb;
          if ((lVar4 != -0x7447e788f4d32ac9) && (lVar3 = lVar4, lVar4 == -0x7dbc322ed98e3afb)) {
            return;
          }
        }
      }
      else if (lVar4 == -0x59bab4f8732095e2) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
        lVar3 = -0x7447e788f4d32ac9;
        if (*param_1 != 0) {
          lVar3 = 0x54cc8c62117e2258;
        }
      }
      else if (lVar4 == -0x56ad058abb7434bf) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0x428109008685f48;
        if (unaff_x20 != 0) {
          lVar3 = 0x53e14c28908eeeeb;
        }
        *param_1 = 0x11;
      }
      else if (lVar4 == -0x5412c5352f1dc37a) {
        lVar3 = -0x59bab4f8732095e2;
      }
    }
    else if (lVar4 < -0x400e37f3caa97ab4) {
      if (lVar4 == -0x50e54cd80f265318) {
        *param_1 = local_84;
        lVar3 = -0x359d4e10b3bbbc3c;
      }
      else if (lVar4 == -0x405b680ffecd4131) {
        DAT_0021f7e8 = 0;
        lVar3 = 0x5eda44100212fa2c;
      }
    }
    else {
      lVar3 = 0x483dcbc36ada42c4;
      if (lVar4 != -0x400e37f3caa97ab4) {
        if (lVar4 == -0x3cc327df2eecc1c6) {
          local_74 = 0x11;
          goto LAB_0016e98c;
        }
        lVar3 = lVar4;
        if (lVar4 == -0x361936ecac8b8986) {
          lVar3 = -0x405b680ffecd4131;
        }
      }
    }
  } while( true );
}

