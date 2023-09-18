#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, i, hcf;
	printf("Enter two integers for hcf");
	scanf("%d %d", &num1, &num2);
	
	for(i=1;i<=num1 && i<=num2; i++)
	{
		if(num1%i==0 && num2%i==00)
			hcf=i;
	}
	printf("HCF is: %d", hcf);
}