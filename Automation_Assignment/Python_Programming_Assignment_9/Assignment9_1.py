# 1. Write a program which accepts file name from user and check whether that file exists in
#    current directory or not.

# Input : Demo.txt
# Check whether Demo.txt exists or not.

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
    Name = input("Please enter file name : ")
    if(ChkFile(Name)==True):
        print("File is present in current directory")
    else:
        print("File not present in current directory")

if __name__ == "__main__":
    main()