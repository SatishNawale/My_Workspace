# 4. Write a recursive program which accept number from user and rturn summation of its digits.

# Input : 879
# Output : 24

def Digits_Sum(No):
    if No == 0:
        return 0
    Temp = No%10
    No = int(No/10)
    return Temp + Digits_Sum(No)
    
def main():
    print("Please enter input : ", end = " ")
    No = int(input())
    print()

    sum = Digits_Sum(No)
    print("Sum of digits in Number ", No, " is ", sum)
    

if __name__ == "__main__":
    main()