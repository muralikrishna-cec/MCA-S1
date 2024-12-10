class Rectangle:
    def __init__(self,l,b):
        self.len=l
        self.bd=b
        
    def display(self):
        print("Length od reactangle is:",self.len)  
        print("Breadth of rectangle is:",self.bd)
        
    def area(self):
        return self.len*self.bd
    
    def __lt__(self,other):
        if not isinstance(other,Rectangle):
            raise TypeError("Value must be same")     
        else:
            return self.area() < other.area()
        
    
rect1=Rectangle(4,5)
rect2=Rectangle(6,6)

if rect1 < rect2:
    print("recatangle 2 is larger") 
else:
    print("rectangle 1 is larger")             