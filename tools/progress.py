#!/usr/bin/env python3
"""OPTC Legacy — visual progress tracker.

Reads PROGRESS.json and renders the README progress wall:
a weighted overall bar plus per-module block rows (decomp-project style).

Usage:
    python3 tools/progress.py            # print the rendered wall
    python3 tools/progress.py --write    # update README.md between markers
    python3 tools/progress.py --check    # validate PROGRESS.json (CI gate)
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
PROGRESS_PATH = os.path.join(ROOT, "PROGRESS.json")
README_PATH = os.path.join(ROOT, "README.md")

BEGIN = "<!-- PROGRESS:BEGIN -->"
END = "<!-- PROGRESS:END -->"

BLOCKS_PER_MODULE = 20
OVERALL_BLOCKS = 40


def weighted_overall(modules):
    tw = sum(m["weight"] for m in modules)
    s = sum(m["done"] * m["weight"] for m in modules)
    return (s / tw) if tw else 0.0  # done is already on a 0–100 scale


def bar(pct, width, full="█", empty="░"):
    filled = round(pct / 100.0 * width)
    filled = max(0, min(width, filled))
    return full * filled + empty * (width - filled)


def module_blocks(pct):
    width = BLOCKS_PER_MODULE
    filled = int(pct // (100.0 / width))
    filled = min(width, filled)
    cells = ["🟩"] * filled
    if filled < width and pct > 0:
        cells.append("🟨")  # the block currently being worked
        filled += 1
    cells += ["⬜"] * (width - filled)
    return "".join(cells)


def unit_grid(grid):
    per_row = grid.get("per_row", 25)
    cells = ["🟩"] * grid["done"] + ["🟨"] * grid.get("in_progress", 0)
    cells += ["⬜"] * (grid["total"] - len(cells))
    rows = ["".join(cells[i : i + per_row]) for i in range(0, len(cells), per_row)]
    pct = 100.0 * grid["done"] / grid["total"] if grid["total"] else 0
    head = f"**{grid['label']}** — {grid['done']}/{grid['total']} ({pct:.1f}%)"
    return head + "\n\n```text\n" + "\n".join(rows) + "\n```"


def render():
    prog = json.load(open(PROGRESS_PATH, encoding="utf-8"))
    modules = prog["modules"]
    overall = weighted_overall(modules)

    lines = []
    lines.append(f"### 🧱 Decompilation Wall")
    lines.append("")
    lines.append(f"**Overall — {overall:.1f}% decompiled & rebuilt**")
    lines.append("")
    lines.append(f"```text")
    lines.append(f"{bar(overall, OVERALL_BLOCKS)} {overall:5.1f}%")
    lines.append(f"```")
    lines.append("")

    # module wall
    lines.append("| Module | Progress | Status |")
    lines.append("|:---|:---|:---|")
    for m in modules:
        lines.append(
            f"| {m['name']} | `{module_blocks(m['done'])}` {m['done']}% | {m['note']} |"
        )
    lines.append("")

    # per-unit grids (one cell = one real work unit)
    for grid in prog.get("unit_grids", []):
        lines.append(unit_grid(grid))
        lines.append("")

    lines.append(
        "<sub>Regenerate with `python3 tools/progress.py --write`. "
        "Percentages are measured against concrete units (classes, functions, "
        "formats, build targets) — never vibes.</sub>"
    )
    return "\n".join(lines), overall, prog


def write_readme():
    text = open(README_PATH, encoding="utf-8").read()
    wall, overall, _ = render()
    if BEGIN in text and END in text:
        pre, _, post = text.partition(BEGIN)
        _, _, post = post.partition(END)
        text = pre + BEGIN + "\n\n" + wall + "\n\n" + END + post
    else:
        print(f"[-] markers not found in {README_PATH}", file=sys.stderr)
        sys.exit(1)
    open(README_PATH, "w", encoding="utf-8").write(text)
    print(f"[+] README.md progress wall updated (overall {overall:.1f}%)")


def check():
    prog = json.load(open(PROGRESS_PATH, encoding="utf-8"))
    problems = []
    ids = set()
    for m in prog["modules"]:
        if m["id"] in ids:
            problems.append(f"duplicate id {m['id']}")
        ids.add(m["id"])
        if not (0 <= m["done"] <= 100):
            problems.append(f"{m['id']}: done out of range")
        if m["weight"] <= 0:
            problems.append(f"{m['id']}: bad weight")
        for k in ("name", "note"):
            if not m.get(k):
                problems.append(f"{m['id']}: missing {k}")
    for g in prog.get("unit_grids", []):
        if g["done"] + g.get("in_progress", 0) > g["total"]:
            problems.append(f"{g['label']}: grid overflow")
    if problems:
        print("PROGRESS.json INVALID:\n  - " + "\n  - ".join(problems))
        sys.exit(1)
    _, overall, _ = render()
    print(f"PROGRESS.json OK — overall {overall:.1f}%")


if __name__ == "__main__":
    if "--write" in sys.argv:
        write_readme()
    elif "--check" in sys.argv:
        check()
    else:
        wall, overall, _ = render()
        print(wall)
        print(f"\noverall: {overall:.1f}%")
