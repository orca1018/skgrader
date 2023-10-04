#include<stdio.h>

int main()
{
	int num, numP;
	int col, space, star;

	scanf("%d", &num);
	numP = num+1;
	
	for (col=1; col<=num; col++) {
		printf(" ");
		for (space=num-col; space>=0;space--) {
			printf(" ");
		}
		for (star=1; star<=2*col-1; star++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (col=1; col<=numP; col++) {
		for (space=numP-col; space>=0;space--) {
			printf(" ");
		}
		for (star=1; star<=2*col-1; star++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
