#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k,size,flag;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("Please enter a String\n");
	
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


	printf("\n\nString without extra spaces is\n");
	//to remove extra spaces
	i=0;
	while(*(p+i)!='\0')
	{
		while(*(p+i)== ' '&&*(p+i)!='\0')
		{
			i++;
		}
		
		while(*(p+i) !=' ' && *(p+i) !='\0')
		{
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				k=i+1;
				while(*(p+k)!='\0')
				{
					if(*(p+k)!=' ')
					{
						printf(" ");
						break;
					}
					k++;

				}
			}
			i++;
		}
	}

	getch();
}