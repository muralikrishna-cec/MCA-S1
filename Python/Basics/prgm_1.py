list=[10,1,2,3,4,5,6,7,9,8,0]

print(max(list))
print(min(list))




#another logic
max=list[0]
min=list[0]
for i in list:
    if i > max:
        max=i
    if i < min:
        min=i
print("Largest element",max)    
print("smallest element",min)           