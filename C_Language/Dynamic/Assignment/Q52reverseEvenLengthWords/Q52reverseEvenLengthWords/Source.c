#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,j=0,size,flag,count=0;
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
	//to reverse even length words
	printf("\n\nReversed even only words in string\n\n");
	i=0;
	k=0;
	
	while(*(p+i)!='\0')
	{
		while(*(p+i)==' '&&*(p+i)!='\0')
		{
			i++;
		}
		k=i;
		count=0;
		while(*(p+i)!= ' '&& *(p+i)!='\0')
		{
			i++;
			count++;
		}
		j=i-1;
		if(count%2==0)
		{
			while(j>=k)
			{
				printf("%c",*(p+j));
				j--;
			}
		}
		else
		{
			while(k<=j)
			{
				printf("%c",*(p+k));
				k++;
			}
		}
		if(*(p+i)==' ')
		{
			printf(" ");
		}
	}


	free(p);
	getch();
}