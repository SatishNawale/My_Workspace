#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,n,count=0;
	char str[100];
	char str1[100];
	printf("Enter a string\n");
	fgets(str,sizeof(str),stdin);

	printf("Given string is \n%s", str);
	printf("\nEnter value of N \n");
	scanf("%d", &n);

	while(str[i]!='\n')
	{
		count++;
		i++;
	}
	i=count-n;
		if(i>=0)
		{

			while(i<=count)
			{
				str1[j]=str[i];
				i++;
				j++;
			}

			str1[j] = '\0';

	str1[j]='\0';

	printf("\nRequired string is\n%s", str1);

		}
		
		else printf("\nPlease enter valid input N\n");
	

	getch();
}