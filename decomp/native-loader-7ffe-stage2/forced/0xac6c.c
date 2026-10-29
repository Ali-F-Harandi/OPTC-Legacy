
undefined1 FORCED_0xac6c(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  
  do {
    if (*(char *)(param_1 + -0x68) == '/') {
      FUN_0000c440(*(undefined8 *)(unaff_x29 + 0x30f0),unaff_x29 + 0x20b8);
    }
    else {
      uVar3 = FUN_0000c2ec(*(undefined8 *)(unaff_x29 + 0x30f0),0x2f);
      *(undefined8 *)(unaff_x29 + 0x30d8) = uVar3;
      if (*(long *)(unaff_x29 + 0x30d8) != 0) {
        **(undefined1 **)(unaff_x29 + 0x30d8) = 0;
      }
      FUN_0000c548(*(undefined8 *)(unaff_x29 + 0x30f0),unaff_x29 + 0x30b8);
      FUN_0000c548(*(undefined8 *)(unaff_x29 + 0x30f0),unaff_x29 + 0x20b8);
      uVar1 = FUN_0000d1f0(*(undefined8 *)(unaff_x29 + 0x30f0),0x1000);
      *(undefined1 *)(unaff_x29 + 0x311f) = uVar1;
    }
    uVar3 = FUN_0000be74(*(undefined8 *)(unaff_x29 + 0x30f0));
    *(undefined8 *)(unaff_x29 + 0x30d0) = uVar3;
    if ((*(long *)(unaff_x29 + 0x30d0) != 0) &&
       (*(char *)(*(long *)(unaff_x29 + 0x30f0) + *(long *)(unaff_x29 + 0x30d0) + -1) == '/')) {
      *(undefined1 *)(*(long *)(unaff_x29 + 0x30f0) + *(long *)(unaff_x29 + 0x30d0) + -1) = 0;
    }
    do {
      do {
        do {
          do {
            *(long *)(unaff_x29 + 0x3110) =
                 *(long *)(unaff_x29 + 0x3110) + *(long *)(unaff_x29 + 0x3108);
            if ((**(char **)(unaff_x29 + 0x3110) == '\0') ||
               (*(long *)(unaff_x29 + 0x3110) = *(long *)(unaff_x29 + 0x3110) + 1,
               **(char **)(unaff_x29 + 0x3110) == '\0')) {
LAB_0000ad80:
              if (**(char **)(unaff_x29 + 0x30f0) == '\0') {
                FUN_0000c440(*(undefined8 *)(unaff_x29 + 0x30f0),unaff_x29 + 0x30b8);
              }
              if (*(char *)(unaff_x29 + 0x311f) != '\0') {
                FUN_0000c440(unaff_x29 + 0xb8,*(undefined8 *)(unaff_x29 + 0x30f0));
              }
              if (*(char *)(unaff_x29 + 0x311f) != '\0') {
                uVar3 = FUN_0000be74(unaff_x29 + 0xb8);
                *(undefined8 *)(unaff_x29 + 0x30c8) = uVar3;
                if (*(ulong *)(unaff_x29 + 0x18) < *(ulong *)(unaff_x29 + 0x30c8)) {
                  *(undefined1 *)(unaff_x29 + 0x311f) = 0;
                }
              }
              if (*(char *)(unaff_x29 + 0x311f) != '\0') {
                FUN_0000c440(*(undefined8 *)(unaff_x29 + 0x20),unaff_x29 + 0xb8);
              }
              return *(undefined1 *)(unaff_x29 + 0x311f);
            }
            *(undefined8 *)(unaff_x29 + 0x3108) = 0;
            uVar3 = FUN_0000c25c(*(undefined8 *)(unaff_x29 + 0x3110),0x2f);
            *(undefined8 *)(unaff_x29 + 0x30e8) = uVar3;
            if (*(long *)(unaff_x29 + 0x30e8) == 0) {
              uVar3 = FUN_0000be74(*(undefined8 *)(unaff_x29 + 0x3110));
              *(undefined8 *)(unaff_x29 + 0x3108) = uVar3;
            }
            else {
              *(long *)(unaff_x29 + 0x3108) =
                   *(long *)(unaff_x29 + 0x30e8) - *(long *)(unaff_x29 + 0x3110);
            }
          } while (*(long *)(unaff_x29 + 0x3108) == 0);
          FUN_0000c548(*(undefined8 *)(unaff_x29 + 0x30f0),unaff_x29 + 0x30b8);
          FUN_0000c590(*(undefined8 *)(unaff_x29 + 0x30f0),*(undefined8 *)(unaff_x29 + 0x3110),
                       *(undefined8 *)(unaff_x29 + 0x3108));
        } while (*(char *)(unaff_x29 + 0x311f) == '\0');
        if (*(char *)(unaff_x29 + 0x311f) != '\0') {
          uVar2 = FUN_0000fb68(0x4f,0xffffffffffffff9c,*(undefined8 *)(unaff_x29 + 0x30f0),
                               unaff_x29 + 0x38,0x100,0,0);
          *(undefined4 *)(unaff_x29 + 0x30e4) = uVar2;
          if (*(int *)(unaff_x29 + 0x30e4) != 0) {
            *(undefined1 *)(unaff_x29 + 0x311f) = 0;
          }
        }
      } while ((*(char *)(unaff_x29 + 0x311f) == '\0') ||
              ((*(uint *)(unaff_x29 + 0x48) & 0xf000) != 0xa000));
      uVar2 = FUN_0000fb68(0x4e,0xffffffffffffff9c,*(undefined8 *)(unaff_x29 + 0x30f0),
                           unaff_x29 + 0x20b8,0x1000,0,0);
      *(undefined4 *)(unaff_x29 + 0x30e0) = uVar2;
      if (-1 < *(int *)(unaff_x29 + 0x30e0)) {
        *(undefined1 *)(unaff_x29 + 0x20b8 + (long)*(int *)(unaff_x29 + 0x30e0)) = 0;
      }
      if (*(int *)(unaff_x29 + 0x30e0) < 0) {
        *(undefined1 *)(unaff_x29 + 0x311f) = 0;
        goto LAB_0000ad80;
      }
    } while (*(char *)(unaff_x29 + 0x311f) == '\0');
    param_1 = unaff_x29 + 0x2120;
  } while( true );
}


