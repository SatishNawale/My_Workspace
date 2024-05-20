# 2. Write a program which accepts N numers from user and store it into List. Return
#    Maximum number from that List.

# Input : 7
# Input Elements : 13 5 45 7 4 56 34
# Output : 56


def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data

def List_Max(Data):
    if len(Data)==0:
        return "List is empty"

    Max = Data[0]
    for i in Data:
        if (i>Max):
            Max = i
    return Max

def main():
    print("Number of Elements : ", end=" ")
    Size = int(input())
    print()

    Data = CreateList(Size)
    Maximum = List_Max(Data)
    print("Maximum is : ", Maximum)

if(__name__ == "__main__"):
    main()