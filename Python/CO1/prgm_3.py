str=input("Enter the string ")
dict={}
for i in set(str):
    dict[i]=str.count(i) 
print("WORD ELEMENT COUNT ",dict)    



#another logic is
str = "hello hai how are you"
freq = {}

for char in str:
    if char in freq:
        freq[char] += 1
    else:
        freq[char] = 1

for char, count in freq.items():
    print(f"{char}: {count}")
