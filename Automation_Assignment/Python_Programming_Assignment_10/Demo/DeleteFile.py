import os

def main():
    print("Enter the name of file that you want to open for reading purpose : ")
    Fname = input()

    if os.path.exists(Fname):
        os.remove(Fname)

    else:
        print("Unabel to delete file as file is not present in the current directory")
    
    
if __name__ == "__main__":
    main()