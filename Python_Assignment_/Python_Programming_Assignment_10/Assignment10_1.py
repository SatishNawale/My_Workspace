# 1. Design automation script which accept directory name and file extension from user. Display all
#    files with the extension.

# Usage : DirectoryFileSearch.py "Demo" ".txt"

# Demo is name of directory and .txt is the extension that we want to search.

import time
import sys
import os
from DirectoryWatcher import *
def main():
    print("-----------------------------------------------")
    print("DirectoryWatcher: SearchFiles_by_givenExtension")
    print("-----------------------------------------------")
    print()

    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This script is used to perform directory Traversal")
            exit()

        if(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Usage of the script : ")
            print("Name_of_File     Name_of_Directory       Extension")
            exit()
    
    if(len(sys.argv) == 3):
        try:
            starttime = time.time()
            if not os.path.exists("LogFiles"):
                os.mkdir("LogFiles")

            FileName = os.path.join("LogFiles", "Log1.log")
            
            fd = open(FileName, 'a')
            separator = "-"*70
            fd.write(separator + "\n")
            fd.write("Assignment10_1 output logfile : "+"\n")
            fd.write("Log file created at : "+time.ctime()+"\n")
            fd.write(separator+"\n")

            Files = DirectoryWatcher(sys.argv[1],sys.argv[2])
            for i in Files:
                fd.write(i + "\n")

            endtime = time.time()
            fd.write(separator+'\n')
            fd.write("Time required to execute the script is : {}\n\n".format(endtime-starttime))
            print("Output stored in log file successfully")
        except Exception as obj2:
            print("Unable to perform the task due to ", obj2)
    
    else:
        print("Invalid option")
        print("Use --h to get the help and use --u to get the usage of application")
        exit()

    print()
    print("-----------------------------------------------")
    print("--------Thank you for using our script---------")
    print("------------Marvellous Infosystems-------------")
    print("-----------------------------------------------")

if __name__ == "__main__":
    main()
