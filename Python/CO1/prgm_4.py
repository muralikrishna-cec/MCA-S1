n=int(input("Enter the no of elements you want"))
list=[]
for i in range(n):
    x=int(input("enter the number"))
    if x >100:
        list.append("over")
    else:
        list.append(x)    
print("OUTPUT :",list)        