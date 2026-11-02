// rea decompile_all
// name: FUN_001854bc
// address: 0x1854bc
// body: available
// range: 0x1854bc-0x185fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001854bc(int *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x27;
  int local_7c;
  long local_78;
  int local_70;
  int local_6c;
  
  lVar1 = -0x5c420429114e188;
  if (param_3 != 0) {
    lVar1 = 0x682354860f0246ef;
  }
  lVar2 = 0x497a453e6cb30f1e;
LAB_001855c8:
  do {
    while (lVar5 = lVar2, lVar2 = lVar5, 0x1ae2a8cbc7c20e18 < lVar5) {
      if (lVar5 < 0x36cfef7ce37de3dd) {
        if (lVar5 < 0x29fc86aa7fded232) {
          if (lVar5 < 0x255c31bcfe175512) {
            lVar2 = 0x6ad8071808b2fed3;
            if ((lVar5 != 0x1ae2a8cbc7c20e19) && (lVar2 = lVar5, lVar5 == 0x202b58ff5cabb4a2)) {
              uVar3 = (**(code **)(*param_2 + 0x188))(param_2,param_3,local_78);
              pcVar6 = *(code **)(*param_2 + 0x78);
              *param_4 = uVar3;
              lVar5 = (*pcVar6)(param_2);
              lVar2 = 0x6dc5f16e57580e42;
              if (lVar5 != 0) {
                lVar2 = -0x4f9638727ea71bc5;
              }
            }
          }
          else if (lVar5 == 0x255c31bcfe175512) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar2 = -0x34057e279c80b9af;
            if (*param_1 != 0) {
              lVar2 = -0x28d0b56c980ca8d4;
            }
          }
          else if (lVar5 == 0x262a59440fb08605) {
            DAT_0021f8b8 = 0;
            lVar2 = 0x11154bf597b6dece;
          }
        }
        else if (lVar5 < 0x2db5284845514020) {
          lVar2 = 0x255c31bcfe175512;
          if ((lVar5 != 0x29fc86aa7fded232) && (lVar2 = lVar5, lVar5 == 0x2d3fab30bff8ed93)) {
            *param_4 = 0;
            lVar2 = -0x791e9cec5fe5f95c;
          }
        }
        else if (lVar5 == 0x2db5284845514020) {
          *param_1 = local_7c;
          lVar2 = 0x255c31bcfe175512;
        }
        else if (lVar5 == 0x3296ee8db148021c) {
          local_6c = 0x11;
LAB_00185d2c:
          lVar2 = -0x6a41f5466a250461;
        }
      }
      else if (lVar5 < 0x662013c6c4946a7b) {
        if (lVar5 < 0x46982ca6d86fd3f4) {
          if (lVar5 == 0x36cfef7ce37de3dd) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_7c = local_70;
LAB_00185e60:
            lVar2 = 0x2db5284845514020;
          }
          else if (lVar5 == 0x3cf612dce28d5354) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar2 = -0x1d35ba8c8b8d4302;
            if (unaff_x27 != 0) {
              lVar2 = 0x29fc86aa7fded232;
            }
            *param_1 = 0x11;
          }
        }
        else if (lVar5 == 0x46982ca6d86fd3f4) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f8b8);
          lVar2 = 0x136ac4c662db7f8e;
          if (iVar4 != 0) {
            lVar2 = 0x662013c6c4946a7b;
          }
        }
        else if (lVar5 == 0x497a453e6cb30f1e) {
          lVar2 = lVar1;
        }
      }
      else if (lVar5 < 0x6ad8071808b2fed3) {
        lVar2 = 0x46982ca6d86fd3f4;
        if ((lVar5 != 0x662013c6c4946a7b) && (lVar2 = lVar5, lVar5 == 0x682354860f0246ef)) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar2 = -0x1f94e148600fd9ad;
          if (lVar5 != 0) {
            lVar2 = 0x3cf612dce28d5354;
          }
        }
      }
      else if (lVar5 == 0x6ad8071808b2fed3) {
        DAT_0021f8b4 = 0;
        local_78 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021df20,&DAT_0021df28);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar2 = -0x5017da1e6648d2b6;
        if (lVar5 != 0) {
          lVar2 = -0x6ef333dd6d0e189d;
        }
      }
      else {
        lVar2 = 0x255c31bcfe175512;
        if ((lVar5 != 0x6dc5f16e57580e42) && (lVar2 = lVar5, lVar5 == 0x7990b37d240fbb71)) {
          lVar2 = 0x1ae2a8cbc7c20e19;
          if (DAT_0021f9f6 == '\0') {
            lVar2 = -0x57eada46b965af4c;
          }
        }
      }
    }
    if (lVar5 < -0x23d11bc296f30bf7) {
      if (lVar5 < -0x5017da1e6648d2b6) {
        if (lVar5 < -0x6a41f5466a250461) {
          lVar2 = 0x262a59440fb08605;
          if (lVar5 != -0x7f9b2c32b7cd6bc4) {
            if (lVar5 == -0x6ef333dd6d0e189d) {
              local_70 = 0x11;
              goto LAB_001859ac;
            }
            lVar2 = lVar5;
            if (lVar5 == -0x791e9cec5fe5f95c) {
              return;
            }
          }
        }
        else if (lVar5 == -0x6a41f5466a250461) {
          *param_1 = local_6c;
          lVar2 = 0x2d3fab30bff8ed93;
        }
        else if (lVar5 == -0x57eada46b965af4c) {
          DAT_0021df20 = DAT_0021df20 ^ 0xbe;
          DAT_0021df21 = DAT_0021df21 ^ 0xbe;
          DAT_0021df22 = DAT_0021df22 ^ 0xbe;
          DAT_0021df23 = DAT_0021df23 ^ 0xbe;
          DAT_0021df24 = DAT_0021df24 ^ 0xbe;
          DAT_0021f9f6 = '\x01';
          lVar2 = 0x6ad8071808b2fed3;
        }
      }
      else if (lVar5 < -0x34057e279c80b9af) {
        if (lVar5 == -0x5017da1e6648d2b6) {
          lVar2 = 0x16c54598b5281d42;
          if (local_78 != 0) {
            lVar2 = 0x202b58ff5cabb4a2;
          }
        }
        else if (lVar5 == -0x4f9638727ea71bc5) {
          local_70 = 0x1b;
LAB_001859ac:
          lVar2 = 0x36cfef7ce37de3dd;
        }
      }
      else {
        lVar2 = -0x791e9cec5fe5f95c;
        if ((lVar5 != -0x34057e279c80b9af) && (lVar2 = lVar5, lVar5 == -0x28d0b56c980ca8d4)) {
          lVar2 = 0x2d3fab30bff8ed93;
        }
      }
      goto LAB_001855c8;
    }
    if (lVar5 < 0x8c62057a7158526) {
      if (lVar5 < -0x1d35ba8c8b8d4302) {
        if (lVar5 == -0x23d11bc296f30bf7) {
          DAT_0021df28 = DAT_0021df28 ^ 7;
          DAT_0021df29 = DAT_0021df29 ^ 7;
          DAT_0021df2a = DAT_0021df2a ^ 7;
          DAT_0021df2b = DAT_0021df2b ^ 7;
          DAT_0021f9f7 = '\x01';
          lVar2 = 0x262a59440fb08605;
        }
        else if (lVar5 == -0x1f94e148600fd9ad) {
          lVar2 = 0x3296ee8db148021c;
          if (unaff_x27 != 0) {
            lVar2 = 0x95214ada4899f6b;
          }
        }
      }
      else {
        lVar2 = 0x2d3fab30bff8ed93;
        if ((lVar5 != -0x1d35ba8c8b8d4302) && (lVar2 = lVar5, lVar5 == -0x5c420429114e188)) {
          local_6c = 3;
          goto LAB_00185d2c;
        }
      }
    }
    else if (lVar5 < 0x11154bf597b6dece) {
      lVar2 = 0x11154bf597b6dece;
      if ((lVar5 != 0x8c62057a7158526) && (lVar2 = lVar5, lVar5 == 0x95214ada4899f6b)) {
        lVar2 = 0x46982ca6d86fd3f4;
      }
    }
    else if (lVar5 == 0x11154bf597b6dece) {
      iVar4 = FUN_00212730(0,1,&DAT_0021f8b4);
      lVar2 = 0x7990b37d240fbb71;
      if (iVar4 != 0) {
        lVar2 = 0x8c62057a7158526;
      }
    }
    else if (lVar5 == 0x136ac4c662db7f8e) {
      lVar2 = -0x7f9b2c32b7cd6bc4;
      if (DAT_0021f9f7 == '\0') {
        lVar2 = -0x23d11bc296f30bf7;
      }
    }
    else if (lVar5 == 0x16c54598b5281d42) {
      local_7c = 0x11;
      goto LAB_00185e60;
    }
  } while( true );
}

