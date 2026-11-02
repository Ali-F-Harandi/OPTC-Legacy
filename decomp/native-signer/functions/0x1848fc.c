// rea decompile_all
// name: FUN_001848fc
// address: 0x1848fc
// body: available
// range: 0x1848fc-0x1854bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001848fc(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_98;
  int local_90;
  int local_8c;
  int local_7c;
  
  lVar1 = 0x2b10750ad46b654a;
  if (param_3 != 0) {
    lVar1 = 0x14afd6ec7e418da5;
  }
  lVar4 = -0xf8453a542c0d832;
LAB_001849fc:
  do {
    lVar3 = lVar4;
    lVar4 = lVar3;
    if (0x2053934bfffd78f7 < lVar3) {
      if (0x52324571d47816f0 < lVar3) {
        if (lVar3 < 0x5eb3990af1eb6230) {
          if (0x55290297b11f33a8 < lVar3) {
            if (lVar3 == 0x55290297b11f33a9) {
              local_8c = 0x11;
              goto LAB_00185480;
            }
            if (lVar3 == 0x57a4f0b367ebdc4f) {
              lVar4 = -0x2fdf6e14af7d1f57;
            }
            goto LAB_001849fc;
          }
          if (lVar3 == 0x52324571d47816f1) {
            DAT_0021df18 = DAT_0021df18 ^ 0xd8;
            DAT_0021df19 = DAT_0021df19 ^ 0xd8;
            DAT_0021df1a = DAT_0021df1a ^ 0xd8;
            DAT_0021df1b = DAT_0021df1b ^ 0xd8;
            _DAT_0021df00 = _DAT_0021df00 ^ 0xd8d8d8d8d8d8d8d8;
            uRam000000000021df08 = uRam000000000021df08 ^ 0xd8d8d8d8d8d8d8d8;
            DAT_0021df1c = DAT_0021df1c ^ 0xd8;
            DAT_0021df10 = DAT_0021df10 ^ 0xd8d8d8d8d8d8d8d8;
            DAT_0021f9f5 = '\x01';
            lVar4 = 0x4822d03e68b76669;
            goto LAB_001849fc;
          }
          if (lVar3 != 0x534d7d043b582d7e) goto LAB_001849fc;
          local_7c = 0x1b;
        }
        else {
          if (lVar3 < 0x6cd4c14d880fd3d8) {
            if (lVar3 == 0x5eb3990af1eb6230) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
              lVar4 = -0x4b2f34297c87900a;
              if (*param_1 != 0) {
                lVar4 = 0x640127afa8318c63;
              }
            }
            else if (lVar3 == 0x640127afa8318c63) {
              lVar4 = 0x37575066b882f1d0;
            }
            goto LAB_001849fc;
          }
          if (lVar3 == 0x6cd4c14d880fd3d8) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f8b0);
            lVar4 = -0x3109cf76909bfda4;
            if (iVar2 != 0) {
              lVar4 = 0x22d8bcef66424733;
            }
            goto LAB_001849fc;
          }
          if (lVar3 == 0x762884b5f74eb27d) {
            local_7c = 0x11;
          }
          else {
            if (lVar3 != 0x7d41ee1d37870109) goto LAB_001849fc;
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_7c = local_90;
          }
        }
        lVar4 = 0x3feab2b571a96d99;
        goto LAB_001849fc;
      }
      if (lVar3 < 0x35bc48ce23f250b0) {
        if (lVar3 < 0x26ff0c5da822245d) {
          if (lVar3 == 0x2053934bfffd78f8) {
            lVar4 = 0x534d7d043b582d7e;
            if (*param_4 != 0) {
              lVar4 = -0x2a3317f0a8fe9f59;
            }
          }
          else if (lVar3 == 0x22d8bcef66424733) {
            lVar4 = 0x6cd4c14d880fd3d8;
          }
        }
        else if (lVar3 == 0x26ff0c5da822245d) {
          lVar4 = 0x55290297b11f33a9;
          if (unaff_x27 != 0) {
            lVar4 = -0x574e33d6adcd557b;
          }
        }
        else if (lVar3 == 0x2b10750ad46b654a) {
          local_8c = 3;
LAB_00185480:
          lVar4 = -0x4b84c75c7462da44;
        }
      }
      else if (lVar3 < 0x3feab2b571a96d99) {
        lVar4 = 0x5eb3990af1eb6230;
        if ((lVar3 != 0x35bc48ce23f250b0) && (lVar4 = lVar3, lVar3 == 0x37575066b882f1d0)) {
          *param_4 = 0;
          lVar4 = -0x2a4a39866eb634c9;
        }
      }
      else if (lVar3 == 0x3feab2b571a96d99) {
        *param_1 = local_7c;
        lVar4 = 0x5eb3990af1eb6230;
      }
      else if (lVar3 == 0x4316227b7067ef1f) {
        lVar4 = 0x762884b5f74eb27d;
        if (local_98 != 0) {
          lVar4 = -0x3d44d286f8370b4f;
        }
      }
      else if (lVar3 == 0x4822d03e68b76669) {
        DAT_0021f8b0 = 0;
        lVar4 = -0x2fdf6e14af7d1f57;
      }
      goto LAB_001849fc;
    }
    if (lVar3 < -0x2fdf6e14af7d1f57) {
      if (lVar3 < -0x4b84c75c7462da44) {
        if (lVar3 < -0x6763db3e2ea176d8) {
          if (lVar3 != -0x7c92ae6775274418) {
            if (lVar3 == -0x7748a8a00cd5eea9) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar4 = -0x343aa9c5ff2a582b;
              if (unaff_x27 != 0) {
                lVar4 = 0x35bc48ce23f250b0;
              }
              *param_1 = 0x11;
            }
            goto LAB_001849fc;
          }
          local_90 = 0x1b;
        }
        else {
          if (lVar3 != -0x6763db3e2ea176d8) {
            if (lVar3 == -0x574e33d6adcd557b) {
              lVar4 = 0x6cd4c14d880fd3d8;
            }
            goto LAB_001849fc;
          }
          local_90 = 0x11;
        }
        lVar4 = 0x7d41ee1d37870109;
        goto LAB_001849fc;
      }
      if (lVar3 < -0x3d44d286f8370b4f) {
        if (lVar3 == -0x4b84c75c7462da44) {
          *param_1 = local_8c;
          lVar4 = 0x37575066b882f1d0;
        }
        else if (lVar3 == -0x4b2f34297c87900a) {
          lVar4 = -0x2a4a39866eb634c9;
        }
      }
      else if (lVar3 == -0x3d44d286f8370b4f) {
        lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_98);
        *param_4 = lVar4;
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x2053934bfffd78f8;
        if (lVar3 != 0) {
          lVar4 = -0x7c92ae6775274418;
        }
      }
      else {
        lVar4 = 0x37575066b882f1d0;
        if ((lVar3 != -0x343aa9c5ff2a582b) && (lVar4 = lVar3, lVar3 == -0x3109cf76909bfda4)) {
          lVar4 = -0x39aaa39454e2218;
          if (DAT_0021f9f5 == '\0') {
            lVar4 = 0x52324571d47816f1;
          }
        }
      }
      goto LAB_001849fc;
    }
    if (lVar3 < -0xf8453a542c0d832) {
      if (lVar3 < -0x1faf59df4cee9cb4) {
        if (lVar3 == -0x2fdf6e14af7d1f57) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f8ac);
          lVar4 = 0x175a33ed6739010b;
          if (iVar2 != 0) {
            lVar4 = 0x57a4f0b367ebdc4f;
          }
        }
        else {
          lVar4 = 0x5eb3990af1eb6230;
          if ((lVar3 != -0x2a3317f0a8fe9f59) && (lVar4 = lVar3, lVar3 == -0x2a4a39866eb634c9)) {
            return;
          }
        }
      }
      else {
        lVar4 = -0x19ec43b8647740b5;
        if ((lVar3 != -0x1faf59df4cee9cb4) && (lVar4 = lVar3, lVar3 == -0x19ec43b8647740b5)) {
          DAT_0021f8ac = 0;
          local_98 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021def0,&DAT_0021df00);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x4316227b7067ef1f;
          if (lVar3 != 0) {
            lVar4 = -0x6763db3e2ea176d8;
          }
        }
      }
    }
    else if (lVar3 < -0x112579f8e96ea56) {
      lVar4 = lVar1;
      if ((lVar3 != -0xf8453a542c0d832) && (lVar4 = lVar3, lVar3 == -0x39aaa39454e2218)) {
        lVar4 = 0x4822d03e68b76669;
      }
    }
    else if (lVar3 == -0x112579f8e96ea56) {
      DAT_0021def8 = DAT_0021def8 ^ 0x90;
      DAT_0021def9 = DAT_0021def9 ^ 0x90;
      DAT_0021defa = DAT_0021defa ^ 0x90;
      DAT_0021defb = DAT_0021defb ^ 0x90;
      DAT_0021defc = DAT_0021defc ^ 0x90;
      DAT_0021defd = DAT_0021defd ^ 0x90;
      DAT_0021def0 = DAT_0021def0 ^ 0x9090909090909090;
      DAT_0021f9f4 = '\x01';
      lVar4 = -0x19ec43b8647740b5;
    }
    else if (lVar3 == 0x14afd6ec7e418da5) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = 0x26ff0c5da822245d;
      if (lVar3 != 0) {
        lVar4 = -0x7748a8a00cd5eea9;
      }
    }
    else if (lVar3 == 0x175a33ed6739010b) {
      lVar4 = -0x1faf59df4cee9cb4;
      if (DAT_0021f9f4 == '\0') {
        lVar4 = -0x112579f8e96ea56;
      }
    }
  } while( true );
}

