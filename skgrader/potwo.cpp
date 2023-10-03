#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	if(n%4 == 0) {
		printf("6");
	}
	else if(n%4 == 1) {
		printf("2");
	}
	else if(n%4 == 2) {
		printf("4");
	}
	else if(n%4 == 3) {
		printf("8");
	}
	
	return 0;
}