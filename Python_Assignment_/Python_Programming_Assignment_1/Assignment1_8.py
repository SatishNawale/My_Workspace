# 8. Write a program which accept number from user and print
#    that number of "*" on screen.

# Input : 5             Output : *  *   *   *   *

# to print the * pattern
def Print(No):
    for i in range(No):
        print("*", end="\t")
        
def main():
    # get the number from user
    print("Please enter number : ", end = " ")
    number = int(input())
    Print(number)
    
# starter
if __name__ == "__main__":
    main()