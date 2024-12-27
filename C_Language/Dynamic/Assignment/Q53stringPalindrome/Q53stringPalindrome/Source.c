#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,temp,flag=0;
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

	//to find given string palindrome or not

	i=0;
	k=size-2;
	flag=0;
	while(i<=k)
	{
		if(*(p+i)!=*(p+k))
		{
			flag=1;
			printf("\nGiven string is not Palindrome\n");
			break;
		}
		i++;
		k--;
	}

	if(flag==0)
	{
		printf("\nGiven string is palindrome");
	}
	

	free(p);
	
	getch();
}
