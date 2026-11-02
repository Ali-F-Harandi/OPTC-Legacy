// rea decompile_all
// name: FUN_001fd070
// address: 0x1fd070
// body: available
// range: 0x1fd070-0x1fd37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fd070(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *in_x10;
  void *pvVar6;
  void *pvVar7;
  void *unaff_x24;
  
  pvVar4 = (void *)*param_1;
  pvVar3 = (void *)0xfbd7ef6ff797a0b8;
  pvVar1 = (void *)0x53e14c28908eeeeb;
  if (pvVar4 != (void *)0x0) {
    pvVar1 = pvVar3;
  }
  pvVar2 = (void *)0xa952fa75448bcb41;
  do {
    while( true ) {
      while (pvVar7 = pvVar2, pvVar6 = in_x10, in_x10 = pvVar6, -0x244c08061ede3ca7 < (long)pvVar7)
      {
        if ((long)pvVar7 < 0x4101bf80446bdc20) {
          if (pvVar7 == (void *)0xdbb3f7f9e121c35a) {
            lVar5 = *(long *)((long)pvVar6 + 0x60);
            *param_1 = lVar5;
            pvVar2 = (void *)0xa6454b078cdf6a1e;
            unaff_x24 = pvVar6;
            if (lVar5 != 0) {
              pvVar2 = (void *)0x4101bf80446bdc20;
            }
          }
          else {
            pvVar2 = pvVar7;
            if (pvVar7 == (void *)0xfbd7ef6ff797a0b8) {
              in_x10 = pvVar4;
              pvVar2 = (void *)0xdbb3f7f9e121c35a;
            }
          }
        }
        else {
          pvVar2 = (void *)0x54cc8c62117e2258;
          if (((pvVar7 != (void *)0x4101bf80446bdc20) &&
              (pvVar2 = (void *)0xca62b1ef4c4443c4, pvVar7 != (void *)0x53e14c28908eeeeb)) &&
             (pvVar2 = pvVar7, pvVar7 == (void *)0x54cc8c62117e2258)) {
            FUN_001f6d20((long)unaff_x24 + 0x28);
            FUN_001f60b0((long)unaff_x24 + 0x10);
            *(undefined8 *)((long)unaff_x24 + 0x20) = 0;
            FUN_001f52f0(unaff_x24);
            FUN_001f7a0c((long)unaff_x24 + 0x40);
            FUN_001fa06c((long)unaff_x24 + 0x50);
            free(unaff_x24);
            pvVar3 = (void *)*param_1;
            pvVar2 = (void *)0xaf1ab327f0d9ace8;
            if (pvVar3 != (void *)0x0) {
              pvVar2 = (void *)0x8bb818770b2cd537;
            }
          }
        }
      }
      if (-0x56ad058abb7434c0 < (long)pvVar7) break;
      in_x10 = pvVar3;
      pvVar2 = (void *)0xdbb3f7f9e121c35a;
      if ((pvVar7 != (void *)0x8bb818770b2cd537) &&
         (in_x10 = pvVar6, pvVar2 = pvVar7, pvVar7 == (void *)0xa6454b078cdf6a1e)) {
        param_1[1] = (long)param_1;
        pvVar2 = (void *)0x54cc8c62117e2258;
      }
    }
    pvVar2 = pvVar1;
  } while (((pvVar7 == (void *)0xa952fa75448bcb41) ||
           (pvVar2 = (void *)0xca62b1ef4c4443c4, pvVar7 == (void *)0xaf1ab327f0d9ace8)) ||
          (pvVar2 = pvVar7, pvVar7 != (void *)0xca62b1ef4c4443c4));
  *param_1 = 0;
  param_1[1] = (long)param_1;
  return;
}

