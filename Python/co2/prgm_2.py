limit=int(input("enter the limit"))
temp=0

fib=[0,1]

for i in range(2,limit):
    temp=fib[-1]+fib[-2]
    fib.append(temp)
    
    
print("fibonacci series=",fib)    