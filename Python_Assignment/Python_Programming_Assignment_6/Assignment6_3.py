# 2. Design python application which creates two thread as eevenlist and oddlist.
#    Both the thread accept list of integers as parameter. Evenlist thread add all
#    even elements from input list and display the addition. Oddlist thread add all
#    odd elements from input list and display the addition.

import threading
def createlist(No):
    Data = []
    for i in range(1,No+1):
        print("Enter ", i, "number : ", end = " ")
        a = int(input())
        Data.append(a)
    print()
    return Data

def even(Data):
    sum = 0
    for i in Data:
        if(i%2==0):
            sum = sum + i
    print("Addition of even numbers in list is : ",sum)

def odd(Data):
    sum = 0
    for i in Data:
        if (i%2==1):
            sum = sum + i
    print("Addition of odd numbers in list is : ",sum)

def main():
    print("Please enter Input : ", end = " ")
    No = int(input())
    print()

    Data = createlist(No)
    print("Given list is : ", Data)

    # Creating threads evenlist and oddlist
    evenlist = threading.Thread(target=even, args=(Data,))
    oddlist = threading.Thread(target=odd, args=(Data,))

    evenlist.start()
    evenlist.join()

    oddlist.start()
    oddlist.join()

    print("exit from main")
if __name__ == "__main__":
    main()