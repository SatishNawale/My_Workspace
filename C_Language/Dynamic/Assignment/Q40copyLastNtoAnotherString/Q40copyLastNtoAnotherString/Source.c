#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,count=0,n,j=0;
	char ch;
	char* q = NULL;
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
	i=0;
	while(*(p+i)!='\0')
	{
		count++;
		i++;
	}
	printf("\n%d",count);


	//to copy last N characters 
	printf("\nEnter number of characters you want to copy\n");
	scanf("%d",&n);
	j = count-n;
	q = (char*) malloc(sizeof(char)*n+1);
	for(i=0; i<n; i++)
	{
		*(q+i) = *(p+j);
		j++;
	}
	*(q+n) = '\0';

	printf("\nRequired string is\n");
	printf("%s",q);


free(p);

	getch();
}