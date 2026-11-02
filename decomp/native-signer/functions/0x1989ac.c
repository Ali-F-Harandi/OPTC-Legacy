// rea decompile_all
// name: FUN_001989ac
// address: 0x1989ac
// body: available
// range: 0x1989ac-0x199503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001989ac(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x1a4a51f7c4c4ebe8;
  if (param_3 != 0) {
    lVar1 = -0x694a9531194ce520;
  }
  lVar3 = 0x775d0f625837ac91;
LAB_00198ad4:
  while( true ) {
    while (lVar4 = lVar3, lVar3 = lVar4, 0x6bf5c5e1526b415 < lVar4) {
      if (lVar4 < 0x4b9546d58c92c6e9) {
        if (lVar4 < 0x248fec6955109bfc) {
          if (lVar4 < 0x13985c6a9fa880de) {
            if (lVar4 == 0x6bf5c5e1526b416) {
              *param_1 = local_7c;
              lVar3 = 0x16182c629058908d;
            }
            else if (lVar4 == 0x122fe1f29cf33851) {
              lVar3 = -0x70b193c46abd19d1;
              if (local_98 != 0) {
                lVar3 = 0x20301ec44a8d1bc;
              }
            }
          }
          else if (lVar4 == 0x13985c6a9fa880de) {
            DAT_0021e3f8 = DAT_0021e3f8 ^ 0x48;
            _DAT_0021e3e0 = _DAT_0021e3e0 ^ 0x4848484848484848;
            uRam000000000021e3e8 = uRam000000000021e3e8 ^ 0x4848484848484848;
            DAT_0021e3f0 = DAT_0021e3f0 ^ 0x4848484848484848;
            DAT_0021fa1d = '\x01';
            lVar3 = 0x4b9546d58c92c6e9;
          }
          else if (lVar4 == 0x16182c629058908d) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar3 = 0x4ba0ede49ecd82d0;
            if (*param_1 != 0) {
              lVar3 = -0x5571ae25640a053e;
            }
          }
          else if (lVar4 == 0x210c1f1a0c488a0d) {
            lVar3 = -0x7236100b29acbff6;
            if (DAT_0021fa1c == '\0') {
              lVar3 = -0x3d638ffb8d91887e;
            }
          }
        }
        else if (lVar4 < 0x41bbf7fe5932a41f) {
          if (lVar4 == 0x248fec6955109bfc) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f958);
            lVar3 = 0x41bbf7fe5932a41f;
            if (iVar2 != 0) {
              lVar3 = -0x77d2c02aa92670d4;
            }
          }
          else if (lVar4 == 0x2ffa52ec9af851d0) {
            *param_1 = local_8c;
            lVar3 = -0x1e48de3b744fe34;
          }
          else if (lVar4 == 0x2d54a3eeea0141eb) {
            return;
          }
        }
        else if (lVar4 == 0x41bbf7fe5932a41f) {
          lVar3 = -0x3919d0d187810028;
          if (DAT_0021fa1d == '\0') {
            lVar3 = 0x13985c6a9fa880de;
          }
        }
        else if (lVar4 == 0x42726b331672238f) {
          lVar3 = -0x51c9bbfccb9601e1;
        }
      }
      else if (lVar4 < 0x5e698f42a71aafd9) {
        if (lVar4 < 0x4fd93eab4c0751d1) {
          if (lVar4 == 0x4b9546d58c92c6e9) {
            DAT_0021f958 = 0;
            lVar3 = -0x51c9bbfccb9601e1;
          }
          else if (lVar4 == 0x4ba0ede49ecd82d0) {
            lVar3 = 0x2d54a3eeea0141eb;
          }
        }
        else {
          lVar3 = 0x16182c629058908d;
          if ((lVar4 != 0x4fd93eab4c0751d1) && (lVar3 = lVar4, lVar4 == 0x50ea39bf8da3d17b)) {
            lVar3 = 0x16182c629058908d;
          }
        }
      }
      else if (lVar4 < 0x69b2f04412b7e2fe) {
        if (lVar4 == 0x5e698f42a71aafd9) {
          DAT_0021f954 = 0;
          local_98 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e3c8,&DAT_0021e3e0);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x122fe1f29cf33851;
          if (lVar4 != 0) {
            lVar3 = 0x74bfa6301bdfa3ca;
          }
        }
        else if (lVar4 == 0x63ff5e7d1f5c628c) {
          lVar3 = 0x69b2f04412b7e2fe;
          if (unaff_x27 != 0) {
            lVar3 = -0x1e7b1ea42f70f6ea;
          }
        }
      }
      else {
        if (lVar4 == 0x69b2f04412b7e2fe) {
          local_8c = 0x11;
          goto LAB_00199478;
        }
        if (lVar4 == 0x74bfa6301bdfa3ca) {
          local_90 = 0x11;
          goto LAB_0019937c;
        }
        if (lVar4 == 0x775d0f625837ac91) {
          lVar3 = lVar1;
        }
      }
    }
    if (lVar4 < -0x4a651bba21f8aea5) break;
    if (lVar4 < -0x1a4a51f7c4c4ebe8) {
      if (lVar4 < -0x3919d0d187810028) {
        if (lVar4 == -0x4a651bba21f8aea5) {
          local_90 = 0x1b;
LAB_0019937c:
          lVar3 = -0x795481185b927262;
        }
        else if (lVar4 == -0x3d638ffb8d91887e) {
          DAT_0021e3d0 = DAT_0021e3d0 ^ 0xb8;
          DAT_0021e3d2 = DAT_0021e3d2 ^ 0xb8;
          DAT_0021e3d1 = DAT_0021e3d1 ^ 0xb8;
          DAT_0021e3c8 = DAT_0021e3c8 ^ 0xb8b8b8b8b8b8b8b8;
          DAT_0021fa1c = '\x01';
          lVar3 = 0x5e698f42a71aafd9;
        }
      }
      else {
        lVar3 = 0x4b9546d58c92c6e9;
        if ((lVar4 != -0x3919d0d187810028) && (lVar3 = lVar4, lVar4 == -0x1e7b1ea42f70f6ea)) {
          lVar3 = 0x248fec6955109bfc;
        }
      }
    }
    else if (lVar4 < -0xdac733c494a9854) {
      if (lVar4 == -0x1a4a51f7c4c4ebe8) {
        local_8c = 3;
LAB_00199478:
        lVar3 = 0x2ffa52ec9af851d0;
      }
      else if (lVar4 == -0x1393a2d122f33149) {
        lVar3 = -0x5b4bb1f139dd7ad4;
        if (*param_4 != 0) {
          lVar3 = 0x50ea39bf8da3d17b;
        }
      }
    }
    else if (lVar4 == -0xdac733c494a9854) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar3 = -0x53b0413d0f14a5e5;
      if (unaff_x27 != 0) {
        lVar3 = 0x4fd93eab4c0751d1;
      }
      *param_1 = 0x11;
    }
    else if (lVar4 == -0x1e48de3b744fe34) {
      *param_4 = 0;
      lVar3 = 0x2d54a3eeea0141eb;
    }
    else if (lVar4 == 0x20301ec44a8d1bc) {
      lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_98);
      *param_4 = lVar3;
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = -0x1393a2d122f33149;
      if (lVar4 != 0) {
        lVar3 = -0x4a651bba21f8aea5;
      }
    }
  }
  if (lVar4 < -0x694a9531194ce520) {
    if (lVar4 < -0x7236100b29acbff6) {
      if (lVar4 != -0x795481185b927262) {
        if (lVar4 == -0x77d2c02aa92670d4) {
          lVar3 = 0x248fec6955109bfc;
        }
        goto LAB_00198ad4;
      }
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_7c = local_90;
    }
    else {
      lVar3 = 0x5e698f42a71aafd9;
      if ((lVar4 == -0x7236100b29acbff6) || (lVar3 = lVar4, lVar4 != -0x70b193c46abd19d1))
      goto LAB_00198ad4;
      local_7c = 0x11;
    }
  }
  else {
    if (-0x5571ae25640a053f < lVar4) {
      lVar3 = -0x1e48de3b744fe34;
      if (((lVar4 != -0x5571ae25640a053e) && (lVar4 != -0x53b0413d0f14a5e5)) &&
         (lVar3 = lVar4, lVar4 == -0x51c9bbfccb9601e1)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f954);
        lVar3 = 0x210c1f1a0c488a0d;
        if (iVar2 != 0) {
          lVar3 = 0x42726b331672238f;
        }
      }
      goto LAB_00198ad4;
    }
    if (lVar4 == -0x694a9531194ce520) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x63ff5e7d1f5c628c;
      if (lVar4 != 0) {
        lVar3 = -0xdac733c494a9854;
      }
      goto LAB_00198ad4;
    }
    if (lVar4 != -0x5b4bb1f139dd7ad4) goto LAB_00198ad4;
    local_7c = 0x1b;
  }
  lVar3 = 0x6bf5c5e1526b416;
  goto LAB_00198ad4;
}

