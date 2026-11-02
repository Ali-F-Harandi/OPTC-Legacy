// rea decompile_all
// name: FUN_001707f8
// address: 0x1707f8
// body: available
// range: 0x1707f8-0x170dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001707f8(int *param_1,long *param_2,long param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w24;
  
  lVar1 = -0x220211bfb882d8f5;
  if (param_3 != 0) {
    lVar1 = 0x7ededfa0c0eeb47a;
  }
  lVar3 = 0xdc8188db88ec11b;
LAB_001708ec:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x205d1929c40a5522) {
      if (lVar4 < -0x2b0b93cebcb1988a) {
        if (lVar4 < -0x5bdd334f52bdd63b) {
          if (lVar4 == -0x7f0dc9b3a3765301) {
            *param_5 = 0;
            lVar3 = -0x439fbf751afe062;
            if (*param_1 != 0) {
              lVar3 = 0x5e955a53164f3d9f;
            }
          }
          else if (lVar4 == -0x6d921b62c4f75c37) {
            *param_5 = 0;
            *param_4 = 0;
            lVar3 = 0x5aba0b6a880053f8;
          }
        }
        else if (lVar4 == -0x5bdd334f52bdd63b) {
          lVar3 = 0x5c75d317cff2739f;
          if (*param_1 != 0) {
            lVar3 = 0x3132af798d39a4e3;
          }
        }
        else if (lVar4 == -0x59acc9f9846a69a9) {
          lVar3 = -0xd437930309f4927;
          if (*param_4 != 0) {
            lVar3 = 0x205d1929c40a5522;
          }
        }
        else if (lVar4 == -0x50b71c6a4dd660bb) {
          *param_1 = unaff_w24;
          lVar3 = -0x6d921b62c4f75c37;
        }
      }
      else if (lVar4 < -0xd437930309f4927) {
        if (lVar4 == -0x2b0b93cebcb1988a) {
          lVar3 = (**(code **)(*param_2 + 0x5c0))(param_2,param_3,0);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x59acc9f9846a69a9;
          if (lVar4 != 0) {
            lVar3 = 0x67be2c6e2af44868;
          }
        }
        else if (lVar4 == -0x220211bfb882d8f5) {
          unaff_w24 = 3;
          lVar3 = -0x50b71c6a4dd660bb;
        }
      }
      else if (lVar4 == -0xd437930309f4927) {
LAB_001708d8:
        unaff_w24 = 0x1b;
        lVar3 = -0x50b71c6a4dd660bb;
      }
      else {
        lVar3 = -0x2b0b93cebcb1988a;
        if ((lVar4 != -0x439fbf751afe062) && (lVar3 = lVar4, lVar4 == 0xdc8188db88ec11b)) {
          lVar3 = lVar1;
        }
      }
    }
    if (lVar4 < 0x5e955a53164f3d9f) {
      if (lVar4 < 0x3132af798d39a4e3) {
        if (lVar4 == 0x205d1929c40a5522) {
          lVar3 = 0x66d97625bdcfaa84;
          if (*param_1 != 0) {
            lVar3 = 0x79de56917a785edc;
          }
        }
        else if (lVar4 == 0x242c94bb96617abb) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          *param_1 = 0x1b;
          lVar3 = -0x7f0dc9b3a3765301;
        }
      }
      else {
        lVar3 = -0x7f0dc9b3a3765301;
        if (((lVar4 != 0x3132af798d39a4e3) &&
            (lVar3 = -0x2b0b93cebcb1988a, lVar4 != 0x5c75d317cff2739f)) &&
           (lVar3 = lVar4, lVar4 == 0x5aba0b6a880053f8)) {
          return;
        }
      }
      goto LAB_001708ec;
    }
    if (lVar4 < 0x67be2c6e2af44868) {
      lVar3 = -0x6d921b62c4f75c37;
      if ((lVar4 != 0x5e955a53164f3d9f) && (lVar3 = lVar4, lVar4 == 0x66d97625bdcfaa84)) {
        lVar3 = 0x5aba0b6a880053f8;
      }
    }
    else {
      if (lVar4 == 0x67be2c6e2af44868) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        goto LAB_001708d8;
      }
      lVar3 = -0x6d921b62c4f75c37;
      if ((lVar4 != 0x79de56917a785edc) && (lVar3 = lVar4, lVar4 == 0x7ededfa0c0eeb47a)) {
        uVar2 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
        lVar3 = *param_2;
        *param_5 = uVar2;
        lVar4 = (**(code **)(lVar3 + 0x78))(param_2);
        lVar3 = -0x5bdd334f52bdd63b;
        if (lVar4 != 0) {
          lVar3 = 0x242c94bb96617abb;
        }
      }
    }
  } while( true );
}

