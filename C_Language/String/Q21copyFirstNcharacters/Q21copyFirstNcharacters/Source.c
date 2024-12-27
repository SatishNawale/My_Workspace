#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,n,count=0;
	char str[]="India is my country";
	char str1[100];

	printf("Given string is \n%s", str);
	printf("\nEnter value of N \n");
	scanf("%d", &n);

	while(str[i]!='\n')
	{
			if(count<n)
			{
				str1[j] = str[i];
				j++;
			}
			if(n<=j)
			{
				break;
			}
			i++;
			count++;
	}
	str1[j] = '\0';

	printf("\nRequired string is\n%s", str1);

	getch();
}