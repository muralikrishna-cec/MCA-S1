num=int(input("Enter the number"))

out=[]
for i in range (1,num+1):
    if num % i  == 0:
        out.append(i)
print(f"Factors of number : ",out)     


#another way

res=[i for i in range(1,num+1) if num % i == 0]   
print(f"Factors of number : ",res)   
        
        