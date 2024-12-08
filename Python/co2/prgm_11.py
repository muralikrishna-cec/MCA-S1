import math

circle = lambda r:math.pi*r**2
square = lambda l: l**2
triangle = lambda b,h :0.5*b*h


#circle
r =  int(input("Enter the radius of circle"))

#square
l = int(input("Enter the Length of square"))

#triangle
b = int(input("Enter the base of triangle ")) 
h = int(input("Enter the height of traingle ")) 

print(f"Circle Area : {circle(r)}")
print(f"Square Area : {square(l)}")
print(f"Triangle Area : {triangle(b, h)}")