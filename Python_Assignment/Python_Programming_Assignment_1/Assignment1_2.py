# 2. Write a progrm which contains one function named as ChkNum()
#    which accepts one parameter as number. If number is even then
#    it should disply "Even number" otherwise display "Odd number" on console.

# Input : 11                    Output : Odd Number
# Input : 8                     Output : Even Number

# To check number is Even or Odd
def ChkNum(number):
    # if remainder is 0 then number is even
    if number%2 == 0:
        print("Even number")
    # if remainder is nonzero then number is odd
    else:
        print("Odd number")

def main():
    print("Please enter number to check whether its odd or even")
    number = int(input())
    ChkNum(number)

# Starter
if __name__ == "__main__":
    main()