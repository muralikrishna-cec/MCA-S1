class Bank:
    def __init__(self,no,name,type,bal):
        self.acc_no=no
        self.acc_name=name
        self.acc_type=type
        self.acc_bal=bal
        
    def display(self):
        print("Account number :",self.acc_no)   
        print("Account holder name :",self.acc_name)
        print("Account type :",self.acc_type)
        print("Account balance is :",self.acc_bal,"\n")
        
    def deposit(self,val):
        if val>0:
            print("Current balance is",self.acc_bal)
            self.acc_bal+=val
            print(val,"deposited and current balance is :",self.acc_bal,"\n")
        else:
            print("enter a valid amount \n")        
            
            
    def withdraw(self,val):
        if val>0:
            if self.acc_bal>=val:
                print("Current balance is",self.acc_bal)
                self.acc_bal-=val
                print(val,"withrawed and current balance is :",self.acc_bal,"\n")
            else:
                print("insuffient balance \n")    
        else:
            print("enter a avlid amount \n")    
            
            
            
ob1=Bank(111,"Murali Krishna","Savings",100000)        
ob1.display()
ob1.withdraw(20000000)  
ob1.deposit(50000)  
ob1.display()

                    