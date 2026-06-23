from pathlib import Path

directory =[r"/home/odiedo123/Codeforces/EASY",
            r"/home/odiedo123/Codeforces/HARD",
            r"/home/odiedo123/Codeforces/MEDIUM",
            r"/home/odiedo123/Codeforces/LEARNING",
            r"/home/odiedo123/Codeforces/SLIGHTLY ABOVE MEDIUM"
]

keep_extensions = {".cpp", ".obj", ".py"}

for element in directory:
    for file_path in Path(element).iterdir():
        if file_path.is_file():
            if file_path.suffix not in keep_extensions:
                print(f"Deleting: {file_path}")
                file_path.unlink()