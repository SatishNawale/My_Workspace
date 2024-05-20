# 2. Write a program which contains one class named Circle.
#    Circle class contains three instance variables as Radius, Area, Circumference.
#    That class contains one class variable as PI which is initialise to 3.14.
#    Inside init method initialise all instance variables to 0.0.
#    there are three instance methods inside class as Accept(), CalculateArea(),
#    Calculatecircumference(), Display().
#    Accept method will accept value of Radius from user.
#    CalculateArea() method will Calculate area of circle and store it into instance variable Area.
#    CalculateCircumference() method will calculate circumference of circle and store it into instance
#    variable Circumference.
#    And display() method will display value of all the instance variables as Radius, Area,
#    Curcumference.
#    After designing the above class call all instance methods by creating multiple objects.

class Circle:
    PI = 3.14
    def __init__(self):
        self.Radius = 0.0
        self.Area = 0.0
        self.Circumference = 0.0

    def Accept(self):
        print("Please enter Radius of Circle : ", end = " ")
        self.Radius = float(input())

    def CalculateArea(self):
        print("no1 = ", self.no1)
        print("no2 = ", self.no2)

    def CalculateCircumference(self):
        self.Circumference = 2*self.PI*self.Radius
        
    def CalculateArea(self):
        self.Area = self.PI*(self.Radius**2)

    def Display(self):
        print("Radius of Circle : ", self.Radius)
        print("Area of Circle : ", self.Area)
        print("Circumference of Circle : ", self.Circumference)


def main():
    # Creating instance of Class Demo
    Obj1 = Circle()
    Obj2 = Circle()

    # Calling instance methods 
    print()
    print("First Object Obj1 :")
    Obj1.Accept()
    Obj1.CalculateArea()
    Obj1.CalculateCircumference()
    Obj1.Display()

    print()
    print("Second Object Obj1 :")
    Obj2.Accept()
    Obj2.CalculateArea()
    Obj2.CalculateCircumference()
    Obj2.Display()

if __name__ == "__main__":
    main()
