from pathlib import Path

directory =[r"C:\Users\Jed\Codeforces\EASY",
            r"C:\Users\Jed\Codeforces\MEDIUM",
            r"C:\Users\Jed\Codeforces\LEARNING",
            r"C:\Users\Jed\Codeforces\SLIGHTLY ABOVE MEDIUM"
]

keep_extensions = {".cpp", ".obj", ".py"}

for element in directory:
    for file_path in Path(element).iterdir():
        if file_path.is_file():
            if file_path.suffix not in keep_extensions:
                print(f"Deleting: {file_path}")
                file_path.unlink()