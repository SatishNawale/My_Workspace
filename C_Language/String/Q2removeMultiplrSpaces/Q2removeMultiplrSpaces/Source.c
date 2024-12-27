#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		while(str[i]==' ' && str[i]!='\n')
		{
			i++;
		}

		while(str[i]!=' '&& str[i]!='\n')
		{
			printf("%c",str[i]);
			if(str[i+1]==' ')
			{
				
				j=i+1;
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
			i++;
		}
	}
	

	getch();
}