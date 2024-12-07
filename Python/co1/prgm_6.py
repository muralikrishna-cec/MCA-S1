l1=[1,2,3,4,5]
l2=[7,8,9,10,4]
int=[]

if len(l1) ==len(l2):
    print("Both list have same length")
else:
    print("Differnt length")   
    
if sum(l1)==sum(l2):
    print("Both list have same sum")
else:
    print("Differnt sum")  
    
for i in l1:
    if i not in int and i in l2:
        int.append(i)
print("The common elemnts are: ",int)        
            
         