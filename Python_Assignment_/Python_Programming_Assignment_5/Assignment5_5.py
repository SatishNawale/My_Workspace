# 5. Write a rcursive program which accept number from user and return its factorial.

# Input : 5
# Output : 120

def Factorial(No):
    if No<0:
        return "Not defined"
    if No <= 1:
        return 1
    Temp = No
    No = No-1
    return Temp * Factorial(No)
    
def main():
    print("Please enter input : ", end = " ")
    No = int(input())
    print()

    sum = Factorial(No)
    print("Factorial of Number ", No, " is ", sum)
    

if __name__ == "__main__":
    main()