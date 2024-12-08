def lar3(a,b,c):
    if a > b:
        if a > c:
            return a
        else:
            return c
    else:
        if b > c:
            return b
        else:
            return c    


num1=int(input("Enter the First Number"))
num2=int(input("Enter the Second Number"))
num3=int(input("Enter the Third Number"))

print(f"Largest of {num1,num2,num3} is {lar3(num1,num2,num3)}")

