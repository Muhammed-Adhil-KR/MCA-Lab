print("Armstrong numbers between 100 and 500:")

for num in range(100, 501):
    s = str(num)
    a, b, c = int(s[0]), int(s[1]), int(s[2])

    if a**3 + b**3 + c**3 == num:
        print(num)
