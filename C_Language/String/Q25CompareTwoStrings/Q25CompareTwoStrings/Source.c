#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count1=0,count2=0;
	char str[100],str1[100];

	printf("Please enter given String\n");
	fgets(str,sizeof(str),stdin);
	fgets(str1,sizeof(str1),stdin);

	printf("\nGiven strings are \n%s && \n%s",str,str1);
	while(str[i]!='\n')
	{
		count1++;
		i++;
	}
	while(str1[j]!='\n')
	{
		count2++;
		j++;
	}
	i=0;
	j=0;
	while(str[i]!=0)
	{
		if(str[i]==str1[j])
		{
			i++;
			j++;
		}
		else
		{
			printf("\nStrings are not equal\nFirst Mismach Charactrs are %c and %c\n at position %d",str[i],str1[j],i+1);
			break;
		}
	}
	if(count1==i-1 && count2 == j-1)
	{
		printf("\nTwo Strings are equal");
	}



	getch();
}