// 4. Write a C program to print all even numbers between
//    1 to n. - Using while loop

#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Even numbrs between 1 to %d are :",n);
    
    while(i<=n)
    {
        if(n%2==0)
        {
            printf("%d\t",i);
        }
        i++;
    }

    return 0;
}