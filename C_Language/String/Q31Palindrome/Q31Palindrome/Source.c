#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,flag=0;
	char str[100];

	printf("Enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("Given String is\n%s\n",str);

	//to check Palindrome string
	while(str[i]!='\n')
	{
		i++;
	}
	i--;
	while(i>=j)
	{
		if(str[j]==str[i])
		{
			i--;
			j++;
		}
		else 
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Given String is Palindrome");
	}
	else printf("Given String is not Palindrome");

	getch();

}