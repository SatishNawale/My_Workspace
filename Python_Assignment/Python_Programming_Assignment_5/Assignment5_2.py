# 2. Write a recursive program which display below pattern.

# Input : 5
# Output : 1   2   3   4   5

def print_pattern(No):
    if(No!=1):
        No = No-1
        print_pattern(No)
        print(No, end="\t")

def main():
    print("Please enter input : ", end = " ")
    No = int(input())
    print()
    
    print_pattern(No+1)

if __name__ == "__main__":
    main()