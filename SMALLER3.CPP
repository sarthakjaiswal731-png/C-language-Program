#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int no1 , no2 , no3;
	printf("Enter first number:-");
	scanf("%d" ,&no1);
	printf("\nEnter second number:-");
	scanf("%d", &no2);
	printf("\nEnter third number :-");
	scanf("%d", &no3);
	if (no1<no2)
	{
		if(no1<no3)
		{
		printf("First no. is smaller");
		}
		 else
		 {
		 printf("Third no is smaller");
		 }
		 }
		 else

		  if(no2<no3)
		  {
		  printf("Second no. is smaller");
		  }
		  else
		  {
		  printf("Third no is smaller");
		  }

		  getch();
}