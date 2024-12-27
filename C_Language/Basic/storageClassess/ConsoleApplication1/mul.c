#include<stdio.h>
#include<conio.h>

extern int a;
extern int b;
void mul()
{
	int mul = a * b;
	printf("\n%d ",mul);
}