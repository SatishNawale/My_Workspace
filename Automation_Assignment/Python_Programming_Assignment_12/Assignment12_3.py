#   3. Design automation script which accept directory name from user and create
#      log file in that directory which contains information of running processes
#      as its name, PID, Username.

import os
import time
import sys
import psutil

def GetProcessInfo():
    listprocess = []

    for proc in psutil.process_iter(['pid', 'name', 'username']):
        try:
            listprocess.append(proc.info)
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass

    return listprocess

def createlog(FileName = "Log.log",DirName = sys.argv[1]):

    if not os.path.isdir(DirName):
        os.mkdir(DirName)

    FileName = os.path.join(DirName,FileName)

    fobj = open(FileName, 'a')

    seperator = "-"*70
    fobj.writelines(seperator+"\n")
    fobj.writelines("Marvellous Process Log"+"\n")
    fobj.writelines("Log file create at : "+time.ctime()+"\n")
    fobj.writelines(seperator+"\n")

    Arr = GetProcessInfo()

    for data in Arr:
        fobj.writelines('%s \n'%data)

    fobj.writelines(seperator+"\n")

    print(f"Log file is successufully generated at location {FileName}")

def main():
    print('-'*70)
    print("---------------Script to create log file of processes running--------------")
    print('-'*70)

    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for Create log which contains information of running processes")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage: File_Name    Directory_Name")
            exit()

        else:
            try:
                createlog()
            except Exception as eobj:
                print(eobj)
    else:
        print("Invalid Number of agurments")
        print("Use --h or --H to get the Help of file and --u or --U to get the Usage of file")
        exit()

    print()
    print('-'*70)
    print('-'*70)
    
if __name__ == "__main__":
    main()