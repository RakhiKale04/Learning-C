#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2, ans;
	printf("Enter two integers:");
	scanf("%d %d", &num1, &num2);
	
	ans=num1-num2;
	printf("Answer is: %d", ans);
	getch();
}