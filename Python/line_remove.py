filename = "sample2.txt"  

try:
   
    with open(filename, "r") as f:
        lines = f.readlines()

    new_lines = []

    for line in lines:
        words = line.split()
        remove = False

        for w in words:
            if w.lower().startswith('a') and w.lower().endswith('e'):
                remove = True
                break
        
        if not remove:
            new_lines.append(line)

    with open(filename, "w") as f:
        f.writelines(new_lines)

    print("Lines removed successfully from sample2.txt!")

except FileNotFoundError:
    print("sample2.txt not found! Please create the file first.")
