#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size;
	char ch;

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

	printf("\nGiven String is\n");
	printf("%s",p);

	//*********************************

	//to convert upper to lower case
	printf("\n\nSring in Toggled form\n");
	i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i) >= 'A' && *(p+i)<='Z')
		{
			*(p+i) = *(p+i)+32;
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				printf(" ");
			}
		}
		else if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i)-32;
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				printf(" ");

			}
		}
		i++;
	}
	


	free(p);
	
	getch();
}
