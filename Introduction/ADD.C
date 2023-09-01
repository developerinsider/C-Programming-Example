/*******************************************
Statement - Addition of two number
Programmer - Vineet Choudhary
Written For - https://developerinsider.co
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter two numbers to add\n");
	scanf("%d%d",&a,&b);
	c = a + b;
	printf("Sum of entered numbers = %d\n",c);
	getch();
}