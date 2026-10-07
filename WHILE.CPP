#include<stdio.h>
#include<conio.h>
void main()
{
	int balance , amount;
	clrscr();
	printf("Enter your balance");
	scanf("%d",&balance);
	while (balance>=amount)
	{
		balance=balance-amount;
		printf("Withdrawn rs:%d | Balance =rs.%d\n", amount , balance);
	}
	printf("\nNot enough balance to withdrawn more");
	printf("\nFinal balance = rs.%d",balance);
	getch();
}