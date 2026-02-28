# 4.Write a program to print all even numbers from a given list in the given order until you reach number 237 or end of the list.

def even(lst, index=0):
    if index >= len(lst) or lst[index] == 237:
        return
    if lst[index] % 2 == 0:
        print(lst[index])

    even(lst, index + 1)

numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

print("Even numbers until 237:")
even(numbers)
