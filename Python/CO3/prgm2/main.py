from Graphics import circle,rectangle
from Graphics.Graphics3d import cuboid,sphere

print("Area and perimeter of a circle")
r=float(input("enter the radius of the circle"))
print("Area of cirle : ",circle.area(r))
print("Perimeter of cirle : ",circle.perimeter(r))

print("\n")

print("area and perimeter of rectangle")
l=float(input("enter the length of the rectangle"))
b=float(input("enter the breadth of the rectangle"))
print("area of rectangle :",rectangle.area(l,b))
print("perimeter of rectangle is: ",rectangle.perimeter(l,b))

print("\n")

print("Area and perimeter of a sphere")
r=float(input("enter the radius of the sphere"))
print("Area of sphere : ",sphere.area(r))
print("Perimeter of sphere : ",sphere.volume(r))

print("\n")

print("area and perimeter of cuboid")
l=float(input("enter the length of the cuboid"))
b=float(input("enter the breadth of the cuboid"))
h=float(input("enter the heigth of cuboid"))
print("area of cuboid :",cuboid.area(l,b,h))
print("perimeter of cuboid is: ",cuboid.volume(l,b,h))


