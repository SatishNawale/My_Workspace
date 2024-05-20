# 10. Write a program which accept number from useer and return
#     addition of digits in that number.

# Input : 5187934           Output: 37

# To find sum of digits in number:
def Num_of_digits(No):
    # To check number is negative or not
    flag = 0
    if No<0:
        No = -No
        flag=1

    # To find sum of digits in given numbers
    temp = No
    temp1 = 0
    sum = 0
    while(temp != 0):
        temp1 = temp%10
        sum = sum + temp1
        temp = temp//10

    # flag is 1 then returning negative sum
    if flag == 1:
        return -sum
    else:
        return sum

def main():
    no = int(input("Please enter input number : "))
    print("Sum of digits in ", no, " is : ", Num_of_digits(no))

if __name__ == "__main__":
    main()