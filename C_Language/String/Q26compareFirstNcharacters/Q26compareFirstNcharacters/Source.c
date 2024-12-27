#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count1=0,count2=0,n;
	char str[100],str1[100];

	printf("Please enter given String\n");
	fgets(str,sizeof(str),stdin);
	fgets(str1,sizeof(str1),stdin);

	printf("\nGiven strings are \n%s && \n%s",str,str1);

	printf("\nEnter Value of N\n");
	scanf("%d", &n);

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
		if(i<n){
		if(str[i]==str1[j])
		{
			i++;
			j++;
		}
		else
		{
			printf("\nStrings are not equal\nFirst Mismach Charactrs are %c and %c\n",str[i],str1[j]);
			break;
		}
		}
		else break;
	}
	if(n==i)
	{
		printf("\nFirst %d characters of both strings are equal",n);
	}



	getch();
}