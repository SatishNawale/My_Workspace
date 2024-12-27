#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,small=0,capital=0,digit=0,spaces=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		if(str[i]<='z' && str[i]>='a')
		{
			small++;
			i++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			capital++;
			i++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
			i++;
		}
		else if(str[i]==' ')
		{
			spaces++;
			i++;
		}
		else i++;
	}

	printf("\nNumber of Small letters = %d\nNumber of Capital letters = %d\nNumber of Digit letters = %d\nNumber of Spaces letters = %d",small,capital,digit,spaces);

	getch();
}