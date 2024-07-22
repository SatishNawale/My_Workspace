
import os
import shutil

def Copy_Files_Ext(DirName1, DirName2, Extension):
    # Check both pahts are absolute
    if not os.path.isabs(DirName1):
        DirName1 = os.path.abspath(DirName1)
    if not os.path.isabs(DirName2):
        DirName2 = os.path.abspath(DirName2)

    # check directory exists
    if not os.path.isdir(DirName1):
        print("There is no such a dirctory : ", DirName1)
        exit()
    if not os.path.isdir(DirName2):
        os.mkdir(DirName2)    
    
    # Created list to store names of copied files of given extension
    Data = []

    # Search and copy files with given extension
    for foldername, subfoldername, filename in os.walk(DirName1):
        for name in filename:
            if name.lower().endswith(Extension):
                source_file = os.path.join(foldername, name)
                destination_file = os.path.join(DirName2, name)
                shutil.copy2(source_file, destination_file)
                print(f"copied : {source_file} to {destination_file}") 
                Data.append(destination_file)  
    return Data