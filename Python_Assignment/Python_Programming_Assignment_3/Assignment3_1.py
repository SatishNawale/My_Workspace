# 1. Write a program which accept N numbers from user and store it into List. Return addition 
#    of all elements from that List.

# Input : Number of elements : 6
# Input Elements : 13   5   45  7   4   56
# Output : 130

def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data

def List_Sum(Data):
    if(len(Data) == 0):
        return 0

    sum = 0
    for i in Data:
        sum = sum + i
    return sum

def main():
    print("Number of Elements : ", end = " ")
    Size = int(input())
    print()

    Data = CreateList(Size)
    Sum = List_Sum(Data)
    print("Addition of all given numbers is : ", Sum)

if(__name__ == "__main__"):
    main()