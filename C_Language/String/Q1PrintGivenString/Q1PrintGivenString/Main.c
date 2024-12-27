#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	

	getch();
}