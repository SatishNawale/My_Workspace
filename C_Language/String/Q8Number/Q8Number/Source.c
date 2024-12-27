#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count1=0,count=0;
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
		count=0;
		while(str[i]!=' '&& str[i]!='\n')
		{
			count++;
			i++;
		}
		if(count>0)
		{
			count1++;
		}
	}
	printf("\nNumber of Words = %d",count1);
	

	getch();
}