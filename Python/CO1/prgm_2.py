#3.a
list=[1,-2,3,-1,4,-6,9,-7,5]
pos=[]
for i in list:
    if i >0:
        pos.append(i)       
print("Positive numbers : ",pos)        


#3.b
n=int(input("Enter the limit"))
sqr=[]
for i in range(1,n+1):
    sqr.append(i**2) 
print("Square of numbers : ",sqr)    


#3.c
str=input("Enter the word")
vowels=["a","e","i","o","u"]
out=[]
for i in str:
    if i in vowels and out.count(i)<1:
        out.append(i)      
print("Vowels in the word : ",out)        

#3.d
a=input("Enter the word")
out=[]
for i in a:
    out.append(ord(i))
print("Ordinal value of the word : ",out)    
