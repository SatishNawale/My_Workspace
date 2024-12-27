#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		while(str[i]==' '&&str[i]!='\n')
		{
			i++;
		}
		while(str[i]!=' '&&str[i]!='\n')
		{
			if(str[i]>'b' && str[i]<'z')
			{
				printf("%c",str[i]);
			}
			i++;
		}
		if(str[i]==' ')
		{
			j=i;
			while(str[j]!='\n')
			{
				if(str[j]!=' ')
				{
					printf(" ");
					break;
				}
				j++;
			}
		}
	}


	getch();
}