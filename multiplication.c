#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2, sum;
	printf("Enter two integers:");
	scanf("%d%d", &num1, &num2);
	
	sum=num1*num2;
	printf("Sum:%d", sum);
	getch();
}