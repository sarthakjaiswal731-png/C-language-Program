#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter a value:");
	scanf("%d",&a);
	if (a%2==0)
		{
		printf("A is even no.");
		}
	else
		{
		printf("A is odd no.");
		}
		getch();
	}