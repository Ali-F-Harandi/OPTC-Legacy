// rea decompile_all
// name: FUN_0019714c
// address: 0x19714c
// body: available
// range: 0x19714c-0x197d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019714c(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                 long *param_6)

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
  
  lVar1 = -0x1d0ae1ea819e14e0;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x79a404b14589cd52;
  }
  lVar3 = 0x19b5fa96858340a0;
LAB_00197254:
  while( true ) {
    while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x19d182fb2a0d48c0) {
      if (lVar4 < -0x378608ebc95f1626) {
        if (lVar4 < -0x565d3f9f390e31f8) {
          if (lVar4 < -0x7786a3a7776af0c2) {
            if (lVar4 == -0x79a404b14589cd52) {
              local_84 = 3;
              goto LAB_00197c0c;
            }
            if (lVar4 == -0x788425b0aaae11f0) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar3 = 0x7f4b48ec98e337a2;
              if (unaff_x20 != 0) {
                lVar3 = 0x51706970709dc699;
              }
              *param_1 = 0x11;
            }
          }
          else if (lVar4 == -0x7786a3a7776af0c2) {
            lVar3 = -0x378608ebc95f1626;
            if (DAT_0021fa18 == '\0') {
              lVar3 = 0x7cb3094f0e2166fd;
            }
          }
          else {
            lVar3 = 0x6f2c9e5a47f8eed2;
            if ((lVar4 != -0x60b007b0daccefd7) && (lVar3 = lVar4, lVar4 == -0x5a29a71200787f91)) {
              local_88 = 0x11;
              goto LAB_00197b4c;
            }
          }
        }
        else if (lVar4 < -0x4688cbf1b8e710fc) {
          if (lVar4 == -0x565d3f9f390e31f8) {
            lVar3 = 0x464fff414fe94363;
            if (local_90 != 0) {
              lVar3 = 0x5defe1ba657c8727;
            }
          }
          else if (lVar4 == -0x5445005e6bf580ca) {
            lVar3 = 0xe4cb1f6c0d36679;
          }
        }
        else {
          lVar3 = -0x3af9e7d617781b85;
          if (lVar4 != -0x4688cbf1b8e710fc) {
            if (lVar4 == -0x3830c116ea00b980) {
              *param_6 = 0;
              lVar3 = -0x3af9e7d617781b85;
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == -0x3af9e7d617781b85) {
                return;
              }
            }
          }
        }
      }
      else if (lVar4 < -0x170ef0d4f8bd410d) {
        if (lVar4 < -0x1d0ae1ea819e14e0) {
          lVar3 = 0x1f082a7e9ca616d8;
          if ((lVar4 != -0x378608ebc95f1626) && (lVar3 = lVar4, lVar4 == -0x26386f0274f35e91)) {
            lVar3 = 0x415fb4cacad0c805;
            if (DAT_0021fa17 == '\0') {
              lVar3 = 0x79e6215441af9758;
            }
          }
        }
        else if (lVar4 == -0x1d0ae1ea819e14e0) {
          unaff_x20 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x128c184cb2fa40cd;
          if (lVar4 != 0) {
            lVar3 = -0x788425b0aaae11f0;
          }
        }
        else if (lVar4 == -0x1908bdf94340ff80) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
          goto LAB_00197240;
        }
      }
      else if (lVar4 < 0xebd882dd37b4df1) {
        lVar3 = 0x19d182fb2a0d48c0;
        if ((lVar4 != -0x170ef0d4f8bd410d) && (lVar3 = lVar4, lVar4 == 0xe4cb1f6c0d36679)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f944);
          lVar3 = -0x7786a3a7776af0c2;
          if (iVar2 != 0) {
            lVar3 = 0x2cde258c6e3fcfe2;
          }
        }
      }
      else {
        lVar3 = -0x3830c116ea00b980;
        if (lVar4 != 0xebd882dd37b4df1) {
          if (lVar4 == 0x128c184cb2fa40cd) {
            lVar3 = 0x7153f648c25357c3;
            if (unaff_x20 != 0) {
              lVar3 = -0x5445005e6bf580ca;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x19b5fa96858340a0) {
              lVar3 = lVar1;
            }
          }
        }
      }
    }
    if (lVar4 < 0x55a7512c4f9fb3b1) break;
    if (lVar4 < 0x7153f648c25357c3) {
      if (lVar4 < 0x6a658235f2f75250) {
        if (lVar4 == 0x55a7512c4f9fb3b1) {
          lVar3 = 0x1b227b4075b5ff91;
          if (*param_6 != 0) {
            lVar3 = -0x170ef0d4f8bd410d;
          }
        }
        else if (lVar4 == 0x5defe1ba657c8727) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,param_4,param_5);
          *param_6 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x55a7512c4f9fb3b1;
          if (lVar4 != 0) {
            lVar3 = 0x7f485bc7ca918184;
          }
        }
      }
      else if (lVar4 == 0x6a658235f2f75250) {
        *param_1 = local_84;
        lVar3 = -0x3830c116ea00b980;
      }
      else if (lVar4 == 0x6f2c9e5a47f8eed2) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f940);
        lVar3 = -0x26386f0274f35e91;
        if (iVar2 != 0) {
          lVar3 = -0x60b007b0daccefd7;
        }
      }
    }
    else if (lVar4 < 0x7cb3094f0e2166fd) {
      if (lVar4 == 0x7153f648c25357c3) {
        local_84 = 0x11;
LAB_00197c0c:
        lVar3 = 0x6a658235f2f75250;
      }
      else if (lVar4 == 0x79e6215441af9758) {
        DAT_0021e328 = DAT_0021e328 ^ 0x48;
        DAT_0021e329 = DAT_0021e329 ^ 0x48;
        DAT_0021e32a = DAT_0021e32a ^ 0x48;
        DAT_0021e32c = DAT_0021e32c ^ 0x48;
        DAT_0021e32d = DAT_0021e32d ^ 0x48;
        DAT_0021e32b = DAT_0021e32b ^ 0x48;
        DAT_0021e32e = DAT_0021e32e ^ 0x48;
        DAT_0021e320 = DAT_0021e320 ^ 0x4848484848484848;
        DAT_0021fa17 = '\x01';
        lVar3 = 0x358ae00bb308ce6a;
      }
    }
    else if (lVar4 == 0x7cb3094f0e2166fd) {
      DAT_0021e360 = DAT_0021e360 ^ 0x1e;
      DAT_0021e361 = DAT_0021e361 ^ 0x1e;
      DAT_0021e362 = DAT_0021e362 ^ 0x1e;
      DAT_0021e363 = DAT_0021e363 ^ 0x1e;
      _DAT_0021e330 = _DAT_0021e330 ^ 0x1e1e1e1e1e1e1e1e;
      uRam000000000021e338 = uRam000000000021e338 ^ 0x1e1e1e1e1e1e1e1e;
      DAT_0021e364 = DAT_0021e364 ^ 0x1e;
      DAT_0021e365 = DAT_0021e365 ^ 0x1e;
      _DAT_0021e340 = _DAT_0021e340 ^ 0x1e1e1e1e1e1e1e1e;
      uRam000000000021e348 = uRam000000000021e348 ^ 0x1e1e1e1e1e1e1e1e;
      _DAT_0021e350 = _DAT_0021e350 ^ 0x1e1e1e1e1e1e1e1e;
      uRam000000000021e358 = uRam000000000021e358 ^ 0x1e1e1e1e1e1e1e1e;
      DAT_0021fa18 = '\x01';
      lVar3 = 0x1f082a7e9ca616d8;
    }
    else if (lVar4 == 0x7f485bc7ca918184) {
      local_88 = 0x22;
LAB_00197b4c:
      lVar3 = -0x1908bdf94340ff80;
    }
    else if (lVar4 == 0x7f4b48ec98e337a2) {
      lVar3 = -0x3830c116ea00b980;
    }
  }
  if (lVar4 < 0x2eb656586ae1c09c) {
    if (0x1f082a7e9ca616d7 < lVar4) {
      if (lVar4 == 0x1f082a7e9ca616d8) {
        DAT_0021f944 = 0;
        lVar3 = 0x6f2c9e5a47f8eed2;
      }
      else if (lVar4 == 0x2cde258c6e3fcfe2) {
        lVar3 = 0xe4cb1f6c0d36679;
      }
      goto LAB_00197254;
    }
    if (lVar4 == 0x19d182fb2a0d48c0) {
      (**(code **)(*param_2 + 0xb8))(param_2,unaff_x20);
      lVar3 = -0x4688cbf1b8e710fc;
      if (*param_1 != 0) {
        lVar3 = 0xebd882dd37b4df1;
      }
      goto LAB_00197254;
    }
    if (lVar4 != 0x1b227b4075b5ff91) goto LAB_00197254;
    local_74 = 0x22;
  }
  else {
    if (lVar4 < 0x415fb4cacad0c805) {
      if (lVar4 == 0x2eb656586ae1c09c) {
        *param_1 = local_74;
        lVar3 = 0x19d182fb2a0d48c0;
      }
      else if (lVar4 == 0x358ae00bb308ce6a) {
        DAT_0021f940 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x20,&DAT_0021e320,&DAT_0021e330);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x565d3f9f390e31f8;
        if (lVar4 != 0) {
          lVar3 = -0x5a29a71200787f91;
        }
      }
      goto LAB_00197254;
    }
    lVar3 = 0x358ae00bb308ce6a;
    if (lVar4 == 0x415fb4cacad0c805) goto LAB_00197254;
    if (lVar4 != 0x464fff414fe94363) {
      lVar3 = lVar4;
      if (lVar4 == 0x51706970709dc699) {
        lVar3 = 0x19d182fb2a0d48c0;
      }
      goto LAB_00197254;
    }
    local_74 = 0x11;
  }
LAB_00197240:
  lVar3 = 0x2eb656586ae1c09c;
  goto LAB_00197254;
}

