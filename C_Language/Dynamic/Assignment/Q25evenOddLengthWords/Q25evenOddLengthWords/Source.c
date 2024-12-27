#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,count=0,odd=0,even=0;
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
	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		count=0;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
			count++;
		}
		if(count%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
			
	}

	printf("\neven = %d\nOdd = %d",even,odd);


	free(p);
	
	getch();
}
