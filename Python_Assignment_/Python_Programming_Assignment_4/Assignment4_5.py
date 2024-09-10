# 5. Write a program which contains filter(), map() and reduce() in it. Python application which 
#    contains one list of numbers. List contains the numbers which are accepted from user. Filter
#    should filter out all prime numbers. Map function will multily each number by 2. Reduce will
#    return Maximum number from that numbers. (You can also use normal functions instead of 
#    lambda functions).

# Input List : [2, 70, 11, 10, 17, 23, 31, 77]
# List after filter : [2, 11, 17, 23, 31]
# List after map : [4, 22, 34, 46, 62]
# Output of reduce : 62


def CreateList(Size):
    Data = []
    for i in range(1,Size+1):
        print("Enter Element", i," : ", end = " ")
        a = int(input())
        Data.append(a)
        print()
    return Data 

ChkNo = lambda A,B: (A % B == 0)
Increase = lambda A: A*2
Maximum = lambda A,B: A > B

def filterX(Task, Elements):
    FData = []
    for i in Elements:
        if i<2:
            continue
        else:
            flag = 0
            for j in range(2,int(i/2)+1):
                if(Task(i,j)==1):
                    flag = 1
                    break
            if(flag==0):
                FData.append(i)
    return FData

def mapX(Task, Elements):
    MData = []

    for i in Elements:
        Res = Task(i)
        MData.append(Res)
    return MData

def reduceX(Task, Elements):
    Max = Elements[0]

    for i in Elements:
        if(Task(Max,i)==0):
            Max = i
    return Max

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

    RData = reduceX(Maximum, MData)
    print("Data after reduce activity : ", RData)

if __name__ == "__main__":
    main()