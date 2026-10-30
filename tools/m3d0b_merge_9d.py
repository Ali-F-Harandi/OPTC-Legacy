#!/usr/bin/env python3
"""M3d-0b: apply the 0x9d patch (0x11b4/0x3188 merge) -> m2/9d_module/merged.bin"""
import os
import sys

sys.path.insert(0, "/home/z/my-project/re-work/repo-git/tools")
import stage2_crypto as sc

RW = "/home/z/my-project/download/re-work"
img = open(f"{RW}/m3/m9d_image.bin", "rb").read()
pimg = open(f"{RW}/m3/m9d_patch.bin", "rb").read()
pd = sc.parse_patch(pimg)
merged, stats = sc.merge_patch(bytearray(img), pd, base=0)
os.makedirs(f"{RW}/m2/9d_module", exist_ok=True)
open(f"{RW}/m2/9d_module/merged.bin", "wb").write(bytes(merged))
print(f"image {len(img):#x} + patch {len(pimg):#x} -> merged {len(merged):#x} B")
print("merge stats:", stats if not isinstance(stats, dict) else
      {k: v for k, v in stats.items() if not isinstance(v, list)})
