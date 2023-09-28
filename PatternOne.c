#include<stdio.h>
#include<conio.h>

void main() {
	int i=0,userInput=0,j=1;
	printf("Enter the number: \n");
	scanf("%d", &userInput);
	
	for(i=1;j<=userInput;i++)
	{
		if(i<=j)
		{
			printf("%d ", i);
		}
		else {
			i=0;
			j++;
			printf("\n");
		}
		
		//printf("i: %d ,j: %d ,N: %d " ,i,j,userInput);
	}
}