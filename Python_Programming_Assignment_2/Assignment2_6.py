# 6. Write a program which accept one number and display below pattern.

# Input : 5
# Output : 
#            *       *       *       *       *
#            *       *       *       *
#            *       *       *
#            *       *
#            *

# To print upper left triangle star pattern
def Lft_upp_tiangle(No):
    for i in range(No):
        for j in range(No-i):
            print("*",end="\t")
        print()


def main():
    no = int(input("Please enter input to print star pattern : "))
    Lft_upp_tiangle(no)

if __name__ == "__main__":
    main()