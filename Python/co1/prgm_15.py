str1=input("Enter the first string : ")
str2=input("Enter the second string :")

out=str2[0]+str1[1:] + " " +str1[0]+str2[1:]

print(f"|| First Word : {str1} \n|| Second Word : {str2} \n|| Modified : {out}")