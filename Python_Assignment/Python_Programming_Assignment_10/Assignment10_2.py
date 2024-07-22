# 2. Design automation script which accept directory name and two file extensions from user.
#    Rename all files with first file extension with the second file extention.

# Usage : DirectoryRename.py "Demo" ".txt" ".doc"

# Demo is name of directory and .txt is the extension that we want to search and rename
# with .doc.
# After execution this script each .txt file gets renamed as .doc.

import sys
import os
import time
from FileRename import File_Ext_Rename # type: ignore

def main():
    print("----------------------------------------")
    print("Directory Watcher: Change File Extension")
    print("----------------------------------------")
    print()

    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This script is used to perform directory Traversal")
            exit()

        if(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Usage of the script : ")
            print("Name_of_File     Name_of_Directory   Old_extension   New_extension")
            exit()
    
    if(len(sys.argv) == 4):
        try:
            starttime = time.time()

            Old_file_names = [] # list to store old file names with old extension
            New_file_names = [] # list to store new file names with new extension

            # checking 'LogFiles' folder is there in given directory or not
            # if not then creting folder named 'LogFiles' to store output in log file
            if not os.path.exists("LogFiles"):
                os.mkdir("LogFiles")

            # adding new folder and log file to path
            FileName = os.path.join("LogFiles", "Log10_2.log")
            
            fd = open(FileName, 'a')
            separator = "-"*70
            fd.write(separator + "\n")
            fd.write("Assignment10_2 output logfile : "+"\n")
            fd.write("Log file created at : "+time.ctime()+"\n")
            fd.write(separator+"\n")

            # calling function to change file extension
            Old_file_names, New_file_names, count = File_Ext_Rename(sys.argv[1],sys.argv[2].lower(),sys.argv[3].lower())
            
            # writing output into log file
            for i,j in zip(Old_file_names,New_file_names):
                data = ("Renamed : " + i + " --> " + j + "\n")
                fd.write(data)
            if count == 0:
                fd.write("There were no files with extension {0} in the Directory {1}\n".format(sys.argv[2],sys.argv[1]))
            fd.write(separator+"\n")
            endtime = time.time()

            fd.write("Time required to execute the script is : ")
            fd.write(str(endtime-starttime)+'\n\n')
            print("Output Stored in log file successfully")

        except Exception as obj2:
            print("Unable to perform the task due to ", obj2)
    
    else:
        print("Invalid option")
        print("Use --h to get the help and use --u to get the usage of application")
        exit()

    print()
    print("----------------------------------------")
    print("-----Thank you for using our script-----")
    print("--------Marvellous Infosystems----------")
    print("----------------------------------------")

if __name__ == "__main__":
    main()
