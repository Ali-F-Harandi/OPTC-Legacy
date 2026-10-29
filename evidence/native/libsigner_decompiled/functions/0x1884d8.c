// rea decompile_all
// name: FUN_001884d8
// address: 0x1884d8
// body: available
// range: 0x1884d8-0x188f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001884d8(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  undefined4 local_74;
  long local_70;
  undefined4 local_64;
  
  lVar1 = -0x19c270b7be5fef6e;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x1de7a89e298f6287;
  }
  lVar4 = 0xebfa26a97a03d23;
LAB_001885d8:
  while( true ) {
    while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < -0x4730497cd5cd0d4) {
      if (lVar3 < -0x2680b6c5de36d34e) {
        if (lVar3 < -0x53e8788836a8e48d) {
          if (lVar3 < -0x59949fcbcd44a83b) {
            if (lVar3 == -0x7cc7d813c9212a7a) {
              lVar4 = -0x31962dbd86a75b5c;
              if (DAT_0021f9fd == '\0') {
                lVar4 = 0x3b1e8a64c5e70069;
              }
            }
            else if (lVar3 == -0x6425070a08009ca9) {
              lVar4 = 0x34ae1e47f43a56f6;
              if (DAT_0021f9fe == '\0') {
                lVar4 = 0x1396af11cad04dea;
              }
            }
          }
          else {
            lVar4 = -0x4d6520ef1a391d8f;
            if ((lVar3 != -0x59949fcbcd44a83b) && (lVar4 = lVar3, lVar3 == -0x55f64dbfe3e12c6b)) {
              lVar4 = -0xfe627f7c322e2f3;
              if (unaff_x27 != 0) {
                lVar4 = -0xcec91e3997b2fb7;
              }
            }
          }
        }
        else if (lVar3 < -0x4d6520ef1a391d8f) {
          if (lVar3 == -0x53e8788836a8e48d) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar4 = -0x4d6520ef1a391d8f;
          }
          else if (lVar3 == -0x4e2f866ff2b37473) {
            DAT_0021f8d0 = 0;
            local_70 = (**(code **)(*param_2 + 0x108))
                                 (param_2,unaff_x27,&DAT_0021dfb8,&DAT_0021dfc0);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = -0x248717d2abbdb9c5;
            if (lVar3 != 0) {
              lVar4 = 0x715dc3274bbf44f8;
            }
          }
        }
        else {
          lVar4 = -0x4e2f866ff2b37473;
          if ((lVar3 != -0x31962dbd86a75b5c) && (lVar4 = lVar3, lVar3 == -0x4d6520ef1a391d8f)) {
            return;
          }
        }
      }
      else if (lVar3 < -0x19c270b7be5fef6e) {
        if (lVar3 < -0x248717d2abbdb9c5) {
          lVar4 = 0x6f5929ae29751780;
          if ((lVar3 != -0x2680b6c5de36d34e) && (lVar4 = lVar3, lVar3 == -0x24bd7e187ddccf98)) {
            DAT_0021f8d4 = 0;
            lVar4 = 0x2b40bcacce57df95;
          }
        }
        else if (lVar3 == -0x248717d2abbdb9c5) {
          lVar4 = 0x4dc82dc71b5741d9;
          if (local_70 != 0) {
            lVar4 = 0x48a371b1a1685dcd;
          }
        }
        else if (lVar3 == -0x20eba83f6a1e5cda) {
          lVar4 = 0x2b40bcacce57df95;
        }
      }
      else if (lVar3 < -0xfe627f7c322e2f3) {
        if (lVar3 == -0x19c270b7be5fef6e) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x55f64dbfe3e12c6b;
          if (lVar3 != 0) {
            lVar4 = 0xf09b43c25d3e36f;
          }
        }
        else if (lVar3 == -0x174f8d80f4c2fa28) {
          lVar4 = -0x53e8788836a8e48d;
        }
      }
      else {
        if (lVar3 == -0xfe627f7c322e2f3) {
          lVar4 = -0x4d6520ef1a391d8f;
          goto LAB_00188ec0;
        }
        if (lVar3 == -0xcec91e3997b2fb7) {
          lVar4 = 0x6f5929ae29751780;
        }
      }
    }
    if (0x34ae1e47f43a56f5 < lVar3) break;
    if (lVar3 < 0xf09b43c25d3e36f) {
      lVar4 = -0x53e8788836a8e48d;
      if (lVar3 != -0x4730497cd5cd0d4) {
        if (lVar3 == 0x663253d10f5cf24) {
          local_64 = 0x27;
LAB_00188ed0:
          lVar4 = 0x748695b54e546dc3;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0xebfa26a97a03d23) {
            lVar4 = lVar1;
          }
        }
      }
    }
    else if (lVar3 < 0x1de7a89e298f6287) {
      if (lVar3 == 0xf09b43c25d3e36f) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = -0x59949fcbcd44a83b;
        if (unaff_x27 != 0) {
          lVar4 = -0x174f8d80f4c2fa28;
        }
LAB_00188ec0:
        *param_1 = 0x11;
      }
      else if (lVar3 == 0x1396af11cad04dea) {
        DAT_0021dfc0 = DAT_0021dfc0 ^ 0x1e;
        DAT_0021dfc1 = DAT_0021dfc1 ^ 0x1e;
        DAT_0021dfc2 = DAT_0021dfc2 ^ 0x1e;
        DAT_0021dfc3 = DAT_0021dfc3 ^ 0x1e;
        DAT_0021dfc4 = DAT_0021dfc4 ^ 0x1e;
        DAT_0021dfc5 = DAT_0021dfc5 ^ 0x1e;
        DAT_0021f9fe = '\x01';
        lVar4 = -0x24bd7e187ddccf98;
      }
    }
    else if (lVar3 == 0x1de7a89e298f6287) {
      *param_1 = 3;
      lVar4 = -0x4d6520ef1a391d8f;
    }
    else if (lVar3 == 0x2b40bcacce57df95) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f8d0);
      lVar4 = -0x7cc7d813c9212a7a;
      if (iVar2 != 0) {
        lVar4 = -0x20eba83f6a1e5cda;
      }
    }
  }
  if (lVar3 < 0x4dc82dc71b5741d9) {
    if (lVar3 < 0x3ec8a2d0341496c4) {
      lVar4 = -0x24bd7e187ddccf98;
      if ((lVar3 != 0x34ae1e47f43a56f6) && (lVar4 = lVar3, lVar3 == 0x3b1e8a64c5e70069)) {
        DAT_0021dfb8 = DAT_0021dfb8 ^ 100;
        DAT_0021dfb9 = DAT_0021dfb9 ^ 100;
        DAT_0021dfba = DAT_0021dfba ^ 100;
        DAT_0021dfbc = DAT_0021dfbc ^ 100;
        DAT_0021dfbd = DAT_0021dfbd ^ 100;
        DAT_0021dfbe = DAT_0021dfbe ^ 100;
        DAT_0021dfbb = DAT_0021dfbb ^ 100;
        DAT_0021f9fd = '\x01';
        lVar4 = -0x4e2f866ff2b37473;
      }
    }
    else if (lVar3 == 0x3ec8a2d0341496c4) {
      *param_1 = local_74;
      lVar4 = -0x53e8788836a8e48d;
    }
    else if (lVar3 == 0x48a371b1a1685dcd) {
      (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_70,param_4);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x4730497cd5cd0d4;
      if (lVar3 != 0) {
        lVar4 = 0x663253d10f5cf24;
      }
    }
    goto LAB_001885d8;
  }
  if (lVar3 < 0x715dc3274bbf44f8) {
    if (lVar3 != 0x4dc82dc71b5741d9) {
      if (lVar3 == 0x6f5929ae29751780) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f8d4);
        lVar4 = -0x6425070a08009ca9;
        if (iVar2 != 0) {
          lVar4 = -0x2680b6c5de36d34e;
        }
      }
      goto LAB_001885d8;
    }
    local_74 = 0x11;
  }
  else {
    if (lVar3 == 0x715dc3274bbf44f8) {
      local_64 = 0x11;
      goto LAB_00188ed0;
    }
    if (lVar3 != 0x748695b54e546dc3) goto LAB_001885d8;
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_64;
  }
  lVar4 = 0x3ec8a2d0341496c4;
  goto LAB_001885d8;
}

