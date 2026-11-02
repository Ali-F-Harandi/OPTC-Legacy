// M3d: ntyOpenCaller2 @ 0x3a08a00 (Ghidra decompile, true address)
#

/* WARNING: Possible PIC construction at 0x03a08a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a08bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03a08a7c) */
/* WARNING: Removing unreachable block (ram,0x03a08bb4) */

void m3d_3a08a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long unaff_x24;
  long lVar11;
  long unaff_x26;
  long unaff_x29;
  int iStack0000000000000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar5 = (long *)func_0x03f0b2e0();
  func_0x03fa4250();
  *(long **)(unaff_x29 + -0x10) = plVar5;
  *(undefined1 *)(plVar5 + 3) = 0;
  func_0x03fa4260();
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  _iStack0000000000000008 = 0;
  iVar4 = func_0x03fa41e0(plVar5[100],&stack0x00000008,&stack0x00000018);
  plVar8 = in_stack_00000018;
  if ((iVar4 < 0) && (in_stack_00000018 != (long *)0x0)) {
    if ((in_stack_00000018[1] != 0) && (*in_stack_00000018 != 0)) {
      func_0x03f0cbe0();
    }
  }
  else {
    plVar6 = (long *)func_0x03f0b2e0(0x4f8);
    func_0x03f2c330();
    puVar1 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      puVar1 = (undefined8 *)&stack0x00000008;
    }
    uVar7 = func_0x03f2c340(plVar6,param_3,puVar1);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      plVar6 = (long *)0x0;
      bVar3 = false;
    }
    else if (unaff_x24 == 0) {
      bVar3 = true;
    }
    else {
      iVar4 = func_0x03f27550(plVar6[5],unaff_x24 + 8,0x24);
      bVar3 = iVar4 == 0;
    }
    if (in_stack_00000018 == (long *)0x0) {
      if (bVar3) {
        plVar5[1] = (long)plVar6;
        func_0x03fa3430(plVar5 + 9,param_3,0);
        lVar11 = plVar5[10];
        plVar8 = (long *)func_0x03f25160();
        uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8,lVar11);
        uVar10 = 0x810000;
        if ((uVar7 & 1) == 0) {
          uVar10 = 0x1010000;
        }
        *(undefined4 *)((long)plVar5 + 0x44) = uVar10;
        func_0x03fa4260();
        func_0x03fa4200(plVar5[100],plVar6,iStack0000000000000008 != 0);
        func_0x03fa3d60();
        func_0x03fa3fa0();
        uVar9 = func_0x03fa4270();
      }
      else {
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        (**(code **)(*plVar5 + 8))(plVar5);
        uVar9 = 0x80000000;
      }
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      plVar5 = (long *)func_0x03f0b330(uVar9);
      plVar8 = (long *)plVar5[1];
      while (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        plVar8 = (long *)plVar8[2];
        (**(code **)(lVar11 + 8))();
      }
      plVar5[1] = 0;
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 3) = 0;
      if (*plVar5 == 0) {
        return;
      }
    }
    else if ((in_stack_00000018[1] != 0) && (*in_stack_00000018 != 0)) {
      func_0x03f0cbe0();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar2)();
}


