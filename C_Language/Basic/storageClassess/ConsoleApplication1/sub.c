#include<stdio.h>
#include<conio.h>

extern int a;
extern int b;
void sub()
{
	int sub = a - b;
	printf("\n%d ",sub);
}