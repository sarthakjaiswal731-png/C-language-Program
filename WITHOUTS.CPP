#include<stdio.h>
#include<conio.h>
void main()
{
	int a , b ;
	clrscr();
	printf("Before swapping");
	printf("Enter the value of A=");
	scanf("%d" ,&a);
	printf("\nEnter the value of B=");
	scanf("%d" , &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swappind a=%d , b=%d",a,b);

		getch();
}


