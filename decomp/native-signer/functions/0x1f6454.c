// rea decompile_all
// name: FUN_001f6454
// address: 0x1f6454
// body: available
// range: 0x1f6454-0x1f6d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f6d1c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f6454(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x19;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *unaff_x24;
  size_t local_a8;
  int local_9c;
  void *local_98;
  undefined4 *local_90;
  size_t local_88;
  int local_70;
  uint local_6c;
  long *local_68;
  
  local_88 = 0;
  lVar2 = tpidr_el0;
  local_68 = *(long **)(lVar2 + 0x28);
  uVar1 = 0xbff1c80c3556854c;
  if (param_3 != 0) {
    uVar1 = 0x3cd27908c3b8e652;
  }
  local_6c = 0;
  plVar6 = param_2;
  plVar3 = local_68;
  uVar5 = uVar1;
  uVar9 = 0x24e5eef263e81b7c;
LAB_001f6578:
  while( true ) {
    uVar8 = uVar9;
    plVar7 = plVar3;
    plVar10 = (long *)((ulong)plVar6 & 0xffffffff);
    uVar12 = uVar5 & 0xffffffff;
    uVar9 = uVar8;
    plVar3 = plVar7;
    if (-0x17196cb747ef8c6 < (long)uVar8) break;
    if ((long)uVar8 < -0x361936ecac8b8986) {
      if ((long)uVar8 < -0x5587caf0ffc9f6c4) {
        plVar6 = plVar10;
        plVar3 = param_2;
        uVar5 = uVar12;
        uVar9 = 0x4b73c4e968047988;
        if (uVar8 != 0x91b5ec04c28f8379) {
          if (uVar8 == 0x9a5ce19cd8cc78d8) {
            local_a8 = local_88;
            *unaff_x24 = (int)local_88;
            local_98 = calloc(1,local_88);
            uVar9 = 0xf111d00f6a8edda;
            if (local_98 != (void *)0x0) {
              uVar9 = 0xa0df104a46d1908c;
            }
            *(void **)(unaff_x24 + 2) = local_98;
            plVar3 = plVar7;
          }
          else {
            plVar3 = plVar7;
            uVar9 = uVar8;
            if (uVar8 == 0xa0df104a46d1908c) {
              FUN_001f4fdc(param_1,local_98,local_a8,1,param_4);
              bVar4 = *param_1 == 0;
              uVar8 = 0xed4378afd4d50792;
              uVar9 = 0xd8fe0846a86e956a;
LAB_001f656c:
              plVar6 = plVar10;
              plVar3 = plVar7;
              uVar5 = uVar12;
              if (!bVar4) {
                uVar9 = uVar8;
              }
            }
          }
        }
      }
      else if (uVar8 == 0xaa78350f0036093c) {
        local_90 = unaff_x24 + 4;
        plVar6 = plVar10;
        uVar5 = uVar12;
        uVar9 = 0x91b5ec04c28f8379;
        if (*param_2 != 0) {
          uVar9 = 0x361985fb5d496b76;
        }
      }
      else {
        plVar6 = plVar10;
        uVar5 = uVar12;
        uVar9 = 0xd2dc4161bf6d11ab;
        if ((uVar8 != 0xbd6484722152868a) && (uVar9 = uVar8, uVar8 == 0xbff1c80c3556854c)) {
          uVar5 = 0;
          uVar9 = 0x7ffb850a0e6ed38d;
        }
      }
    }
    else if ((long)uVar8 < -0x1f81af14a263eaa3) {
      if ((long)uVar8 < -0x2d23be9e4092ee55) {
        if (uVar8 == 0xc9e6c9135374767a) {
          uVar5 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
          uVar9 = 0xbccd62a0fc32d;
          if ((uVar5 & 1) == 0) {
            uVar9 = 0xfe8e69348b81073b;
          }
          local_9c = (int)plVar6;
          plVar6 = (long *)((ulong)plVar6 & 0xffffffff);
          uVar5 = uVar12;
        }
        else {
          plVar6 = plVar10;
          uVar5 = uVar12;
          if (uVar8 == 0xce7f13e2503182ae) goto LAB_001f6a64;
        }
      }
      else if (uVar8 == 0xd8fe0846a86e956a) {
        uVar11 = local_9c + local_6c + 4;
        unaff_x19 = (ulong)uVar11;
        plVar6 = plVar10;
        uVar5 = uVar12;
        uVar9 = 0xe07e50eb5d9c155d;
        if (param_3 <= uVar11) {
          uVar9 = 0x1b4ac2f1f22e2589;
        }
      }
      else {
        plVar6 = plVar10;
        uVar5 = uVar12;
        if (uVar8 == 0xd2dc4161bf6d11ab) {
          if (*(long **)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else {
      plVar6 = (long *)(unaff_x19 & 0xffffffff);
      uVar5 = uVar12;
      uVar9 = 0xc9e6c9135374767a;
      if (((uVar8 != 0xe07e50eb5d9c155d) &&
          (plVar6 = plVar10, uVar9 = 0xaa78350f0036093c, uVar8 != 0xebb5292211db659e)) &&
         (uVar9 = uVar8, uVar8 == 0xed4378afd4d50792)) {
LAB_001f6a64:
        plVar6 = plVar10;
        uVar5 = uVar12;
        uVar9 = 0xd2dc4161bf6d11ab;
      }
    }
  }
  if ((long)uVar8 < 0x361985fb5d496b76) {
    if (0x11389729d7590b93 < (long)uVar8) {
      if (uVar8 == 0x11389729d7590b94) {
        *param_1 = 1;
        plVar6 = plVar10;
        uVar5 = uVar12;
        uVar9 = 0xaa78350f0036093c;
      }
      else {
        plVar6 = plVar10;
        uVar5 = unaff_x19 & 0xffffffff;
        uVar9 = 0x7ffb850a0e6ed38d;
        if ((uVar8 != 0x1b4ac2f1f22e2589) &&
           (uVar5 = uVar12, uVar9 = uVar8, uVar8 == 0x24e5eef263e81b7c)) {
          uVar9 = uVar1;
        }
      }
      goto LAB_001f6578;
    }
    plVar6 = plVar10;
    uVar5 = uVar12;
    uVar9 = 0xd2dc4161bf6d11ab;
    if (uVar8 == 0xfe8e69348b81073b) goto LAB_001f6578;
    if (uVar8 == 0xbccd62a0fc32d) {
      local_88 = (size_t)local_6c;
      unaff_x24 = calloc(1,0x18);
      uVar8 = 0xebb5292211db659e;
      uVar9 = 0x11389729d7590b94;
      bVar4 = unaff_x24 == (undefined4 *)0x0;
      goto LAB_001f656c;
    }
    uVar9 = uVar8;
    if (uVar8 != 0xf111d00f6a8edda) goto LAB_001f6578;
    local_70 = 1;
  }
  else {
    uVar11 = (uint)uVar5;
    if ((long)uVar8 < 0x5ad71f292518d033) {
      if (uVar8 == 0x361985fb5d496b76) {
        plVar6 = plVar10;
        plVar3 = (long *)param_2[1];
        uVar5 = uVar12;
        uVar9 = 0x4b73c4e968047988;
      }
      else if (uVar8 == 0x3cd27908c3b8e652) {
        plVar6 = (long *)0x0;
        uVar5 = uVar12;
        uVar9 = 0xc9e6c9135374767a;
      }
      else {
        plVar6 = plVar10;
        uVar5 = uVar12;
        if (uVar8 == 0x4b73c4e968047988) {
          *plVar7 = (long)unaff_x24;
          param_2[1] = (long)local_90;
          uVar9 = 0x9a5ce19cd8cc78d8;
          if (*param_1 != 0) {
            uVar9 = 0xbd6484722152868a;
          }
        }
      }
      goto LAB_001f6578;
    }
    if (uVar8 == 0x5ad71f292518d033) {
      *param_1 = local_70;
      plVar6 = plVar10;
      uVar5 = uVar12;
      uVar9 = 0xd2dc4161bf6d11ab;
      goto LAB_001f6578;
    }
    if (uVar8 != 0x6bbc6b8cc56478f1) {
      plVar6 = plVar10;
      uVar5 = uVar12;
      if (uVar8 == 0x7ffb850a0e6ed38d) {
        uVar9 = 0xce7f13e2503182ae;
        if (uVar11 != param_3) {
          uVar9 = 0x6bbc6b8cc56478f1;
        }
      }
      goto LAB_001f6578;
    }
    local_70 = 8;
  }
  plVar6 = plVar10;
  uVar5 = uVar12;
  uVar9 = 0x5ad71f292518d033;
  goto LAB_001f6578;
}

