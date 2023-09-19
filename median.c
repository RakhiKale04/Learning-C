#include<stdio.h>
#include<conio.h>

void main(){
	int userInputArraySize=0;
	int userInputArray[100];
	int median=0, i=0;
	
	printf("Enter the count of elements:");
	scanf("%d", &userInputArraySize);
	
	printf("Enter %d elements:\n",userInputArraySize);
	for(i=0;i<userInputArraySize;i++) {
		scanf("%d", &userInputArray[i]);
	}
	median=(userInputArraySize+1)/2;
	printf("The median is:%d", userInputArray[median-1]);
}