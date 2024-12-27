#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,capital=0,small=0,digit=0,spaces=0;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a Array\n");
	
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

	printf("\nGiven array is\n");
	printf("%s",p);


	//to find number of consonants, constant, vowels
	i=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		{
			capital++;
			i++;
		}

		else if(*(p+i)>='a'&&*(p+i)<='z')
		{
			small++;
			i++;
		}
		else if(*(p+i)==' ')
		{
			spaces++;
			i++;
		}
		else
		{
			digit++;
			i++;
		}
	}

	printf("\nCapital = %d\nSmall = %d\nDigita = %d\nSpaces = %d",capital,small,digit,spaces);


	getch();
}