#   3. Design automation script which accept directory name and delete all
#      duplicate files from that directory. Write names of duplicate files
#      from that directory into log file named as Log.txt, Log.txt should be
#      created into current directory.

# Usage : DirectoryDuplicateRemoval.py "Demo"
# Demo is the name of the Directory

from sys import argv
import os
import hashlib
import time

FilesCount = lambda x: len(x) > 1

def hashfile(path, blocksize = 1024):
    afile = open(path, 'rb')
    hasher = hashlib.md5()
    
    buf = afile.read(blocksize)
    
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)
    
    afile.close()
    
    return hasher.hexdigest()

def FindDuplicates(DirPath):
    if not os.path.isabs(DirPath):
        DirPath = os.path.abspath(DirPath)

    dups = {}

    if os.path.isdir(DirPath):
        for DirName, SubDirs, FileList in os.walk(DirPath):
            for file_name in FileList:
                file_path = os.path.join(DirName,file_name)
                file_hash = hashfile(file_path)
                
                if file_hash in dups:
                   dups[file_hash].append(file_path)
                else:
                    dups[file_hash] = [file_path]
        
        return dups
    else:
        print("Invalid path")

def DeleteFiles(dict,File_Name):
    Results = list(filter(FilesCount,dict.values()))
    iCnt = 0
    with open(File_Name,'a') as fobj:
        fobj.write("#"*70+"\n"+"_"*70+"\n")
        fobj.write("\nLog file created at : "+time.ctime()+"\n")
        fobj.write("_"*70)
        fobj.writelines("\nDuplicates found\n")

        if len(Results) > 0:
            for result in Results:
                for subresult in result:
                    fobj.write(subresult+"\n")
                    iCnt = iCnt + 1
                    if iCnt >= 2:
                        os.remove(subresult)
                iCnt = 0
            fobj.write("Duplicate Files Removed Successfully\n")
            fobj.write("_"*70+"\n")
            print("Duplicate files deleted successfully")
        else:
            print("Duplicates files not found")


def PrintDuplicates(dict):
    
    Results = list(filter(FilesCount, dict.values()))

    if len(Results) > 0:
        print("Duplicates found\nThe following files are identical\n")
        iCnt = 0
        for result in Results:
            for subresult in result:
                iCnt += 1
                if iCnt >= 2:
                    subresult = os.path.split(subresult)
                    print('\t%s'%subresult[1])
            iCnt = 0  
    else:
        print("No duplicate files found")

def main():
    print('-'*70)
    print('-'*70)
    print()

    if len(argv) != 2:
        print("Invalid Number of Arguments")
        exit()

    if argv[1] == '--h' or argv[1] == '--H':
        print("This script is used to write names of duplicate files from that directory into log file named as Log.txt")
        exit()

    if argv[1] == '--u' or argv[1] == '--U':
        print("Usage: Application_Name   DirectoryName")
        exit()

    try:
        if not os.path.exists("LogFiles"):
            os.mkdir("LogFiles")

        # Joining the file name Log11.log to path
        File_Name = os.path.join("LogFiles","Log11_3.log")

        arr = []
        arr = FindDuplicates(argv[1])
        PrintDuplicates(arr)
        DeleteFiles(arr,File_Name)

        print("Check Log11_3.log file")

    except Exception as E:
        print("Invalid Input : ",E)

if __name__ =="__main__":
    main()
