#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	clrscr();
	printf("Welcome to my desktop");
	printf("\n*Choose your language");
	printf("\n*To continue in Eng press1");
	printf("\n*Hindi me baat krne ke liye 2dbaye");
	printf("\n*Bhojpuri me btiyaye khatir 3dbayii");
	printf("\n*Kem chee me baatiyane ke liye 4dbayein");
	scanf("%d",& choice);
	switch(choice)
	{
		case 1:
		{
		printf("\nHow can I help you sir ");
		}
		break;
		case 2:
		{
		printf("\n Namaste mai apki kis prakar sahayta kr skti hoon");
		}
		break;
		case 3:

		{
			printf("\n Ram Ram Kaisan madad chahi btawa hmke");
			}
		break;
		case 4:
		{
			printf("\n Mai gujrati nhi janta bro sorry");
			}
			break;
		default :
		{
			printf("\n1se4 tk hi dbane the sir ji");
		  }

		  }
			getch();


	}