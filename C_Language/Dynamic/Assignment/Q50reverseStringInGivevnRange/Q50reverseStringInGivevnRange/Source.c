#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,n1,n2,temp;
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

	//*********************************
	//to reverse even length words
	printf("\nRequired stringis\n");
	printf("\nPlease enter range to riverse string\n");
	printf("\nN1 = ");
	scanf("%d",&n1);
	printf("\nN2 = ");
	scanf("%d",&n2);
	
	while(n1<=n2)
	{
		if(*(p+n1)==' ')
		{
			n1++;
			continue;
		}
		if(*(p+n2)== ' ')
		{
			n2--;
			continue;
		}

		temp = *(p+n1);
		*(p+n1) = *(p+n2);
		*(p+n2) = temp;
		n1++;
		n2--;

	}
	printf("\n");
	printf("%s",p);

	free(p);
	getch();
}