// rea decompile_all
// name: FUN_001476b8
// address: 0x1476b8
// body: available
// range: 0x1476b8-0x147e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001476b8(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x24;
  long unaff_x25;
  float fVar6;
  
  lVar1 = 0x5e4ec1c291d6bc50;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = 0x299741929a47184d;
  }
  lVar5 = 0x5c051af6033ba852;
LAB_001477e0:
  do {
    while( true ) {
      while (lVar4 = lVar5, lVar5 = lVar4, lVar4 < 0x77e21c1e128dbdb) {
        if (lVar4 < -0x20464d4bb0fa1f5c) {
          if (lVar4 < -0x40468d8be3b7b1c2) {
            lVar5 = 0x2d6677fd84398e19;
            if (lVar4 != -0x7e9643df0acdf8c0) {
              if (lVar4 == -0x7d6cdc377ae2d00c) {
                unaff_x25 = *(long *)(param_1 + 0x20);
                lVar5 = -0x22284ca78ec0840e;
                if (unaff_x25 != 0) {
                  lVar5 = -0x2a8b6a76d2705264;
                }
              }
              else {
                lVar5 = lVar4;
                if (lVar4 == -0x44e75be649d70485) {
                  DAT_0021f2d8 = 0;
                  uVar3 = FUN_002006ac(unaff_x25,&DAT_0021c688);
                  lVar5 = 0x172651ebbec5122c;
                  if ((uVar3 & 1) == 0) {
                    lVar5 = -0x16cc3e68c6539242;
                  }
                }
              }
            }
          }
          else {
            lVar5 = -0x7d6cdc377ae2d00c;
            if (((lVar4 != -0x40468d8be3b7b1c2) &&
                (lVar5 = 0x184a948e295275f6, lVar4 != -0x2a8b6a76d2705264)) &&
               (lVar5 = lVar4, lVar4 == -0x22284ca78ec0840e)) {
              lVar5 = -0xe07a343fe0a8793;
            }
          }
        }
        else if (lVar4 < -0x11e504026d64685a) {
          lVar5 = -0x11e504026d64685a;
          if (((lVar4 != -0x20464d4bb0fa1f5c) &&
              (lVar5 = -0xe07a343fe0a8793, lVar4 != -0x16cc3e68c6539242)) &&
             (lVar5 = lVar4, lVar4 == -0x16832f8e7e0e189a)) {
            lVar5 = 0x2d6677fd84398e19;
          }
        }
        else if (lVar4 < -0x45308d6c5db8f8a) {
          if (lVar4 == -0x11e504026d64685a) {
            fVar6 = *param_2;
            *param_3 = *param_3 | 0x400000;
            *param_2 = fVar6 + (1.0 - fVar6);
            lVar5 = -0xe07a343fe0a8793;
          }
          else if (lVar4 == -0xe07a343fe0a8793) {
            return;
          }
        }
        else {
          lVar5 = -0x44e75be649d70485;
          if ((lVar4 != -0x45308d6c5db8f8a) && (lVar5 = lVar4, lVar4 == -0x13d91913aabe64e)) {
            lVar5 = 0x309e31f0fbfb7473;
          }
        }
      }
      if (lVar4 < 0x2d6677fd84398e19) break;
      if (lVar4 < 0x474660dd6adc49ce) {
        if (lVar4 == 0x2d6677fd84398e19) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f2d8);
          lVar5 = 0x25c2551de59e465b;
          if (iVar2 != 0) {
            lVar5 = -0x7e9643df0acdf8c0;
          }
        }
        else if (lVar4 == 0x2f55761114117f10) {
          lVar5 = -0x44e75be649d70485;
LAB_00147d80:
          DAT_0021c688 = DAT_0021c688 ^ 0xe5e5e5e5e5e5e5e5;
          DAT_0021f66f = '\x01';
        }
        else if (lVar4 == 0x309e31f0fbfb7473) {
          DAT_0021f2d8 = 0;
          uVar3 = FUN_002006ac(unaff_x24,&DAT_0021c688);
          lVar5 = -0x20464d4bb0fa1f5c;
          if ((uVar3 & 1) == 0) {
            lVar5 = -0x40468d8be3b7b1c2;
          }
        }
      }
      else if (lVar4 < 0x5e4ec1c291d6bc50) {
        lVar5 = -0x7d6cdc377ae2d00c;
        if ((lVar4 != 0x474660dd6adc49ce) && (lVar5 = lVar4, lVar4 == 0x5c051af6033ba852)) {
          lVar5 = lVar1;
        }
      }
      else if (lVar4 == 0x5e4ec1c291d6bc50) {
        unaff_x24 = *(long *)(param_1 + 0x10);
        lVar5 = 0x474660dd6adc49ce;
        if (unaff_x24 != 0) {
          lVar5 = -0x16832f8e7e0e189a;
        }
      }
      else if (lVar4 == 0x6df9d26133f36c67) {
        lVar5 = -0x45308d6c5db8f8a;
        if (DAT_0021f66f == '\0') {
          lVar5 = 0x2f55761114117f10;
        }
      }
    }
    if (lVar4 < 0x1af75ebd6f232356) {
      if (lVar4 == 0x77e21c1e128dbdb) {
        lVar5 = 0x309e31f0fbfb7473;
        goto LAB_00147d80;
      }
      lVar5 = -0x11e504026d64685a;
      if ((lVar4 != 0x172651ebbec5122c) && (lVar5 = lVar4, lVar4 == 0x184a948e295275f6)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f2d8);
        lVar5 = 0x6df9d26133f36c67;
        if (iVar2 != 0) {
          lVar5 = 0x1af75ebd6f232356;
        }
      }
      goto LAB_001477e0;
    }
    lVar5 = 0x184a948e295275f6;
    if (lVar4 != 0x1af75ebd6f232356) {
      if (lVar4 == 0x25c2551de59e465b) {
        lVar5 = -0x13d91913aabe64e;
        if (DAT_0021f66f == '\0') {
          lVar5 = 0x77e21c1e128dbdb;
        }
      }
      else {
        lVar5 = lVar4;
        if (lVar4 == 0x299741929a47184d) {
          lVar5 = -0xe07a343fe0a8793;
        }
      }
    }
  } while( true );
}

