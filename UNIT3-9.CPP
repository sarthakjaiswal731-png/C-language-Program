#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter a value");
	scanf("%d",&a);
	printf("Enter b value");
	scanf("%d",&b);
	if (a%b==0)
		{
		printf("a is divisible by b");
		}
	else
		{
		printf("a is not divisible by b");
		}
		getch();
	}