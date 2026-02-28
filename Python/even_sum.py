def sum_even_fib_terms(n):
    a, b = 0, 1
    total = 0

    for _ in range(n):
        if a % 2 == 0:
            total += a
        a, b = b, a + b

    return total

n = int(input("\nEnter number of Fibonacci terms: "))
print("\nSum of even Fibonacci terms =", sum_even_fib_terms(n))
