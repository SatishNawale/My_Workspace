#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0;
	char str[100],str1[100];

	printf("Please enter given String\n");
	fgets(str,sizeof(str),stdin);
	fgets(str1,sizeof(str1),stdin);

	printf("\nGiven strings are \n%s && \n%s",str,str1);

	while(str[i]!='\n')
	{
		i++;
	}
	i--;
	while(str1[j]!='\n')
	{
		str[i]=str1[j];
		i++;
		j++;
	}
	str[i]='\0';
	printf("\nRequired string is \n%s",str);


	getch();
}