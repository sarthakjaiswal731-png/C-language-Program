#include<stdio.h>
#include<conio.h>
void main()
{
	int n , i;
	clrscr();
	printf("Enter the no.:");
	scanf("%d",&n);
	printf("\n------Table -----" ,n);
	for (i=1;i<=10;i++)
	{
		printf("\n%d x %d =%d\n" , n,i,n*i);

	}

	getch();

}
