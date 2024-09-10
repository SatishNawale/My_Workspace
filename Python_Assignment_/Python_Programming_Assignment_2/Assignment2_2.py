# 2. Write a program which accept one nuber and display pattern

# Input : 5
# Output : (Star Pattern)
#                           *       *       *       *       *
#                           *       *       *       *       *
#                           *       *       *       *       *
#                           *       *       *       *       *
#                           *       *       *       *       *

def Pattern(Value):
    for i in range(Value):
        for j in range(Value):
            print("*", end = "\t")
        print()

def main():
    no = int(input("Please enter input : "))
    Pattern(no)

if __name__ == "__main__":
    main()

    