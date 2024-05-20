# 5. Write a program which accept N numbers from user and store it into List. Return addition
#    of all prime numbers form that List. Main python file accepts N numbers from user and pass 
#    each number to ChkPrime() functin which is part of our user defined module named as 
#    MarvellousNum. Name of the function from main python file should be ListPrime().

# Input : Number of elements : 11
# Input Elements : 13 5 45 7 4 56 10 34 2 5 8
# Output : 54 (13 + 5 + 7 + 2 + 5)

from MarvellousNum import ChkPrime

Add = lambda A,B: A + B

def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data

def ListPrime(Data):
    Prime = []
    for i in range(len(Data)):
        Result = ChkPrime(Data[i])
        if Result == 1:
            Prime.append(Data[i])

    sum = 0
    for j in range(len(Prime)):
        sum = sum + Prime[j]
    
    return sum

def main():
    print("Number of Elements : ", end = " ")
    Size = int(input())
    print()

    Data = CreateList(Size)

    Sum = ListPrime(Data)

    print("Sum of Prime numbers is : ", Sum)

if(__name__ == "__main__"):
    main()