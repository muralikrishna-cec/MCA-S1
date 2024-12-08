year=int(input("Enter the final year"))
leap=[]

for i in range(2024,year+1):
    if i%400==0 or i%4==0 and i%100!=0:
        leap.append(i)
        
print("LEAP YEARS :",leap)        