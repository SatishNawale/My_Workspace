#include<stdio.h>
#include<conio.h>

int add(int n)
{
	int sum;
	if(n==0)
	{
		return 0;
	}
	else
	{
		sum = n+add(n-1);
		return sum;
	}

}
void main()
{
	int i=1;
	int a,n;
	printf("Enter value of n\n");
	scanf("%d",&n);
	a = add(n);
	printf("Sum of 1 to %d is %d",n,a);
	



	getch();
}