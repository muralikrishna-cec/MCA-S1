list=[7,1,2,3,4,5,6,7,1,2,1,3,4,5,6,7]

print(set(list))

#another logic
unique=[]
for i in list:
    if i not in unique:
        unique.append(i)

print(unique)        
    
