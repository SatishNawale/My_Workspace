#   2. Design automation script which accept directory name and write names of
#      of duplicate files from that directory into log file as Log.txt. Log.txt
#      file should be created into current directory.

# Usage : DirectoryDuplicate.py     "Demo".
# Demo is the name of directory.

from sys import argv
import os
import hashlib
import time    

def hashfile(path, blocksize = 1024):
    # Calculating the MD5 hash of a file.
    afile = open(path, 'rb')
    hasher = hashlib.md5()
    
    buf = afile.read(blocksize)
    
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)
    
    afile.close()
    
    return hasher.hexdigest()


def Find_Duplicates(Dir_path):
    # Finds duplicate files in given directory 
    if not os.path.isabs(Dir_path):
        Dir_path = os.path.abspath(Dir_path)

    dups = {}

    if os.path.isdir(Dir_path):
        for Dir_name, Sub_dirs, File_list in os.walk(Dir_path):
            for file_name in File_list:
                file_path = os.path.join(Dir_name,file_name)
                file_hash = hashfile(file_path)
                
                if file_hash in dups:
                   dups[file_hash].append(file_path)
                else:
                    dups[file_hash] = [file_path]
        return dups
    else:
        print("Invalid path")

FilesCount = lambda x: len(x) > 1

def Print_Duplicates(dict,File_Name):
    # Prints duplicate files in Log file
    Results = list(filter(FilesCount, dict.values()))

    if len(Results) > 0:
        with open(File_Name, "a") as fobj:
            fobj.write("#"*70+"\n"+"_"*70+"\n")
            fobj.write("\nLog file created at : "+time.ctime()+"\n")
            fobj.write("_"*70)
            fobj.writelines("\nDuplicates found\nThe following files are identical\n")
            iCnt = 0
            for result in Results:
                for subresult in result:
                    iCnt += 1
                    if iCnt >= 2:
                        subresult = os.path.split(subresult)
                        fobj.writelines('\t%s'%subresult[1])
                        fobj.writelines('\n')
                iCnt = 0  
            fobj.write("_"*70+"\n\n") 
            fobj.close()
    else:
        print("No duplicate files found")

def main():
    print('-'*70)
    print('-'*70)
    print()

    if len(argv) != 2:
        print("Invalid Number of Arguments")
        print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
        exit()

    if argv[1] == '--h' or argv[1] == '--H':
        print("This script is used to write names of duplicate files from that directory into log file named as Log.txt")
        exit()

    if argv[1] == '--u' or argv[1] == '--U':
        print("Usage: Application_Name   DirectoryName")

    try:
        arr = []
        StartTime = time.time()
        if not os.path.exists("LogFiles"):
            os.mkdir("LogFiles")

        # Joining the file name Log11.log to path
        File_Name = os.path.join("LogFiles","Log11_2.log")

        arr = Find_Duplicates(argv[1])
        Print_Duplicates(arr,File_Name)
        EndTime = time.time()

        # print("Time required for this script is : ",EndTime - StartTime)
        # fobj =  open("File_Name",'a')
        # fobj.write("Tiem required to this script is : ")
        # fobj.write(str(EndTime-StartTime)+"\n\n")
        print("Check Log.txt file")

    except Exception as E:
        print("Invalid Input : ",E)


if __name__ =="__main__":
    main()
