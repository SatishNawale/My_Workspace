#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
	char ch;
	char* q=NULL;
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

	q = (char*)malloc(sizeof(char)*(size));

	for(i=0; i<size-1; i++)
	{
		*(q+i) = *(p+i);
	}
	*(q+i)='\0';

	printf("\nRequired arry is \n");
	printf("%s",q);
free(p);
free(q);
	getch();
}