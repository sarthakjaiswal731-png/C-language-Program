#include<stdio.h>
#include<conio.h>
void main()
{
	float radius, area;
	clrscr();
	printf("Enter radius");
	scanf("%f",& radius);
	area = (3.14*radius*radius);
	printf("area= %f",area);
	getch();
}