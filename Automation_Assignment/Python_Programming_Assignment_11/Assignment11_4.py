
#   4. Design automation script which accept directory name and delete all
#      duplicate files from that directory. Write names of duplicate files
#      from that directory into log file named as Log.txt, Log.txt should be
#      created into current directory. Display execution time requried for the
#      script.

# Usage : DerectoryDuplicateRemoval.py "Demo"
# Demo is name of Directory

from sys import argv
import os
import hashlib
import time    

FilesCount = lambda x: len(x) > 1

def DeleteFiles(dict):
    # Deletes duplicate files in given directory #
    Results = list(filter(FilesCount,dict.values()))
    Deleted_Files = []
    Cnt = 0
    if len(Results) > 0:
        for result in Results:
            for subresult in result:
                Cnt = Cnt + 1
                if Cnt >= 2:
                    os.remove(subresult)
                    Deleted_Files.append(subresult)
            Cnt = 0
        return Deleted_Files  
    else:
        print("Duplicates files not found")

def hashfile(path, blocksize = 1024):
    # Calculate the MD5 hash of a file #
    afile = open(path, 'rb')
    hasher = hashlib.md5()
    
    buf = afile.read(blocksize)
    
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)
    
    afile.close()
    
    return hasher.hexdigest()


def FindDuplicates(DirPath):
    # Finds duplicate files within given directory. #
    if not os.path.isabs(DirPath):
        DirPath = os.path.abspath(DirPath)

    dups = {}

    if os.path.isabs(DirPath):
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

    try:
        StartTime = time.time()
        if not os.path.exists("LogFiles"):
            os.mkdir("LogFiles")

        # Joining the file name Log11.log to path
        File_Name = os.path.join("LogFiles","Log11_4.log")
        fd = open(File_Name, 'a')
        seperator = "_"*70
        fd.write("#"*70+"\n"+seperator+'\n')
        fd.write("Log file created at : "+time.ctime()+"\n")
        fd.write(seperator+"\n")

        arr = []
        arr = FindDuplicates(argv[1])

        Deleted_Files = DeleteFiles(arr)
        if not Deleted_Files:
            fd.write("No Duplicate files found.\n")
        else:
            fd.write("Deleted Duplicate Files : \n")
            for i in Deleted_Files:
                print(i+"\n")
                fd.write(i + "\n")
            fd.write(seperator+"\n")
        
        EndTime = time.time()
        print("Time required for this script is : ", EndTime - StartTime)
        print("Check Log11_4.txt file")

    except Exception as E:
        print("Invalid Input : ",E)

if __name__ =="__main__":
    main()
