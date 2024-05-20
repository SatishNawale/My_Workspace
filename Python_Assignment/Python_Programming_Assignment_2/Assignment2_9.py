# 9. Write a program which accept number from user and return number of digits in that number.

# Input : 5187934           Output : 37

def Num_of_digits(No):
    if No<0:
        No = -No

    temp = No
    cnt = 0
    while(temp != 0):
        temp = temp//10
        cnt += 1
    return cnt

def main():
    no = int(input("Please enter input number : "))
    print("Numebr of digits in ", no, " is : ", Num_of_digits(no))

if __name__ == "__main__":
    main()
