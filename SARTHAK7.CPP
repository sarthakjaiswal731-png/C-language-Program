#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sub,mul ;
	float div ;
	clrscr();

	printf("Enter the value of A");
	scanf("%d",&a);
	printf("Enter the value of B");
	scanf("%d",&b);
	sum = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	printf("\nsum=a+b: %d",sum);
	printf("\nsub=a-b: %d",sub);
	printf("\nmul=a*b: %d",mul);
	printf("\ndiv=a/b: %f",div);

	getch();
}