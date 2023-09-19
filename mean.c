#include<stdio.h>
#include<conio.h>

void main() {
	
	int userInputArraySize=0;
    int userInputArray[100];
	int sum=0, mean=0, i;
	
	printf("Enter the count of integers for mean:\n");
	scanf("%d", &userInputArraySize);
	
	printf("Enter the integers:\n");
	for(i=0;i<userInputArraySize;i++){
		scanf("%d", &userInputArray[i]);
	}
	for(i=0;i<userInputArraySize;i++) {
		sum+=userInputArray[i];
	}
	
	printf("Mean is %d", (sum)/userInputArraySize);
}
