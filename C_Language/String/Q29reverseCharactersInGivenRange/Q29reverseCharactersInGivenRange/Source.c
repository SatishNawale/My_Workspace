#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count=0,m,n,index,temp;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str),stdin);
	printf("\nGiven string is \n%s",str);

	printf("\nEnter value ofM & N\n");
	scanf("%d",&m);
	scanf("%d",&n);

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

			if(count==m)
			{
				m = i-1;
			}
			if(count>=n)
			{
				n=count;
				break;
			}

		}
		if(count>=n) break;
	}

	while(m<=n)
	{
		while(str[m]==' '&& (m<=n))
		{
			m++;
		}
		while(str[n] == ' '&& (m<=n))
		{
			n--;
		}
		while(m<=n)
		{
			temp = str[m];
			str[m] = str[n];
			str[n] = temp;
			m++;
			n--;
		}
	}
	printf("\nRequired String is \n%s",str);

	getch();
}