#include<stdio.h>
#include<conio.h>

void main() {
	int userInput, dearnessAllowance, rentAllowance, grossSalary;
	printf("Enter basic salary:\n");
	scanf("%d", &userInput);
	printf("Enter Dearness Allowance:\n");
	scanf("%d", &dearnessAllowance);
	printf("Enter Rent Allowance;\n");
	scanf("%d", &rentAllowance);
	
	grossSalary = userInput+dearnessAllowance+rentAllowance;
	
	printf("Gross salary=%d\n", grossSalary);
}