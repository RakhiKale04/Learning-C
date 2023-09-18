#include<stdio.h>
#include<conio.h>
void main()
{
	int divisor, dividend, quotient, remainder;
	printf("Enter the divisor:");
	scanf("%d", &divisor);
	printf("Enter the dividend:");
	scanf("%d", &dividend);
	
	quotient=divisor/dividend;
	remainder=divisor%dividend;
	
	printf("The quotient is: %d\n The remainder is: %d\n", quotient, remainder);
}