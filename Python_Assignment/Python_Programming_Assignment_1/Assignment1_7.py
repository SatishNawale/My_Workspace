# 7. Write a program which contains one function that accept one
#    number from user and returns true if number is divisible by 5
#    otherwise return false.

# Input : 8                    Output : False
# Input : 25                   Output : True


# To find given number divisible by 5 or not
def Fun(Number):
    # If remainder zero then number divisible by 5 else not
    if Number%5 == 0:
        print(True)
    else:
        print(False)

def main():
    # get number from the user
    print("Please enter number :")
    number = int(input())
    Fun(number)

# Starter
if __name__ == "__main__":
    main()