# 1. Design automation script which accept directory name and display checksum
#    of all files.

#    Usage : DirctoryChecksum.py "Demo"
#    Demo is name of directory.

from sys import argv
import os
import hashlib
import time

def DisplayCheckSum(DirPath):
    if not os.path.isabs(DirPath):
        DirPath = os.path.abspath(DirPath)

    Data = []

    if os.path.isdir(DirPath):
        for DirName, SubDirs, FileList in os.walk(DirPath):
            print("Current Folder : ",DirName)
            print(' ')
            for file_name in FileList:
                file_path = os.path.join(DirName, file_name)
                try:
                    with open(file_path, 'rb') as fobj:
                        file_data = fobj.read()
                        file_checksum = hashlib.md5(file_data).hexdigest()
                        s = file_name + " : " + file_checksum
                        print(f"\t{file_name} : {file_checksum}")
                        Data.append(s)
                except Exception as eobj:
                    print(f"Error reading file {'%s'%file_path[1]}: {eobj}\n")
    return Data

def main():
    print('-'*70)
    print('-'*70)
    print()

    if len(argv) != 2:
        print("Invalid Number of Arguments")
        print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
        exit()

    if argv[1] == '--h' or argv[1] == '--H':
        print("This script is used to traverse the specific diretory and display checksum of files")
        exit()

    if argv[1] == '--u' or argv[1] == '--U':
        print("Usage: Application_Name   DirectoryName")

    try:
        StartTime = time.time()

        # Calling function to find checksum of files
        Data = DisplayCheckSum(argv[1])

        # Storing output in the log file
        if not os.path.exists("LogFiles"):
            os.mkdir("LogFiles")
        
        # Adding new file to folder LogFiles
        FileName = os.path.join("LogFiles","Log11_1.log")

        fd = open(FileName, 'a')
        seperator = "_"*70
        fd.write("#"*70+"\n"+seperator+'\n')
        fd.write("Log file created at : "+time.ctime()+"\n")
        fd.write(seperator+"\n")
        fd.write("Checksum of the files : \nName : Checksum \n")

        # Writing the output in the log file
        for i in Data:
            fd.write(i + "\n")
        fd.write(seperator+"\n")
        EndTime = time.time()
        
        print("Time required for this script is : ",EndTime - StartTime)
        fd.write("Time required to find checksum of all files : ")
        fd.write(str(EndTime - StartTime)+'\n\n')

    except Exception as E:
        print("Exception occurred : ",E)

if __name__ =="__main__":
    main()
