# 1. Create on module named as Arithmetic which contains 4 functions
#    as Add() for addition, Sub() for substraction, Mult() for multiplication
#    and Div() for division. All functions accepts two parameters as number
#    and perform the operation. Write on python program which call all the
#    functions from Arithmetic module by accepting the parameters from user.

# Importing module Arithmetic
import Arithmetic

def main():
    No1 = int(input("Enter first number :"))
    No2 = int(input("Enter second number :"))

    print("Addition is : ", Arithmetic.Add(No1, No2))
    print("Substraction is : ", Arithmetic.Sub(No1, No2))
    print("Multiplicaton is : ", Arithmetic.Mult(No1, No2))
    # to avoid divide-by-zero error
    if No2 == 0:
        print("Divisin of zero not allowed")
    else:
        print("Division is : ", Arithmetic.Div(No1, No2))


if __name__ == "__main__":
    main()