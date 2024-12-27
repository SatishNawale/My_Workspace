#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;
	int b = 20;

	//constant pointer to constant

	int const * const p = &a;

	//p = &b;				error compile time
	// *p = 300;				error compile time



	getch();
}