# 3. Write a program which accept one number from user and return its factorial.

# Input : 5                 Output : 120

# To find factorial
def Fact(No):
    if No == 0:
        print("Factorial of 0 is : 1")
        return

    # checking if given number is negative
    if No < 0:
        print("Enter valied input, non-negative numbers only")
        return

    fact = 1
    i = 1
    while(i<=No):
        fact *= i
        i += 1
    
   
    print("Factorial of ", No, " is : ", fact)
    
def main():
    # Taking input from user
    no = int(input("Please enter number to find Factorial : "))
    Fact(no)
    
if __name__ == "__main__":
    main()