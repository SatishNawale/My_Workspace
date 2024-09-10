# 2. Write a program which accept file name from user and opwn that file and display the contents
#    of that file on screen.

# Input : Demo.txt
# Display contents of Demo.txt on console

import os

def ChkFile(FileName):
    current_dir = os.getcwd()
    #print("Current Directory is : ", current_dir)
    for foldername,subfoldername, filename in os.walk(current_dir):
        for file in filename:
            if file == FileName:
                return True
    else:
        return False
        
def main():
    Name = input("Please enter text file name : ")
    print()
    if(ChkFile(Name)==True):
        print("Data in the {} file is : ".format(Name))
        Data = open(Name,'r')
        print(Data.read())
    else:
        print("File not present in current directory")



if __name__ == "__main__":
    main()