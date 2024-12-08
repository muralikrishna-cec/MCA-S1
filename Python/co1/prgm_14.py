list1=["red","blue","yellow","green"]
list2=["green","black","grey","rose"]
ints=[]

for i in list1:
    if i not in list2 and ints.count(i)<1:
        ints.append(i)
        
print(f" || First List :: {list1} \n || Second List :: {list2} \n || Common Colors :: {ints}")        