import sys
import os
import time

def File_Ext_Rename(DirName, Old_ext, New_ext):
    if not (Old_ext.startswith('.') and New_ext.startswith('.')):
        print("One or Both extensions not start with '.'")
        exit()

    count = 0
    Old_ext_files = []
    New_ext_files = []

    flag = os.path.isabs(DirName)

    if(flag == False):
        print("Path is not a absolute path")
        DirName = os.path.abspath(DirName)
        print("Converted absolute path is : ", DirName)

    exist = os.path.isdir(DirName)

    if(exist == True):
        for foldername, subfoldername, filename in os.walk(DirName):
            for name in filename:
               if name.endswith(Old_ext):
                count = count + 1
                Old_ext_files.append(name)
                base, _ = name.split('.')
                New_name = base + New_ext
                New_ext_files.append(New_name)
                Old_path = os.path.join(DirName, name)
                New_path = os.path.join(DirName, New_name)

                try:
                    os.rename(Old_path,New_path)
                except Exception as e:
                    print("Error occurred : {Old_path} ", e)
        print("Directory watching complete")
        return Old_ext_files, New_ext_files, count
    else:
        print("There is no such directory")