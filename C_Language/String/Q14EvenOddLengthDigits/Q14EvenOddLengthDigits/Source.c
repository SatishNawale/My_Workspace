#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count=0,even=0,odd=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		while(str[i]== ' ' && str[i]!='\n')
		{
			i++;
		}

		count=0;
		while(str[i]!=' ' && str[i]!='\n')
		{
			count++;
			i++;
		}
		if(count%2==0) even++;
		else odd++;
	}

	printf("\nEven length words = %d\nOdd length words= %d",even,odd);

	getch();
}