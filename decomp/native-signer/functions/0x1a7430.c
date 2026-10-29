// rea decompile_all
// name: FUN_001a7430
// address: 0x1a7430
// body: available
// range: 0x1a7430-0x1a7b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a7b0c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001a7430(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  uint unaff_w28;
  long local_e0 [4];
  undefined1 auStack_c0 [8];
  long local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  
  local_98 = param_5;
  uStack_90 = param_6;
  local_a8 = param_3;
  local_a0 = param_4;
  local_b8 = tpidr_el0;
  local_78 = *(long *)(local_b8 + 0x28);
  plVar2 = (long *)auStack_c0;
  lVar1 = -0x359d4e10b3bbbc3c;
LAB_001a751c:
  lVar4 = lVar1;
  lVar1 = lVar4;
  if (lVar4 < -0x144ad6ddee249a62) {
    if (lVar4 < -0x429b7b8ddead7976) {
      if (lVar4 < -0x65a31e6327338728) {
        if (lVar4 == -0x7dbc322ed98e3afb) {
          iVar3 = FUN_00212730(0,1,&DAT_0021fa38);
          lVar1 = -0x12bc87502b2af86e;
          if (iVar3 != 0) {
            lVar1 = -0x76ca62710947274b;
          }
        }
        else {
          lVar1 = -0x7dbc322ed98e3afb;
          if ((lVar4 != -0x76ca62710947274b) && (lVar1 = lVar4, lVar4 == -0x6e4a13fb3d707c87)) {
            local_ac = unaff_w28;
            local_80 = *unaff_x20;
            lVar1 = 0x4b73c4e968047988;
            if (*unaff_x20 == 0 || param_1 == (long *)0x0) {
              lVar1 = 0x361985fb5d496b76;
            }
          }
        }
      }
      else {
        lVar1 = -0x5f20efb5b92e6f74;
        if (lVar4 != -0x65a31e6327338728) {
          if (lVar4 == -0x5587caf0ffc9f6c4) {
            FUN_0017014c(param_2,param_1,*unaff_x20,local_98,uStack_90);
            unaff_w28 = (uint)(*param_2 == 0);
            lVar1 = -0x6e4a13fb3d707c87;
          }
          else {
            lVar1 = lVar4;
            if (lVar4 == -0x5f20efb5b92e6f74) {
              if (*(long *)(local_b8 + 0x28) == local_78) {
                return local_ac & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
      goto LAB_001a751c;
    }
    if (-0x361936ecac8b8987 < lVar4) {
      if (lVar4 == -0x361936ecac8b8986) goto LAB_001a7508;
      lVar1 = -0x7dbc322ed98e3afb;
      if ((lVar4 != -0x359d4e10b3bbbc3c) && (lVar1 = lVar4, lVar4 == -0x2701f7b957916a96)) {
        lVar1 = 0x24e5eef263e81b7c;
      }
      goto LAB_001a751c;
    }
    if (lVar4 == -0x429b7b8ddead7976) {
      lVar4 = *unaff_x19;
      *unaff_x20 = 0;
      local_88 = lVar4;
      lVar1 = 0xf111d00f6a8edda;
      if (lVar4 == 0 || param_1 == (long *)0x0) {
        lVar1 = -0x65a31e6327338728;
      }
      goto LAB_001a751c;
    }
    if (lVar4 != -0x400e37f3caa97ab4) goto LAB_001a751c;
  }
  else if (lVar4 < 0x11389729d7590b94) {
    if (lVar4 < -0x17196cb747ef8c5) {
      if (lVar4 == -0x144ad6ddee249a62) {
        FUN_00188f08(param_2,param_1,*unaff_x19,unaff_x20);
        lVar1 = -0x5587caf0ffc9f6c4;
        if (*param_2 != 0) {
          lVar1 = 0x11389729d7590b94;
        }
      }
      else if (lVar4 == -0x12bc87502b2af86e) {
        lVar1 = -0x2701f7b957916a96;
        if (DAT_0021fa39 == '\0') {
          lVar1 = 0x62ccc994e2cb7da3;
        }
      }
      goto LAB_001a751c;
    }
    if (lVar4 == -0x17196cb747ef8c5) {
      FUN_001884d8(param_2,param_1,*unaff_x19,local_a8);
      lVar1 = -0x144ad6ddee249a62;
      if (*param_2 != 0) {
        lVar1 = 0xbccd62a0fc32d;
      }
      goto LAB_001a751c;
    }
    if (lVar4 != 0xbccd62a0fc32d) {
      if (lVar4 == 0xf111d00f6a8edda) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_88);
        lVar1 = -0x5f20efb5b92e6f74;
      }
      goto LAB_001a751c;
    }
  }
  else {
    if (0x3cd27908c3b8e651 < lVar4) {
      if (lVar4 == 0x3cd27908c3b8e652) {
        FUN_00187a98(param_2,param_1,*unaff_x19,local_a0);
        lVar1 = -0x17196cb747ef8c5;
        if (*param_2 != 0) {
          lVar1 = -0x361936ecac8b8986;
        }
      }
      else if (lVar4 == 0x4b73c4e968047988) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_80);
        lVar1 = -0x429b7b8ddead7976;
      }
      else if (lVar4 == 0x62ccc994e2cb7da3) {
        DAT_0021e6c0 = DAT_0021e6c0 ^ 0xd5;
        DAT_0021e6c2 = DAT_0021e6c2 ^ 0xd5;
        DAT_0021e6c1 = DAT_0021e6c1 ^ 0xd5;
        DAT_0021e6b8 = DAT_0021e6b8 ^ 0xd5d5d5d5d5d5d5d5;
        DAT_0021fa39 = '\x01';
        lVar1 = 0x24e5eef263e81b7c;
      }
      goto LAB_001a751c;
    }
    if (lVar4 != 0x11389729d7590b94) {
      if (lVar4 == 0x24e5eef263e81b7c) {
        DAT_0021fa38 = 0;
        unaff_x19 = plVar2 + -2;
        unaff_x20 = plVar2 + -4;
        plVar2[-2] = 0;
        plVar2[-4] = 0;
        FUN_00186b3c(param_2,param_1,&DAT_0021e6b8,unaff_x19);
        plVar2 = unaff_x20;
        lVar1 = 0x3cd27908c3b8e652;
        if (*param_2 != 0) {
          lVar1 = -0x400e37f3caa97ab4;
        }
      }
      else if (lVar4 == 0x361985fb5d496b76) {
        lVar1 = -0x429b7b8ddead7976;
      }
      goto LAB_001a751c;
    }
  }
LAB_001a7508:
  unaff_w28 = 0;
  lVar1 = -0x6e4a13fb3d707c87;
  goto LAB_001a751c;
}

