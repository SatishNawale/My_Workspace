#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int i,j;
	int** p;
	int** q;
	int* row = (int*)malloc(sizeof(int));  //row for matrix P
	int* col = (int*)malloc(sizeof(int));  //columns for matrix P
	int* row1 = (int*)malloc(sizeof(int)); //row for Matrix Q
	int* col1 = (int*)malloc(sizeof(int)); //columns for Matrix P


	//for creating matrix P

	printf("Please enter number of rows of Matrix P\n");
	scanf("%d",row);
	printf("\nPlease enter number of columns of Matrix P\n");
	scanf("%d",col);
	
	 p = (int**)malloc(*row*sizeof(int*));				//created memory for first array to store adress of 1D arrays to be creat

	for(i=0;i<*row;i++)										//to store adress of 1D arrays in first created memory
	{
		*(p+i) = (int*)malloc(*col*sizeof(int));
	}

	printf("\nPlease enter elements for Matrix P\n");				//to get values of matrix
	for(i=0;i<*row; i++)
	{
		for(j=0;j<*col;j++)
		{
			scanf("%d", *(p+i)+j);
		}
	}


	printf("\nGiven matrix P is \n");							//to print given matrix/2D array
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*col; j++)
		{
			printf("%d\t", *(*(p+i)+j));
		}
		printf("\n");
	}

	//for creating matrix Q

	printf("Please enter number of rows of Matrix Q\n");
	scanf("%d",row1);
	printf("\nPlease enter number of columns of Matrix Q\n");
	scanf("%d",col1);
	
	 q = (int**)malloc(*row1*sizeof(int*));				//created memory for first array to store adress of 1D arrays to be creat

	for(i=0;i<*row1;i++)										//to store adress of 1D arrays in first created memory
	{
		*(q+i) = (int*)malloc(*col1*sizeof(int));
	}

	printf("\n\nPlease enter elements for Matrix Q\n");				//to get values of matrix
	for(i=0;i<*row1; i++)
	{
		for(j=0;j<*col1;j++)
		{
			scanf("%d", *(q+i)+j);
		}
	}


	printf("\nGiven matrix Q is \n");							//to print given matrix/2D array
	for(i=0; i<*row1; i++)
	{
		for(j=0; j<*col1; j++)
		{
			printf("%d\t", *(*(q+i)+j));
		}
		printf("\n");
	}
	// to find Sum of Two Matrices p and q

	printf("\n\nSum of two Matrices is \n");

	for(i=0; i<*row; i++)
	{
		for(j=0; j<*col; j++)
		{
			printf("%d\t", (*(*(p+i)+j))+(*(*(q+i)+j)));
		}
		printf("\n");
	}



	getch();
}