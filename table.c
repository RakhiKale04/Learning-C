#include<stdio.h>
#include<conio.h>

void main() {
	int userInput=0, i=0;
	printf("Enter the number for table:");
	scanf("%d", &userInput);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n", userInput, i, userInput*i);
	}
}