# 5. Write a program which accept one number for user and check 
#    whether number is prime or not

# Input : 5                     Output : It is a prime number

# To check whether given number is prime or not
def Prime(No):
    if No < 2:
        print("Please enter valied input, 1, 0 and negative numbers not allowed")
        return
    
    else:
        flag = 0
        for i in range(2, int(No/2)+1):
            if No%i == 0:
                flag = 1
                break

        if flag == 0:
            print("It is Prime Number")

        else:
            print("It is not Prime Number")
        

def main():
    no = int(input("Enter number to check for Prime : "))
    Prime(no)

# Starter
if __name__ == "__main__":
    main()