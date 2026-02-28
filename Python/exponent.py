def is_power_of_two(n): 
    if n < 0:
        raise ValueError("Negative input is not allowed.\n")
    if n == 0:
        return False
    return (n & (n - 1)) == 0

try:
    num = int(input("\nEnter a number: "))
    if is_power_of_two(num):
        print(num, "is a power of 2\n")
    else:
        print(num, "is NOT a power of 2\n")
except ValueError as e:
    print("\nError:", e)
