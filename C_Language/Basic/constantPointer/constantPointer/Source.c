#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;
	int b = 20;


	//constant pointer
	int* const p = &a;
	*p=400;
	printf("\n%d",a);
//	p = &b;											error
//	printf("\n%d",*p);



	getch();
}