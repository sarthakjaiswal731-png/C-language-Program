#include<stdio.h>
#include<conio.h>
void main()
{
	int A , B ,temp;
	clrscr();
	printf("Before swaping Enter the A");
	scanf("%d" ,&A);
	printf("Enter the value ofB");
	scanf("%d" , &B);
	temp=A;
	A=B;
	B=temp;
	printf("\nAfter swapping A=%d",A);
	printf("\nB=%d",B);
	getch();
}