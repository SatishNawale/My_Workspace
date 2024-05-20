# 9. Write a program which display first 10 even numbers on screen.

# Output : 2 4 6 8 10 12 14 16 18 20


# To display firt 10 even numbers on screen
def Display():
    j = 2
    i = 0
    while(i<10):
        print(j, end="\t")
        i +=1
        j += 2

def main():
    Display()
    
# starter
if __name__ == "__main__":
    main()