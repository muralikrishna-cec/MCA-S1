str=input("Enter the string ")
dict={}
for i in set(str):
    dict[i]=str.count(i) 
print("WORD ELEMENT COUNT ",dict)    