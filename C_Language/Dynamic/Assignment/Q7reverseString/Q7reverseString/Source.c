#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag,count=0;
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
	printf("\nReverse String is\n");
	i=0;
	while(*(p+i)!='\0')
	{
		count++;
		i++;
	}
	count--;
	k=0;
	while(k<=count)
	{
		while(*(p+count-k)== ' '&&k<=count)
		{
			k++;
		}
		
		while(*(p+count-k) !=' ' && k<=count)
		{
			printf("%c",*(p+count-k));
			if(*(p+count-k-1)==' ')
			{
				i=k-1;
				while(i<=count)
				{
					if(*(p+count-i)!=' ')
					{
						printf(" ");
						break;
					}
					i++;

				}
			}
			k++;
		}
	}


	
	getch();
}


/*
while(k<=count)
	{
		printf("%c", *(p+count-k));
		k++;
	}
	*/