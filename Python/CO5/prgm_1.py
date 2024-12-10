#using open
content=open("/var/www/html/Web_programming/Python/CO5/test.txt","r")
list=[]
for i in content:
    list.append(i)
print(list)    


#using with open
with open("/var/www/html/Web_programming/Python/CO5/test.txt","r") as data:
    val=data.readlines()
l1=[]
for j in val:
    l1.append(j)      
print(l1)    