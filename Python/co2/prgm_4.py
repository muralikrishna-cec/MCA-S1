import math

start=int(input("Enter the starting range :"))
end=int(input("Enter the ending range :"))

out=[]
if start >=1 and end  >=1 and end > start:
    for i in range(start,end+1):
        if int(math.sqrt(i))**2==i and all(int(digit)%2==0 for digit in str(i)):
            out.append(i)
    print(f"Output : ",out)                    
else:
    print("Give Valid Ranges")            