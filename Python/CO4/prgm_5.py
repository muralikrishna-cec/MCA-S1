class Publisher:
    def __init__(self,name):
        self.name=name
        
    def display(self):
        print(f"Pulisher : {self.name}")   
 
        
class Book(Publisher):
    def __init__(self,name,title,author):
        super().__init__(name)        
        self.title=title
        self.author=author
        
    def display(self):
        super().display()
        print(f"Title : {self.title}")    
        print(f"Author : {self.author}")
        
        
class Python(Book):
    def __init__(self,name,title,author,price,no_pages):
        super().__init__(name,title,author)
        self.price=price
        self.no_pages=no_pages
        
    def display(self):
        super().display()     
        print(f"Price : {self.price}")  
        print(f"NO Of Pages {self.no_pages}")   
        
ob1=Python("Murali Krishna","Becoming heartless","__MK",500,1000)         
ob1.display() 