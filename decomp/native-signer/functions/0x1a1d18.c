// rea decompile_all
// name: FUN_001a1d18
// address: 0x1a1d18
// body: available
// range: 0x1a1d18-0x1a5733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a5730 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1d18(int *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long *local_180;
  long *local_178;
  ulong local_170;
  ulong local_168;
  long *local_160;
  long local_158;
  long *local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long local_100;
  int local_f4;
  long *local_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  uint *local_a8;
  ulong local_a0;
  
  plVar4 = (long *)auStack_1b0;
  local_1a8 = tpidr_el0;
  local_170 = *(ulong *)(local_1a8 + 0x28);
  plVar9 = param_2;
  plVar2 = param_3;
  lVar14 = -0x6b9f6fd3a339574b;
  local_1a0 = param_4;
  local_168 = local_170;
  local_a0 = local_170;
LAB_001a1e1c:
  lVar11 = lVar14;
  plVar10 = plVar2;
  plVar15 = plVar9;
  lVar14 = lVar11;
  plVar9 = plVar15;
  plVar2 = plVar10;
  if (lVar11 < 0x672306c2a61ad77) {
    if (lVar11 < -0x3b1723e2b172358f) {
      if (lVar11 < -0x5ae1993f076da121) {
        if (lVar11 < -0x6b9f6fd3a339574b) {
          if (lVar11 < -0x737ab62ff741cbf9) {
            if (lVar11 < -0x7b75420f1461aa52) {
              if (lVar11 == -0x7f658c1ab0faadab) {
                lVar14 = 0x572c9a083a3a0cd1;
                if (DAT_0021fa32 == '\0') {
                  lVar14 = 0x1801af2757a1199d;
                }
              }
              else if (lVar11 == -0x7c8acbaabf625b1b) {
                lVar14 = 0x7638217da725cd8e;
              }
            }
            else if (lVar11 == -0x7b75420f1461aa52) {
              *local_d8 = 0;
              lVar14 = 0x4b8094a092a0bcb5;
            }
            else if (lVar11 == -0x78a9e640609697b9) {
              lVar14 = -0x2e35e6d9564f2dfa;
            }
            goto LAB_001a1e1c;
          }
          if (lVar11 < -0x721bdd5ad5cac8d5) {
            lVar14 = 0xb449cb939c4d401;
            if ((lVar11 != -0x737ab62ff741cbf9) && (lVar14 = lVar11, lVar11 == -0x730ef2ca7bef1e0d))
            {
              lVar14 = 0x4fad6f99cc37a2ef;
            }
            goto LAB_001a1e1c;
          }
          if (lVar11 == -0x721bdd5ad5cac8d5) {
            DAT_0021e688 = DAT_0021e688 ^ 0x30;
            DAT_0021e689 = DAT_0021e689 ^ 0x30;
            DAT_0021e68a = DAT_0021e68a ^ 0x30;
            DAT_0021e68b = DAT_0021e68b ^ 0x30;
            _DAT_0021e670 = _DAT_0021e670 ^ 0x3030303030303030;
            uRam000000000021e678 = uRam000000000021e678 ^ 0x3030303030303030;
            DAT_0021e680 = DAT_0021e680 ^ 0x3030303030303030;
            DAT_0021fa34 = '\x01';
            lVar14 = -0x690a643db3a0e39f;
            goto LAB_001a1e1c;
          }
          if (lVar11 != -0x7134ad850e3f2aca) {
            if (lVar11 == -0x6f258cbfd4a30e38) goto LAB_001a43a8;
            goto LAB_001a1e1c;
          }
          local_b0 = (**(code **)(*param_2 + 0x110))(param_2,local_130,local_140);
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = -0x20def5cf10190981;
          lVar14 = -0x4c555fcc0e68eb2f;
        }
        else if (lVar11 < -0x60f9ca4530a735f0) {
          if (lVar11 < -0x690a643db3a0e39f) {
            lVar14 = -0x5522a83485bec31e;
            if ((lVar11 == -0x6b9f6fd3a339574b) || (lVar14 = lVar11, lVar11 != -0x6ac9799554e53b29))
            goto LAB_001a1e1c;
            DAT_0021f9ac = 0;
            local_140 = (**(code **)(*param_2 + 0x108))
                                  (param_2,local_e8,&DAT_0021e628,&DAT_0021e640);
            lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
            bVar5 = lVar14 == 0;
            lVar11 = 0x23f216d8235644a6;
            lVar14 = -0x41526153ff4b4f62;
          }
          else if (lVar11 == -0x690a643db3a0e39f) {
            DAT_0021f9b4 = 0;
            local_100 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e670);
            lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
            bVar5 = lVar14 == 0;
            lVar11 = -0x2a6296b0e2ce77b4;
            lVar14 = 0x41250bc36db74e4e;
          }
          else {
            if (lVar11 == -0x63e632856b0a5635) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar14 = 0x593b561704162815;
              goto LAB_001a1e1c;
            }
            if (lVar11 != -0x618793cff0c1258d) goto LAB_001a1e1c;
            bVar5 = local_c8 == 0;
            lVar14 = 0x5209524193281671;
            lVar11 = -0x350436511fa555a2;
          }
        }
        else {
          if (-0x5e5c03f1af4db506 < lVar11) {
            if (lVar11 == -0x5e5c03f1af4db505) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              goto LAB_001a46f8;
            }
            if (lVar11 == -0x5d363f04b96248ff) {
LAB_001a43cc:
              lVar14 = 0x392e1cfcc73e2a45;
              goto LAB_001a554c;
            }
            if (lVar11 == -0x5d327f2a558911d2) {
              lVar14 = 0x580bd1d7c366667d;
            }
            goto LAB_001a1e1c;
          }
          if (lVar11 != -0x60f9ca4530a735f0) {
            if (lVar11 == -0x5fd4dfbf52a9bc43) {
              lVar14 = -0x46706da9a2401d06;
              goto LAB_001a3888;
            }
            goto LAB_001a1e1c;
          }
          bVar5 = local_108 == (long *)0x0;
          lVar14 = -0x225fdf9f79799a78;
          lVar11 = 0x2ff578f0cfafeb8d;
        }
      }
      else if (lVar11 < -0x4a4d54cd475ad68d) {
        if (lVar11 < -0x5522a83485bec31e) {
          if (lVar11 < -0x598d144fd6a3d550) {
            lVar14 = 0x198ee337b92cb99b;
            if ((lVar11 != -0x5ae1993f076da121) && (lVar14 = lVar11, lVar11 == -0x5ad2d652361d0d19))
            {
              lVar14 = 0x3429d771d0c3b649;
LAB_001a3888:
              DAT_0021da74 = DAT_0021da74 ^ 0x38;
              DAT_0021da73 = DAT_0021da73 ^ 0x38;
              DAT_0021da72 = DAT_0021da72 ^ 0x38;
              DAT_0021da71 = DAT_0021da71 ^ 0x38;
              DAT_0021da70 = DAT_0021da70 ^ 0x38;
              uRam000000000021da68 = uRam000000000021da68 ^ 0x3838383838383838;
              _DAT_0021da60 = _DAT_0021da60 ^ 0x3838383838383838;
              DAT_0021f9d7 = '\x01';
            }
            goto LAB_001a1e1c;
          }
          lVar14 = 0x16c49b58f6f1e674;
          if (lVar11 == -0x598d144fd6a3d550) goto LAB_001a1e1c;
          if (lVar11 != -0x563e13e0a27731a6) {
            lVar14 = lVar11;
            if (lVar11 == -0x55cc2ad037bc1703) goto LAB_001a2e78;
            goto LAB_001a1e1c;
          }
          local_130 = (**(code **)(*param_2 + 0x390))(param_2,local_e8,local_138);
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = -0x5e5c03f1af4db505;
          lVar14 = -0x18361809e2a7fbce;
        }
        else if (lVar11 < -0x54b6758fd937479e) {
          if (lVar11 != -0x5522a83485bec31e) {
            if (lVar11 == -0x54e2087b5ee28cee) {
              lVar14 = 0x46dd4ba59c558bd3;
            }
            goto LAB_001a1e1c;
          }
          iVar7 = FUN_00212730(0,1,&DAT_0021f9a0);
          bVar5 = iVar7 == 0;
          lVar11 = -0x26f13d59d05e0c38;
          lVar14 = 0x4a6beb67229b70e6;
        }
        else {
          lVar14 = -0x44b68e814d5922ad;
          if (lVar11 == -0x54b6758fd937479e) goto LAB_001a1e1c;
          if (lVar11 == -0x4e99af9106a7a8e9) {
            DAT_0021f9b0 = 0;
            lVar14 = -0x2bab241824027480;
            goto LAB_001a1e1c;
          }
          lVar14 = lVar11;
          if (lVar11 != -0x4c555fcc0e68eb2f) goto LAB_001a1e1c;
          bVar5 = local_b0 == 0;
          lVar14 = -0x37c048605fda5dd4;
          lVar11 = 0x6082398050b1a56c;
        }
      }
      else if (lVar11 < -0x44b68e814d5922ad) {
        if (lVar11 < -0x46706da9a2401d06) {
          lVar14 = 0x21a419d863216111;
          if ((lVar11 == -0x4a4d54cd475ad68d) || (lVar14 = lVar11, lVar11 != -0x484050abea96cd5b))
          goto LAB_001a1e1c;
          iVar7 = FUN_00212730(0,1,&DAT_0021f9b8);
          bVar5 = iVar7 == 0;
          lVar11 = 0x7a0267a49a9d0ad8;
          lVar14 = 0x78f3a3ae15718414;
        }
        else if (lVar11 == -0x46706da9a2401d06) {
          DAT_0021f838 = 0;
          local_148 = (**(code **)(*param_2 + 0x108))(param_2,local_100,&DAT_0021e690,&DAT_0021da60)
          ;
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = 0x58101ba26f9c13a0;
          lVar14 = 0x69a316627e10da94;
        }
        else if (lVar11 == -0x45eaf2249c4ca000) {
          local_b8 = (long *)(**(code **)(*param_2 + 0x110))(param_2,local_d0,local_158);
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = -0x398461cfa489bb03;
          lVar14 = -0x412988862fa8ba94;
        }
        else {
          if (lVar11 != -0x4560cf63bc9dbca2) goto LAB_001a1e1c;
          lVar14 = 0x7ca212248aecd56f;
          bVar5 = (int)local_168 == 0;
          lVar11 = -0x32df0cfabe40abcd;
        }
      }
      else if (lVar11 < -0x412988862fa8ba94) {
        if (lVar11 == -0x44b68e814d5922ad) {
          *param_5 = local_c0;
          lVar14 = -0x730ef2ca7bef1e0d;
          if (*param_1 != 0) {
            lVar14 = 0x45f8a011c1bbb965;
          }
          goto LAB_001a1e1c;
        }
        if (lVar11 != -0x41526153ff4b4f62) goto LAB_001a1e1c;
        bVar5 = local_140 == 0;
        lVar14 = 0x550cd2d0d996162c;
        lVar11 = -0x54e2087b5ee28cee;
      }
      else if (lVar11 == -0x412988862fa8ba94) {
        bVar5 = local_b8 == (long *)0x0;
        lVar14 = 0x3a49980af2024d9d;
        lVar11 = 0x120c59c4e8e89791;
      }
      else {
        if (lVar11 != -0x3e32e274cef3572b) {
          if (lVar11 == -0x3d4f8112590beac0) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar14 = -0xd164c1d305db109;
          }
          goto LAB_001a1e1c;
        }
        bVar5 = local_c8 == 0;
        lVar14 = 0x58b9fa903f050b67;
        lVar11 = 0xead9896bea70bb;
      }
    }
    else {
      if (lVar11 < -0x218e9efc070b1e7c) {
        if (lVar11 < -0x2e35e6d9564f2dfa) {
          if (lVar11 < -0x37c048605fda5dd4) {
            if (lVar11 < -0x398461cfa489bb03) {
              lVar14 = 0x333b9165375df76b;
              if ((lVar11 != -0x3b1723e2b172358f) &&
                 (lVar14 = lVar11, lVar11 == -0x3a5e9919fa16211a)) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                local_f4 = 0x1b;
                goto LAB_001a41d0;
              }
              goto LAB_001a1e1c;
            }
            if (lVar11 == -0x398461cfa489bb03) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar14 = 0x1e455fea71570829;
              goto LAB_001a1e1c;
            }
            if (lVar11 == -0x396be75ff3f52887) {
              local_188 = *local_d8;
              lVar14 = 0x53a556703bfe8b1f;
              local_108 = plVar15;
              if (local_188 != 0) {
                lVar14 = -0x3e32e274cef3572b;
              }
              goto LAB_001a1e1c;
            }
            if (lVar11 != -0x37d2658f0b30e03d) goto LAB_001a1e1c;
            local_120 = local_108;
            local_118 = local_178;
          }
          else {
            if (lVar11 < -0x33dbd6737f3adaa5) {
              lVar14 = -0x1eed83f43181ce21;
              if ((lVar11 != -0x37c048605fda5dd4) &&
                 (lVar14 = lVar11, lVar11 == -0x350436511fa555a2)) {
                FUN_0016df9c(param_1,param_2,local_c8,local_d8,local_128);
                lVar14 = -0x45eaf2249c4ca000;
                if (*param_1 != 0) {
                  lVar14 = -0x2911dd830edb2338;
                }
              }
              goto LAB_001a1e1c;
            }
            if (lVar11 == -0x33dbd6737f3adaa5) {
              _DAT_0021e640 = _DAT_0021e640 ^ 0xd7d7d7d7d7d7d7d7;
              uRam000000000021e648 = uRam000000000021e648 ^ 0xd7d7d7d7d7d7d7d7;
              _DAT_0021e650 = _DAT_0021e650 ^ 0xd7d7d7d7d7d7d7d7;
              uRam000000000021e658 = uRam000000000021e658 ^ 0xd7d7d7d7d7d7d7d7;
              DAT_0021e660 = DAT_0021e660 ^ 0xd7;
              DAT_0021fa33 = '\x01';
              lVar14 = -0x4e99af9106a7a8e9;
              goto LAB_001a1e1c;
            }
            if (lVar11 != -0x32df0cfabe40abcd) {
              if (lVar11 == -0x2ec4f5521dc2556f) {
                lVar14 = 0xd18299e5baf1a7c;
                if (DAT_0021fa34 == '\0') {
                  lVar14 = -0x721bdd5ad5cac8d5;
                }
              }
              goto LAB_001a1e1c;
            }
            local_120 = (long *)0x0;
            local_118 = (long *)0x0;
            local_180 = local_c0;
            if (local_c0 < (long *)0x2) {
              local_180 = (long *)0x1;
            }
          }
          lVar14 = 0xc65b25a4712329a;
          goto LAB_001a1e1c;
        }
        if (lVar11 < -0x2911dd830edb2338) {
          if (lVar11 < -0x2cbab76095bc5dab) {
            if (lVar11 == -0x2e35e6d9564f2dfa) {
              DAT_0021f9bc = 0;
              lVar14 = 0x201a8f7f3ff7f94d;
            }
            else if (lVar11 == -0x2d0aa80c55cd2380) {
              lVar14 = -0x5ae1993f076da121;
              if (DAT_0021fa37 == '\0') {
                lVar14 = -0xbbe1ed83b3dd442;
              }
            }
          }
          else if (lVar11 == -0x2cbab76095bc5dab) {
            lVar14 = -0x78a9e640609697b9;
            if (DAT_0021fa36 == '\0') {
              lVar14 = 0x8fb662e46c0fbd3;
            }
          }
          else if (lVar11 == -0x2bab241824027480) {
            iVar7 = FUN_00212730(0,1,&DAT_0021f9ac);
            lVar14 = -0x7f658c1ab0faadab;
            if (iVar7 != 0) {
              lVar14 = 0x7c30806781f5f4e4;
            }
          }
          else if (lVar11 == -0x2a6296b0e2ce77b4) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar14 = 0x1ac7d4c5b45c8f86;
          }
        }
        else if (lVar11 < -0x26f13d59d05e0c38) {
          plVar9 = local_f0;
          lVar14 = -0x396be75ff3f52887;
          if ((lVar11 != -0x2911dd830edb2338) &&
             (plVar9 = plVar15, lVar14 = lVar11, lVar11 == -0x284f0cf49147c5f6)) goto LAB_001a3f50;
        }
        else {
          lVar14 = -0x5522a83485bec31e;
          if (((lVar11 != -0x26f13d59d05e0c38) &&
              (lVar14 = 0x333b9165375df76b, lVar11 != -0x252419398418233e)) &&
             (lVar14 = lVar11, lVar11 == -0x225fdf9f79799a78)) {
LAB_001a4884:
            lVar14 = 0x7ffb4430b10fb25;
          }
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 < -0xd164c1d305db109) {
        if (-0x127fac430929d34b < lVar11) {
          if (lVar11 < -0x10a35357d5769427) {
            if (lVar11 == -0x127fac430929d34a) {
              DAT_0021f9b8 = 0;
              lVar14 = -0x212a8a2220b1eff;
            }
            else if (lVar11 == -0x11a62c1e324f35eb) {
              *param_1 = 2;
              plVar9 = local_b8;
              lVar14 = -0x396be75ff3f52887;
            }
          }
          else if (lVar11 == -0x10a35357d5769427) {
            uVar6 = (uint)local_170;
            if (local_1a0 <= local_160) {
              uVar6 = (uint)local_1a0;
            }
            local_168 = (ulong)uVar6;
            local_c0 = (long *)(long)(int)uVar6;
            pvVar8 = calloc((size_t)local_c0,8);
            lVar14 = 0x6c1df7016bcbd51;
            if (pvVar8 != (void *)0x0) {
              lVar14 = -0x4560cf63bc9dbca2;
            }
            *param_3 = (long)pvVar8;
          }
          else {
            lVar14 = 0x7638217da725cd8e;
            if ((lVar11 != -0xf9296754e3109d3) && (lVar14 = lVar11, lVar11 == -0xeee1dd37d581ba6)) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar14 = 0x21a419d863216111;
            }
          }
          goto LAB_001a1e1c;
        }
        if (lVar11 < -0x1eed83f43181ce21) {
          if (lVar11 != -0x218e9efc070b1e7c) {
            if (lVar11 == -0x20def5cf10190981) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar14 = -0x1eed83f43181ce21;
            }
            goto LAB_001a1e1c;
          }
          DAT_0021f9a4 = 0;
          local_138 = (**(code **)(*param_2 + 0x388))(param_2,local_e8,&DAT_0021e5f8,&DAT_0021e610);
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = -0xeee1dd37d581ba6;
          lVar14 = 0x55530beefb4ffe;
        }
        else {
          if (lVar11 == -0x1eed83f43181ce21) goto LAB_001a43cc;
          if (lVar11 != -0x18361809e2a7fbce) {
            if (lVar11 == -0x16e6dcdadccc2a21) {
              *param_1 = local_f4;
              plVar2 = local_c0;
              lVar14 = 0x406f88e31790cd8c;
            }
            goto LAB_001a1e1c;
          }
          bVar5 = local_130 == 0;
          lVar14 = 0x40efc44368d2b316;
          lVar11 = 0x7f6bdb4e26e58205;
        }
      }
      else {
        if (lVar11 < -0x212a8a2220b1eff) {
          if (lVar11 < -0xb5f7267f6a1bcd4) {
            plVar9 = local_f0;
            if (lVar11 == -0xd164c1d305db109) {
LAB_001a5538:
              lVar14 = -0x396be75ff3f52887;
LAB_001a554c:
              *param_1 = 0x1b;
            }
            else {
              plVar9 = plVar15;
              if (lVar11 == -0xbbe1ed83b3dd442) {
                DAT_0021e6b0 = DAT_0021e6b0 ^ 0x39;
                DAT_0021e6b2 = DAT_0021e6b2 ^ 0x39;
                DAT_0021e6b1 = DAT_0021e6b1 ^ 0x39;
                DAT_0021fa37 = '\x01';
                lVar14 = 0x198ee337b92cb99b;
              }
            }
          }
          else if (lVar11 == -0xb5f7267f6a1bcd4) {
            local_178 = (long *)((long)local_110 + 1);
            lVar14 = -0x54b6758fd937479e;
            if (local_178 != local_180) {
              lVar14 = -0x37d2658f0b30e03d;
            }
          }
          else {
            plVar9 = local_b8;
            lVar14 = -0x396be75ff3f52887;
            if ((lVar11 != -0x98922ec0f47703b) &&
               (plVar9 = plVar15, lVar14 = lVar11, lVar11 == -0x949910083d614cc)) {
              lVar14 = -0x5d327f2a558911d2;
              if (DAT_0021fa31 == '\0') {
                lVar14 = 0x523a62a59591715e;
              }
            }
          }
          goto LAB_001a1e1c;
        }
        if (lVar11 < 0x55530beefb4ffe) {
          if (lVar11 != -0x212a8a2220b1eff) {
            if (lVar11 == 0x48c3b67eb614c5) {
              lVar14 = 0x7e6c2427cb721423;
              if (DAT_0021f9d7 == '\0') {
                lVar14 = -0x5ad2d652361d0d19;
              }
            }
            goto LAB_001a1e1c;
          }
          iVar7 = FUN_00212730(0,1,&DAT_0021f838);
          bVar5 = iVar7 == 0;
          lVar11 = 0x377f4c5bd23c0c8f;
          lVar14 = 0x28d957464cf180a1;
        }
        else if (lVar11 == 0x55530beefb4ffe) {
          bVar5 = local_138 == 0;
          lVar14 = -0x4a4d54cd475ad68d;
          lVar11 = -0x563e13e0a27731a6;
        }
        else {
          if (lVar11 == 0xead9896bea70bb) {
            (**(code **)(*param_2 + 0x550))(param_2,local_c8,local_188);
            goto LAB_001a50b8;
          }
          if (lVar11 != 0x37a620ceadd4a75) goto LAB_001a1e1c;
          iVar7 = FUN_00212730(0,1,&DAT_0021f9a4);
          bVar5 = iVar7 == 0;
          lVar11 = 0x60280cedf702de00;
          lVar14 = 0x69eaf2763ce889b8;
        }
      }
    }
  }
  else if (lVar11 < 0x406f88e31790cd8c) {
    if (0x201a8f7f3ff7f94c < lVar11) {
      if (lVar11 < 0x3429d771d0c3b649) {
        if (lVar11 < 0x2618541bbc04191b) {
          if (lVar11 < 0x222943e366832f94) {
            if (lVar11 == 0x201a8f7f3ff7f94d) {
              iVar7 = FUN_00212730(0,1,&DAT_0021f838);
              lVar14 = 0x48c3b67eb614c5;
              if (iVar7 != 0) {
                lVar14 = 0x50b95023cad1ae2f;
              }
            }
            else if (lVar11 == 0x21a419d863216111) goto LAB_001a3f50;
          }
          else {
            if (lVar11 == 0x222943e366832f94) {
              iVar7 = FUN_00212730(0,1,&DAT_0021f9b0);
              bVar5 = iVar7 == 0;
              lVar11 = -0x55cc2ad037bc1703;
              lVar14 = 0x35f55c7c54795972;
              goto LAB_001a1e10;
            }
            if (lVar11 == 0x23f216d8235644a6) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar14 = -0x284f0cf49147c5f6;
            }
            else if (lVar11 == 0x250a69ba5d7cce84) {
              local_f4 = 0x1b;
              goto LAB_001a41d0;
            }
          }
        }
        else if (lVar11 < 0x2ebbf962da689fcc) {
          if (lVar11 == 0x2618541bbc04191b) {
            iVar7 = FUN_00212730(0,1,&DAT_0021f9a8);
            lVar14 = -0x949910083d614cc;
            if (iVar7 != 0) {
              lVar14 = 0x47a902d2c31b635d;
            }
          }
          else if (lVar11 == 0x28d957464cf180a1) {
            lVar14 = 0x4150ffe341c70f57;
            if (DAT_0021f9d7 == '\0') {
              lVar14 = -0x5fd4dfbf52a9bc43;
            }
          }
        }
        else {
          lVar14 = 0x2618541bbc04191b;
          if (lVar11 != 0x2ebbf962da689fcc) {
            if (lVar11 == 0x2ff578f0cfafeb8d) {
              (**(code **)(*param_2 + 0x550))(param_2,local_108,local_190);
              goto LAB_001a4884;
            }
            lVar14 = lVar11;
            if (lVar11 == 0x333b9165375df76b) {
              iVar7 = FUN_00212730(0,1,&DAT_0021f9bc);
              lVar14 = -0x2cbab76095bc5dab;
              if (iVar7 != 0) {
                lVar14 = -0x252419398418233e;
              }
            }
          }
        }
      }
      else if (lVar11 < 0x392e1cfcc73e2a45) {
        if (lVar11 < 0x3708c14db08162ad) {
          if (lVar11 == 0x3429d771d0c3b649) {
            DAT_0021f838 = 0;
            local_158 = (**(code **)(*param_2 + 0x108))
                                  (param_2,local_100,&DAT_0021e6a0,&DAT_0021da60);
            lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
            bVar5 = lVar14 == 0;
            lVar11 = -0x63e632856b0a5635;
            lVar14 = 0x6dbe7950ce2eea6;
            goto LAB_001a1e10;
          }
          if (lVar11 == 0x35f55c7c54795972) {
            lVar14 = 0x17de0f2a9fe2b4d3;
            if (DAT_0021fa33 == '\0') {
              lVar14 = -0x33dbd6737f3adaa5;
            }
          }
        }
        else if (lVar11 == 0x3708c14db08162ad) {
          lVar14 = 0x250a69ba5d7cce84;
          if (local_d0 != 0) {
            lVar14 = 0x53107cd98b5769af;
          }
        }
        else {
          lVar14 = -0x212a8a2220b1eff;
          if ((lVar11 != 0x377f4c5bd23c0c8f) && (lVar14 = lVar11, lVar11 == 0x381350313e72be82)) {
            DAT_0021e5f0 = DAT_0021e5f0 ^ 0x71;
            _DAT_0021e5e0 = _DAT_0021e5e0 ^ 0x7171717171717171;
            uRam000000000021e5e8 = uRam000000000021e5e8 ^ 0x7171717171717171;
            DAT_0021fa2f = '\x01';
            lVar14 = 0x16c49b58f6f1e674;
          }
        }
      }
      else if (lVar11 < 0x3a67ab4e0de76fb3) {
        plVar2 = local_c0;
        lVar14 = 0x406f88e31790cd8c;
        if (((lVar11 != 0x3944a1a4b91b9599) &&
            (plVar2 = plVar10, lVar14 = 0x1e455fea71570829, lVar11 != 0x3a49980af2024d9d)) &&
           (lVar14 = lVar11, lVar11 == 0x392e1cfcc73e2a45)) {
          if (*(ulong *)(local_1a8 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        lVar14 = 0x593b561704162815;
        if ((lVar11 != 0x3a67ab4e0de76fb3) && (lVar14 = lVar11, lVar11 == 0x3ddf9f656969c274))
        goto LAB_001a4a60;
      }
      goto LAB_001a1e1c;
    }
    if (lVar11 < 0x120c59c4e8e89791) {
      if (0xb449cb939c4d400 < lVar11) {
        if (lVar11 < 0xc1cc32fbbf3b16a) {
          if (lVar11 == 0xb449cb939c4d401) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_d0);
            lVar14 = -0xb5f7267f6a1bcd4;
            if (*param_1 != 0) {
              lVar14 = 0x3944a1a4b91b9599;
            }
          }
          else if (lVar11 == 0xb70be7a52ecde1b) {
            pvVar8 = calloc(*local_128 + *local_150 + 3,1);
            *(void **)(*param_3 + (long)local_110 * 8) = pvVar8;
            local_198 = *(long *)(*param_3 + (long)local_110 * 8);
            lVar14 = -0x11a62c1e324f35eb;
            if (local_198 != 0) {
              lVar14 = -0xf9296754e3109d3;
            }
          }
        }
        else {
          lVar14 = -0x218e9efc070b1e7c;
          if (lVar11 != 0xc1cc32fbbf3b16a) {
            if (lVar11 == 0xc65b25a4712329a) {
              plVar15 = local_118;
              local_d0 = (**(code **)(*param_2 + 0x568))
                                   (param_2,local_b0,(ulong)local_118 & 0xffffffff);
              lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar14 = 0x3708c14db08162ad;
              if (lVar11 != 0) {
                lVar14 = -0x3a5e9919fa16211a;
              }
              local_f0 = local_120;
              local_110 = plVar15;
            }
            else {
              lVar14 = lVar11;
              if (lVar11 == 0xd18299e5baf1a7c) {
                lVar14 = -0x690a643db3a0e39f;
              }
            }
          }
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 < 0x6dbe7950ce2eea6) {
        if (lVar11 == 0x672306c2a61ad77) {
          DAT_0021e600 = DAT_0021e600 ^ 0x7d;
          DAT_0021e601 = DAT_0021e601 ^ 0x7d;
          DAT_0021e602 = DAT_0021e602 ^ 0x7d;
          DAT_0021e603 = DAT_0021e603 ^ 0x7d;
          DAT_0021e604 = DAT_0021e604 ^ 0x7d;
          DAT_0021e605 = DAT_0021e605 ^ 0x7d;
          DAT_0021e5f8 = DAT_0021e5f8 ^ 0x7d7d7d7d7d7d7d7d;
          DAT_0021fa30 = '\x01';
          lVar14 = -0x218e9efc070b1e7c;
        }
        else if (lVar11 == 0x6c1df7016bcbd51) {
          local_f4 = 2;
LAB_001a41d0:
          lVar14 = -0x16e6dcdadccc2a21;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 != 0x6dbe7950ce2eea6) {
        if (lVar11 == 0x7ffb4430b10fb25) {
          *local_e0 = 0;
          lVar14 = 0xb449cb939c4d401;
        }
        else if (lVar11 == 0x8fb662e46c0fbd3) {
          DAT_0021e6a8 = DAT_0021e6a8 ^ 0x61;
          DAT_0021e6a9 = DAT_0021e6a9 ^ 0x61;
          DAT_0021e6aa = DAT_0021e6aa ^ 0x61;
          DAT_0021e6ab = DAT_0021e6ab ^ 0x61;
          DAT_0021e6ac = DAT_0021e6ac ^ 0x61;
          DAT_0021e6ad = DAT_0021e6ad ^ 0x61;
          DAT_0021e6a0 = DAT_0021e6a0 ^ 0x6161616161616161;
          DAT_0021fa36 = '\x01';
          lVar14 = -0x2e35e6d9564f2dfa;
        }
        goto LAB_001a1e1c;
      }
      bVar5 = local_158 == 0;
      lVar14 = 0x3a67ab4e0de76fb3;
      lVar11 = -0x7134ad850e3f2aca;
    }
    else {
      if (0x1801af2757a1199c < lVar11) {
        if (lVar11 < 0x1ac7d4c5b45c8f86) {
          if (lVar11 == 0x1801af2757a1199d) {
            DAT_0021e630 = DAT_0021e630 ^ 0xc1;
            DAT_0021e631 = DAT_0021e631 ^ 0xc1;
            DAT_0021e632 = DAT_0021e632 ^ 0xc1;
            DAT_0021e633 = DAT_0021e633 ^ 0xc1;
            DAT_0021e634 = DAT_0021e634 ^ 0xc1;
            DAT_0021e635 = DAT_0021e635 ^ 0xc1;
            DAT_0021e628 = DAT_0021e628 ^ 0xc1c1c1c1c1c1c1c1;
            DAT_0021fa32 = '\x01';
            lVar14 = -0x6ac9799554e53b29;
          }
          else if (lVar11 == 0x198ee337b92cb99b) {
            DAT_0021f9c0 = 0;
            FUN_001e8fd4(local_198,*local_d8);
            lVar14 = (long)local_110 * 8;
            FUN_001e8fd4(*(undefined8 *)(*param_3 + lVar14),&DAT_0021e6b0);
            FUN_001e8fd4(*(undefined8 *)(*param_3 + lVar14),*local_e0);
            plVar9 = local_b8;
            lVar14 = -0x396be75ff3f52887;
          }
        }
        else if (lVar11 == 0x1ac7d4c5b45c8f86) {
LAB_001a3f50:
          *param_1 = 0x11;
          plVar9 = plVar15;
          lVar14 = 0x392e1cfcc73e2a45;
        }
        else {
          plVar9 = local_b8;
          if (lVar11 == 0x1e455fea71570829) goto LAB_001a5538;
          plVar9 = plVar15;
          if (lVar11 == 0x1ff50a82295d464e) {
            plVar2 = local_160;
            lVar14 = 0x406f88e31790cd8c;
          }
        }
        goto LAB_001a1e1c;
      }
      if (0x16c49b58f6f1e673 < lVar11) {
        if (lVar11 == 0x16c49b58f6f1e674) {
          DAT_0021f9a0 = 0;
          local_a8 = (uint *)((long)plVar4 + -0x10);
          local_128 = (long *)((long)plVar4 + -0x20);
          local_150 = (long *)((long)plVar4 + -0x30);
          local_d8 = (long *)((long)plVar4 + -0x40);
          lVar14 = *param_2;
          *(undefined4 *)((long)plVar4 + -0x10) = 0;
          *(undefined8 *)((long)plVar4 + -0x20) = 0;
          pcVar12 = *(code **)(lVar14 + 0x30);
          *(undefined8 *)((long)plVar4 + -0x30) = 0;
          *(undefined8 *)((long)plVar4 + -0x40) = 0;
          *(undefined8 *)((long)plVar4 + -0x50) = 0;
          local_e0 = (long *)((long)plVar4 + -0x50);
          local_e8 = (*pcVar12)(param_2,&DAT_0021e5e0);
          lVar14 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar5 = lVar14 == 0;
          lVar11 = 0x6036148fee62600b;
          lVar14 = 0x5300603f673a011f;
          plVar4 = (long *)((long)plVar4 + -0x50);
          goto LAB_001a1e10;
        }
        lVar14 = -0x6f258cbfd4a30e38;
        if ((lVar11 != 0x17127dcf957ceb40) && (lVar14 = lVar11, lVar11 == 0x17de0f2a9fe2b4d3)) {
          lVar14 = -0x4e99af9106a7a8e9;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 != 0x120c59c4e8e89791) {
        if (lVar11 == 0x12f33f938a65216c) {
          lVar14 = -0x484050abea96cd5b;
        }
        goto LAB_001a1e1c;
      }
      FUN_0016df9c(param_1,param_2,local_b8,local_e0,local_150);
      bVar5 = *param_1 == 0;
      lVar14 = 0xb70be7a52ecde1b;
      lVar11 = -0x98922ec0f47703b;
    }
  }
  else if (lVar11 < 0x550cd2d0d996162c) {
    if (lVar11 < 0x4a6beb67229b70e6) {
      if (0x425aac5b41cff4a1 < lVar11) {
        if (lVar11 < 0x46dd4ba59c558bd3) {
          lVar14 = 0x1ac7d4c5b45c8f86;
          if ((lVar11 != 0x425aac5b41cff4a2) && (lVar14 = lVar11, lVar11 == 0x45f8a011c1bbb965)) {
            plVar2 = local_c0;
            lVar14 = 0x406f88e31790cd8c;
          }
        }
        else if (lVar11 == 0x46dd4ba59c558bd3) {
          iVar7 = FUN_00212730(0,1,&DAT_0021f9b4);
          lVar14 = -0x2ec4f5521dc2556f;
          if (iVar7 != 0) {
            lVar14 = 0x7094c9b3c2d667a0;
          }
        }
        else {
          lVar14 = 0x2618541bbc04191b;
          if ((lVar11 != 0x47a902d2c31b635d) && (lVar14 = lVar11, lVar11 == 0x48e6d2f03bca4331))
          goto LAB_001a3f50;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 < 0x41250bc36db74e4e) {
        if (lVar11 == 0x406f88e31790cd8c) {
          FUN_001a5734(*param_3,plVar10);
          *param_3 = 0;
          *param_5 = 0;
          lVar14 = 0x4fad6f99cc37a2ef;
        }
        else if (lVar11 == 0x40efc44368d2b316) {
LAB_001a46f8:
          lVar14 = -0x5d363f04b96248ff;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 != 0x41250bc36db74e4e) {
        if (lVar11 == 0x4150ffe341c70f57) {
          lVar14 = -0x46706da9a2401d06;
        }
        goto LAB_001a1e1c;
      }
      bVar5 = local_100 == 0;
      lVar14 = 0x425aac5b41cff4a2;
      lVar11 = 0x12f33f938a65216c;
    }
    else {
      if (lVar11 < 0x5209524193281671) {
        if (lVar11 < 0x4befaceaa8ec5858) {
          if (lVar11 == 0x4a6beb67229b70e6) {
            lVar14 = -0x598d144fd6a3d550;
            if (DAT_0021fa2f == '\0') {
              lVar14 = 0x381350313e72be82;
            }
          }
          else if (lVar11 == 0x4b8094a092a0bcb5) {
            local_190 = *local_e0;
            lVar14 = -0x737ab62ff741cbf9;
            if (local_190 != 0) {
              lVar14 = -0x60f9ca4530a735f0;
            }
          }
        }
        else if (lVar11 == 0x4befaceaa8ec5858) {
          DAT_0021e698 = DAT_0021e698 ^ 9;
          DAT_0021e699 = DAT_0021e699 ^ 9;
          DAT_0021e69a = DAT_0021e69a ^ 9;
          DAT_0021e69b = DAT_0021e69b ^ 9;
          DAT_0021e69c = DAT_0021e69c ^ 9;
          DAT_0021e690 = DAT_0021e690 ^ 0x909090909090909;
          DAT_0021fa35 = '\x01';
          lVar14 = -0x127fac430929d34a;
        }
        else if (lVar11 == 0x4fad6f99cc37a2ef) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
          lVar14 = 0x392e1cfcc73e2a45;
        }
        else if (lVar11 == 0x50b95023cad1ae2f) {
          lVar14 = 0x201a8f7f3ff7f94d;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 < 0x5300603f673a011f) {
        lVar14 = -0xd164c1d305db109;
        if ((lVar11 != 0x5209524193281671) && (lVar14 = lVar11, lVar11 == 0x523a62a59591715e)) {
          DAT_0021e620 = DAT_0021e620 ^ 0x36;
          DAT_0021e621 = DAT_0021e621 ^ 0x36;
          DAT_0021e622 = DAT_0021e622 ^ 0x36;
          DAT_0021e623 = DAT_0021e623 ^ 0x36;
          DAT_0021e624 = DAT_0021e624 ^ 0x36;
          _DAT_0021e610 = _DAT_0021e610 ^ 0x3636363636363636;
          uRam000000000021e618 = uRam000000000021e618 ^ 0x3636363636363636;
          DAT_0021fa31 = '\x01';
          lVar14 = 0x580bd1d7c366667d;
        }
        goto LAB_001a1e1c;
      }
      if (lVar11 != 0x5300603f673a011f) {
        if (lVar11 == 0x53107cd98b5769af) {
          local_c8 = (**(code **)(*param_2 + 0x110))(param_2,local_d0,local_148);
          lVar11 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar14 = -0x618793cff0c1258d;
          if (lVar11 != 0) {
            lVar14 = -0x3d4f8112590beac0;
          }
        }
        else if (lVar11 == 0x53a556703bfe8b1f) {
          lVar14 = 0x4b8094a092a0bcb5;
        }
        goto LAB_001a1e1c;
      }
      bVar5 = local_e8 == 0;
      lVar14 = 0x3ddf9f656969c274;
      lVar11 = 0x2ebbf962da689fcc;
    }
  }
  else {
    if (lVar11 < 0x69a316627e10da94) {
      if (lVar11 < 0x593b561704162815) {
        if (lVar11 < 0x580bd1d7c366667d) {
          lVar14 = -0x284f0cf49147c5f6;
          if ((lVar11 != 0x550cd2d0d996162c) && (lVar14 = lVar11, lVar11 == 0x572c9a083a3a0cd1)) {
            lVar14 = -0x6ac9799554e53b29;
          }
        }
        else if (lVar11 == 0x580bd1d7c366667d) {
          DAT_0021f9a8 = 0;
          lVar14 = 0x37a620ceadd4a75;
        }
        else if (lVar11 == 0x58101ba26f9c13a0) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar14 = -0x6f258cbfd4a30e38;
        }
        else if (lVar11 == 0x58b9fa903f050b67) {
LAB_001a50b8:
          lVar14 = -0x7b75420f1461aa52;
        }
      }
      else if (lVar11 < 0x6036148fee62600b) {
        if (lVar11 == 0x593b561704162815) {
LAB_001a43a8:
          *param_1 = 0x11;
          lVar14 = 0x392e1cfcc73e2a45;
        }
        else if (lVar11 == 0x60280cedf702de00) {
          lVar14 = 0x37a620ceadd4a75;
        }
      }
      else if (lVar11 == 0x6036148fee62600b) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
LAB_001a4a60:
        lVar14 = 0x48e6d2f03bca4331;
      }
      else if (lVar11 == 0x6082398050b1a56c) {
        puVar1 = (undefined1 *)0x8500be9b057d300e;
        if (local_b0 != 0) {
          puVar1 = (undefined1 *)0xc0f51250277e5cfd;
        }
        puVar3 = &DAT_c45038db124ae016;
        puVar16 = param_5;
        do {
          while( true ) {
            while( true ) {
              while (puVar13 = puVar3, puVar3 = puVar13, -0x1b715090d60a355f < (long)puVar13) {
                if ((long)puVar13 < 0x22f3f9cf91cbb9a6) {
                  if (puVar13 == (undefined1 *)0xe48eaf6f29f5caa2) {
                    *local_a8 = 0;
                    puVar3 = (undefined1 *)0x940bdddd24f52ce3;
                  }
                  else if (puVar13 == (undefined1 *)0xe7622641fcb090c6) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    puVar16 = (undefined8 *)0x1b;
                    puVar3 = (undefined1 *)0x22f3f9cf91cbb9a6;
                  }
                }
                else if (puVar13 == (undefined1 *)0x22f3f9cf91cbb9a6) {
                  *param_1 = (int)puVar16;
                  puVar3 = (undefined1 *)0xe48eaf6f29f5caa2;
                }
                else {
                  puVar3 = (undefined1 *)0x940bdddd24f52ce3;
                  if ((puVar13 != (undefined1 *)0x29ff0ff794febe2e) &&
                     (puVar3 = puVar13, puVar13 == (undefined1 *)0x34ee749c3dc3cf5c)) {
                    puVar3 = (undefined1 *)0xe48eaf6f29f5caa2;
                  }
                }
              }
              if (-0x6bf42222db0ad31e < (long)puVar13) break;
              if (puVar13 == (undefined1 *)0x8500be9b057d300e) {
                puVar16 = (undefined8 *)0x3;
                puVar3 = (undefined1 *)0x22f3f9cf91cbb9a6;
              }
              else if (puVar13 == (undefined1 *)0x87b1ff2df68e38ae) {
                puVar3 = (undefined1 *)0x29ff0ff794febe2e;
                if (*param_1 != 0) {
                  puVar3 = (undefined1 *)0x34ee749c3dc3cf5c;
                }
              }
            }
            if (puVar13 != (undefined1 *)0xc0f51250277e5cfd) break;
            uVar6 = (**(code **)(*param_2 + 0x558))(param_2,local_b0);
            pcVar12 = *(code **)(*param_2 + 0x78);
            *local_a8 = uVar6;
            lVar14 = (*pcVar12)(param_2);
            puVar3 = (undefined1 *)0x87b1ff2df68e38ae;
            if (lVar14 != 0) {
              puVar3 = (undefined1 *)0xe7622641fcb090c6;
            }
          }
          puVar3 = puVar1;
        } while ((puVar13 == &DAT_c45038db124ae016) ||
                (puVar3 = puVar13, puVar13 != (undefined1 *)0x940bdddd24f52ce3));
        local_170 = (ulong)*local_a8;
        lVar14 = -0x10a35357d5769427;
        if (*param_1 != 0) {
          lVar14 = 0x1ff50a82295d464e;
        }
        local_160 = (long *)(long)(int)*local_a8;
      }
      else if (lVar11 == 0x65ac4e04e0e5f8af) {
        lVar14 = -0x127fac430929d34a;
      }
      goto LAB_001a1e1c;
    }
    if (0x7a0267a49a9d0ad7 < lVar11) {
      if (lVar11 < 0x7ca212248aecd56f) {
        lVar14 = -0x484050abea96cd5b;
        if ((lVar11 != 0x7a0267a49a9d0ad8) && (lVar14 = lVar11, lVar11 == 0x7c30806781f5f4e4)) {
          lVar14 = -0x2bab241824027480;
        }
      }
      else {
        lVar14 = -0x44b68e814d5922ad;
        if (((lVar11 != 0x7ca212248aecd56f) &&
            (lVar14 = 0x3429d771d0c3b649, lVar11 != 0x7e6c2427cb721423)) &&
           (lVar14 = lVar11, lVar11 == 0x7f6bdb4e26e58205)) {
LAB_001a2e78:
          lVar14 = 0x222943e366832f94;
        }
      }
      goto LAB_001a1e1c;
    }
    if (lVar11 < 0x7094c9b3c2d667a0) {
      if (lVar11 == 0x69a316627e10da94) {
        bVar5 = local_148 == 0;
        lVar14 = 0x17127dcf957ceb40;
        lVar11 = -0x3b1723e2b172358f;
        goto LAB_001a1e10;
      }
      if (lVar11 == 0x69eaf2763ce889b8) {
        lVar14 = 0xc1cc32fbbf3b16a;
        if (DAT_0021fa30 == '\0') {
          lVar14 = 0x672306c2a61ad77;
        }
      }
      goto LAB_001a1e1c;
    }
    lVar14 = 0x46dd4ba59c558bd3;
    if (lVar11 == 0x7094c9b3c2d667a0) goto LAB_001a1e1c;
    if (lVar11 != 0x7638217da725cd8e) {
      lVar14 = lVar11;
      if (lVar11 == 0x78f3a3ae15718414) {
        lVar14 = 0x65ac4e04e0e5f8af;
        if (DAT_0021fa35 == '\0') {
          lVar14 = 0x4befaceaa8ec5858;
        }
      }
      goto LAB_001a1e1c;
    }
    iVar7 = FUN_00212730(0,1,&DAT_0021f9c0);
    bVar5 = iVar7 == 0;
    lVar11 = -0x7c8acbaabf625b1b;
    lVar14 = -0x2d0aa80c55cd2380;
  }
LAB_001a1e10:
  if (!bVar5) {
    lVar14 = lVar11;
  }
  goto LAB_001a1e1c;
}

