#include<stdio.h>
#include<conio.h>


void main()
{
	int i=0;
	char str[100];


	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;

	}
	printf("\nRequired string is\n%s",str);

	getch();
}