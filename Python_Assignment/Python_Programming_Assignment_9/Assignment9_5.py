# 5. Accept file name and one string from user and return the frequency of that string from file.

# Input : Demo.txt  Marvellous
# Search "Marvellous" in Demo.txt 

import os
from sys import *
import time
    
def Count_Frequency_of_string(File1, Str):
    
    if (os.path.exists(File1)):
        #oprning file in read mode
        with open(File1,'r') as fobj:
            #reading 
            Data = fobj.read()
            #count frequency of given string
            Cnt = Data.count(Str)
            return Cnt
    else:
        print("File does not exists in current path")
        exit()
        
def main():
    print('--------------------------------------------------------------')
    print("-----------Application to compare two Existing files-----------")
    print('--------------------------------------------------------------\n')

    print("Application name : "+argv[0])

    try:
        startTime = time.time()

        FileName = input("Please enter file name : ")
        Str = input("Please enter String to search in file : ")

        Cnt = Count_Frequency_of_string(FileName, Str)
        
        print("The frequency of string {0} is : ", Cnt)

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