#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	int i,j;
	int** p;
	int* row = (int*)malloc(sizeof(int));
	int* col = (int*)malloc(sizeof(int));

	printf("Please enter number of rows of Matrix\n");
	scanf("%d", row);

	printf("\nPlease enter number of columns of Matrix \n");
	scanf("%d",col);


	//create memory/array to store adresses of 1D arrays
	
	p = (int**)malloc(*row*sizeof(int));

	//create memory for 1D array and store adresses in above array
	for(i=0;i<*row; i++)
	{
		*(p+i) = (int*)malloc(*col*sizeof(int));
	}

	//to store 




	getch();
}