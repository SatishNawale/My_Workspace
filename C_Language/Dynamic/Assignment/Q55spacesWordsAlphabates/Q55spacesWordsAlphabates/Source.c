#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,alphabates=0,spaces=0,words=0;
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

	//to find spaces and alphabates
	for(i=0; i<size; i++)
	{
		if(*(p+i)<='z' && *(p+i)>='A')
		{
			alphabates++;
		}
		else if(*(p+i)==' ')
		{
			spaces++;
		}
	}


	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		flag++;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
			
	}
	printf("\nNumber of words = %d\nNumber of spaces = %d\nNumber of alphabates = %d",flag,spaces,alphabates);
	


	free(p);
	
	getch();
}
