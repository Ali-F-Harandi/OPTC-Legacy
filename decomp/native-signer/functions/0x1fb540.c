// rea decompile_all
// name: thunk_FUN_001fad90
// address: 0x1fb540
// body: available
// range: 0x1fb540-0x1fb543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_001fad90(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *unaff_x20;
  void *unaff_x21;
  long *unaff_x22;
  void *unaff_x25;
  void *unaff_x26;
  void *pvStack_90;
  void *pvStack_88;
  void *pvStack_80;
  undefined8 *puStack_78;
  
  pvVar4 = (void *)*param_1;
  pvVar1 = (void *)0x144b21bcbeb71cd5;
  if (pvVar4 != (void *)0x0) {
    pvVar1 = (void *)0xf97863d6a7345d18;
  }
  pvVar2 = pvVar1;
  pvVar3 = (void *)0xf97863d6a7345d18;
  pvVar5 = (void *)0xcbd3cf9b144c0f8e;
LAB_001fae34:
  do {
    while (pvVar8 = pvVar5, pvVar7 = pvVar3, pvVar6 = pvVar2, pvVar2 = pvVar6, pvVar3 = pvVar7,
          0x144b21bcbeb71cd4 < (long)pvVar8) {
      if ((long)pvVar8 < 0x521b22f75783dd1d) {
        if ((long)pvVar8 < 0x2ba48ce703af72ba) {
          pvVar5 = (void *)0xbfa86ddfeb9b0a09;
          if (pvVar8 != (void *)0x144b21bcbeb71cd5) {
            if (pvVar8 == (void *)0x18fdc9591ff1c480) {
              pvVar5 = (void *)0x521b22f75783dd1d;
              if (*(long *)((long)pvVar7 + 0x50) != 0) {
                pvVar5 = (void *)0x51c02d96c2cc98f2;
              }
              *param_1 = *(long *)((long)pvVar7 + 0x50);
              unaff_x21 = pvVar7;
            }
            else {
              pvVar5 = pvVar8;
              if (pvVar8 == (void *)0x24abbbfc5d2aac7f) {
                puStack_78 = (undefined8 *)((long)unaff_x21 + 0x38);
                pvVar2 = pvStack_88;
                pvVar5 = (void *)0x64a4671c7146738b;
              }
            }
          }
        }
        else {
          pvVar2 = unaff_x20;
          pvVar5 = (void *)0x64a4671c7146738b;
          if (pvVar8 != (void *)0x2ba48ce703af72ba) {
            if (pvVar8 == (void *)0x39090bd7ea11745f) {
              free(unaff_x25);
              unaff_x20 = (void *)*unaff_x22;
              pvVar2 = pvVar6;
              pvVar5 = (void *)0x706b8823a049caa0;
              if (unaff_x20 != (void *)0x0) {
                pvVar5 = (void *)0x2ba48ce703af72ba;
              }
            }
            else {
              pvVar2 = pvVar6;
              pvVar5 = pvVar8;
              if (pvVar8 == (void *)0x51c02d96c2cc98f2) {
                pvVar5 = (void *)0xa1fdbb56a6f01a7a;
              }
            }
          }
        }
      }
      else if ((long)pvVar8 < 0x706b8823a049caa0) {
        if (pvVar8 == (void *)0x521b22f75783dd1d) {
          param_1[1] = (long)param_1;
          pvVar5 = (void *)0xa1fdbb56a6f01a7a;
        }
        else if (pvVar8 == (void *)0x64a4671c7146738b) {
          pvVar5 = (void *)0xfad87eef1ad0b53c;
          if (*(long *)((long)pvVar6 + 0x10) != 0) {
            pvVar5 = (void *)0xf0bd45a7a1768c98;
          }
          *unaff_x22 = *(long *)((long)pvVar6 + 0x10);
          unaff_x25 = pvVar6;
        }
        else {
          pvVar5 = pvVar8;
          if (pvVar8 == (void *)0x6af93846531afc11) {
            pvVar6 = *(void **)((long)unaff_x25 + 8);
            pvVar7 = (void *)0xf46429f35eb373c3;
            pvVar5 = (void *)0xa9849ec2342cc725;
            pvStack_80 = pvVar6;
LAB_001fae28:
            if (pvVar6 != (void *)0x0) {
              pvVar5 = pvVar7;
            }
          }
        }
      }
      else {
        pvVar5 = (void *)0xfb4ecb7317389532;
        if (((pvVar8 != (void *)0x706b8823a049caa0) &&
            (pvVar5 = (void *)0xe709737dc9cf381a, pvVar8 != (void *)0x747d75e5c403e07e)) &&
           (pvVar5 = pvVar8, pvVar8 == (void *)0x7cb93cf37aea7cf9)) {
          free(pvStack_90);
          pvVar5 = (void *)0xe709737dc9cf381a;
        }
      }
    }
    if ((long)pvVar8 < -0xf42ba585e897368) {
      if ((long)pvVar8 < -0x405792201464f5f7) {
        if (pvVar8 == (void *)0xa1fdbb56a6f01a7a) {
          FUN_001f87ec(unaff_x21);
          unaff_x22 = (long *)((long)unaff_x21 + 0x30);
          pvStack_88 = (void *)*unaff_x22;
          pvVar5 = (void *)0xaad453a52ded0e31;
          if (pvStack_88 != (void *)0x0) {
            pvVar5 = (void *)0x24abbbfc5d2aac7f;
          }
        }
        else {
          pvVar5 = (void *)0x39090bd7ea11745f;
          if ((pvVar8 != (void *)0xa9849ec2342cc725) &&
             (pvVar5 = pvVar8, pvVar8 == (void *)0xaad453a52ded0e31)) {
            pvVar5 = (void *)0xfb4ecb7317389532;
          }
        }
      }
      else if ((long)pvVar8 < -0x2d6c703c376e87a2) {
        pvVar5 = pvVar1;
        if ((pvVar8 != (void *)0xcbd3cf9b144c0f8e) &&
           (pvVar5 = pvVar8, pvVar8 == (void *)0xbfa86ddfeb9b0a09)) {
          *param_1 = 0;
          param_1[1] = (long)param_1;
          return;
        }
      }
      else {
        pvVar5 = (void *)0xbfa86ddfeb9b0a09;
        if ((pvVar8 != (void *)0xd2938fc3c891785e) &&
           (pvVar5 = pvVar8, pvVar8 == (void *)0xe709737dc9cf381a)) {
          free(unaff_x21);
          unaff_x26 = (void *)*param_1;
          pvVar7 = (void *)0xf37a556e0bbc46bf;
          pvVar5 = (void *)0xd2938fc3c891785e;
          pvVar6 = unaff_x26;
          goto LAB_001fae28;
        }
      }
      goto LAB_001fae34;
    }
    if ((long)pvVar8 < -0x6879c2958cba2e8) {
      pvVar5 = (void *)0x6af93846531afc11;
      if (((pvVar8 != (void *)0xf0bd45a7a1768c98) &&
          (pvVar3 = unaff_x26, pvVar5 = (void *)0x18fdc9591ff1c480,
          pvVar8 != (void *)0xf37a556e0bbc46bf)) &&
         (pvVar3 = pvVar7, pvVar5 = pvVar8, pvVar8 == (void *)0xf46429f35eb373c3)) {
        free(pvStack_80);
        pvVar5 = (void *)0x39090bd7ea11745f;
      }
    }
    else {
      pvVar3 = pvVar4;
      pvVar5 = (void *)0x18fdc9591ff1c480;
      if (pvVar8 != (void *)0xf97863d6a7345d18) {
        if (pvVar8 == (void *)0xfad87eef1ad0b53c) {
          *puStack_78 = unaff_x22;
          pvVar3 = pvVar7;
          pvVar5 = (void *)0x6af93846531afc11;
        }
        else {
          pvVar3 = pvVar7;
          pvVar5 = pvVar8;
          if (pvVar8 == (void *)0xfb4ecb7317389532) {
            pvStack_90 = *(void **)((long)unaff_x21 + 0x48);
            *unaff_x22 = 0;
            *(long **)((long)unaff_x21 + 0x38) = unaff_x22;
            pvVar5 = (void *)0x747d75e5c403e07e;
            if (pvStack_90 != (void *)0x0) {
              pvVar5 = (void *)0x7cb93cf37aea7cf9;
            }
          }
        }
      }
    }
  } while( true );
}

