// 2. Write a C programto print all natural numbers in
//    reverse (from n to 1). -using while loop

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);    //Accepting input from user

    //Printing all natural numbers upto n in reverse order
    while(n>0)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}