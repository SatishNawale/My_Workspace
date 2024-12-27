#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,rev,rem,n;
	int* p;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to find position of palindrome

	printf("\nPosition of Palindrome elements is\n");
	for(i=0; i<n; i++)
	{
		temp = *(p+i);
		rev = 0;
		while(temp>0)
		{
			rem = temp%10;
			rev = rev*10 + rem;
			temp = temp/10;
		}
		if(rev==*(p+i))
		{
			printf("%d\t",i);
		}
	}





	getch();
}