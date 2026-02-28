def middle_three(s):
    if len(s) <= 7 or len(s) % 2 == 0:
        raise ValueError("String must be of odd length greater than 7.")

    mid = len(s) // 2
    return s[mid-1 : mid+2]

s = input("Enter a string (odd length > 7): ")
try:
    print("Middle three characters:", middle_three(s))
except ValueError as e:
    print("Error:", e)
