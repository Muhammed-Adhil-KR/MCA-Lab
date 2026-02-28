def reverse(s):
    if not s: 
        return s
   
    return ' '.join(s.split()[::-1])

name = input("Enter Full Name: ")
print("Reversed Name is:", reverse(name))