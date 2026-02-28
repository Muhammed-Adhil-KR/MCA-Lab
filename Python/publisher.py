class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author

    def display(self):
        if hasattr(self, 'publisher'):
            print(f"\n{self.title} written by {self.author} is published by {self.publisher}\n")
        else:
            print(f"\n{self.title} written by {self.author} is published by *Unknown Publisher*\n")

b1 = Book("Python Basics", "John Lock")
b1.display()  

b1.publisher = "ABC Publications"
b1.display()
