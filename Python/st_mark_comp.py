class Student:
    def __init__(self, name, m1, m2):
        self.name = name
        self.m1 = m1
        self.m2 = m2

    def percentage(self):
        return (self.m1 + self.m2) / 2


print("Enter details for Student 1:")
name1 = input("Name: ")
m1_1 = int(input("Maths marks: "))
m2_1 = int(input("Computer marks: "))

print("\nEnter details for Student 2:")
name2 = input("Name: ")
m1_2 = int(input("Maths marks: "))
m2_2 = int(input("Computer marks: "))

s1 = Student(name1, m1_1, m2_1)
s2 = Student(name2, m1_2, m2_2)


print("\n--- Comparison Based on Percentage ---")
if s1.percentage() > s2.percentage():
    print(f"{s1.name} has a higher percentage.")
elif s2.percentage() > s1.percentage():
    print(f"{s2.name} has a higher percentage.")
else:
    print("Both students have equal percentage.")
