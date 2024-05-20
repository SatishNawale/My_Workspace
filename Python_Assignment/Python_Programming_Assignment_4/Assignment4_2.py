# 2. Write a program which contains one lambda function which accepts two parameters and return
#    its multiplication.

# Input : 4     3                   Output : 12
# Input : 6     3                   Output : 18


CalcMult = lambda A,B: A*B

def main():
    print("Please enter First Number : ", end = " ")
    No1 = int(input())
    print()
    print("Please enter Second Number : ", end = " ")
    No2 = int(input())
    print()

    Product = CalcMult(No1, No2)
    print("Multiplication of ", No1," and ", No2, " is : ", Product)


if __name__ == "__main__":
    main()