# 1. Design python application which creates two thread named as even and odd. Even
#    thread will display first 10 even numbers and odd thread will display first 10 odd
#    numbers.

import threading

def print_even(No):
    i = 0
    for j in range(No):
        print(i)
        i = i + 2

def print_odd(No):
    i = 1
    for j in range(No):
        print(i)
        i = i + 2

def main():
    print("Please enter Input : ", end = " ")
    No = int(input())
    print()

    # Creating threads t1 and t2 for even and odd functions
    even = threading.Thread(target=print_even, args=(No,))
    odd = threading.Thread(target=print_odd, args=(No,))

    print("First ", No, " even numbers are : ")
    even.start()
    even.join()

    print("First ", No, " odd numbers are : ")
    odd.start()
    odd.join()

    print("exit main")
if __name__ == "__main__":
    main()