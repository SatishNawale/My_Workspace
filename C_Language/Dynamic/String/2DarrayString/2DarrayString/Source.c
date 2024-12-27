#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,j=0,k=0,size=1,row,col;
	char ch;
	char*** p;

	printf("Enter number of rows\n");
	scanf("%d",&row);

	printf("Enter number of columns\n");
	scanf("%d",&col);
	//scanf("");
	printf("Please enter Matrix Elments");
	p = (char***)malloc(row*sizeof(char**));

	for(i=0; i<col; i++)
	{
		*(p+i) = (char**)malloc(col*sizeof(char*));
	}

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			k = 0;
			*(*(p+i)+j) = (char*)malloc(sizeof(char));
			*(*(*(p+i)+j)+k)= '\0';
			size = 1;
			scanf(" ");
			do
			{

				scanf("%c",&ch);

				if(ch != '\n')
				{
					size++;
					*(*(p+i)+j) = (char*) realloc(*(*(p+i)+j),size*sizeof(char));
					*(*(*(p+i)+j)+k) = ch;
					*(*(*(p+i)+j)+k+1) = '\0';
					k++;
				}
			}while(ch != '\n');
		}
	}

	printf("\nGiven Matrix is\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%s", *(*(p+i)+j));
			printf("\t");
		}
		printf("\n");
	}

	free(p);

	getch();
}

