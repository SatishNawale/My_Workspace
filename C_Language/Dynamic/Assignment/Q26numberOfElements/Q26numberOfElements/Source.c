#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i=0,n,count=0;


int* p = NULL;

printf("Enter size of an array\n");
scanf("%d",&n);

p = (int*)malloc(sizeof(int)*n);
printf("\nEnter array elements\n");
for(i=0; i<n; i++)
{
	scanf("%d",p+i);
}

printf("\nGiven array is\n");
for(i=0; i<n; i++)
{
	printf("%d",*(p+i));
}

printf("\nsize of an array is\n");
for(i=0; i<n; i++)
{
	count++;
}

printf("%d",count);


free(p);
	getch();
}