# 6. Write a program which accept the number from user and check 
#    whether that number is positive or negative or zero

# Input : 11                Output : Positive Number
# Input : -8                Output : Negative Number
# Input : 0                 Output : Zero

# to check given number +ve, -ve, or zero
def ChkNo(Number):
    if Number>0:
        print("Positive Number")

    elif Number<0:
        print("Negative Number")

    else:
        print("Zero")

def main():
    print("Please enter Number : ")
    Number = int(input())
    ChkNo(Number)

# Starter
if __name__ == "__main__":
    main()