# 4. Write a program which accept N numbers from user and store it into List. 
#    Accept one another number form user and return frequency fo that number from List.

# Input : Number of Elements : 11
# Input Elements : 13 5 45 7 4 56 5 34 2 5 65
# Element to Search : 5
# Output : 3

def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data

def List_Search_Frequency(Data,No):
    if len(Data)==0:
        return "List is empty"
    
    Cnt = 0
    for i in Data:
        if i == No:
            Cnt = Cnt + 1
    return Cnt

def main():
    print("Number of Elements : ", end = " ")
    Size = int(input())
    print()

    Data = CreateList(Size)
    print("Enter Number to Search : ", end = " ")
    No = int(input())
    print()

    Frequency = List_Search_Frequency(Data,No)
    print("Frequency of number ", No,"is : ", Frequency)

if(__name__ == "__main__"):
    main()