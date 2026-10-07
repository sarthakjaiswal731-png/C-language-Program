#include<stdio.h>
#include<conio.h>
void main()
{
	int number , square , cube;
	clrscr();
	printf("Enter the number");
	scanf("%d", &number);
	square= number*number;
	cube=number*number*number;
	printf("square=%d" ,square);
	printf("\ncube=%d" , cube);
	getch();
}