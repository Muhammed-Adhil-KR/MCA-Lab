def nearly_equal(a, b):
    if abs(len(a) - len(b)) > 1:
        return False

    i = j = 0
    diff = 0

    while i < len(a) and j < len(b):
        if a[i] != b[j]:
            diff += 1
            if diff > 1:
                return False
            
            if len(a) == len(b):
                i += 1
                j += 1

            elif len(a) > len(b):
                i += 1
            else:
                j += 1
        else:
            i += 1
            j += 1
    if i < len(a) or j < len(b):
        diff += 1

    return diff == 1

s1 = input("\nEnter first string: ")
s2 = input("\nEnter second string: ")
print("\nNearly equal?", nearly_equal(s1, s2))
