# 3. Write a program which contains one function named as Add() which
#    accepts two numbers from user and return addition of that two numbers.

# Input : 11 5        
# Outpu : 16

# To find addition of given numbers
def Add(No1, No2):
    result = No1 + No2
    return result

def main():
    print("Enter first number : ")
    No1 = int(input())

    print("Enter second number : ")
    No2 = int(input())

    result = Add(No1, No2)
    print("Addition is : ", result)
    
# Starter
if __name__ == "__main__":
    main()