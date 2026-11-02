// rea decompile_all
// name: FUN_0018b510
// address: 0x18b510
// body: available
// range: 0x18b510-0x18be4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18be48 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018b510(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x25;
  long unaff_x26;
  long local_90;
  int local_74;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  lVar1 = 0x5f45bc70951b60fb;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x4af3c3c42e1259de;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  lVar2 = -0x57d427ac5800a517;
LAB_0018b610:
  do {
    while (lVar5 = lVar2, lVar2 = lVar5, -0xf2bf374642ffe37 < lVar5) {
      if (lVar5 < 0x1d93e77425e89855) {
        if (lVar5 < 0x2e435fe7314e62e) {
          if (lVar5 == -0xf2bf374642ffe36) {
            lVar5 = FUN_001e53f4(unaff_x25,local_90);
            lVar2 = 0x6ca31c62cc1485fa;
            if (lVar5 != 0) {
              lVar2 = 0x673582748bb94ab0;
            }
            *param_5 = lVar5;
          }
          else if (lVar5 == -0xdda62df3fbdc442) {
            (**(code **)(*param_2 + 0x550))(param_2,unaff_x26,unaff_x25);
            lVar2 = -0x71eeb9127430d185;
          }
          else if (lVar5 == -0xab700e369f32ef0) {
            lVar2 = 0x5d34d65ba8521957;
            if (unaff_x25 != 0) {
              lVar2 = 0x2e435fe7314e62e;
            }
          }
        }
        else if (lVar5 < 0x8c0b9fc0216be12) {
          if (lVar5 == 0x2e435fe7314e62e) {
            lVar2 = -0xf2bf374642ffe36;
            if (*param_1 != 0) {
              lVar2 = 0x68d4dbe8fffc5ba5;
            }
          }
          else if (lVar5 == 0x69b7b4277ae7a0e) {
            lVar2 = -0x71eeb9127430d185;
          }
        }
        else if (lVar5 == 0x8c0b9fc0216be12) {
          *param_1 = local_74;
          lVar2 = -0x71eeb9127430d185;
        }
        else if (lVar5 == 0x144ca716b9ef087d) {
          local_74 = 3;
LAB_0018ba7c:
          lVar2 = 0x8c0b9fc0216be12;
        }
      }
      else if (lVar5 < 0x673582748bb94ab0) {
        if (lVar5 < 0x5d34d65ba8521957) {
          if (lVar5 == 0x1d93e77425e89855) {
            iVar4 = (**(code **)(*param_2 + 0x540))(param_2,unaff_x26);
            local_90 = (long)iVar4;
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = -0x3cf2a9bbbadb1104;
            if (lVar5 != 0) {
              lVar2 = -0x534005e4dc739e2c;
            }
          }
          else if (lVar5 == 0x4af3c3c42e1259de) {
            *param_1 = 3;
            lVar2 = -0x666238c4a6f70ef0;
          }
        }
        else {
          lVar2 = -0x5b65650c8dbcc4a7;
          if ((lVar5 != 0x5d34d65ba8521957) && (lVar2 = lVar5, lVar5 == 0x5f45bc70951b60fb)) {
            FUN_0018a758(param_1,param_2,param_3,param_4,&local_70);
            lVar2 = -0x71a3b7ef5a3bb1ed;
            unaff_x26 = local_70;
            if (*param_1 != 0) {
              lVar2 = 0x69b7b4277ae7a0e;
            }
          }
        }
      }
      else if (lVar5 < 0x6ca31c62cc1485fa) {
        lVar2 = -0xdda62df3fbdc442;
        if ((lVar5 != 0x673582748bb94ab0) && (lVar2 = lVar5, lVar5 == 0x68d4dbe8fffc5ba5)) {
          lVar2 = -0x71eeb9127430d185;
        }
      }
      else if (lVar5 == 0x6ca31c62cc1485fa) {
        *param_1 = 2;
        lVar2 = -0xdda62df3fbdc442;
      }
      else if (lVar5 == 0x7610f3f29cae43f2) {
        lVar2 = -0x71eeb9127430d185;
      }
    }
    if (-0x5b65650c8dbcc4a8 < lVar5) {
      if (lVar5 < -0x4d4fe61e1b10d683) {
        if (lVar5 < -0x57d427ac5800a517) {
          if (lVar5 == -0x5b65650c8dbcc4a7) {
            *param_1 = 0x1b;
            lVar2 = -0x71eeb9127430d185;
          }
          else if (lVar5 == -0x5b556e2399052bd6) {
            lVar2 = -0x2f88a7d9884c8f7f;
          }
        }
        else {
          lVar2 = lVar1;
          if ((lVar5 != -0x57d427ac5800a517) && (lVar2 = lVar5, lVar5 == -0x534005e4dc739e2c)) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_74 = 0x1b;
            goto LAB_0018ba7c;
          }
        }
      }
      else if (lVar5 < -0x2f88a7d9884c8f7f) {
        lVar2 = -0x666238c4a6f70ef0;
        if ((lVar5 != -0x4d4fe61e1b10d683) && (lVar2 = lVar5, lVar5 == -0x3cf2a9bbbadb1104)) {
          lVar2 = -0x64f09d75547f6c9b;
          if (*param_1 != 0) {
            lVar2 = 0x7610f3f29cae43f2;
          }
        }
      }
      else if (lVar5 == -0xf8ce93be88fcc48) {
        lVar2 = -0x5b556e2399052bd6;
        if (*param_1 != 0) {
          lVar2 = -0x4d4fe61e1b10d683;
        }
      }
      else if (lVar5 == -0x2f88a7d9884c8f7f) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_0018b610;
    }
    if (lVar5 < -0x677b73b78b3950af) {
      if (lVar5 == -0x71eeb9127430d185) {
        lVar2 = -0x6c2a031b40553915;
        if (unaff_x26 == 0 || param_2 == (long *)0x0) {
          lVar2 = -0x677b73b78b3950af;
        }
      }
      else if (lVar5 == -0x71a3b7ef5a3bb1ed) {
        lVar2 = 0x144ca716b9ef087d;
        if (unaff_x26 != 0) {
          lVar2 = 0x1d93e77425e89855;
        }
      }
      else if (lVar5 == -0x6c2a031b40553915) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x26);
        lVar2 = -0xf8ce93be88fcc48;
      }
    }
    else if (lVar5 < -0x64f09d75547f6c9b) {
      lVar2 = -0xf8ce93be88fcc48;
      if ((lVar5 != -0x677b73b78b3950af) && (lVar2 = lVar5, lVar5 == -0x666238c4a6f70ef0)) {
        *param_5 = 0;
        lVar2 = -0x2f88a7d9884c8f7f;
      }
    }
    else if (lVar5 == -0x64f09d75547f6c9b) {
      unaff_x25 = (**(code **)(*param_2 + 0x548))(param_2,unaff_x26,0);
      lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar2 = -0xab700e369f32ef0;
      if (lVar5 != 0) {
        lVar2 = -0x5d9c42c0f017932f;
      }
    }
    else if (lVar5 == -0x5d9c42c0f017932f) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar2 = -0x5b65650c8dbcc4a7;
    }
  } while( true );
}

