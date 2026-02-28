def extract_lines(filename):
    with open(filename, "r") as f:
        for line in f:
            words = line.split()
            for w in words:
                if w.lower().startswith('s') and w.lower().endswith('e'):
                    print(line.strip())
                    break 

extract_lines("sample.txt")
