class Time:
    def __init__(self,hour=0,minute=0,second=0):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
        
    def __add__(self,other):
        total_second = self.__second + other.__second
        total_minute = self.__minute + other.__minute + total_second // 60
        total_hour = self.__hour + other.__hour + total_minute // 60

        return Time(total_hour, total_minute % 60, total_second % 60)
            
    def display(self):
        return f"{self.__hour} {self.__minute} {self.__second}"
           
    
t1=Time(2,5,50)
t2=Time(1,20,30)

t3=t1+t2

print("Time 1 : ",t1.display())    
print("Time 2 : ",t2.display())   
print("Time 3 : ",t3.display())   




""" 
    total_hour=self.__hour+other.__hour
    total_minute=self.__minute+other.__minute
    total_second=self.__second+other.__second    
    
    total_minute+=total_second//60
    total_second%=60
    total_hour+=total_minute//60
    total_minute%=60
        
    return Time(total_hour,total_minute,total_second)
       
        
    return str(self.__hour) +" "+str(self.__minute) +" "+str(self.__second) 
"""