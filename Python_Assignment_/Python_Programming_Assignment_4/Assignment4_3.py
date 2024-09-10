# 3. Write a program which contains filter(), map() and reduce() in it. Python application which
#    contains one list of numbers. List contains the numbers whcih are accepted from user. Filter
#    should filter out all such numbers which greater than or equal to 70 and less than or equal to 
#    90. Map function will increase each number by 10. Reduce will return product of all that 
#    numbers.

# Input List = [4, 34, 36, 76, 68, 24, 89, 23, 86, 90, 45, 70]
# List after filter = [76, 89, 86, 90, 70]
# List after map = [86, 99, 96, 100, 80]
# Output of reduce = 6538752000

ChkNo = lambda A : A <= 90 and A >=70
Increase = lambda A: A + 10
Multiplication = lambda A,B: A * B

def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data 

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
    Mul = 1

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

    RData = reduceX(Multiplication, MData)
    print("Data after reduce activity : ", RData)

if __name__ == "__main__":
    main()