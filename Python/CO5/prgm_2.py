    
with open("/var/www/html/Web_programming/Python/CO5/test.txt", "r") as file:
    data = file.readlines()

with open("/var/www/html/Web_programming/Python/CO5/odd_lines.txt", "w") as outfile:
    for i in range(0, len(data), 2):
        outfile.write(data[i])
   
with open("/var/www/html/Web_programming/Python/CO5/odd_lines.txt", "r") as outfile:        
    out=[line.strip() for line in outfile.readlines()]
    print(out)    
        

   
           
"""
#using with open
with open("/var/www/html/Web_programming/Python/CO5/test.txt","r") as file:
    data=file.readlines()
    
for i in range(0,len(data),2):
    print(data[i]) 
    
                                                                                                                
#using open
f=open("/var/www/html/Web_programming/Python/CO5/test.txt","r")    
d=f.readlines()

for i in range(0,len(d),2):
    print(d[i])"""        
    