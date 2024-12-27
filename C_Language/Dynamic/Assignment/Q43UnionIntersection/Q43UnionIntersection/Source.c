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

	//printf("\nIntersection is\n");
	//for(i=0; i<k; i++)
	//{
		//printf("%d\t",*(inter+i));
	//}
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