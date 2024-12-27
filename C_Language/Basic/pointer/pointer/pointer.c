#include<stdio.h>
#include<conio.h>

extern int c;
//extern const int d;
void pointer()
{
	int a = 10;
	const int b = 20;

	int* p = &a;
	int* p1 = &b;
	int* p2 = &c;
//	int* p3 = &d;


	*p = 200;
	*p1 = 200;
	*p2 = 200;
	//*p3 = 200;

	printf("\n%d",a);
		printf("\n%d",b);
			printf("\n%d",c);
	//printf("%d",d);

			int* q = &a;
			q = 200;


		getch();
}
