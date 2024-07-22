#   4. Design automation script which accept two directory names and one
#      file extension. Copy all files with the specified extension from 
#      first directory into second directory. Second directory should be
#      created at run time.

import os
import sys
import time
import Copy_by_Extension


def main():
    print('-'*70)
    print('-'*70)
    print()
    
    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for copy all files with the specified extension form first directory into second directory")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Name_of_file.py   DirName1   DirName2   Extension (.doc or .py)")
            exit()
        
        else:
            print("Invalid Option")
            print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
            exit()

    elif len(sys.argv) == 4:
        try:
            startTime = time.time()

            Data = Copy_by_Extension.Copy_Files_Ext(sys.argv[1], sys.argv[2], sys.argv[3])

            # Storing output in the log file
            if not os.path.exists("LogFiles"):
                os.mkdir("LogFiles")
            
            # Adding new file to folder LogFiles
            FileName = os.path.join("LogFiles","Log10_4.log")

            fd = open(FileName, 'a')
            seperator = "_"*70
            fd.write(seperator+"\n")
            fd.write("Log file created at : "+time.ctime()+"\n")
            fd.write(seperator+"\n")

            # Writing the output in the log file
            for i in Data:
                fd.write(i+"\n")
            fd.write(seperator+"\n")
            endTime = time.time()

            print("Time required for the directory watcher script is : ",endTime - startTime)
            fd.write("Time required to copy files : ")
            fd.write(str(endTime - startTime)+'\n\n')

        except Exception as eobj:
            print("Unable to perform task due to ",eobj)
        
    else:
        print("Invalid Number of Arguments")
        print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
        exit()

    print()
    print('-'*70)
    print('-'*70)
    exit()

if __name__ == "__main__":
    main()