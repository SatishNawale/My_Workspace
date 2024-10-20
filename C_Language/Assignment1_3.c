// 3. Write a C program to print all alphabets from a to z.

#include<stdio.h>

int main()
{
    char i = 'a';
    printf("Characters from a to z: \n");

    while(i<='z')
    {
        printf("%c\t", i);
        i++;
    }

    return 0;
}