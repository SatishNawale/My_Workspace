#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		if(str[i]>='A' && str[i]<='z')
		{
			count++;
		}
		i++;
	}
	printf("\nNumber of Characters = %d",count);

	getch();
}