import csv

data=[{'name':'murali','role':'student','college':'cec'},{'name':'Ramu','role':'teacher','college':'cec'},{'name':'raju','role':'lab','college':'cec'}]

with open("/var/www/html/Web_programming/Python/CO5/dict.csv",'w') as file:
    file.write(','.join(data[0].keys()))
    file.write('\n')
    for i in data:
        file.write(','.join(str(x) for x in i.values()))
        file.write('\n')
  
  
with open("/var/www/html/Web_programming/Python/CO5/dict.csv",'r') as f:        
    d=csv.reader(f)
    for i in d:
        print(i)   