#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n,temp,n1,n2,n3,j=0;
	int* p=NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*) malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nFibonacci Series are\n");
	for(i=0; i<n; i++)
	{
		temp = *(p+i);
		n1=0;
		printf("0\t");
		n2=1;
		printf("1\t");
		n3=n1+n2;
		for(j=2; n3<temp; j++)
		{
			n1 = n2;
			n2 = n3;
			n3 = n1+n2;
			printf("%d\t", n3);

		}
		printf("\n");
	}

	free(p);
	getch();

}