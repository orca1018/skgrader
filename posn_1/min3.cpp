#include<stdio.h>

int main() {
	long a, b, c;

	scanf("%li %li %li", &a, &b, &c);

	if (a <= b && a <= c ) {
		printf("%li", a);
	}
	else if (b <= a && b <= c ) {
		printf("%li", b);
	}
	else if (c <= a && c <= b ) {
		printf("%li", c);
	}
	
	return 0;
}