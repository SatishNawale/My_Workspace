# 2. Design python application which creates three threads as small, capital, digits. All the 
#    threads accepts string as parameter. Small thread display number of small characters,
#    capital thread display number of capital characters and digits thread display number
#    of digits. Display id and name of each thread.

import threading
import os
def Small(Data):
    thread = threading.current_thread()
    print("Thread name : ", thread.name)
    print("Thread id : ", thread.ident)

    small_count = 0
    for char in Data:
        if char.islower():
            small_count += 1
    print("Number of small characters in given String ", Data, "is : ", small_count)
    print(" ")

def Capital(Data):
    thread = threading.current_thread()
    print("Thread name : ", thread.name)
    print("Thread id : ", thread.ident)

    capital_count = 0
    for char in Data:
        if char.isupper():
            capital_count += 1
    print("Number of capital characters in given String ", Data, "is : ", capital_count)
    print(" ")

def Digits(Data):
    thread = threading.current_thread()
    print("Thread name : ", thread.name)
    print("Thread id : ", thread.ident)

    digit_count = 0
    for char in Data:
        if char.isdigit():
            digit_count += 1
    print("Number of capital characters in given String ", Data, "is : ", digit_count)
    print(" ")

def main():
    thread = threading.current_thread()
    print("Thread name : ", thread.name)
    print("Thread id : ", thread.ident)

    print("Please enter Input : ", end = " ")
    String = input()
    print()

    # Creating threads small, capital and digits
    small = threading.Thread(target=Small, args=(String,))
    capital = threading.Thread(target=Capital, args=(String,))
    digits = threading.Thread(target=Digits, args=(String,))

    small.start()
    small.join()

    capital.start()
    capital.join()

    digits.start()
    digits.join()

    print("exit from main")
if __name__ == "__main__":
    main()