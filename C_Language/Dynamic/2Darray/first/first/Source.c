#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int i,j;
	int** p;
	int* row = (int*)malloc(sizeof(int));
	int* col = (int*)malloc(sizeof(int));

	printf("Please enter number of rows of Matrix\n");
	scanf("%d",row);
	printf("\nPlease enter number of columns of Matrix\n");
	scanf("%d",col);
	
	 p = (int**)malloc(*row*sizeof(int*));				//created memory for first array to store adress of 1D arrays to be creat

	for(i=0;i<*row;i++)										//to store adress of 1D arrays in first created memory
	{
		*(p+i) = (int*)malloc(*col*sizeof(int));
	}

	printf("\nPlease enter Matrix elements\n");				//to get values of matrix
	for(i=0;i<*row; i++)
	{
		for(j=0;j<*col;j++)
		{
			scanf("%d", *(p+i)+j);
		}
	}


	printf("\nGiven matrix is \n");							//to print given matrix/2D array
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*col; j++)
		{
			printf("%d\t", *(*(p+i)+j));
		}
		printf("\n");
	}

	getch();
}