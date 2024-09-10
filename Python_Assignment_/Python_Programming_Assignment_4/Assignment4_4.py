# 4. Write a program which contains filter(), map() and reduce() in it. Python application which
#    contains one list of numbers. List contains the numbers which are accepted from user. Filter
#    should filter out all such numbers which are even. Map function will calculate its square.
#    Reduce will return addition of all that numbers.

# Input List = [5, 2, 3, 4, 3, 4, 1, 2, 8, 10]
# List after filter = [2, 4, 4, 2, 8, 10]
# List after map = [4, 16, 16, 4, 64, 100]
# Output of reduce = 204


def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data 

ChkNo = lambda A : (A % 2 == 0)
Increase = lambda A: A**2

Addition = lambda A,B: A + B

def filterX(Task, Elements):
    FData = []
    for i in Elements:
        if(Task(i) == 1):
            FData.append(i)
    return FData

def mapX(Task, Elements):
    MData = []

    for i in Elements:
        Res = Task(i)
        MData.append(Res)
    return MData

def reduceX(Task, Elements):
    Mul = 0

    for i in Elements:
        Mul = Task(Mul, i)
    return Mul

def main():
    print("Number of Elements : ", end = " ")
    Size = int(input())
    print()

    Data = CreateList(Size)

    print("Given Data is : ", Data)
    FData = list(filterX(ChkNo,Data))
    print("Data after filter activity : ", FData)

    MData = list(mapX(Increase,FData))
    print("Data after map activity : ", MData)

    RData = reduceX(Addition, MData)
    print("Data after reduce activity : ", RData)

if __name__ == "__main__":
    main()