#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0;
	char str[100];
	char str1[100];

	printf("Enter a String\n");
	fgets(str,sizeof(str),stdin);

	printf("Given string is \n%s", str);

	while(str[i]!='\n')
	{
				str1[j] = str[i];
				j++;
				i++;
	}
	str1[j] = '\0';

	printf("\nRequired string is\n%s", str1);

	getch();
}