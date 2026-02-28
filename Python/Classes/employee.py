class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def display(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")

class Employee(Person):
    def __init__(self, name, age, emp_id):
        super().__init__(name, age)  
        self.emp_id = emp_id
    def display(self):
        super().display()  
        print(f"Employee ID: {self.emp_id}")

class Faculty(Employee):
    def __init__(self, name, age, emp_id, department):
        super().__init__(name, age, emp_id)  
        self.department = department
    def display(self):
        super().display()  
        print(f"Department: {self.department}")

class Researcher:
    def can_do_research(self):
        return "This person can conduct research."

class Professor(Faculty, Researcher):
    def __init__(self, name, age, emp_id, department):
        Faculty.__init__(self, name, age, emp_id, department)  
    def display(self):
        super().display()  
        print(self.can_do_research())  

professor = Professor("Dr. Adhil", 45, "EMP003", "Computer Science")
professor.display()
