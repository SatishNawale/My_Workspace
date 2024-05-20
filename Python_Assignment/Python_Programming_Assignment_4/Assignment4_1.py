# 1. Write a program which contains one lambda function which accepts one
#    and return power of two.

# Input : 4                 Output : 16
# Input : 6                 Output : 64

# lambda function to calculate square of given number
CalcPower = lambda A: A*A

def main():
    print("Please enter Number : ", end = " ")
    No = int(input())
    print()

    Power = CalcPower(No)
    print("Square of ", No, " is : ", Power)


if __name__ == "__main__":
    main()