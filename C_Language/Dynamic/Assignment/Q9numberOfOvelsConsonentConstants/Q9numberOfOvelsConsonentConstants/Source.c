#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,consonant=0,vowels=0,constant=0;
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
		if(*(p+i) == 'a'||*(p+i) =='A'||*(p+i) =='e'||*(p+i) =='E'||*(p+i) =='i'||*(p+i) =='I'||*(p+i) =='o'||*(p+i) =='O'||*(p+i) =='u'||*(p+i) =='U')
		{
			vowels++;
			i++;
		}

		else if(*(p+i)<='z'&&*(p+i)>='A')
		{
			consonant++;
			i++;
		}
		else 
		{
			constant++;
			i++;
		}
	}

	printf("\nconsonant = %d\nVowels = %d\nConstant = %d",consonant,vowels,constant);


	getch();
}