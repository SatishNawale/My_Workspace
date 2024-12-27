#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,count1=0,count2=0,temp,flag=0;
	char str[100],str1[100];

	printf("Enter given strings\n");
	fgets(str,sizeof(str),stdin);
	fgets(str1,sizeof(str1),stdin);

	printf("\nGiven strings are \n%s & \n%s",str,str1);

	
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
	
	
	if(count1==count2)
	{
		i=0;
		j=0;
		while(i<count1)
		{
			j=i+1;
			while(j<count1)
			{
				if(str[j]<=str[i])
				{
					temp = str[j];
					str[j] = str[i];
					str[i] = temp;
				}
				j++;
			}
			i++;
		}
		i=0;
		j=0;
		while(i<count1)
		{
			j=i+1;
			while(j<count1)
			{
				if(str1[j]<=str1[i])
				{
					temp = str1[j];
					str1[j] = str1[i];
					str1[i] = temp;
				}
				j++;
			}
			i++;
		}
		i=0;
		j=0;

		while(str[i]!='\n')
		{
			if(str[i]==str1[j])
			{
				i++;
				j++;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("\nGiven strings are Anagram");
		}
		else printf("\nGiven strings are not Anagram");
	}

	else
	{
		printf("\nGiven strings are not angram\n");
	}
	

	getch();
}