// rea decompile_all
// name: FUN_00168cc4
// address: 0x168cc4
// body: available
// range: 0x168cc4-0x16a0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16a0a0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00168cc4(long *param_1,ulong param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x22;
  undefined8 uVar12;
  int *unaff_x24;
  undefined1 auStack_140 [8];
  long local_138;
  ulong local_130;
  int local_124;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  uint local_cc;
  long *local_c8;
  long *local_c0;
  void *local_b8;
  void *local_b0;
  long *local_a8;
  int local_9c;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_80;
  
  local_138 = tpidr_el0;
  local_130 = param_2;
  local_80 = *(long *)(local_138 + 0x28);
  puVar4 = (undefined8 *)auStack_140;
  lVar10 = -0x3fb6b6235958da46;
LAB_00168dac:
  lVar9 = lVar10;
  plVar3 = local_90;
  piVar2 = local_d8;
  iVar6 = local_124;
  uVar11 = param_2 & 0xffffffff;
  lVar10 = lVar9;
  puVar8 = puVar4;
  if (lVar9 < -0x1187dbde6c9561be) {
    if (lVar9 < -0x3fd7caee3ce7b99b) {
      if (lVar9 < -0x5277a8ea134cd6cb) {
        if (lVar9 < -0x64e0bb79f27da001) {
          param_2 = uVar11;
          lVar10 = -0xe4d9ed8c324e6aa;
          if (lVar9 != -0x70e369d30002b419) {
            if (lVar9 == -0x6c09da0b65d79d98) {
              (**(code **)(*param_1 + 0xb8))(param_1,local_120);
LAB_00169c5c:
              param_2 = uVar11;
              lVar10 = 0xf6a5f5be6668267;
            }
            else {
              lVar10 = lVar9;
              if (lVar9 == -0x66beec12a4ceeea7) goto LAB_00169964;
            }
          }
        }
        else if (lVar9 < -0x59686000aa83073a) {
          param_2 = uVar11;
          lVar10 = 0x59937ffe9485590d;
          if ((lVar9 != -0x64e0bb79f27da001) && (lVar10 = lVar9, lVar9 == -0x629a175659e8fa5c)) {
            local_110 = *unaff_x22;
            lVar10 = -0x33bb542dda04f50d;
            if (*unaff_x22 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x9376bd79b94cb2a;
            }
            *local_88 = 0;
          }
        }
        else {
          param_2 = uVar11;
          lVar10 = 0x59937ffe9485590d;
          if ((lVar9 != -0x59686000aa83073a) && (lVar10 = lVar9, lVar9 == -0x53e1dae669c9e1c1)) {
            local_108 = *local_88;
            lVar10 = -0x4d0039126cf021db;
            if (*local_88 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x2fd9a8542afe3df8;
            }
            *local_a8 = 0;
          }
        }
        goto LAB_00168dac;
      }
      if (lVar9 < -0x476bce67b10d90e7) {
        if (lVar9 != -0x5277a8ea134cd6cb) {
          param_2 = uVar11;
          lVar10 = 0x708a913e9dcabdc0;
          if ((lVar9 != -0x4db1fbec4d28d412) && (lVar10 = lVar9, lVar9 == -0x4d0039126cf021db)) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_108);
            lVar10 = -0x629a175659e8fa5c;
          }
          goto LAB_00168dac;
        }
        bVar5 = local_b8 == (void *)0x0;
        lVar10 = -0x2d0b4dabbe9a7a84;
        lVar9 = 0x3c926e44dba9e3cb;
      }
      else {
        if (lVar9 < -0x410c966cd3a363c9) {
          if (lVar9 == -0x476bce67b10d90e7) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_100);
LAB_0016a030:
            param_2 = uVar11;
            lVar10 = -0x53e1dae669c9e1c1;
          }
          else {
            param_2 = uVar11;
            if (lVar9 == -0x42f4e66380692424) {
              FUN_001706d8(param_1,*local_90,local_f0);
LAB_00169804:
              param_2 = uVar11;
              lVar10 = -0x3c5037d16d0e9586;
            }
          }
          goto LAB_00168dac;
        }
        param_2 = uVar11;
        lVar10 = 0x729b0d46e9250019;
        if ((lVar9 == -0x410c966cd3a363c9) || (lVar10 = lVar9, lVar9 != -0x40b6c5e8b7d60969))
        goto LAB_00168dac;
        FUN_0016df9c(unaff_x24,param_1,*local_98,local_c8,local_e8);
        bVar5 = *unaff_x24 == 0;
        lVar10 = -0x35cf0fefb0e4d7c8;
        lVar9 = 0x80290fb386e4833;
      }
    }
    else {
      if (lVar9 < -0x2d0b4dabbe9a7a84) {
        if (lVar9 < -0x3a49df13faa69d06) {
          if (lVar9 == -0x3fd7caee3ce7b99b) {
            FUN_001706d8(param_1,*local_98,local_f8);
            param_2 = uVar11;
            lVar10 = 0x729b0d46e9250019;
          }
          else {
            param_2 = uVar11;
            lVar10 = -0xe4d9ed8c324e6aa;
            if ((lVar9 != -0x3fb6b6235958da46) && (lVar10 = lVar9, lVar9 == -0x3c5037d16d0e9586)) {
              lVar9 = -0x3fd7caee3ce7b99b;
              local_f8 = *local_c8;
              bVar5 = *local_c8 == 0;
              lVar10 = -0x410c966cd3a363c9;
LAB_00169e88:
              puVar4 = puVar8;
              param_2 = uVar11;
              if (!bVar5) {
                lVar10 = lVar9;
              }
            }
          }
          goto LAB_00168dac;
        }
        if (lVar9 < -0x33bb542dda04f50d) {
          if (lVar9 == -0x3a49df13faa69d06) {
            *unaff_x22 = 0;
            local_118 = *plVar3;
            param_2 = uVar11;
            lVar10 = -0x155e9f02e449b3f3;
            if (*plVar3 == 0 || param_1 == (long *)0x0) {
              lVar10 = -0x4db1fbec4d28d412;
            }
          }
          else {
            param_2 = uVar11;
            if (lVar9 == -0x35cf0fefb0e4d7c8) {
              lVar10 = 0x33580129bb7b670a;
              if (*(ulong *)(param_3 + 0x870) < 0x7f) {
                lVar10 = 0x6962ce4f443c0e0b;
              }
            }
          }
          goto LAB_00168dac;
        }
        if (lVar9 == -0x33bb542dda04f50d) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_110);
          goto LAB_0016a004;
        }
        param_2 = uVar11;
        if (lVar9 != -0x2e567cfe3fb5d486) goto LAB_00168dac;
        goto LAB_00169964;
      }
      if (lVar9 < -0x1e6aa5d31792689b) {
        if (lVar9 < -0x21a1b6ea1d64b98b) {
          if (lVar9 == -0x2d0b4dabbe9a7a84) goto LAB_00169b24;
          param_2 = uVar11;
          if (lVar9 == -0x27d1e1b5464c86ce) {
            FUN_001854bc(unaff_x24,param_1,*local_88,local_d8);
            bVar5 = 0 < *piVar2 && *unaff_x24 == 0;
            lVar9 = 0x71e2ef52060304f6;
            lVar10 = -0x1331b3ca45fa3221;
            goto LAB_00168da4;
          }
        }
        else if (lVar9 == -0x21a1b6ea1d64b98b) {
          free(local_b0);
          param_2 = uVar11;
          lVar10 = -0x5277a8ea134cd6cb;
        }
        else {
          param_2 = uVar11;
          if (lVar9 == -0x1ec241c7c7bb6690) goto LAB_00169c5c;
        }
        goto LAB_00168dac;
      }
      if (-0x155e9f02e449b3f4 < lVar9) {
        if (lVar9 == -0x155e9f02e449b3f3) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_118);
          param_2 = uVar11;
          lVar10 = 0x708a913e9dcabdc0;
        }
        else {
          param_2 = uVar11;
          if (lVar9 == -0x1331b3ca45fa3221) {
            param_2 = 0;
            lVar10 = -0xc336930b6055fd9;
          }
        }
        goto LAB_00168dac;
      }
      if (lVar9 != -0x1e6aa5d31792689b) {
        param_2 = uVar11;
        if (lVar9 == -0x170471d1a34ec8a6) {
          DAT_0021d7b0 = DAT_0021d7b0 ^ 0x2d;
          DAT_0021d7b1 = DAT_0021d7b1 ^ 0x2d;
          DAT_0021d7b2 = DAT_0021d7b2 ^ 0x2d;
          DAT_0021d7b4 = DAT_0021d7b4 ^ 0x2d;
          DAT_0021d7b5 = DAT_0021d7b5 ^ 0x2d;
          DAT_0021d7b3 = DAT_0021d7b3 ^ 0x2d;
          DAT_0021d7b6 = DAT_0021d7b6 ^ 0x2d;
          DAT_0021d7a8 = DAT_0021d7a8 ^ 0x2d2d2d2d2d2d2d2d;
          DAT_0021f61d = '\x01';
          lVar10 = 0x43a11bec2f0e20dc;
        }
        goto LAB_00168dac;
      }
      bVar5 = local_b0 == (void *)0x0;
      lVar10 = 0x237ce70f07f6cd5a;
      lVar9 = -0x21a1b6ea1d64b98b;
    }
  }
  else {
    if (0x33580129bb7b6709 < lVar9) {
      if (lVar9 < 0x6962ce4f443c0e0b) {
        if (0x43a11bec2f0e20db < lVar9) {
          if (lVar9 < 0x59937ffe9485590d) {
            if (lVar9 == 0x43a11bec2f0e20dc) {
              unaff_x24 = (int *)((long)puVar4 + -0x10);
              DAT_0021f61c = 0;
              local_a8 = (long *)((long)puVar4 + -0x20);
              local_88 = (long *)((long)puVar4 + -0x30);
              local_d8 = (int *)((long)puVar4 + -0x40);
              unaff_x22 = (long *)((long)puVar4 + -0x50);
              local_90 = (long *)((long)puVar4 + -0x60);
              local_98 = (long *)((long)puVar4 + -0x70);
              local_c0 = (long *)((long)puVar4 + -0x80);
              local_e0 = (undefined8 *)((long)puVar4 + -0x90);
              local_c8 = (long *)((long)puVar4 + -0xa0);
              puVar8 = (undefined8 *)((long)puVar4 + -0xb0);
              *(undefined4 *)((long)puVar4 + -0x10) = 0;
              *(undefined8 *)((long)puVar4 + -0x20) = 0;
              *(undefined8 *)((long)puVar4 + -0x30) = 0;
              *(undefined4 *)((long)puVar4 + -0x40) = 0;
              *(undefined8 *)((long)puVar4 + -0x50) = 0;
              *(undefined8 *)((long)puVar4 + -0x60) = 0;
              *(undefined8 *)((long)puVar4 + -0x70) = 0;
              *(undefined8 *)((long)puVar4 + -0x80) = 0;
              *(undefined8 *)((long)puVar4 + -0x90) = 0;
              *(undefined8 *)((long)puVar4 + -0xa0) = 0;
              *(undefined8 *)((long)puVar4 + -0xb0) = 0;
              local_e8 = puVar8;
              FUN_0019237c(unaff_x24,param_1,local_130,&DAT_0021d7a8);
              bVar5 = *(int *)((long)puVar4 + -0x10) == 0;
              lVar10 = -0x1187dbde6c9561be;
              lVar9 = 0x101cfa19d2d9eb01;
              goto LAB_00169e88;
            }
            param_2 = uVar11;
            if (lVar9 == 0x57ba950453ba4ffb) goto LAB_00169964;
          }
          else {
            if (lVar9 == 0x59937ffe9485590d) {
              lVar10 = 0x6002bfcd014985ec;
              local_f0 = *local_c0;
              bVar5 = *local_c0 == 0;
              lVar9 = -0x42f4e66380692424;
              goto LAB_00168da4;
            }
            param_2 = uVar11;
            if (lVar9 == 0x6002bfcd014985ec) goto LAB_00169804;
          }
          goto LAB_00168dac;
        }
        if (lVar9 == 0x33580129bb7b670a) {
          local_9c = 0x25;
        }
        else {
          if (lVar9 != 0x3c926e44dba9e3cb) {
            param_2 = uVar11;
            if (lVar9 == 0x3ca984181b27f319) goto LAB_0016a030;
            goto LAB_00168dac;
          }
          free(local_b8);
LAB_00169b24:
          local_9c = 2;
        }
        param_2 = uVar11;
        lVar10 = -0xc0fedb4467468be;
        goto LAB_00168dac;
      }
      if (0x729b0d46e9250018 < lVar9) {
        if (lVar9 < 0x77bec284a9142ebe) {
          if (lVar9 == 0x729b0d46e9250019) {
            local_100 = *local_a8;
            param_2 = uVar11;
            lVar10 = -0x476bce67b10d90e7;
            if (*local_a8 == 0 || param_1 == (long *)0x0) {
              lVar10 = 0x3ca984181b27f319;
            }
          }
          else {
            param_2 = uVar11;
            if (lVar9 == 0x746cab7883ca6e8c) {
              lVar10 = 0x43a11bec2f0e20dc;
            }
          }
        }
        else {
          param_2 = (ulong)local_cc;
          lVar10 = -0xc336930b6055fd9;
          if ((lVar9 != 0x77bec284a9142ebe) &&
             (param_2 = uVar11, lVar10 = lVar9, lVar9 == 0x793e08136775f23f)) {
            lVar10 = 0x746cab7883ca6e8c;
            if (DAT_0021f61d == '\0') {
              lVar10 = -0x170471d1a34ec8a6;
            }
          }
        }
        goto LAB_00168dac;
      }
      if (lVar9 == 0x6962ce4f443c0e0b) {
        uVar12 = *local_e8;
        lVar10 = *local_c8;
        pvVar7 = (void *)FUN_001e53f4(*local_c0,*local_e0);
        local_b8 = (void *)FUN_001e53f4(lVar10,uVar12);
        local_b0 = pvVar7;
        param_2 = uVar11;
        lVar10 = -0x8cfa8d60f4bbf76;
        if (local_b8 == (void *)0x0 || pvVar7 == (void *)0x0) {
          lVar10 = -0x1e6aa5d31792689b;
        }
        goto LAB_00168dac;
      }
      if (lVar9 == 0x708a913e9dcabdc0) {
        local_120 = *local_98;
        lVar10 = -0x6c09da0b65d79d98;
        if (*local_98 == 0 || param_1 == (long *)0x0) {
          lVar10 = -0x1ec241c7c7bb6690;
        }
        *local_90 = 0;
        param_2 = uVar11;
        goto LAB_00168dac;
      }
      param_2 = uVar11;
      if (lVar9 != 0x71e2ef52060304f6) goto LAB_00168dac;
LAB_00169964:
      param_2 = uVar11;
      lVar10 = 0x59937ffe9485590d;
      goto LAB_00168dac;
    }
    if (0x80290fb386e4832 < lVar9) {
      if (lVar9 < 0x237ce70f07f6cd5a) {
        if (lVar9 < 0xf6a5f5be6668267) {
          param_2 = uVar11;
          lVar10 = 0x59937ffe9485590d;
          if ((lVar9 != 0x80290fb386e4833) && (lVar10 = lVar9, lVar9 == 0x9376bd79b94cb2a)) {
LAB_0016a004:
            param_2 = uVar11;
            lVar10 = -0x3a49df13faa69d06;
          }
        }
        else if (lVar9 == 0x101cfa19d2d9eb01) {
          *unaff_x24 = 0x23;
          param_2 = uVar11;
          lVar10 = 0x59937ffe9485590d;
        }
        else {
          param_2 = uVar11;
          if (lVar9 == 0xf6a5f5be6668267) {
            if (*(long *)(local_138 + 0x28) == local_80) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(*unaff_x24);
          }
        }
      }
      else if (lVar9 < 0x2fd9a8542afe3df8) {
        param_2 = uVar11;
        lVar10 = -0x5277a8ea134cd6cb;
        if ((lVar9 != 0x237ce70f07f6cd5a) && (lVar10 = lVar9, lVar9 == 0x299665843e4d9b25))
        goto LAB_00169964;
      }
      else {
        param_2 = uVar11;
        lVar10 = -0x629a175659e8fa5c;
        if ((lVar9 != 0x2fd9a8542afe3df8) && (lVar10 = lVar9, lVar9 == 0x30c33a1391f05149)) {
          FUN_0019bb80(unaff_x24,param_1,*unaff_x22,local_98);
          bVar5 = *unaff_x24 == 0;
          lVar10 = -0x40b6c5e8b7d60969;
          lVar9 = -0x64e0bb79f27da001;
          goto LAB_00168da4;
        }
      }
      goto LAB_00168dac;
    }
    if (-0xc336930b6055fda < lVar9) {
      if (lVar9 < -0x8cfa8d60f4bbf76) {
        if (lVar9 == -0xc336930b6055fd9) {
          FUN_00185fac(unaff_x24,param_1,*local_88,uVar11,unaff_x22);
          local_124 = (int)param_2;
          param_2 = uVar11;
          lVar10 = -0x1c377cc261a86ea;
          if (*unaff_x24 != 0) {
            lVar10 = -0x66beec12a4ceeea7;
          }
        }
        else {
          param_2 = uVar11;
          if (lVar9 == -0xc0fedb4467468be) {
            *unaff_x24 = local_9c;
            lVar10 = 0x59937ffe9485590d;
          }
        }
      }
      else if (lVar9 == -0x8cfa8d60f4bbf76) {
        *unaff_x24 = 0;
        iVar1 = *piVar2;
        lVar9 = param_3 + *(long *)(param_3 + 0x870) * 0x10;
        local_cc = iVar6 + 1U;
        *(long *)(param_3 + 0x870) = *(long *)(param_3 + 0x870) + 1;
        *(void **)(lVar9 + 0x70) = local_b0;
        lVar10 = 0x77bec284a9142ebe;
        if (iVar1 <= (int)(iVar6 + 1U)) {
          lVar10 = 0x299665843e4d9b25;
        }
        *(void **)(lVar9 + 0x78) = local_b8;
        param_2 = uVar11;
      }
      else {
        param_2 = uVar11;
        if (lVar9 == -0x1c377cc261a86ea) {
          FUN_0019b030(unaff_x24,param_1,*unaff_x22,local_90);
          bVar5 = *unaff_x24 == 0;
          lVar9 = 0x57ba950453ba4ffb;
          lVar10 = -0xcaa8af4c62b1429;
          goto LAB_00169e88;
        }
      }
      goto LAB_00168dac;
    }
    if (lVar9 == -0x1187dbde6c9561be) {
      FUN_0019c6f0(unaff_x24,param_1,*local_a8,0xffffffff,local_88);
      bVar5 = *unaff_x24 == 0;
      lVar10 = -0x27d1e1b5464c86ce;
      lVar9 = -0x59686000aa83073a;
    }
    else {
      if (lVar9 == -0xe4d9ed8c324e6aa) {
        iVar6 = FUN_00212730(0,1,&DAT_0021f61c);
        param_2 = uVar11;
        lVar10 = 0x793e08136775f23f;
        if (iVar6 != 0) {
          lVar10 = -0x70e369d30002b419;
        }
        goto LAB_00168dac;
      }
      param_2 = uVar11;
      if (lVar9 != -0xcaa8af4c62b1429) goto LAB_00168dac;
      FUN_0016df9c(unaff_x24,param_1,*local_90,local_c0,local_e0);
      bVar5 = *unaff_x24 == 0;
      lVar10 = 0x30c33a1391f05149;
      lVar9 = -0x2e567cfe3fb5d486;
    }
  }
LAB_00168da4:
  param_2 = uVar11;
  if (!bVar5) {
    lVar10 = lVar9;
  }
  goto LAB_00168dac;
}

