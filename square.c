#include<stdio.h>
#include<conio.h>

void main() {
	 
	int userInput=0, square=0;
	printf("Enter the number for square:\n");
	scanf("%d", &userInput);
	
	square=userInput*userInput;
	
	printf("The square of %d is: %d", userInput, square);
}