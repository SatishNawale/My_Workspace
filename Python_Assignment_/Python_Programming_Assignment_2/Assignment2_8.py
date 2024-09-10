# 8. Write a python program which accept one number and display below pattern.

# Input : 5
#                1
#                1       2
#                1       2       3
#                1       2       3       4
#                1       2       3       4       5

# To print lower left triangel of numbers
def Patt(No):
    for i in range(1,No+1):
        for j in range(1,i+1):
            print(j, end = "\t")
        print()

def main():
    no = int(input("Please enter input to print pattern : "))
    Patt(no)

if __name__ == "__main__":
    main()