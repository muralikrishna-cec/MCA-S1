class Recatangle:
    def __init__(self,l,b):
        self.len=l
        self.bd=b
        
    def dispaly(self):
        print("Length is :",self.len)
        print("Breadth is :",self.bd,"\n")
        
    def area(self):
        return self.len*self.bd
    
    def perimeter(self):
        return 2*(self.len*self.bd)
    
    

ob1=Recatangle(10,4)
ob2=Recatangle(20,5)

ob1.dispaly()
ob2.dispaly()

print("area of object 1 is",ob1.area())
print("area of object 2 is ",ob2.area(),"\n")

print("Perimeter of object 1 is",ob1.perimeter())
print("Perimeter of object 2 is ",ob2.perimeter(),"\n")

if ob1.area() > ob2.area():
    print("Object 1's area is greater",ob1.area())      
else:
    print("Object 2's area is greater",ob2.area())   
                  