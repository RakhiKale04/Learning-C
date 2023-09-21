#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
	int userInput, squareRoot;
	printf("Enter the number for square root:\n");
	scanf("%d", &userInput);
	squareRoot=sqrt(userInput);
	printf("The square root of %d is: %d", userInput, squareRoot);
}