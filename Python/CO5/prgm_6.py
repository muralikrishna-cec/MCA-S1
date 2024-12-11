#reading txt file data converting it into integer and checking it prime or not
def isPrime(val):
    if val>1:
        for i in range(2,int(val/2)+1):
            if val%i==0:
                return False
        return True
    return False    

with open("/var/www/html/Web_programming/Python/CO5/test.txt", "r") as file:
    data = file.readlines()   
    integers = [int(line.strip()) for line in data]
    
    
prime = [num for num in integers if isPrime(num)]
print("nums = ",integers," \n prime = ",prime)
    
 
    
"""
integers=[]
for j in data:
     integers.append(int(j.strip()))
     
prime=[]    
for i in integers:
    if isPrime(i):
        prime.append(i)     
     
integers = [int(line.strip()) for line in data]  
   
prime_numbers = [num for num in numbers if isPrime(num)]     
"""    
        