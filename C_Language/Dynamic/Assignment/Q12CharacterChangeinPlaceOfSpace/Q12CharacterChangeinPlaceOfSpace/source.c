#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
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

	printf("\nGiven string is\n");
	printf("%s",p);


	printf("\n\n");
	//to replace spaces
	i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			printf("%c",'#');
		}
		else printf("%c",*(p+i));
		i++;
	}

free(p);
	getch();
}