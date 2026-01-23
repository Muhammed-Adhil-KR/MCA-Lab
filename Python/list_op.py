# 3

list1=input("List 1 colors: ").split(',')
list2=input("List 2 colors: ").split(',')
print("Unique colors: ",[c for c in list1 if c not in list2])

item=input("Enter item seperated by spaces: ").split()
print("Without duplicates: ",list(set(item)))

list=input("Enter elements (Leave blank for empty): ").split()
print("Empty" if not list else "Not empty")


# 4

c1=list(map(int,input("Enter Numbers: ").split(',')))
c2=list(map(int,input("Enter Numbers: ").split(',')))
print("Length is same" if len(c1)==len(c2) else "Lengths are not same")
print("Sum is same "if sum(c1)==sum(c2) else "Sum are not same")
print("Value oocure in both" if [x for x in c1 if x in c2] else "No value occure in both")