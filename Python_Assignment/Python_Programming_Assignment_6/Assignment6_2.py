# 2. Design python application which creates two thread as enenfactor and oddfactor.
#    Both the thread accept one parameter as integer. Evenfactor thread will display
#    addition of even factors of given number and oddfactor will display addition of odd
#    factors of given number. After execution of both the thread gets completed main
#    thread should display message as "exit from main"

import threading

def even(No):
    i = 2
    sum = 0
    for j in range(int(No/3)):
        if(No%i==0):
            sum = sum + i
        i = i + 2
    print("Sum of even factors of ", No, "is : ",sum)

def odd(No):
    i = 1
    sum = 0
    for j in range(int(No/3)):
        if (No%i==0):
            sum = sum + i
        i = i + 2
    print("Sum of odd factors of ", No, "is : ",sum)

def main():
    print("Please enter Input : ", end = " ")
    No = int(input())
    print()

    # Creating threads evenfactor and oddfactor
    evenfactor = threading.Thread(target=even, args=(No,))
    oddfactor = threading.Thread(target=odd, args=(No,))

    evenfactor.start()
    evenfactor.join()

    oddfactor.start()
    oddfactor.join()

    print("exit from main")
if __name__ == "__main__":
    main()