// rea decompile_all
// name: FUN_001e53f4
// address: 0x1e53f4
// body: available
// range: 0x1e53f4-0x1e551f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_001e53f4(void *param_1,size_t param_2)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *pvVar3;
  long lVar4;
  
  __dest = malloc(param_2 + 1);
  lVar1 = 0x3ad7c4eff58bcc67;
  if (__dest != (void *)0x0) {
    lVar1 = -0x74a0fd83975bb29d;
  }
  pvVar3 = __dest;
  lVar2 = 0x548fc1c84959d43b;
  do {
    while (lVar4 = lVar2, lVar4 < 0x548fc1c84959d43b) {
      if (lVar4 == -0x74a0fd83975bb29d) {
        *(undefined1 *)((long)__dest + param_2) = 0;
        memcpy(__dest,param_1,param_2);
        pvVar3 = __dest;
        lVar2 = 0x766c039d1f7e793a;
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == 0x3ad7c4eff58bcc67) {
          pvVar3 = (void *)0x0;
          lVar2 = 0x766c039d1f7e793a;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar4 == 0x548fc1c84959d43b) || (lVar2 = lVar4, lVar4 != 0x766c039d1f7e793a));
  return pvVar3;
}

