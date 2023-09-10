#include<stdio.h>
#include<conio.h>

void main()
{
	int numberOne=0, numberTwo=0;
	printf("Enter two integers:");
	scanf("%d %d", &numberOne, &numberTwo);
	
	if(numberOne<numberTwo)
	{
		printf("Number one is less than number two");
	}
	else if(numberOne>numberTwo)
	{
		printf("Number one is grater than number two");
	}
	else
	{
		printf("Number one is equal to number two");
	}
}