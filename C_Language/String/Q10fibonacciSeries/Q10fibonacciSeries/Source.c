#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,a,b,c;
	char str[100];

	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	
	printf("\nFibonacci serie are as follows\n");
	while(str[i]!='\n')
	{
		a=0;
		b=1;
		c=a+b;
		printf("%d %d",a,b);
		while(c<=str[i])
		{
			a = b;
			b = c;
			c = a+b;
			printf(" %d",c);
		}
		i++;
		printf("\n");
	}

	
	

	getch();
}