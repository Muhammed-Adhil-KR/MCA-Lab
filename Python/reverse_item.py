def reverse_items(lst):
    return [item[::-1] for item in lst]

items = input("\nEnter items separated by space: \n").split()
result = reverse_items(items)

print("\nReversed items:", result)

