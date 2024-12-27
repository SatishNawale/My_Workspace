#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,flag=0,n;
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



	//to compare first N charcteers
	printf("\nEnter value of N to compare first N characters\nN = ");
	scanf("%d",&n);
	printf("\n");
	

	if(size-1<n || size1-1<n)
	{
		printf("\nGiven strigns are not equal");
		flag=1;
	}
	
	else
	{

		for(i=0; i<n; i++)
		{
			if(*(p+i)==*(q+i)||*(p+i)+32 == *(q+i) || *(p+i)-32 == *(q+i))
			{
				continue;
			}
			else
			{
				printf("\n\nGiven strings are not equal\n");
				flag=1;
				break;
			}
		}
		
	}
	if(flag==0)
	{
		printf("\n\nGiven strings are equal\n");
	}
free(p);
free(q);
	getch();
}