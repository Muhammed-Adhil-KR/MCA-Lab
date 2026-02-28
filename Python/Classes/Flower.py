class Flower:
    def __init__(self, name):
        self.name = name
flower_name = input("Enter flower name: ")
flower = Flower(flower_name)

color = input("Enter petal color (leave empty if unknown): ").strip()

if color:
    flower.petalColor = color

if hasattr(flower, "petalColor"):
    print(f"{flower.petalColor} {flower.name}")
else:
    print("Unknown Flower")
