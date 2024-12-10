import csv
filename="/var/www/html/Web_programming/Python/CO5/data.csv"
with open(filename,"r") as file:
    data=csv.reader(file)
    for i in data:
        print(i)    