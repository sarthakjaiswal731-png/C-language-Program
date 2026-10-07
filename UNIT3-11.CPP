#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("Enter a letter");
	scanf("%c",&a);
	if(a=='a'|| a=='e'|| a=='i'||a=='o'||a=='u')
	{
		printf("Letter is vowel");
	}
	else
	{
		printf("Letter is consonant");
	}
	getch();
}