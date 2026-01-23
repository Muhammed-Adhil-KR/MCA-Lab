# 1

s=input("Enter a string: ")
print(s[0]+s[1:].replace(s[0],'$'))

s=input("Enter a string: ")
print(s[-1]+s[1:-1]+s[0] if len(s)>1 else s)


# 2

s1=input("Enter first string: ")
s2=input("Enter second string: ")
s1_swapped=s2[0]+s1[1:]
s2_swapped=s1[0]+s2[1:]
print(s1_swapped +" "+ s2_swapped)

colors=input("Enter colors seperated by commas: ").split(',')
colors=[c.strip() for c in colors]
print("Alternate colors: ",colors[::2])