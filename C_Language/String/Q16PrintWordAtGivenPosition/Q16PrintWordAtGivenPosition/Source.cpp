#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i=0,j=0,k=0,count=0;
	int n;

	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven String is \n%s",str);

	printf("\nEnter Position of word to print\n");
	scanf("%d", &n);

	
	while(str[i]!='\n')
	{
			while(str[i]==' ' && str[i]!='\n')
			{
				i++;
			}
			j=i;
			while(str[i]!=' '&&str[i]!='\n')
			{
				i++;
			}
			count++;
			if(count == n)
			{
				for(k=j; k<i; k++)
				{
					printf("%c", str[k]);
				}
			}
	}


	getch();
}