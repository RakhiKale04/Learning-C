#include<stdio.h>
#include<conio.h>

void main() {
	int lines=5;
	for(i=1; i<=5; i++) {
		for(j=1; j<=i; j++) {
			printf("%d", j+1);
		}
		printf("\n");
	}
		
}