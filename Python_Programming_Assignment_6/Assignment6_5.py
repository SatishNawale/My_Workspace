# 5. Design python application which creates three threads as thread1 and thread2.
#    thread1 display 1 to 50 on screen and thread2 display 50 to 1 in reverse order
#    on screen. After execution fo thread1 gets completed then shedule thread2.
import threading

def forward():
    print("Numbers from 1 to 50")
    for i in range(1,51):
        print(i)
    print(" ")

def reverse():
    print("Numbers form 50 to 1 in reverse order")
    for i in range(50, 0, -1):
        print(i)
    print(" ")

def main():

    # Creating threads small, capital and digits
    thread1 = threading.Thread(target=forward)
    thread2 = threading.Thread(target=reverse)

    thread1.start()
    thread1.join()

    thread2.start()
    thread2.join()

    print("exit from main")
if __name__ == "__main__":
    main()