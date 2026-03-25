#!/usr/bin/env python3
import os
import shutil

# NaznaOS → NaznaOS replacements
OLD = ["naznaos", "NaznaOS", "Naznaos", "NAZNAOS"]
NEW = ["naznaos", "NaznaOS", "Naznaos", "NAZNAOS"]

# Keep the Welch replacements
OLD += ["Noah Juopperi", "NOAH JUOPPERI", "noah juopperi"]
NEW += ["Noah Juopperi", "NOAH JUOPPERI", "noah juopperi"]

def replace_text_in_file(path):
    try:
        with open(path, "r", encoding="utf-8", errors="ignore") as f:
            content = f.read()

        new_content = content
        for old, new in zip(OLD, NEW):
            new_content = new_content.replace(old, new)

        if new_content != content:
            print(f"[CONTENT] Editing file: {path}")
            with open(path, "w", encoding="utf-8", errors="ignore") as f:
                f.write(new_content)

    except Exception as e:
        print(f"[ERROR] Could not edit file {path}: {e}")

def rename_path(path):
    dirname = os.path.dirname(path)
    basename = os.path.basename(path)
    newname = basename

    for old, new in zip(OLD, NEW):
        newname = newname.replace(old, new)

    if newname != basename:
        newpath = os.path.join(dirname, newname)
        print(f"[RENAME] {path} -> {newpath}")
        try:
            shutil.move(path, newpath)
        except Exception as e:
            print(f"[ERROR] Could not rename {path}: {e}")
        return newpath

    return path

def process(root):
    # Replace file contents first
    for dirpath, dirs, files in os.walk(root):
        for file in files:
            replace_text_in_file(os.path.join(dirpath, file))

    # Rename files and directories (deepest first)
    for dirpath, dirs, files in os.walk(root, topdown=False):
        for file in files:
            rename_path(os.path.join(dirpath, file))
        for d in dirs:
            rename_path(os.path.join(dirpath, d))

if __name__ == "__main__":
    print("Starting recursive replacement...")
    process(".")
    print("Done.")
