# Write a program to search an item in a given list and display the number of occurrences of the given item

def count(lst, item):
    if not lst:
        return 0
    if lst[0] == item:
        return 1 + count(lst[1:], item)
    else:
        return count(lst[1:], item)

items = input("Enter the list items separated by spaces: ").split()
search_item = input("Enter the item to search: ")
print(f"The item '{search_item}' occurs {count(items, search_item)} time(s) in the list.")
