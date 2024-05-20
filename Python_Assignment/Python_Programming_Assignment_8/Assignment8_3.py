# 3. Write a program which contains one class named as Numbers.
#    Numbers class contains one instance variables as Value.
#    There are four instance methhods inside class as ChkPrime(), ChkPerfect(), SumFactors(),
#    Factors().
#    ChkPrime() method will returnstrue if number is prime otherwise return false.
#    Factors() method will returns true if number is perfect otherwise return false.
#    SumFactors() method will return addition of all factors. Use this method in any another method
#    as a helper method if required.
#    After designing the above class call all instance methods by creating multiple objects.

class Numbers:
    def __init__(self):
        self.Value = int(input("Please enter input Value : "))

    def ChkPrime(self):
        n = self.Value
        if(n<=0):
            return False

        flag = 0
        for i in range(2,int(n/2)):
            if(n%2==0):
                flag = 1
        if(flag==1):
            return False
        else:
            return True
    
    def ChkPerfect(self):
        n = self.Value
        sum = self.SumFactors()
        if(sum == n):
            return True
        else:
            return False
    
    def Factors(self):
        n = self.Value
        factors = []

        for i in range(1, int(n/2)+1):
            if n % i == 0:
                factors.append(i)
        return factors
    
    def SumFactors(self):
        n = self.Value
        sum = 0
        for i in range(1,int(n/2)+1):
            if(n % i == 0):
                sum = sum + i
        return sum

def main():
    # Creating Object 1
    print("First Object")
    Obj1 = Numbers()

    # Calling Instances
    print("Given number is : ", Obj1.Value)
    print("Prime : ",Obj1.ChkPrime())
    print("Factors : ",Obj1.Factors())
    print("Sum of Factors : ",Obj1.SumFactors())
    print("Perfect : ",Obj1.ChkPerfect())
    print()

    Obj2 = Numbers()
    # Creating Object 2
    print("Given numebr is : ", Obj2.Value)
    print("Second Object")
    print("Prime : ", Obj2.ChkPrime())
    print("Factors : ", Obj2.Factors())
    print("Sum of Factors : ", Obj2.SumFactors())
    print("Perfect : ", Obj2.ChkPerfect())
    print()

if __name__ == "__main__":
    main()