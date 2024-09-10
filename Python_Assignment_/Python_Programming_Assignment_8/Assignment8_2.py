#  2. Write a program which contains one class named as BankAccount.
#    BankAccount class contains two instance variables as Name & Amount.
#    That class contains one class variable as ROI which is initialise to 10.5.
#    Inside init method iitialise all name and amount variables by accepting the values from user.
#    There are Four instance methods inside class as Display(), Deposit(), Withdraw(),
#    CalculateIntrest().
#    Deposit() method will accept the amount from user and add that value in class instance variable
#    Amount.
#    Withdraw() method will accept amount to be withdrawn from user and subtract that amount
#    from class instance varible Amount.
#    CalculateIntrest() method calculate the interest based on Amount fby considering rate of interest
#    Which is class variable as ROI.
#    And Display() method will display value of all the instance varibles as Name and Amount.
#    After designing the above class call all instance methods by creating multiple objects.

class BankAccount:
    ROI = 10.5
    
    def __init__(self):
        print("Please enter name of Account Holder :", end = " ")
        self.Name=input()
        print("Please enter initial Amount : ", end = " ")
        self.Amount=float(input())
    
    def Deposit(self):
        dep = float(input("Enter amount to Deposit : "))
        if(dep<=0):
            print("Please enter amount greater than Zero")
            self.Deposit()
            return
        self.Amount += dep
        print("Amount Deposited : {0}, Total Account Balance : {1}".format(dep, self.Amount))

    def Withdraw(self):
        print("Enter amount to Withdraw", end = " ")
        wit = float(input())
        if(wit<0):
            print("Enter amount greater than zero")
            self.Withdraw()
        if(self.Amount<wit):
            print("Insufficient Account Balance")
            return
        self.Amount-=wit
        print("Amount Withdrawn : {0}, Total Account Balance : {1}".format(wit, self.Amount))
        
    
    def CalculateIntrest(self):
        time = int(input("Please enter time in months to calculate interest : "))
        interest = (self.Amount*time*BankAccount.ROI)/100
        print("The interest is : ", interest)

    def Display(self):
        print("Name : {0} \tAmount : {1}".format(self.Name, self.Amount))


def main():
    # Creating Object 1
    print("First Object")
    Obj1 = BankAccount()

    # Calling Instances
    Obj1.Deposit()
    Obj1.Withdraw()
    Obj1.CalculateIntrest()
    Obj1.Display()
    print()

    Obj2 = BankAccount()
    # Creating Object 2
    print("Second Object")
    Obj2.Deposit()
    Obj2.Withdraw()
    Obj2.CalculateIntrest()
    Obj2.Display()
    print()

if __name__ == "__main__":
    main()