#include<sdtdio.h>
#include<conio.h>

int main() {
	int principle, numOfYears;
	float rateOfInterest, simpleInterest;
	printf("Enter the principle amount:\n");
	scanf("%d", &principle);
	printf("Enter the number of years:\n");
	scanf("%d", &numOfYears);
	printf("Enter the rate of interest:\n");
	scanf("%f", &rateOfInterest);
	
	simpleInterest = (principle*numOfYears*rateOfInterest)/100
	
	printf("Simple Interest:\n", simpleInterest);
	return 0;
}