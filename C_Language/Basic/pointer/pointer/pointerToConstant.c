#include<stdio.h>
#include<conio.h>

void pntToConst()
{
	int a = 10;
	int b = 20;
	int c = 30;


	const int * p = &a;
	int const* q = &b;

	*p = 400;
}