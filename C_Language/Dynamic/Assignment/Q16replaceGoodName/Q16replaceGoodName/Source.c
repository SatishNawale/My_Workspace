#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,count=0,count1=0,n,j=0;
	char ch;
	char* q = NULL;
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
	i=0;
	while(*(p+i)!='\0')
	{
		count++;
		i++;
	}

	//take second stringj
	printf("\n\nEnter second string\n");
	q = (char*)malloc(sizeof(char));
	*q = '\0';
	size1 = 1;
	i=0;
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			size1++;
			q = (char*)realloc(q,size1*sizeof(char));
			*(q+i) = ch;
			*(q+i+1) = '\0';
			count1++;
			i++;
		}
	}
	while(ch != '\n');

	printf("\nSecond string is\n");
	printf("%s",q);
	

	//to append second string after first

	*(p+5)=' ';
	i = 6;
	j=0;
	do
	{
		if(*(q+j)!='\0')
		{
			size++;
			p = (char*)realloc(p,size*sizeof(char));
			*(p+i)=*(q+j);
			*(p+i+1) = '\0';
			i++;
			j++;

		}


	}
	while(*(q+j)!='\0');

	printf("\nRequired string is\n");
	printf("%s",p);

free(p);
free(q);

	getch();
}