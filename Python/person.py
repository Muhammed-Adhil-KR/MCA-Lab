class Person:
    def __init__(self, name, phno):
        self.name = name
        self.phno = phno

class Dept:
    def __init__(self, dept_name, location):
        self.dept_name = dept_name
        self.location = location

class Employee(Person, Dept):
    def __init__(self, name, phno, dept_name, location, designation, salary):
        Person.__init__(self, name, phno)
        Dept.__init__(self, dept_name, location)
        self.designation = designation
        self.salary = salary

    def increment(self):
        self.salary *= 1.10 

    def display(self):
        print("\t\n--- Employee Details ---")
        print("\tName:", self.name)
        print("\tPhone:", self.phno)
        print("\tDepartment:", self.dept_name)
        print("\tLocation:", self.location)
        print("\tDesignation:", self.designation)
        print("\tSalary after increment:", self.salary)

name = input("\nEnter employee name: ")
ph = input("\nEnter phone number: ")
dept = input("\nEnter department name: ")
loc = input("\nEnter department location: ")
desig = input("\nEnter designation: ")
sal = float(input("\nEnter salary: "))

emp = Employee(name, ph, dept, loc, desig, sal)
emp.increment()
emp.display()
