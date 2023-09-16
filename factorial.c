#include<stdio.h>
#include<conio.h>

void main()
{
	int userInput=0,i=1,factorial=1;
	printf("Enter integer for factorial:");
	scanf("%d", &userInput);
	for(i=1;i<=userInput;i++)
	{
		printf("factorial = %d into %d\n",factorial, i);
		factorial *= i;
	}
	printf("user input: %d \nfactorial: %d \ni: %d ", userInput, factorial, i);
}