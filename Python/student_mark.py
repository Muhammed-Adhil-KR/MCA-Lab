class Person:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll

class Marks:
    def __init__(self, maths, computer):
        self.maths = maths
        self.computer = computer

class Student(Person, Marks):
    def __init__(self, name, roll, maths, computer):
        Person.__init__(self, name, roll)
        Marks.__init__(self, maths, computer)

    def display(self):
        total = self.maths + self.computer
        percentage = total / 2

        print("\n--- Student Details ---")
        print("\nName:", self.name)
        print("\nRoll No:", self.roll)
        print("\nMaths:", self.maths)
        print("\nComputer:", self.computer)
        print("\nPercentage:", percentage)

        if percentage >= 50:
            print("\nStatus: PASS")
        else:
            print("\nStatus: FAIL")

name = input("\nEnter name: ")
roll = input("\nEnter roll number: ")
maths = int(input("\nEnter Maths marks: "))
computer = int(input("\nEnter Computer marks: "))

student = Student(name, roll, maths, computer)
student.display()
