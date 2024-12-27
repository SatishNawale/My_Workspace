#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int power(int x, int y)
{
	int p;
	if(y==1)
	{
		return x;
	}
	else
	{
		y--;
		p =x*power(x,y);
		return p;
	}

}



void main()
{
	int i,X,Y,p;

	printf("Enter value of X\n");
	scanf("%d",&X);

	printf("Enter Power of X\n");
	scanf("%d",&Y);

	//to find y power of x

	p = power(X,Y);
	printf("%d power of %d is = %d",X,Y,p);
	getch();
}