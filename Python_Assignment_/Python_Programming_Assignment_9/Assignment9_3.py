# 3. Write a program which accept file name from user and create new file named as Demo.txt and
#    copy all contents from existing file into new file. Accept file name through command line
#    arguments.

# Input : ABC.txt
# Create new file as Demo.txt and copy contents of ABC.txt

import os
from sys import *
import time
    
def CopyFile(FileName):
    
    if os.path.exists(FileName):
        #oprni  ng file in read mode
        fobj = open(FileName,'r')
        #reading 
        Data = fobj.read()
        # Creating file Demo.txt, if already exist then it will open in write mode
        fobj1 = open('Demo.txt','w')
        fobj1.write(Data)
        fobj1.close()
        fobj1 = open('Demo.txt','r')
        Data1 = fobj1.read()
        print("{0} File copied successfully into Demo.txt".format(FileName))
        return Data1
    else:
        print("Invalid path")
        
def main():
    print('--------------------------------------------------------------')
    print("-----Application to copy Existing text file into Demo.txt-----")
    print('--------------------------------------------------------------\n')

    print("Application name : "+argv[0])

    if (len(argv) != 2):
        print("Error : Invalid number of arguments")
        print("Enter -H for Help or -U for usage")
        exit()
    
    if (argv[1] == "-h") or (argv[1] == "-H"):
        print("This Script is used to traverse specific directory and display chcksum of files")
        exit()
    
    if (argv[1]=="-u") or (argv[1] == "-U"):
        print("Usage : ApplicatonName AbsolutePath_of_Directory Extension")
        exit()
    
    try:
        startTime = time.time()
        # Calling funtion CopyFile()
        Data = CopyFile(argv[1])
        print("Data in file Demo.txt is : ")
        print(Data)
        endTime = time.time()

        print('Took %s seconds to evaluate.'%(endTime - startTime))
    
    except Exception as E:
        print("Error : Invalid input", E)
    
    print()

    print('--------------------------------------------------------------')
    print("----------------------End of Application----------------------")
    print('--------------------------------------------------------------')


if __name__ == "__main__":
    main()