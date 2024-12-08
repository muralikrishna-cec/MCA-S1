str=input("Enter the string : ")
print("Input string : ",str)

if len(str) > 3:
    if str[-3:] == "ing":
        str += "ly"
    else:
        str += "ing"
        
print("Formated String : ",str)        
            