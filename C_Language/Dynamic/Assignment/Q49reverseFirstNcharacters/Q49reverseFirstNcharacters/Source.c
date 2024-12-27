#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,n,n2,temp,count=0;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a String\n");
	
	do
	{
		scanf("%c", &ch);
		if(ch != '\n')
		{
			size++;
			p = (char*)realloc(p, size*sizeof(char));
			*(p+i) = ch;
			*(p+i+1) = '\0';
			i++;
			
		}
	}
	while(ch != '\n');

	printf("\nGiven String is\n");
	printf("%s",p);

	
	printf("\nRequired stringis\n");
	printf("\nPlease enter value of N\n");
	
	scanf("%d",&n);
	i=0;
	while(*(p+i)!='\0')
	{
		while(*(p+i) == ' '&&*(p+i)!='\0')
		{
			i++;

		}
		while(*(p+i)!=' '&& *(p+i)!='\0')
		{
			count++;
			if(count==n)
			{
				n2=i;
				break;
			}
			i++;
		}
		if(count==n){
			break;
		}
	}
	n=n2;
	i=0;
	while(i<=n)
	{
		if(*(p+i)==' ')
		{
			i++;
			continue;
		}
		if(*(p+n)== ' ')
		{
			n--;
			continue;
		}

		temp = *(p+i);
		*(p+i) = *(p+n);
		*(p+n) = temp;
		i++;
		n--;

	}
	printf("\n");
	printf("%s",p);

	free(p);
	getch();
}