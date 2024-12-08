
str=input("Enter the string : ").split()

print("Largest word in list : ",max(str,key=len))

#another logic
max=str[0]
for i in str:
    if len(i) > len(max):
        max=i
print("Largest word in list : ",max)        