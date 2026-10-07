#include<stdio.h>
#include<conio.h>
void main()
{
	float principal,rate, time, si;
	clrscr();
	printf("Enter the value ofprincipal");
	scanf("%f",&principal);
	printf("Enter the value of rate");
	scanf("%f",&rate);
	printf("Enter time");
	scanf("%f",&time);
	si = (principal*rate*time)/100;
	printf("Simple intrest %f",si);
	getch();
}

