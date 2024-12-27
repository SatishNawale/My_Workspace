#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count1=0,count=0,alphabates=0,spaces=0,digits=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		while(str[i]==' ' && str[i]!='\n')
		{
			spaces++;
			i++;
		}
		count=0;
		while(str[i]!=' '&& str[i]!='\n')
		{
			if(str[i]>='A' && str[i]<='z')
			{
				alphabates++;
			}
			else if(str[i]<='9' && str[i]>='0')
			{
				digits++;
			}
			count++;
			i++;
		}
		if(count>0)
		{
			count1++;
		}
	}
	printf("\nNumber of Words = %d\nNumber of Spaces = %d\nNumber of Alphabates = %d\nNumber of Digits = %d",count1,spaces,alphabates,digits);
	

	getch();
}