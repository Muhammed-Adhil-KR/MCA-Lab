def join_recursive(lst, index=0):
    if index == len(lst) - 1:
        return lst[index]
    return lst[index] + "-" + join_recursive(lst, index + 1)

items = input("\mEnter list items separated by space: ").split()
print("\mJoined string:", join_recursive(items))
