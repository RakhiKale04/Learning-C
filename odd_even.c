#include<stdio.h>
#include<conio.h>

void main() {
	int userInput;
	printf("Enter the integer to check:\n");
	scanf("%d", &userInput);
	
	if(userInput % 2 == 0)
		printf("%d is even\n", userInput);
	else
		printf("%d is odd\n", userInput);
}