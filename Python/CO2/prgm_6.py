"""
str="hello hai how are you"
l1=list(set(str))
s={}
for i in l1:
    s[i]=str.count(i)
    
for index,value in s.items():
    print(f"{index} {value}")
    """ 
    
#another logic
str=input("Enter the string ")
dict={}
for i in set(str):
    dict[i]=str.count(i) 
   
for index,value in dict.items():
    print(f"{index} {value}")    
#print("WORD ELEMENT COUNT ",dict)    
    