#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count=0,m=0,n=0,index,temp,flag=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven string is \n%s",str);

	printf("\nEnter value of N\n");

	scanf("%d",&n);
	while(str[i]==' ')
	{
		i++;
	}
	m=i;
	i=0;

	while(str[i]!='\n')
	{
		while(str[i]==' ' && str[i] != '\n')
		{
			i++;
		}
		
		while(str[i]!=' '&&str[i]!='\n')
		{
			count++;
			i++;

			if(count>=n)
			{
				n=count;
				flag=1;
				j=i;
				break;
			}

		}
		if(count>=n) break;
	}
	if(flag==1)
	{
	while(m<=j)
	{
		while(str[m]==' '&& (m<=j))
		{
			m++;
		}
		while(str[j] == ' '&& (m<=j))
		{
			j--;
		}
		while(m<=j)
		{
			temp = str[m];
			str[m] = str[j];
			str[j] = temp;
			m++;
			j--;
		}
	}
	}
	printf("\nRequired String is \n%s",str);

	getch();
}