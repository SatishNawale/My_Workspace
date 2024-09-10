# 4. Write a program which accept two file names from user and compare contents of both the 
#    files. If both the files contains same contents then diaplay success otherwise display failure.
#    Accept names of both the files from command line.

# Input : Demo.txt  Hello.txt
# Compare contents of Demo.txt and Hello.txt

import os
from sys import *
import time
    
def CompareFile(File1, File2):
    
    if (os.path.exists(File1)and os.path.exists(File2)):
        #oprning file in read mode
        with open(File1,'rb') as fobj1, open(File2,'rb') as fobj2:
            #reading 
            Data1 = fobj1.read()
            Data2 = fobj2.read()

        return Data1 == Data2
    else:
        print("One or BOth files not exists in current path")
        return False
        
def main():
    print('--------------------------------------------------------------')
    print("-----------Application to compare two Existing files-----------")
    print('--------------------------------------------------------------\n')

    print("Application name : "+argv[0])

    if (len(argv) !=3):
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
        if CompareFile(argv[1], argv[2]):
            print("Success")
        else:
            print("Failure")
        
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