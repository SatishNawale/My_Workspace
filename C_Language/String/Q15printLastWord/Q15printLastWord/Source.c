#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,k=0,index=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	printf("\nLast word is \n");
	while(str[i]!='\n')
	{
		while(str[i]== ' ' && str[i]!='\n')
		{
			i++;
		}
	
		while(str[i]!=' ' && str[i]!='\n')
		{
			index=i;
			i++;
		}
		
	}
	j=index;
		while(str[j]!=' '&&j>=0)
		{
			j--;
		}
		j++;
		for(k=j; k<=index; k++)
		{
			printf("%c",str[k]);
		}

	getch();
}