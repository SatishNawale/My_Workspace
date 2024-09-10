# 10. Write a program which accept name from user and display
#     length of its name.

# Input : Marvellous                    Output : 10

# to find length of given name
def length_of_name(Value):
    print(len(Value))

def main():
    #get string name from user
    name = input("Please enter name : ")
    length_of_name(name)
    
# starter
if __name__ == "__main__":
    main()