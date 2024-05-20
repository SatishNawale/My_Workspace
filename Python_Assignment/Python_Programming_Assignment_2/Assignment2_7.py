# 7. Write a program which accept one number and display below pattern.

# Input : 5
# Output : 
#            1       2       3       4       5
#            1       2       3       4       5
#            1       2       3       4       5
#            1       2       3       4       5
#            1       2       3       4       5

# To get required pattern
def No_Pattern(No):
    for i in range(No):
        for j in range(1,No+1):
            print(j, end = "\t")
        print()

def main():
    no = int(input("Please enter input to print pattern : "))
    No_Pattern(no)

if __name__ == "__main__":
    main()
