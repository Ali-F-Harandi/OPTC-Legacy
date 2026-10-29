// rea decompile_all
// name: FUN_001fa174
// address: 0x1fa174
// body: available
// range: 0x1fa174-0x1fad8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fad8c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fa174(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  long *local_88;
  int local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_74 = 0;
  pvVar4 = calloc(1,0x58);
  lVar1 = 0x731bafea6ffaf9d2;
  if (pvVar4 != (void *)0x0) {
    lVar1 = 0x3e722c767da45809;
  }
  lVar2 = 0x3dce80f3d755ea8b;
LAB_001fa2c0:
  while (lVar7 = lVar2, lVar2 = lVar7, 0xc1c2badab0be0dd < lVar7) {
    if (lVar7 < 0x632d2718836e34f1) {
      if (lVar7 < 0x3dce80f3d755ea8b) {
        if (lVar7 == 0xc1c2badab0be0de) {
          local_9c = local_74;
          local_98 = local_7c + local_94 + 0xc;
          lVar2 = 0x7b3d77c4935dca95;
          if (local_74 + local_98 <= param_3) {
            lVar2 = 0x7cdba208eacd72d0;
          }
        }
        else if (lVar7 == 0x2d2fed4469d16fde) {
          local_90 = (int)local_70;
          lVar2 = -0x41f7f0095884c7b;
          if (local_7c + (int)local_70 + 8U <= param_3) {
            lVar2 = 0x632d2718836e34f1;
          }
        }
        else if (lVar7 == 0x3c1d6e269c73b2c4) {
          local_88 = (long *)param_2[1];
          lVar2 = -0x7d966677c36dcece;
        }
      }
      else if (lVar7 < 0x4ee6d1fabee14214) {
        lVar2 = lVar1;
        if ((lVar7 != 0x3dce80f3d755ea8b) && (lVar2 = lVar7, lVar7 == 0x3e722c767da45809)) {
          lVar7 = *param_2;
          *(void **)((long)pvVar4 + 8) = pvVar4;
          *(long *)((long)pvVar4 + 0x38) = (long)pvVar4 + 0x30;
          *(long *)((long)pvVar4 + 0x18) = (long)pvVar4 + 0x10;
          lVar2 = -0x3b6e0fe4a7713ec6;
          if (lVar7 != 0) {
            lVar2 = 0x3c1d6e269c73b2c4;
          }
          *(long *)((long)pvVar4 + 0x28) = (long)pvVar4 + 0x20;
        }
      }
      else {
        lVar2 = -0x67a01045c33eebde;
        if ((lVar7 != 0x4ee6d1fabee14214) && (lVar2 = lVar7, lVar7 == 0x6298686b9f6b9f24)) {
          FUN_001f9354(param_1,pvVar4,local_8c,param_4);
          lVar2 = 0x6288b31db4af0d0;
          if (*param_1 != 0) {
            lVar2 = -0x22076b5cc3122b5b;
          }
        }
      }
    }
    else if (lVar7 < 0x7a1d336c9fe8990f) {
      if (lVar7 < 0x6e518c29e4d03e45) {
        if (lVar7 == 0x632d2718836e34f1) {
          FUN_001f8350(param_1,(long)pvVar4 + 0x30,local_90,param_4);
          lVar2 = 0x68a258a9cce7e66b;
          if (*param_1 != 0) {
            lVar2 = 0x7b7e2b085a916946;
          }
        }
        else if (lVar7 == 0x68a258a9cce7e66b) {
          local_94 = (int)local_70;
          uVar5 = FUN_001f4fdc(param_1,&local_74,4,1,param_4);
          lVar2 = 0xc1c2badab0be0de;
          if ((uVar5 & 1) == 0) {
            lVar2 = -0x1583528f277a144d;
          }
        }
      }
      else {
        lVar2 = -0x67a01045c33eebde;
        if ((lVar7 != 0x6e518c29e4d03e45) && (lVar2 = lVar7, lVar7 == 0x731bafea6ffaf9d2)) {
          local_78 = 1;
LAB_001fa71c:
          lVar2 = -0x3142dac40f10d563;
        }
      }
    }
    else if (lVar7 < 0x7b7e2b085a916946) {
      if (lVar7 == 0x7a1d336c9fe8990f) {
        uVar5 = FUN_001f4fdc(param_1,(long)&local_70 + 4,4,1,param_4);
        lVar2 = 0x47a378886e13f5f;
        if ((uVar5 & 1) == 0) {
          lVar2 = -0x1c5b2ab53e093884;
        }
      }
      else if (lVar7 == 0x7b3d77c4935dca95) goto LAB_001fa718;
    }
    else {
      lVar2 = -0x67a01045c33eebde;
      if ((lVar7 != 0x7b7e2b085a916946) && (lVar2 = lVar7, lVar7 == 0x7cdba208eacd72d0)) {
        *(uint *)((long)pvVar4 + 0x40) = local_9c;
        pvVar6 = calloc(1,(ulong)local_9c);
        *(void **)((long)pvVar4 + 0x48) = pvVar6;
        lVar7 = 0x21f15559b2a9e8ab;
        lVar2 = -0x6bd26373b69e2212;
        if (pvVar6 != (void *)0x0) {
          lVar2 = -0x28ee212cd644d530;
        }
        while( true ) {
          while (lVar7 < -0x19fe551b65af4a47) {
            if (lVar7 == -0x6bd26373b69e2212) {
              *param_1 = 1;
              lVar7 = -0x19fe551b65af4a47;
            }
            else if (lVar7 == -0x28ee212cd644d530) {
              FUN_001f4fdc(param_1,pvVar6,(ulong)local_9c,1,param_4);
              lVar7 = -0x19fe551b65af4a47;
            }
          }
          if (lVar7 == -0x19fe551b65af4a47) break;
          if (lVar7 == 0x21f15559b2a9e8ab) {
            lVar7 = lVar2;
          }
        }
        lVar2 = -0x63395203aad93369;
        if (*param_1 != 0) {
          lVar2 = -0x6dba2dd18d641b5c;
        }
      }
    }
  }
  if (lVar7 < -0x24d3583348e9211e) {
    if (lVar7 < -0x41df0b638b763578) {
      if (lVar7 < -0x67a01045c33eebde) {
        if (lVar7 == -0x7d966677c36dcece) {
          *local_88 = (long)pvVar4;
          param_2[1] = (long)pvVar4 + 0x50;
          lVar2 = 0x7a1d336c9fe8990f;
          if (*param_1 != 0) {
            lVar2 = -0x24d3583348e9211e;
          }
        }
        else if (lVar7 == -0x6dba2dd18d641b5c) {
          lVar2 = -0x67a01045c33eebde;
        }
      }
      else if (lVar7 == -0x63395203aad93369) {
        lVar2 = 0x4ee6d1fabee14214;
        if (local_74 + local_98 != param_3) {
          lVar2 = -0x32d8232145aea952;
        }
      }
      else if (lVar7 == -0x67a01045c33eebde) {
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_001fa2c0;
    }
    if (-0x32d8232145aea953 < lVar7) {
      if (lVar7 == -0x32d8232145aea952) goto LAB_001fa718;
      if (lVar7 == -0x3142dac40f10d563) {
        *param_1 = local_78;
        lVar2 = -0x67a01045c33eebde;
      }
      goto LAB_001fa2c0;
    }
    if (lVar7 != -0x41df0b638b763578) {
      if (lVar7 == -0x3b6e0fe4a7713ec6) {
        lVar2 = -0x7d966677c36dcece;
        local_88 = param_2;
      }
      goto LAB_001fa2c0;
    }
  }
  else {
    if (lVar7 < -0x1583528f277a144d) {
      lVar2 = -0x67a01045c33eebde;
      if (((lVar7 != -0x24d3583348e9211e) && (lVar7 != -0x22076b5cc3122b5b)) &&
         (lVar2 = lVar7, lVar7 == -0x1c5b2ab53e093884)) {
        lVar2 = -0x67a01045c33eebde;
      }
      goto LAB_001fa2c0;
    }
    if (0x47a378886e13f5e < lVar7) {
      if (lVar7 == 0x47a378886e13f5f) {
        local_8c = local_70._4_4_;
        lVar2 = -0x41df0b638b763578;
        if (local_70._4_4_ + 4U <= param_3) {
          lVar2 = 0x6298686b9f6b9f24;
        }
      }
      else if (lVar7 == 0x6288b31db4af0d0) {
        local_7c = local_70._4_4_;
        uVar5 = FUN_001f4fdc(param_1,&local_70,4,1,param_4);
        lVar2 = 0x2d2fed4469d16fde;
        if ((uVar5 & 1) == 0) {
          lVar2 = 0x6e518c29e4d03e45;
        }
      }
      goto LAB_001fa2c0;
    }
    lVar2 = -0x67a01045c33eebde;
    if ((lVar7 == -0x1583528f277a144d) || (lVar2 = lVar7, lVar7 != -0x41f7f0095884c7b))
    goto LAB_001fa2c0;
  }
LAB_001fa718:
  local_78 = 8;
  goto LAB_001fa71c;
}

