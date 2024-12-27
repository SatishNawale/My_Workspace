#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
	char ch;
	int* q = NULL;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a String\n");
	
	do
	{
		scanf("%c", &ch);
		if(ch != '\n')
		{
			size++;
			p = (char*)realloc(p, size*sizeof(char));
			*(p+i) = ch;
			*(p+i+1) = '\0';
			i++;
			
		}
	}
	while(ch != '\n');
	printf("%s",p);


	//to store and print ASCII values to another array
	q = (int*)malloc(sizeof(int)*(size-1));

	for(i=0; i<size-1; i++)
	{
		*(q+i) = *(p+i);
	}

	printf("\nInteger array is\n");
	for(i=0; i<size-1; i++)
	{
		printf("%d\t",*(q+i));
	}
free(p);
free(q);
	getch();
}