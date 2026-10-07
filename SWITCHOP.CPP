#include<stdio.h>
#include<conio.h>
void main()
{
	float a=20, b=5 ;
	int choice;
	clrscr();
	printf(" Which operation do you want");
	printf("\nSum ke liye 1 dbaye \n Difference ke liye 2 dbaye \n product ke liye 3 dbaye \n divide ke liye 4 dbaye");
	scanf("%d" , &choice);
	switch (choice)
	{
	case 1:
	{      printf("Sum = %.2f" , a+b);
	}
	break ;
	case  2:
	{      printf("Difference = %.2f" , a-b);
	} break;
	case 3:
	{      printf("Product = %.2f" , a*b);

	} break;
	case 4:
	{      printf("Divide = %.2f" , a/b);
	}
	 break;
	 default :
	 {printf("Invalid operation");
	 }
	 }
	 getch();
	 }

