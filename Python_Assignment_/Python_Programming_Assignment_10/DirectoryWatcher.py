import os

def DirectoryWatcher(DirName, Extension):
    count = 0
    Files = []
    flag = os.path.isabs(DirName)

    if(flag == False):
        print("Path is not a absolute path")
        DirName = os.path.abspath(DirName)
        print("Converted absolute path is : ", DirName)

    exist = os.path.isdir(DirName)

    if(exist == True):
        for foldername, subfoldername, filename in os.walk(DirName):
            for name in filename:
               if name.endswith(Extension):
                Files.append(name)
        return Files
    else:
        print("There is no such directory")
