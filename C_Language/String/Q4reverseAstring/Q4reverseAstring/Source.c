#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	printf("\nReverse string is\n");
	while(str[i]!='\n')
	{
		i++;
	}
	i--;
	while(i>=0)
	{
		while(str[i]==' '&&i>=0)
		{
			i--;
		}
		while(str[i]!=' ' && i>=0)
		{
			printf("%c", str[i]);
			if(str[i-1]==' ')
			{
				count=0;
				j=i-1;
				while(j>=0)
				{
					if(str[j]!=' ')
					{
						count++;
						break;
					}
					j--;
				}
				if(count>0)
				{
					printf(" ");
				}
			}
			i--;
		}
	}

	getch();
}