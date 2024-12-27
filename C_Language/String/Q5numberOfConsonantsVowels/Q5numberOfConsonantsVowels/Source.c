#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,consonat=0,vowels=0;
	char str[100];

	printf("Please enter a String\n");
	fgets(str,sizeof(str), stdin);
	printf("\nGiven string is \n%s",str);

	while(str[i]!='\n')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowels++;
			i++;
		}
		else if((str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U')&&(str[i]<='z'&&str[i]>='A'))
		{
			consonat++;
			i++;
		}
		else i++;
	}

	printf("\nConsonants = %d\nVowels = %d\n",consonat,vowels);

	getch();
}