#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count=0;
	char str1[100];
	char str[100] = "Hello GoodName";

	printf("Please enter a String to be replaced\n");
	fgets(str1,sizeof(str1), stdin);
	printf("\nGiven string is \n%s",str1);

	while(str[i]!=' ')
	{
		i++;
	}
	i++;
	while(str1[j]!='\n')
	{
		str[i]=str1[j];
		j++;
		i++;
	}
	str[i]='\0';

	printf("Required String is \n%s",str);

	
	

	getch();
}