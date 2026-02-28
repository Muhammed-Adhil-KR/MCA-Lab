def arrange_string(s):
    lower = ""
    upper = ""

    for ch in s:
        if ch.islower():
            lower += ch
        else:
            upper += ch

    return lower + upper

s = input("Enter a string: ")
print("Rearranged string:", arrange_string(s))
