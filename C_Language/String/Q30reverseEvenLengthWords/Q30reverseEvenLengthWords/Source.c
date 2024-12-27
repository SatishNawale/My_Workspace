#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count=0,count1=0,index=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven string is \n%s",str);

	//to reverse words in sentence
	while(str[i]!='\n')
	{
		while(str[i]==' '&&str[i]!='\n')
		{
			i++;
		}
		index=i;
		count=0;
		while(str[i]!=' ' && str[i]!='\n')
		{
			count++;
			i++;
		}
		if(count%2==0)
		{
			j=i-1;
			while(str[j]!=' '||j==0)
			{
				printf("%c",str[j]);
				j--;
			}
		}
		else
		{
			j=index;
			while(str[j]!=' ' && str[j]!='\n')
			{
				printf("%c", str[j]);
				j++;
			}
		}
		if(str[i]==' ')
		{
			count1=0;
			j=i;
			while(str[j]!='\n')
			{
				if(str[j]!=' ')
				{
					count1=1;
					break;
				}
				j++;
			}
		}
		if(count1==1)
		{
			printf(" ");
		}
	}


	getch();
}