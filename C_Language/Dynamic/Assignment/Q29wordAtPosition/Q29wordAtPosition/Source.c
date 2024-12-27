#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,index,count=0;
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
	printf("\nEnter number of element to print\n");
	scanf("%d",&index);

	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		count++;
		flag=i;
		if(count==index)
		{
			k = flag;
			while(*(p+k)!='\0' && *(p+k)!=' ')
			{
				printf("%c",*(p+k));
				k++;
			}
		}
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
		
			
	}




	free(p);
	
	getch();
}
