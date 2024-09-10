# 5. Write a program which display 10 to 1 on screen.

#    Output : 10 9 8 7 6 5 4 3 2 1

# to display requred numbers
def Display():
    for i in range(10,0,-1):
        print(i, end=" ")

def main():
    Display()

# Starter
if __name__ == "__main__":
    main()