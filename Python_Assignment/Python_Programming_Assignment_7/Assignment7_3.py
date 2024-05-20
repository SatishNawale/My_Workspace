# 3. Write a program which contains one class named Arithmetic.
#    Arithmetic class contains two instance variables as Value1, Value2.
#    Inside init method initialise all instance variables to 0.
#    There are five instance methods inside class as Accept(), Addition, Substraction(), 
#    Multiplication(), Division().
#    Accept method will accept value of Value1 and Value2 from user.
#    Addition method will perform addition of Value1, Value2 and return result.
#    Multiplication() method will perform multiplication of Value1, Value2 and return result.
#    After designing the above classs call all instance methods by creating multiple objects.

class Arithmetic:
    def __init__(self):
        self.Value1 = 0
        self.Value2 = 0

    def Accept(self):
        try:
            print("Please enter First Value : ", end = " ")
            self.Value1 = int(input())

            print("Please enter Second Value : ", end = " ")
            self.Value2 = int(input())

        except ValueError as Vobj:
            print("Exception occured : ", Vobj)
            exit()

    def Addition(self):
        return self.Value1 + self.Value2

    def Substraction(self):
        return self.Value1 - self.Value2
        
    def Multiplication(self):
        return self.Value1*self.Value2
    
    def Division(self):
        try:
            return self.Value1/self.Value2
            
        except ZeroDivisionError as zobj:
            print("Exception occurred : ", zobj)

    def Display(self):
        print("Addition is : ", self.Addition())
        print("Substraction is : ", self.Substraction())
        print("Multiplication is : ", self.Multiplication())
        print("Division is : ", self.Division())

def main():
    # Creating instance of Class Demo
    Obj1 = Arithmetic()
    Obj2 = Arithmetic()

    # Calling instance methods 
    print()
    print("First Object Obj1 :")
    Obj1.Accept()
    Obj1.Addition()
    Obj1.Substraction()
    Obj1.Multiplication()
    Obj1.Division()
    Obj1.Display()

    print()
    print("Second Object Obj1 :")
    Obj2.Accept()
    Obj2.Addition()
    Obj2.Substraction()
    Obj2.Multiplication()
    Obj2.Division()
    Obj2.Display()

if __name__ == "__main__":
    main()
