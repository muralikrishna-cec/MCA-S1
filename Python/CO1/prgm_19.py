list=[1,2,3,4,5,6,7,8,9,10]

newlist=[i for i in list if i%2!=0]

print(f"Input List : {list} \n Output List :{newlist}")




#even numbers
list1=[1,2,3,4,5,6,7,8]

even=[n for n in list1 if n%2==0]
print(even) 


#another logic
str_input = input("Enter the numbers, comma-separated: ")
list1 = [int(num) for num in str_input.split(',')]

print("List of numbers:", list1)

even = [n for n in list1 if n % 2 == 0]
print("Even numbers:", even)
