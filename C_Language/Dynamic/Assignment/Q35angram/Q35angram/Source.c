#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,j=0,size,size1,flag=0,count1=0,count2=0,flag1=0,flag2=0,mark=0,mark1=0,mark2=0;
	char ch,ch1;

	char* q = (char*) malloc(sizeof(char));
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

	printf("\nFirst string is\n");
	printf("%s",p);


	///to take second string
	*q = '\0';
	size1 = 1;
	printf("\n\nPlease enter second String\n");
	i=0;
	do
	{
		scanf("%c", &ch1);
		if(ch1 != '\n')
		{
			size1++;
			q = (char*)realloc(q, size1*sizeof(char));
			*(q+i) = ch1;
			*(q+i+1) = '\0';
			i++;
			
		}
	}
	while(ch1 != '\n');
	
	printf("\nSecond string is\n");
	printf("%s",q);

	//to find given strings are anagram or not



	i=0;
	j=0;

	while(*(p+i)!='\0')
	{
		j=0;
		while(*(q+j) != '\0')
		{
			if(*(p+i) == *(q+j))
			{
				flag=1;
			}
			j++;
		}
		if(flag==0)
		{
			flag1 = 1;
			break;
		}
		i++;

	}
	if(flag1==0)
	{
		flag2=1;
	}


	i=0;
	j=0;

	while(*(q+i)!='\0')
	{
		j=0;
		while(*(p+j) != '\0')
		{
			if(*(p+i) == *(q+j))
			{
				mark=1;
			}
			j++;
		}
		if(mark==0)
		{
			mark1 = 1;
			break;
		}
		i++;

	}
	if(mark1==0)
	{
		mark2=1;
	}

	if(mark2==0 || flag2==0)
	{
		printf("\n\nGiven strings are not Anagram");
	}
	else

	{
		printf("\n\nGiven strigs are anagram");
	}



free(p);
free(q);
	getch();
}