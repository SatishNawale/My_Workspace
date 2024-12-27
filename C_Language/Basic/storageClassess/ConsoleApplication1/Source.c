#include<stdio.h>
#include<conio.h>

int a=10;
int b=20;

static int x = 50;


void doLike()
{
	static int like = 0;
	printf("%d ",like);
	like++;

}
void add();
void mul();
void sub();

void main()
{
	int x[4] = {1,2,3};

	printf("%d %d %D",x[3],x[2],x[1]);

	printf("\n");

	printf(3 + "goodbye");

	printf("\n");

	printf("\n");

	doLike();
	doLike();
	doLike();
	doLike();
	doLike();


	add();
	mul();
	sub();


	

	


	getch();
}