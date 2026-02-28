#Create class Engine(__power) and Wheels(__size).Derive the class Car(__model) from Engine & Wheels.Display details of the car using method overriding.

class Engine:
    def __init__(self, power):
        self.__power = power 

    def display_engine(self):
        return f"Engine Power: {self.__power} HP"

class Wheels:
    def __init__(self, size):
        self.__size = size  

    def display_wheels(self):
        return f"Wheel Size: {self.__size} inches"


class Car(Engine, Wheels):
    def __init__(self, power, size, model):
        Engine.__init__(self, power)
        Wheels.__init__(self, size)
        self.__model = model  

    def display_details(self):
        print(f"Car Model: {self.__model}")
        print(self.display_engine())
        print(self.display_wheels())

car = Car(power=150, size=16, model="Toyota Corolla")

car.display_details()
