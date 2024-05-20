# 1. Write a program which contains one class named as Demo.
#    Demo class contains two instance variables as no1, no2.
#    That class contains one class variable as Value.
#    There are two instance methods of class as Fun and Gun which displays values of instance
#    Variables.
#    Initialize instance variable in init method by accepting the values from user.

#    After creating the class create the two objects of Dmo class as 
#    Obj1 = Demo(11, 21)
#    Obj2 = Demo(51, 101)

#    Now call the instance methods as 
#    Obj1.Fun()
#    Obj2.Fun()
#    Obj1.Gun()
#    Obj2.Gun()

class Demo:
    Value = 0
    def __init__(self, value1, value2):
        self.no1 = value1
        self.no2 = value2

    def Fun(self):
        print("no1 = ", self.no1)
        print("no2 = ", self.no2)

    def Gun(self):
        print("no1 = ", self.no1)
        print("no2 = ", self.no2)


def main():
    # Creating instance of Class Demo
    Obj1 = Demo(11,21)
    Obj2 = Demo(51,101)

    # Calling instance methods
    print("Obj1 Fun")
    Obj1.Fun()
    print("Obj2 Fun")
    Obj2.Fun()

    print("Obj1 Gun")
    Obj1.Gun()
    print("Obj2 Gun")
    Obj2.Gun()

if __name__ == "__main__":
    main()
