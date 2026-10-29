// rea decompile_all
// name: FUN_0018e6a4
// address: 0x18e6a4
// body: available
// range: 0x18e6a4-0x18eb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018e6a4(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x24;
  
  lVar3 = -0x403e3b44e0ee251c;
LAB_0018e764:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, 0x518558a6e709486 < lVar2) {
      if (lVar2 < 0x33b201f32e8e27c9) {
        if (lVar2 == 0x518558a6e709487) {
          lVar3 = -0x7977feb6284f9313;
          if (unaff_x24 != 0) {
            lVar3 = 0x48f5d9219641c8f;
          }
        }
        else if (lVar2 == 0x57196b76580b349) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x37bf67e87564fa00;
          if (unaff_x24 != 0) {
            lVar3 = 0x33b201f32e8e27c9;
          }
LAB_0018e75c:
          *param_1 = 0x11;
        }
        else if (lVar2 == 0x1f7e5cef63ae91f3) {
          DAT_0021e070 = DAT_0021e070 ^ 0xe1;
          DAT_0021e071 = DAT_0021e071 ^ 0xe1;
          DAT_0021e072 = DAT_0021e072 ^ 0xe1;
          DAT_0021e073 = DAT_0021e073 ^ 0xe1;
          _DAT_0021e060 = _DAT_0021e060 ^ 0xe1e1e1e1e1e1e1e1;
          uRam000000000021e068 = uRam000000000021e068 ^ 0xe1e1e1e1e1e1e1e1;
          DAT_0021f8ed = '\x01';
          lVar3 = 0x569359db88b7db3a;
        }
      }
      else if (lVar2 < 0x569359db88b7db3a) {
        lVar3 = 0x35218a7b0c15bbac;
        if ((lVar2 != 0x33b201f32e8e27c9) && (lVar3 = lVar2, lVar2 == 0x35218a7b0c15bbac)) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x24);
          lVar3 = -0x271a79da635fd003;
        }
      }
      else if (lVar2 == 0x569359db88b7db3a) {
        DAT_0021f8ec = 0;
        unaff_x24 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e060);
        lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x518558a6e709487;
        if (lVar2 != 0) {
          lVar3 = 0x57196b76580b349;
        }
      }
      else if (lVar2 == 0x665a87b7424ea791) {
        lVar3 = -0x433eba306204cb01;
        if (DAT_0021f8ed == '\0') {
          lVar3 = 0x1f7e5cef63ae91f3;
        }
      }
    }
    if (-0x37bf67e87564fa01 < lVar2) {
      if (lVar2 < -0xb110c8706761653) {
        lVar3 = -0x271a79da635fd003;
        if ((lVar2 != -0x37bf67e87564fa00) && (lVar3 = lVar2, lVar2 == -0x271a79da635fd003)) {
          return;
        }
      }
      else {
        lVar3 = -0x77f907de888bf9fc;
        if ((lVar2 != -0xb110c8706761653) && (lVar3 = lVar2, lVar2 == 0x48f5d9219641c8f)) {
          (**(code **)(*param_2 + 0x70))(param_2,unaff_x24,param_3);
          lVar3 = 0x35218a7b0c15bbac;
        }
      }
      goto LAB_0018e764;
    }
    if (lVar2 < -0x433eba306204cb01) {
      if (lVar2 == -0x7977feb6284f9313) {
        lVar3 = -0x271a79da635fd003;
        goto LAB_0018e75c;
      }
      if (lVar2 == -0x77f907de888bf9fc) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f8ec);
        lVar3 = 0x665a87b7424ea791;
        if (iVar1 != 0) {
          lVar3 = -0xb110c8706761653;
        }
      }
    }
    else {
      lVar3 = 0x569359db88b7db3a;
      if ((lVar2 != -0x433eba306204cb01) && (lVar3 = lVar2, lVar2 == -0x403e3b44e0ee251c)) {
        lVar3 = -0x77f907de888bf9fc;
      }
    }
  } while( true );
}

