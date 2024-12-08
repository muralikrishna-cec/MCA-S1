str=input("Enter the Word :")
temp=str[0]
for i in range(1,len(str)):
    if str[i] == str[0]:
        temp+="$"
    else:
        temp+=str[i]
print("NEW STRING :",temp)            


#another logic 
tmp=str[0]
out=tmp+str[1:].replace(tmp,'$')
print("Modified String :",out)        
