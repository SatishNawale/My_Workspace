// 1. Write a C program to print all natural numbers from 
//    1 to n. - Using while loop

#include<stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter the value of n:");
    scanf("%d", &n);    //Accepting input from user

    //Printing all natural numbers upto n.
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}