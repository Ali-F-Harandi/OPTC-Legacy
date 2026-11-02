
undefined1 FORCED_0x2658(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long unaff_x29;
  
  do {
    if (*param_1 != 1) {
      *(int *)(unaff_x29 + 0x8d8) = *(int *)(unaff_x29 + 0x8d8) + 1;
      goto LAB_00002690;
    }
    if ((*(uint *)(*(long *)(unaff_x29 + 0x898) + 4) & 1) == 0) {
      *(undefined1 *)(unaff_x29 + 0x8dc) = 1;
    }
LAB_000026a0:
    do {
      do {
        if (*(char *)(unaff_x29 + 0x8dc) == '\x01') goto LAB_000026b8;
        while( true ) {
          do {
            if (*(char *)(unaff_x29 + 0x8df) == '\0') goto LAB_00002704;
            *(long *)(unaff_x29 + 0x8d0) = unaff_x29 + 0x460;
            if (*(char *)(unaff_x29 + 0x8df) != '\0') {
              *(undefined1 *)(unaff_x29 + 0x897) = 0;
              uVar1 = FUN_00009a58(unaff_x29 + 0x897,*(undefined8 *)(unaff_x29 + 0x8d0),
                                   *(undefined8 *)(unaff_x29 + 0x30));
              *(undefined1 *)(unaff_x29 + 0x8df) = uVar1;
              if (*(char *)(unaff_x29 + 0x897) != '\0') goto LAB_00002704;
            }
          } while ((((*(char *)(unaff_x29 + 0x8df) != '\0') &&
                    (*(long *)(*(long *)(unaff_x29 + 0x8d0) + 0x10) != 0)) ||
                   ((*(char *)(unaff_x29 + 0x8df) != '\0' &&
                    ((*(uint *)(*(long *)(unaff_x29 + 0x8d0) + 0x18) & 4) == 0)))) ||
                  ((*(char *)(unaff_x29 + 0x8df) != '\0' &&
                   (iVar2 = FUN_0000bf80(*(long *)(unaff_x29 + 0x8d0) + 0x2c,unaff_x29 + 0x60),
                   iVar2 != 0))));
          if ((*(char *)(unaff_x29 + 0x8df) != '\0') && (*(char *)(unaff_x29 + 0x8dd) != '\x01'))
          break;
LAB_000026b8:
          if (*(char *)(unaff_x29 + 0x8df) != '\0') {
            *(undefined1 *)(unaff_x29 + 0x8de) = 1;
            if (*(long *)(unaff_x29 + 0x28) != 0) {
              FUN_0000bd64(*(undefined8 *)(unaff_x29 + 0x28),*(undefined8 *)(unaff_x29 + 0x8d0),
                           0x430);
            }
LAB_00002704:
            if (*(char *)(unaff_x29 + 0x8df) != '\0') {
              uVar1 = FUN_0000a774(*(undefined8 *)(unaff_x29 + 0x30));
              *(undefined1 *)(unaff_x29 + 0x8df) = uVar1;
            }
            if (*(long *)(unaff_x29 + 0x20) != 0) {
              **(undefined1 **)(unaff_x29 + 0x20) = *(undefined1 *)(unaff_x29 + 0x8de);
            }
            return *(undefined1 *)(unaff_x29 + 0x8df);
          }
        }
        *(undefined1 *)(unaff_x29 + 0x8dc) = 0;
        if ((*(uint *)(*(long *)(unaff_x29 + 0x8d0) + 0x18) & 1) != 0) {
          *(undefined1 *)(unaff_x29 + 0x8dc) = 1;
          goto LAB_000026a0;
        }
        *(undefined8 *)(unaff_x29 + 0x8c8) = **(undefined8 **)(unaff_x29 + 0x8d0);
        *(undefined8 *)(unaff_x29 + 0x8c0) = *(undefined8 *)(unaff_x29 + 0x8c8);
      } while ((((**(char **)(unaff_x29 + 0x8c0) != '\x7f') ||
                (*(char *)(*(long *)(unaff_x29 + 0x8c0) + 1) != 'E')) ||
               (*(char *)(*(long *)(unaff_x29 + 0x8c0) + 2) != 'L')) ||
              (*(char *)(*(long *)(unaff_x29 + 0x8c0) + 3) != 'F'));
      if (*(char *)(unaff_x29 + 0x1f) != '\0') {
        *(undefined8 *)(unaff_x29 + 0x8b8) = **(undefined8 **)(unaff_x29 + 0x8d0);
        *(undefined4 *)(unaff_x29 + 0x8b4) = 0;
        uVar3 = FUN_00004638(*(undefined8 *)(unaff_x29 + 0x8b8),unaff_x29 + 0x40);
        *(undefined4 *)(unaff_x29 + 0x8b4) = uVar3;
        if (*(int *)(unaff_x29 + 0x8b4) != 0) {
          *(undefined1 *)(unaff_x29 + 0x8dc) = 1;
        }
        goto LAB_000026a0;
      }
      *(long *)(unaff_x29 + 0x8a8) =
           *(long *)(unaff_x29 + 0x8c0) + *(long *)(*(long *)(unaff_x29 + 0x8c0) + 0x20);
      *(uint *)(unaff_x29 + 0x8a4) = (uint)*(ushort *)(*(long *)(unaff_x29 + 0x8c0) + 0x38);
      *(undefined4 *)(unaff_x29 + 0x8d8) = 0;
LAB_00002690:
    } while (*(int *)(unaff_x29 + 0x8a4) <= *(int *)(unaff_x29 + 0x8d8));
    *(long *)(unaff_x29 + 0x898) =
         *(long *)(unaff_x29 + 0x8a8) + (long)*(int *)(unaff_x29 + 0x8d8) * 0x38;
    param_1 = *(int **)(unaff_x29 + 0x898);
  } while( true );
}


