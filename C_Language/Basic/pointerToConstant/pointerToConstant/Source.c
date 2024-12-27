#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;
	int b = 20;
	int c = 30;



	const int* p = &a;
	p = &c;
	printf("\n%d",*p);
	//*p = 400;
	printf("\n%d",*p);

	

	getch();
}