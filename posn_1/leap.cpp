#include<stdio.h>
#include<assert.h>

int main()
{
	int r;
	
	scanf("%d", &r);
	assert(r <= 8000);
	assert(r >= 1);
	if(r % 4 == 0) {
		if(r % 400 == 0) {
			printf("TAK");
		}
		else if(r % 100 == 0) {
			printf("NIE");
		}
		else{
			printf("TAK");
		}
	}
	else {
		printf("NIE");
	}
	
	return 0;
}