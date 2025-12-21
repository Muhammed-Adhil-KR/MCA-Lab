from graphics.rectangle import area as rect_area,perimeter as rect_perimeter
from graphics.circle import area as circle_area,perimeter as circle_perimeter

from graphics.graphics_3D.cuboid import*
from graphics.graphics_3D.sphere import*

print("---2D SHAPES---")

l=float(input("Enter length of rectangle: "))
b=float(input("Enter breadth of rectangle: "))
print("Area of rectangle: ",rect_area(l,b))
print("Perimeter of rectangle: ",rect_perimeter(l,b))

r=float(input("Enter radius of circle: "))
print("Area of circle: ",circle_area(r))
print("Perimeter of circle: ",circle_perimeter(r))

print("---3D SHAPES---")

l=float(input("Enter length of cuboid: "))
b=float(input("Enter breadth of cuboid: "))
h=float(input("Enter height of cuboid: "))
print("Surface Area of cuboid: ",surface_area(l,b,h))
print("Volume of cuboid: ",volume(l,b,h))

r=float(input("Enter radius of sphere: "))
print("Surface Area of sphere: ",surface_area(r))
print("Volume of sphere: ",volume(r))