n=int(input("enter the limit"))

for i in range(1,n+1):
    count=1
    for j in range(0,i):
        print(i*count,end=" ")
        count+=1    
    print("\n")    
    
    

   