C : Assignment on DMA Act first, explain later.



1. Write a C program to find the sum of all the elements of an array. (Using Dynamic Memory Allocation)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n;

	int* p = NULL;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}

	//to find sum
	sum = (int*)malloc(sizeof(int));
	*sum = 0;
	for(*i=0; *i<*n; (*i)++)
	{
		*sum+=*(p+*i);
	}

	printf("\nSum of all elements of an Array is = %d",*sum);


	getch();
}

Please enter size of an Array
10

Please enter array Elements
1 2 3 4 5 6 7 8 9 10

Given Array is
1 2 3 4 5 6 7 8 9 10

Sum of all elements of an Array is = 55



########################################################################################################
2. Write a C program to accept string with multiple spaces from user and print as it is. (Using Dynamic Memory Allocation)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
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

	printf("%s",p);


	getch();
}



Please enter a String
India is my country
India is my country

########################################################################################################

3. Write a C program to accept string with multiple spaces from user and print it with a sinlge space as a delimiter. (Using Dynamic Memory Allocation)
Eg:
Input String:
_____India_____is_my_________country______________
Output String:
India_is_my_country (Consider _ as space)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k,size,flag;
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


	printf("\nString without extra spaces is\n");
	//to remove extra spaces
	i=0;
	while(*(p+i)!='\0')
	{
		while(*(p+i)== ' '&&*(p+i)!='\0')
		{
			i++;
		}
		
		while(*(p+i) !=' ' && *(p+i) !='\0')
		{
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				k=i+1;
				while(*(p+k)!='\0')
				{
					if(*(p+k)!=' ')
					{
						printf(" ");
						break;
					}
					k++;
				}
			}
			i++;
		}
	}

	getch();
}

Please enter a String
   India    my   countryt

Given String is
   India    my   countryt
   
String without extra spaces is
India my countryt

########################################################################################################

4. Write a C program that return the positions of the pallindrome element in array (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,rev,rem,n;
	int* p;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to find position of palindrome

	printf("\nPosition of Palindrome elements is\n");
	for(i=0; i<n; i++)
	{
		temp = *(p+i);
		rev = 0;
		while(temp>0)
		{
			rem = temp%10;
			rev = rev*10 + rem;
			temp = temp/10;
		}
		if(rev==*(p+i))
		{
			printf("%d\t",i);
		}
	}





	getch();
}

Please enter size of an array
5

Please enter array Elements
12
13
1223
44
85

Given array is
12      13      1223    44      85
Position of Palindrome elements is
3

########################################################################################################

5. Write a C program to sort first half of array in ascending order and second half of array in descending order. (Using Dynamic Memory Allocation)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j;
	int* p;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to sort array half ascending half decending

	for(i=0; i<(n/2)-1; i++)
	{
		for(j=i+1; j<n/2; j++)
		{
		if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}

	}
	for(i=n/2; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}

	printf("\nSorted array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	getch();
}


Please enter size of an array
10

Please enter array Elements
10 87 4 23 5 90 47 22 88 77

Given array is
10      87      4       23      5       90      47      22      88      77
Sorted array is
87      23      10      5       4       22      47      77      88      90
########################################################################################################

6. Write a C program to print count of number characters in given string. (Using Dynamic Memory Allocation)


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,count=0;
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

	printf("%s",p);

	//to find number of characters

	i=0;
	while(*(p+i)!='\0')
	{

		if(*(p+i)>='A' && *(p+i)<='z')
		{
			count++;
		}
		i++;
	}
	
	printf("\nNumber of characters are = %d",count);

	free(p);


	getch();
}


Please enter a String
India is my country
India is my country
Number of characters are = 16
########################################################################################################

7. Write a C program to accept string and print it in the reverse order. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Output String: yrtnuoc ym si aidnI
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag,count=0;
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
	printf("\nReverse String is\n");
	i=0;
	while(*(p+i)!='\0')
	{
		count++;
		i++;
	}
	count--;
	k=0;
	while(k<=count)
	{
		while(*(p+count-k)== ' '&&k<=count)
		{
			k++;
		}
		
		while(*(p+count-k) !=' ' && k<=count)
		{
			printf("%c",*(p+count-k));
			if(*(p+count-k-1)==' ')
			{
				i=k-1;
				while(i<=count)
				{
					if(*(p+count-i)!=' ')
					{
						printf(" ");
						break;
					}
					i++;

				}
			}
			k++;
		}
	}


	
	getch();
}


Please enter a String
India is my country

Given String is
India is my country
Reverse String is
yrtnuoc ym si aidnI
########################################################################################################

8. Write a C program to copy the elements of one array into another array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n;
	int* p=NULL;
	int* q=NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array elements\n");
	
	p = (int*) malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		scanf("%d",(p+i));
	}

	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(p+i));
	}

	//to copy elements into another array

	q = (int*) malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		*(q+i) = *(p+i);
	}

	printf("\nNew array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(q+i));
	}


	getch();
}

Enter size of an array
5

Please enter array elements
1 2 3 4 5

Given array is
1       2       3       4       5
New array is
1       2       3       4       5
########################################################################################################

9. Write a C program to count count of number of vowels and number of consonants in the given string. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,consonant=0,vowels=0,constant=0;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a Array\n");
	
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

	printf("\nGiven array is\n");
	printf("%s",p);


	//to find number of consonants, constant, vowels
	i=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i) == 'a'||*(p+i) =='A'||*(p+i) =='e'||*(p+i) =='E'||*(p+i) =='i'||*(p+i) =='I'||*(p+i) =='o'||*(p+i) =='O'||*(p+i) =='u'||*(p+i) =='U')
		{
			vowels++;
			i++;
		}

		else if(*(p+i)<='z'&&*(p+i)>='A')
		{
			consonant++;
			i++;
		}
		else 
		{
			constant++;
			i++;
		}
	}

	printf("\nconsonant = %d\nVowels = %d\nConstant = %d",consonant,vowels,constant);


	getch();
}

Please enter a Array
India is my country888

Given array is
India is my country888
consonant = 10
Vowels = 6
Constant = 6
########################################################################################################

10. Write a C program to reverse a given string as below. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Output String: aidnI si ym yrtnuoc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag,count=0;
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
	printf("\nReverse String is\n");
	i=0;
	k=0;
	while(*(p+i)!='\0')
	{
		while(*(p+i)==' ')
		{
			i++;
		}
		flag=(i>0)?i:0;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
			
			k=1;
		while(i-k>=flag)
		{
			printf("%c",*(p+i-k));
			k++;
		}

		printf(" ");
	}


	
	getch();
}

Please enter a String
India is my country

Given String is
India is my country
Reverse String is
aidnI si ym yrtnuoc
########################################################################################################

11. Write a C program to sort only even numbers in given array. (Using Dynamic Memory Allocation)
Eg.
Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
Output: 45 2 75 29 5 49 8 14 18 497 22 56 288
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
	int* p;
	int* q;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to sort array half ascending half decending
	//creating new array to store positive elements


	for(i=0; i<n-1; i++)
	{
		if(*(p+i)%2==0)
		{
			count++;
		}

	}

	q = (int*)malloc(count*sizeof(int));
	j=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)%2==0)
		{
			*(q+j)=*(p+i);
			j++;
		}
	}

	//to sort array
	for(i=0; i<count-1; i++)
	{
		for(j=i+1; j<count; j++)
		{
			if(*(q+i)>*(q+j))
			{
				temp = *(q+i);
				*(q+i) = *(q+j);
				*(q+j) = temp;
			}
		}
	}
	
	j=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)%2==0)
		{
			*(p+i) = *(q+j);
			j++;
		}
	}

	printf("\nSorted array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	getch();
}
Please enter size of an array
13

Please enter array Elements
45 8 75 29 5 49 56 22 14 497 288 18 2

Given array is
45      8       75      29      5       49      56      22      14      497     288     18      2
Sorted array is
45      2       75      29      5       49      8       14      18      497     22      56      288

########################################################################################################

12. Write a C program to replace space with ‘$’ in given string. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Output String: India$is$my$coutry
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
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

	printf("\nGiven string is\n");
	printf("%s",p);


	printf("\n\n");
	//to replace spaces
	i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			printf("%c",'#');
		}
		else printf("%c",*(p+i));
		i++;
	}

free(p);
	getch();
}

Please enter a String
India is my country

Given string is
India is my country

India#is#my#country
########################################################################################################

13. Write a program in C to separate odd and even integers in same array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
	int* p;
	int* q;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	
	for(i=0; i<n-1; i++)
	{
		if(*(p+i)%2!=0)
		{
			for(j=i+1; j<n; j++)
			{
				if(*(p+j)%2==0)
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}
	}

	printf("\n\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(p+i));
	}


	free(p);

	getch();
}
Please enter size of an array
10

Please enter array Elements
1 2 3 4 5 6 7 8 9 10

Given array is
1       2       3       4       5       6       7       8       9       10

10      8       6       4       2       3       7       1       9       5

########################################################################################################

14. Write a program which accept sentence from user and print number of words from that sentence. (Using Dynamic Memory Allocation)

Input String: India_is_my_country
Output: 4
Input String: ______India______is____my____country____ (Consider _ as space)
Output: 4

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,count=0;
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
	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		if(*(p+i)!=' '&&*(p+i)!='\0')
		{
		flag++;
		}
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
	
		i++;
			
	}

	printf("\nNumber of words = %d",flag-1);


	free(p);
	
	getch();
}


Please enter a String
   India   is   my   country

Given String is
   India   is   my   country
Number of words = 4
########################################################################################################

15. Write a program in C to print all unique elements in an array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
	int* p;
	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	printf("\nAll unique elements are\n");
	
	for(i=0; i<n; i++)
	{
		count=0;
		for(j=i-1; j>=0; j--)
		{
			if(*(p+i)==*(p+j))
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\t",*(p+i));
		}
		
	}

	

	free(p);

	getch();
}
Please enter size of an array
5

Please enter array Elements
11 11 12 14 15

Given array is
11      11      12      14      15
All unique elements are
11      12      14      15

########################################################################################################

16. Write a C program to replace Good names in mail.
Eg:
Raw String: Hello GoodName
Input String: India
Output String: Hello India
Input String: Sangamner
Output String: Hello Sangamner
Input String: technOrbit
Output String: Hello technOrbit
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,count=0,count1=0,n,j=0;
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

	//take second stringj
	printf("\n\nEnter second string\n");
	q = (char*)malloc(sizeof(char));
	*q = '\0';
	size1 = 1;
	i=0;
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			size1++;
			q = (char*)realloc(q,size1*sizeof(char));
			*(q+i) = ch;
			*(q+i+1) = '\0';
			count1++;
			i++;
		}
	}
	while(ch != '\n');

	printf("\nSecond string is\n");
	printf("%s",q);
	

	//to append second string after first

	*(p+5)=' ';
	i = 6;
	j=0;
	do
	{
		if(*(q+j)!='\0')
		{
			size++;
			p = (char*)realloc(p,size*sizeof(char));
			*(p+i)=*(q+j);
			*(p+i+1) = '\0';
			i++;
			j++;

		}


	}
	while(*(q+j)!='\0');

	printf("\nRequired string is\n");
	printf("%s",p);

free(p);
free(q);

	getch();
}

Please enter a String
HelloGoodName

Given String is
HelloGoodName

Enter second string
Satish

Second string is
Satish

Required string is
Hello Satish


########################################################################################################

17. Write a program in C to insert New value in the array (sorted list ). (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n;
	int insert;
	int* p = NULL;

	printf("Enter size of array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*) malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d",*(p+i));
	}

	printf("\nEnter element to insert\n");
	p = (int*) realloc(p,(n+1)*sizeof(int));

	scanf("%d",p+n);

	printf("\nRequired array is\n");
	for(i=0; i<n+1; i++)
	{
		printf("%d\t", *(p+i));
	}
free(p);
	getch();
}
Enter size of array
5

Enter array elements
1 2 3 4 5

Given array is
12345
Enter element to insert
3

Required array is
1       2       3       4       5       3

########################################################################################################

18. Write a C program to print all fibonacci series upto each ASCII code of aphabates in given string. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n,temp,n1,n2,n3,j=0;
	int* p=NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*) malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nFibonacci Series are\n");
	for(i=0; i<n; i++)
	{
		temp = *(p+i);
		n1=0;
		printf("0\t");
		n2=1;
		printf("1\t");
		n3=n1+n2;
		for(j=2; n3<temp; j++)
		{
			n1 = n2;
			n2 = n3;
			n3 = n1+n2;
			printf("%d\t", n3);

		}
		printf("\n");
	}

	free(p);
	getch();

}
Enter size of an array
5

Enter array elements
234
432
134
555
343

Fibonacci Series are
0       1       2       3       5       8       13      21      34      55      89      144     233     377
0       1       2       3       5       8       13      21      34      55      89      144     233     377     610

0       1       2       3       5       8       13      21      34      55      89      144
0       1       2       3       5       8       13      21      34      55      89      144     233     377     610

0       1       2       3       5       8       13      21      34      55      89      144     233     377
########################################################################################################

19. Write a program in C to delete an element at desired position from an array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,*n1,temp;

	int* p;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}


	//to delete element at desired position
	printf("\nEnter index to delete\n");
	n1 = (int*)malloc(sizeof(int));
	scanf("%d",n1);
	for(*i=*n1; *i<*n-1; (*i)++)
	{
		*(p+*i) = *(p+*i+1);
	}

	p = (int*)realloc(p,(*n-1)*sizeof(int));

	printf("\nRequired array is\n");

	for(*i=0; *i<*n-1; (*i)++)
	{
		printf("%d\t",*(p+*i));
	}
	getch();
}

Please enter size of an Array
5

Please enter array Elements
1 2 3 4 5

Given Array is
1 2 3 4 5
Enter index to delete
3

Required array is
1       2       3       5


########################################################################################################

20. Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’. (Using Dynamic Memory Allocation)
Eg:
Input String: mn jn kn kazfd
Output String: mn jn kn k
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k,size,flag;
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
			if(ch<'z' && ch>'b'||ch==' ')
			{
			size++;
			p = (char*)realloc(p, size*sizeof(char));
			*(p+i) = ch;
			*(p+i+1) = '\0';
			}
		}
		i++;
	}
	while(ch != '\n');

	printf("\nGiven String is\n");
	printf("%s",p);


	printf("\nString without extra spaces is\n");
	//to remove extra spaces
	i=0;
	while(*(p+i)!='\0')
	{
		while(*(p+i)== ' '&&*(p+i)!='\0')
		{
			i++;
		}
		
		while(*(p+i) !=' ' && *(p+i) !='\0')
		{
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				k=i+1;
				while(*(p+k)!='\0')
				{
					if(*(p+k)!=' ')
					{
						printf(" ");
						break;
					}
					k++;

				}
			}
			i++;
		}
	}

	getch();
}

Please enter a String
mn jn kn kazfd

Given String is
mn jn kn k




########################################################################################################

21. Write a C program which accept sentence from user and print number of small letters, capital (Using Dynamic Memory Allocation)
letters, Spaces and digits from that sentence.
Eg:
Input String: abcDE 5Glm1 O
Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,capital=0,small=0,digit=0,spaces=0;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a Array\n");
	
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

	printf("\nGiven array is\n");
	printf("%s",p);


	//to find number of consonants, constant, vowels
	i=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		{
			capital++;
			i++;
		}

		else if(*(p+i)>='a'&&*(p+i)<='z')
		{
			small++;
			i++;
		}
		else if(*(p+i)==' ')
		{
			spaces++;
			i++;
		}
		else
		{
			digit++;
			i++;
		}
	}

	printf("\nCapital = %d\nSmall = %d\nDigita = %d\nSpaces = %d",capital,small,digit,spaces);


	getch();
}
Please enter a Array
abcDE 5Glm1 O

Given array is
abcDE 5Glm1 O
Capital = 4
Small = 5
Digita = 2
Spaces = 2
########################################################################################################

22. Write a program in C to find the maximum / minimum element in an array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,min,max,n;
	int* p;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to find minimum and maximum
	min = *p;
	max = *p;
	for(i=0; i<n; i++)
	{
		if(*(p+i)<min)
		{
			min = *(p+i);
		}
		if(*(p+i)>max)
		{
			max = *(p+i);
		}
	}


	printf("\nMinimum = %d\nMaximum = %d",min,max);

	free(p);
	getch();
}
Please enter size of an array
5

Please enter array Elements
23
555
32
31
55

Given array is
23      555     32      31      55
Minimum = 23
Maximum = 555
########################################################################################################

23. Write a C program which accept sentence from user and print number of white spaces from that sentence. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Output: 3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,spaces=0;
	char ch;

	char* p = (char*) malloc(sizeof(char));
	*p = '\0';
	size = 1;
	printf("\nPlease enter a Array\n");
	
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

	printf("\nGiven array is\n");
	printf("%s",p);


	//to find number of consonants, constant, vowels
	i=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i)==' ')
		{
			spaces++;
			i++;
		}
		else i++;
	}

	printf("\nSpaces = %d",spaces);


	getch();
}

Please enter a Array
India is my country

Given array is
India is my country
Spaces = 3

########################################################################################################

24. Write a program in C to find the second largest element in an array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,max,max2,n;
	int* p;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}


	//to find minimum and maximum
	max2 = *p;
	max = *p;
	for(i=0; i<n; i++)
	{
		if(max<*(p+i))
		{
			max2=max;
			max = *(p+i);
		}
	}


	printf("\nMaximum = %d\nSecond Maximum = %d",max,max2);

	free(p);
	getch();
}
Please enter size of an array
5

Please enter array Elements
2
3
4
5
6

Given array is
2       3       4       5       6
Maximum = 6
Second Maximum = 5
########################################################################################################

25. Write a C program which accept sentence from user and print number of words of even and odd length from that sentence. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country. I love my country.
Output : Even: 5 Odd: 2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,count=0,odd=0,even=0;
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
	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		count=0;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
			count++;
		}
		if(count%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
			
	}

	printf("\neven = %d\nOdd = %d",even,odd);


	free(p);
	
	getch();
}
Please enter a String
India is my country

Given String is
India is my country
even = 2
Odd = 2

########################################################################################################

26. Write a C Program to Find the Number of Elements in an Array (Using Dynamic Memory Allocation)
printf("\nEnter array elements\n");
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i=0,n,count=0;


int* p = NULL;

printf("Enter size of an array\n");
scanf("%d",&n);

p = (int*)malloc(sizeof(int)*n);
printf("\nEnter array elements\n");
for(i=0; i<n; i++)
{
	scanf("%d",p+i);
}

printf("\nGiven array is\n");
for(i=0; i<n; i++)
{
	printf("%d",*(p+i));
}

printf("\nsize of an array is\n");
for(i=0; i<n; i++)
{
	count++;
}

printf("%d",count);


free(p);
	getch();
}

Enter size of an array
5

Enter array elements
1 2 3 4 5

Given array is
12345
size of an array is
5

########################################################################################################

27. Write a C program which accept sentence from user and print last word from that sentence. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Output String: country
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0;
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
	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		flag=i;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
			
	}
	printf("\nLast Word is \n");
	i = flag;
	while(*(p+i)!='\0' && *(p+i)!=' ')
	{
		printf("%c",*(p+i));
		i++;
	}


	free(p);
	
	getch();
}
Please enter a String
India is my country

Given String is
India is my country
Last Word is
country
########################################################################################################

28. Write a C Program to Check Array bounds while Inputing Elements into the Array (Using Dynamic Memory Allocation)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n,index=0;
	int* p = NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*)malloc(sizeof(int)*n);

	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nEnter index to find element\n");
	scanf("%d",&index);

	
		if(index<=n)
		{
			printf("%d",*(p+n));
		}

		else
		{
			printf("\nArray out of bound\n");
		
		}

	getch();
}
Enter size of an array
4

Enter array elements
2
3

4
5

Enter index to find element
33

Array out of bound


########################################################################################################

29. Write a C program which accept sentence from user and position from user and print the word at that position. (Using Dynamic Memory Allocation)

Eg:
Input String: India is my country
Input Position: 3
Output String: my
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,index,count=0;
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
	printf("\nEnter number of element to print\n");
	scanf("%d",&index);

	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		count++;
		flag=i;
		if(count==index)
		{
			k = flag;
			while(*(p+k)!='\0' && *(p+k)!=' ')
			{
				printf("%c",*(p+k));
				k++;
			}
		}
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
		
			
	}




	free(p);
	
	getch();
}

Please enter a String
India is my country

Given String is
India is my country
Enter number of element to print
3
my

########################################################################################################

30. Write a C Program to Print the Alternate Elements in an Array (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,count=0;
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

	printf("\nAlternate words are\n");
	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		count++;
		k=i;
		if(count%2==1)
		{
			while(*(p+k)!=' '&&*(p+k)!='\0')
			{
				printf("%c",*(p+k));
				k++;
			}
			printf(" ");
		}
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
		
			
	}


	free(p);
	
	getch();
}
Please enter a String
india is my country

Given String is
india is my country
Alternate words are
india my
########################################################################################################

31. Write a C program to convert the string from upper case to lower case. (Using Dynamic Memory Allocation)
Eg:
Input String: India Is My Country
Output String: india is my country
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size;
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

	//to convert upper to lower case
	printf("\n\nSring in Lower case\n");
	i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i) >= 'A' && *(p+i)<='Z')
		{
			*(p+i) = *(p+i)+32;
			printf("%c",*(p+i));
		}
		else
		{
			printf("%c",*(p+i));
		}
		i++;
	}
	


	free(p);
	
	getch();
}
Please enter a String
INDIA IS MY COUNTRY

Given String is
INDIA IS MY COUNTRY

Sring in Lower case
india is my country
########################################################################################################

32. Write a C Program to Find 2 Elements in the Array such that Difference between them is Largest (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,n,index1,index2,max=-2147483648;
	int* p = NULL;

	printf("enter size of array\n");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*n);
	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	//to find elements with largest difference
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(max<(*(p+i)-*(p+j)))
			{
				max = (*(p+i) - *(p+j));
				index1 = i;
				index2 = j;
			}
		}
	}

	printf("\nTwo elements with max difference are\n");
	printf("\n%d\t%d",*(p+index1),*(p+index2));

	getch();
}
enter size of array
5

Enter array elements
29
48
284
48
44

Two elements with max difference are

284     29
########################################################################################################

33. Write a C program which toggles the case of a string. (Using Dynamic Memory Allocation)
Eg:
Input String: technOrbit Infosystems
Output String: TECHNoRBIT iNFOSYSTEMS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size;
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

	//to convert upper to lower case
	printf("\n\nSring in Toggled form\n");
	i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i) >= 'A' && *(p+i)<='Z')
		{
			*(p+i) = *(p+i)+32;
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				printf(" ");
			}
		}
		else if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i)-32;
			printf("%c",*(p+i));
			if(*(p+i+1)==' ')
			{
				printf(" ");

			}
		}
		i++;
	}
	


	free(p);
	
	getch();
}
Please enter a String
India Is My Country

Given String is
India Is My Country

Sring in Toggled form
iNDIA iS mY cOUNTRY
########################################################################################################

34. Write a C Program to Input a String & Store their Ascii Values in an Integer Array (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
	char ch;
	int* q = NULL;

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
	printf("%s",p);


	//to store and print ASCII values to another array
	q = (int*)malloc(sizeof(int)*(size-1));

	for(i=0; i<size-1; i++)
	{
		*(q+i) = *(p+i);
	}

	printf("\nInteger array is\n");
	for(i=0; i<size-1; i++)
	{
		printf("%d\t",*(q+i));
	}
free(p);
free(q);
	getch();
}
Please enter a String
India is my country
India is my country
Integer array is
73      110     100     105     97      32      105     115     32      109     121     32      99      111     117
        110     116     114     121
########################################################################################################

35. Write a C program to check whether given strings are Anagram strings or not. (Using Dynamic Memory Allocation)
Eg:
Input String1: abccd
Input String2: cbcda
Output String: Strings are anagram
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,j=0,size,size1,flag=0,count1=0,count2=0,flag1=0,flag2=0,mark=0,mark1=0,mark2=0;
	char ch,ch1;

	char* q = (char*) malloc(sizeof(char));
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

	printf("\nFirst string is\n");
	printf("%s",p);


	///to take second string
	*q = '\0';
	size1 = 1;
	printf("\n\nPlease enter second String\n");
	i=0;
	do
	{
		scanf("%c", &ch1);
		if(ch1 != '\n')
		{
			size1++;
			q = (char*)realloc(q, size1*sizeof(char));
			*(q+i) = ch1;
			*(q+i+1) = '\0';
			i++;
			
		}
	}
	while(ch1 != '\n');
	
	printf("\nSecond string is\n");
	printf("%s",q);

	//to find given strings are anagram or not



	i=0;
	j=0;

	while(*(p+i)!='\0')
	{
		j=0;
		while(*(q+j) != '\0')
		{
			if(*(p+i) == *(q+j))
			{
				flag=1;
			}
			j++;
		}
		if(flag==0)
		{
			flag1 = 1;
			break;
		}
		i++;

	}
	if(flag1==0)
	{
		flag2=1;
	}


	i=0;
	j=0;

	while(*(q+i)!='\0')
	{
		j=0;
		while(*(p+j) != '\0')
		{
			if(*(p+i) == *(q+j))
			{
				mark=1;
			}
			j++;
		}
		if(mark==0)
		{
			mark1 = 1;
			break;
		}
		i++;

	}
	if(mark1==0)
	{
		mark2=1;
	}

	if(mark2==0 || flag2==0)
	{
		printf("\n\nGiven strings are not Anagram");
	}
	else

	{
		printf("\n\nGiven strigs are anagram");
	}



free(p);
free(q);
	getch();
}
Please enter a String
abccd

First string is
abccd

Please enter second String
cbcda

Second string is
cbcda

Given strigs are anagram

########################################################################################################

36. Write a C program to store squares of the elements in the same array (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n;
	int* p = NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	p = (int*) malloc(n*sizeof(int));

	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	//to store square of numbers in same array
	for(i=0; i<n; i++)
	{
		*(p+i) = (*(p+i))*(*(p+i));
	}

	printf("\nRequired array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

free(p);
	getch();
}
Enter size of an array
5

Enter array elements
1 2 3 4 5

Given array is
1       2       3       4       5
Required array is
1       4       9       16      25
########################################################################################################

37. Write a C program which accept string from user and copy that string into some another string. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size;
	char ch;
	char* q=NULL;
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

	printf("%s",p);

	q = (char*)malloc(sizeof(char)*(size));

	for(i=0; i<size-1; i++)
	{
		*(q+i) = *(p+i);
	}
	*(q+i)='\0';

	printf("\nRequired string is \n");
	printf("%s",q);
free(p);
free(q);
	getch();
}

Please enter a String
India is my country
India is my country
Required string is
India is my country
########################################################################################################

38. Write a program which accept string from user and copy first N charaters into some destination string. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Input of N: 8
Output String: India is
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
	j = 0;
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

Please enter a String
India is my coutnry

Given String is
India is my coutnry
19
Enter number of characters you want to copy
8

Required string is
India is
########################################################################################################

39. Write C Program to Find the two Elements such that their Sum is Closest to given number (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,given,n,index1,index2,min=2147483647,max=0,sum = 0;
	int* p = NULL;

	printf("enter size of array\n");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*n);
	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nEnter given number\n");
	scanf("%d",&given);

	//to find elements with largest difference
	
	for(i=0; i<n; i++)
	{
		if(max<*(p+i))
		{
			max = *(p+i);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				continue;
			}
			sum = *(p+i) + *(p+j);
			if(sum<given)
			{
				min = given - sum;
				if(min<max)
				{
					max = min;
					index1=i;
					index2=j;
				}
			}
			else
			{
				min = sum - given;
				if(min<max)
				{
					max = min;
					index1=i;
					index2=j;
				}
			}
		}
	}

	printf("\nTwo elements sum closest to Given number are\n");
	printf("\n%d\t%d",*(p+index1),*(p+index2));

	getch();
}

enter size of array
5

Enter array elements
1 2 3 4 5

Enter given number
3

Two elements sum closest to Given number are

1       2

########################################################################################################

40. Write a C program which accept string from user and accept number N then copy last N character into some another string. (Using Dynamic Memory Allocation)
Eg:

Input String: India is my country
Input of N: 5
Output String: is my
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
Please enter a String
India is my country

Given String is
India is my country
19
Enter number of characters you want to copy
5

Required string is
untry
########################################################################################################

41. Write C Program to Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,N,count=0;

	int* p;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}

	//to find given number appears more than N/2 times
	printf("\nEnter given number N\n");
	scanf("%d",&N);

	for(*i=0; *i<*n; (*i)++)
	{
		if(*(p+*i)==N)
		{
			count++;
		}
	}

	if(count>*n/2)
	{
		printf("\nGiven number appears more than N/2 times");

	}
	else printf("\nGiven number does not appears more than N/2 times");
	getch();
}
Please enter size of an Array
5

Please enter array Elements
1 1 1 2 3

Given Array is
1 1 1 2 3
Enter given number N
1

Given number appears more than N/2 times

########################################################################################################

42. Write a C program which accept two strings from user and append second string after first string. (Using Dynamic Memory Allocation)
Eg:
Input String: India Country
Output String: IndiaCountry
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,count=0,count1=0,n,j=0;
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

	//take second stringj
	printf("\n\nEnter second string\n");
	q = (char*)malloc(sizeof(char));
	*q = '\0';
	size1 = 1;
	i=0;
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			size1++;
			q = (char*)realloc(q,size1*sizeof(char));
			*(q+i) = ch;
			*(q+i+1) = '\0';
			count1++;
			i++;
		}
	}
	while(ch != '\n');

	printf("\nSecond string is\n");
	printf("%s",q);
	printf("\n%d",count1);

	//to append second string after first

	printf("\nsize = %d",size);

	i = size - 1;
	j=0;
	do
	{
		if(*(q+j)!='\0')
		{
			size++;
			p = (char*)realloc(p,size*sizeof(char));
			*(p+i)=*(q+j);
			*(p+i+1) = '\0';
			i++;
			j++;

		}


	}
	while(*(q+j)!='\0');

	printf("\nRequired string is\n");
	printf("%s",p);

free(p);
free(q);

	getch();
}

Please enter a String
India

Given String is
India


Enter second string
country

Second string is
country

Required string is
Indiacountry

########################################################################################################

43. Write C Program to Find Union & Intersection of 2 Arrays (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n1,n2,max,size,j=0,k=0,flag=0,flag1=0;
	int* p=NULL;
	int* q=NULL;
	int* unin=NULL;
	int* inter=NULL;

	printf("Enter size of First array\n");
	scanf("%d",&n1);

	printf("\nPlease enter Elements of First array\n");
	p = (int*)malloc(n1*sizeof(int));
	for(i=0; i<n1; i++)
	{
		scanf("%d",p+i);
	}


	printf("\nEnter size of Second array\n");
	scanf("%d",&n2);

	printf("\nPlease enter elements of Second array\n");
	q = (int*) malloc(n2*sizeof(int));
	for(i=0; i<n2; i++)
	{
		scanf("%d",q+i);
	}


	printf("\nGiven arrays are\n");
	for(i=0; i<n1; i++)
	{
		printf("%d\t",*(p+i));
	}

	printf("\n\n");
	for(i=0; i<n2; i++)
	{
		printf("%d\t",*(q+i));
	}


	//to find union
	printf("\n\nUnion is\n\n");
	unin = (int*)malloc(sizeof(int));
	

	

	if(n1>=n2)
	{
		size = 0;
		k=0;

		for(i=0; i<n2; i++)
		{
			size++;
			unin = (int*)realloc(unin,sizeof(int)*size);
			*(unin+k) = *(q+i);
								printf("%d ",*(unin+k));

			k++;
		}
		for(i=0; i<n1; i++)
		{
			flag=0;
			for(j=0; j<n2; j++)
			{
				if(*(p+i) == *(q+i))
				{
					flag=1;
					break;
				}

				if(flag==0)
				{
					size++;
					unin = (int*) realloc(unin,sizeof(int)*size);
					*(unin+k) = *(p+i);
										printf("%d ",*(unin+k));

						k++;
						break;
				}
			}
	}
	}
	else
	{
		size = 0;
		k=0;

		for(i=0; i<n1; i++)
		{
			size++;
			unin = (int*)realloc(unin,sizeof(int)*size);
			*(unin+k) = *(p+i);
								printf("%d ",*(unin+k));

			k++;
		}
		for(i=0; i<n2; i++)
		{
			flag=0;
			for(j=0; j<n1; j++)
			{
				if(*(q+i)==*(p+i))
				{
					flag=1;
					break;
				}
				if(flag==0)
				{
					size++;
					unin = (int*) realloc(unin,sizeof(int)*size);
					*(unin+k) = *(q+i);
					printf("%d ",*(unin+k));
					k++;
					break;
				}
			}
		}
	}

	//printf("\nUnion is\n");
	//for(i=0;i<k;i++)
	//{
	//	printf("%d\t", *(unin+i));
	//}

	//to find intersection
	printf("\n\nIntersection is\n");
	inter = (int*)malloc(sizeof(int));

	if(n1>=n2)
	{
		size = 0;
		k=0;
		for(i=0; i<n1; i++)
		{
			for(j=0; j<n2; j++)
			{
				if(*(p+i)==*(q+j))
				{
					size++;
					inter = (int*)realloc(inter,sizeof(int)*size);
					*(inter+k)=*(p+i);
										printf("%d ",*(inter+k));
										flag1=1;
										

					k++;
				}
			}
		}
	}
	else
	{
		size = 0;
		k=0;
		for(i=0; i<n2; i++)
		{
			for(j=0; j<n1; j++)
			{
				if(*(q+i)==*(p+j))
				{
					size++;
					inter = (int*)realloc(inter,sizeof(int)*size);
					*(inter+k)=*(q+i);
										printf("%d ",*(inter+k));
										flag1=1;
					k++;
				}
			}
		}
	}

	
	if(flag1==0)
	{
		printf("\nNull");
	}

free(p);
free(q);
free(unin);
free(inter);
	getch();
}

Enter size of First array
3

Please enter Elements of First array
1 2  3

Enter size of Second array
3

Please enter elements of Second array
4 5 6

Given arrays are
1       2       3

4       5       6

Union is

4 5 6 1 2 3

Intersection is

Null
########################################################################################################

44. Write a C program which accept two strings from user and append N characters of second string (Using Dynamic Memory Allocation)
after first string.
Eg:
Input String: India Country
Input of N: 4
Output String: IndiaCoun
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,count=0,count1=0,n,j=0,n1;
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

	//take second stringj
	printf("\n\nEnter second string\n");
	q = (char*)malloc(sizeof(char));
	*q = '\0';
	size1 = 1;
	i=0;
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			size1++;
			q = (char*)realloc(q,size1*sizeof(char));
			*(q+i) = ch;
			*(q+i+1) = '\0';
			count1++;
			i++;
		}
	}
	while(ch != '\n');

	printf("\nSecond string is\n");
	printf("%s",q);
	printf("\n%d",count1);

	//to append second string after first
	printf("\nEnter number of characters you want to append\n");
	scanf("%d",&n1);

	printf("\nsize = %d",size);

	i = size - 1;
	j=0;
	do
	{
		if(j<n1)
		{
			size++;
			p = (char*)realloc(p,size*sizeof(char));
			*(p+i)=*(q+j);
			*(p+i+1) = '\0';
			i++;
			j++;

		}


	}
	while(j<n1);

	printf("\nRequired string is\n");
	printf("%s",p);

free(p);
free(q);

	getch();
}

Please enter a String
India

Given String is
India

Enter second string
country

Second string is
country

Enter number of characters you want to append
3

Required string is
Indiacou

########################################################################################################

45. Write a C program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference between first mismatch character. (Using Dynamic Memory Allocation)
Eg:
Input String1: India is my country.
Input String2: India is my country.
Output: Both strings are equal.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,flag=0;
	char ch,ch1;

	char* q = (char*) malloc(sizeof(char));
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

	printf("\nFirst string is\n");
	printf("%s",p);


	///to take second string
	*q = '\0';
	size1 = 1;
	printf("\n\nPlease enter second String\n");
	i=0;
	do
	{
		scanf("%c", &ch1);
		if(ch1 != '\n')
		{
			size1++;
			q = (char*)realloc(q, size1*sizeof(char));
			*(q+i) = ch1;
			*(q+i+1) = '\0';
			i++;
			
		}
	}
	while(ch1 != '\n');
	
	printf("\nSecond string is\n");
	printf("%s",q);

	if(size1!=size)
	{
		printf("\nGiven strings are not equal");
		flag=1;
	}
	else
	{
		for(i=0; i<size; i++)
		{
			if(*(p+i)==*(q+i))
			{
				continue;
			}
			else
			{
				printf("\n\nGiven strings are not equal\n");
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("\n\nGiven strings are equal\n");
	}
free(p);
free(q);
	getch();
}

Please enter a String
India is my country

First string is
India is my country

Please enter second String
India is my country

Second string is
India is my country

Given strings are equal

########################################################################################################

46. Write a C program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character. (Using Dynamic Memory Allocation)
Eg:
Input String1: Ramayan
Input String2: Ramanacharya
Input of N: 4
Output: Both strings are equal.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,flag=0,n;
	char ch,ch1;

	char* q = (char*) malloc(sizeof(char));
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

	printf("\nFirst string is\n");
	printf("%s",p);


	///to take second string
	*q = '\0';
	size1 = 1;
	printf("\n\nPlease enter second String\n");
	i=0;
	do
	{
		scanf("%c", &ch1);
		if(ch1 != '\n')
		{
			size1++;
			q = (char*)realloc(q, size1*sizeof(char));
			*(q+i) = ch1;
			*(q+i+1) = '\0';
			i++;
			
		}
	}
	while(ch1 != '\n');
	
	printf("\nSecond string is\n");
	printf("%s",q);



	//to compare first N charcteers
	printf("\nEnter value of N to compare first N characters\nN = ");
	scanf("%d",&n);
	printf("\n");
	

	if(size-1<n || size1-1<n)
	{
		printf("\nGiven strigns are not equal");
		flag=1;
	}
	
	else
	{

		for(i=0; i<n; i++)
		{
			if(*(p+i)==*(q+i)||*(p+i)+32 == *(q+i) || *(p+i)-32 == *(q+i))
			{
				continue;
			}
			else
			{
				printf("\n\nGiven strings are not equal\n");
				flag=1;
				break;
			}
		}
		
	}
	if(flag==0)
	{
		printf("\n\nGiven strings are equal\n");
	}
free(p);
free(q);
	getch();
}
Please enter a String
sangamner

First string is
sangamner

Please enter second String
sangam

Second string is
sangam
Enter value of N to compare first N characters
N = 5



Given strings are equal


########################################################################################################

47. Write a C program to find the sum of contiguous subarray within a one dimensional array of numbers which has the largest sum (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,cur_sum=0,max_sum=0;

	int* p;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}

	//to find sum
	for(*i=0; *i<*n; (*i)++)
	{
		cur_sum += *(p+*i);
		if(cur_sum>max_sum)
		{
			max_sum = cur_sum;
		}
		if(cur_sum<max_sum)
		{
			cur_sum=0;
		}
	}

	printf("\nMaximum sum contiguous subarray is %d",max_sum);

	getch();
}


Please enter size of an Array
5

Please enter array Elements
5
-4
-2
5
-1

Given Array is
5 -4 -2 5 -1
Maximum sum contiguous subarray is 5
########################################################################################################

48. Write a C program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0
otherwise return difference between first mismatch character. (Using Dynamic Memory Allocation)
Eg:
Input String1: india Is mY cOuntry
Input String2: INDIA is MY countrY
Output: Both strings are equal.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,size1,flag=0;
	char ch,ch1;

	char* q = (char*) malloc(sizeof(char));
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

	printf("\nFirst string is\n");
	printf("%s",p);


	///to take second string
	*q = '\0';
	size1 = 1;
	printf("\n\nPlease enter second String\n");
	i=0;
	do
	{
		scanf("%c", &ch1);
		if(ch1 != '\n')
		{
			size1++;
			q = (char*)realloc(q, size1*sizeof(char));
			*(q+i) = ch1;
			*(q+i+1) = '\0';
			i++;
			
		}
	}
	while(ch1 != '\n');
	
	printf("\nSecond string is\n");
	printf("%s",q);

	if(size1!=size)
	{
		printf("\nGiven strings are not equal");
		flag=1;
	}
	else
	{
		for(i=0; i<size; i++)
		{
			if(*(p+i)==*(q+i)||*(p+i)+32 == *(q+i) || *(p+i)-32 == *(q+i))
			{
				continue;
			}
			else
			{
				printf("\n\nGiven strings are not equal\n");
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("\n\nGiven strings are equal\n");
	}
free(p);
free(q);
	getch();
}

Please enter a String
INDIA is my COUNTRY

First string is
INDIA is my COUNTRY

Please enter second String
india IS MY country

Second string is
india IS MY country

Given strings are equal

########################################################################################################

49. Write a C program which accept string from user and then reverse the string till first N characters without taking another string. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Input of N: 8
Output : m si aidnIy country
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,size,n1,n2,temp,count=0;
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
			if(count==n1)
			{
				n2=i;
				break;
			}
			i++;
		}
		if(count==n1){
			break;
		}
	}
	n1=n2;
	i=0;
	while(i<=n1)
	{
		if(*(p+i)==' ')
		{
			i++;
			continue;
		}
		if(*(p+n1)== ' ')
		{
			n1--;
			continue;
		}

		temp = *(p+i);
		*(p+i) = *(p+n1);
		*(p+n1) = temp;
		i++;
		n1--;

	}
	printf("\n");
	printf("%s",p);

	free(p);
	getch();
}

Please enter a String
India is my country

Given String is
India is my country
Required stringis

Please enter range to riverse string

N1 = 8

msiai dn Iy country

########################################################################################################

50. Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country
Input of N1: 3
Input of N1: 9

Output String: Indm si aicountry
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

Please enter a String
India is my country

Given String is
India is my country
Required stringis

Please enter range to riverse string

N1 = 3

N2 = 9

Indms ia iy country

########################################################################################################

51. Write a C program to find the maximum sum of a subsequent numbers in given array. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,cur_sum=0,max_sum=0,n,index;

	int* p = NULL;
	printf("Enter size of an array\n");
	scanf("%d",&n);


	printf("\nEnter array elements\n");
	p = (int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}
	for(i=0; i<n-1; i++)
	{
		cur_sum = *(p+i)+*(p+i+1);
		if(max_sum<cur_sum)
		{
			max_sum = cur_sum;
			index=i;
		}
	}

	printf("\nMaximum sum subsequent elements is %d",max_sum);
	free(p);

	getch();
}
Enter size of an array
5

Enter array elements
9 1 2 3 4 5

Maximum sum subsequent elements is 10


########################################################################################################

52. Write a C program which accept string from user and reverse words from that string which are of even length. (Using Dynamic Memory Allocation)
Eg:
Input String: India is my country. I love my country.
Output String: India si ym .yrtnuoc I evol ym . Yrtnuoc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,j=0,size,flag,count=0;
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
	printf("\n\nReversed even only words in string\n\n");
	i=0;
	k=0;
	
	while(*(p+i)!='\0')
	{
		while(*(p+i)==' '&&*(p+i)!='\0')
		{
			i++;
		}
		k=i;
		count=0;
		while(*(p+i)!= ' '&& *(p+i)!='\0')
		{
			i++;
			count++;
		}
		j=i-1;
		if(count%2==0)
		{
			while(j>=k)
			{
				printf("%c",*(p+j));
				j--;
			}
		}
		else
		{
			while(k<=j)
			{
				printf("%c",*(p+k));
				k++;
			}
		}
		if(*(p+i)==' ')
		{
			printf(" ");
		}
	}


	free(p);
	getch();
}


Please enter a String
India is my country. I love my country.

Given String is
India is my country. I love my country.

Reversed even only words in string

India si ym .yrtnuoc I evol ym .yrtnuoc

########################################################################################################

53. Write a C program which accept string from user and check whether string is palindrome or not. (Using Dynamic Memory Allocation)
Eg:
Input String: level
Output String: String is palindrome.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,temp,flag=0;
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

	//to find given string palindrome or not

	i=0;
	k=size-2;
	flag=0;
	while(i<=k)
	{
		if(*(p+i)!=*(p+k))
		{
			flag=1;
			printf("\nGiven string is not Palindrome\n");
			break;
		}
		i++;
		k--;
	}

	if(flag==0)
	{
		printf("\nGiven string is palindrome");
	}
	

	free(p);
	
	getch();
}

Please enter a String
IndiaidnI

Given String is
IndiaidnI
Given string is palindrome


########################################################################################################

54. An array consist of Integers. Write a C program to count the number of elements less than, greater than and equal to zero. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{

	int i, equal,greater,less,n;

	int* p = NULL;

	
	printf("Enter size of array\n");
	scanf("%d",&n);

	p = (int*)malloc(sizeof(int)*n);

	printf("\nEnter array elements\n");
	for(i= 0;i<n; i++)
	   {
		   scanf("%d",p+i);
	   }
	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d",*(p+i));
	}

	//to find numbers equal less greater than zero

	equal=0;
	greater=0;
	less=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)==0)
		{
			equal++;
		}
		else if(*(p+i)<0)
		{
			less++;
		}
		else
		{
			greater++;
		}
	}

	printf("\n\nNumbers less than 0 = %d\nNumbers equal to 0 = %d\nNumbers greater than 0 = %d",less,equal,greater);




	free(p);
	getch();
}
Enter size of array
5

Enter array elements
0 1 -2 3 4

Given array is
01-234

Numbers less than 0 = 1
Numbers equal to 0 = 1
Numbers greater than 0 = 3



########################################################################################################

55. Write a C program to count number of alphabates, spaces and words in given string. (Using Dynamic Memory Allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,k=0,size,flag=0,alphabates=0,spaces=0,words=0;
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

	//to find spaces and alphabates
	for(i=0; i<size; i++)
	{
		if(*(p+i)<='z' && *(p+i)>='A')
		{
			alphabates++;
		}
		else if(*(p+i)==' ')
		{
			spaces++;
		}
	}


	i=0;

	while(*(p+i)!='\0')
	{
		
		while(*(p+i)==' ')
		{
			i++;
		}
		flag++;
		while(*(p+i)!=' ' && *(p+i)!='\0')
		{
			i++;
		}
			
	}
	printf("\nNumber of words = %d\nNumber of spaces = %d\nNumber of alphabates = %d",flag,spaces,alphabates);
	


	free(p);
	
	getch();
}
Please enter a String
India is my country i900

Given String is
India is my country i900
Number of words = 5
Number of spaces = 4
Number of alphabates = 17

########################################################################################################
