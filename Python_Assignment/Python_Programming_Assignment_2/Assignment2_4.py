# 4. Write a program which accept one number from user and return additon of its factors.

# Input : 12                    Output : 16         (1+2+3+4+6)

def Add_of_Factors(No):
    sum = 0
    for i in range(1,int(No/2)+1):
        if(No%i == 0):
            print(i, end=" ")
            sum += i
    return sum


def main():
    no = int(input("Enter number to find its factors addition : "))
    print("Addition of Factors of ", no, " is : ", Add_of_Factors(no))

if __name__ == "__main__":
    main()